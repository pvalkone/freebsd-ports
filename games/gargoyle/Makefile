# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		gargoyle
PORTVERSION=		2011.1.20180417
CATEGORIES=		games

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Graphical player for Interactive Fiction games

LICENSE=		GPLv2

BUILD_DEPENDS=		jam:devel/jam \
			pkg-config:devel/pkgconf
LIB_DEPENDS=		libfontconfig.so:x11-fonts/fontconfig \
			libfreetype.so:print/freetype2 \
			libpng16.so:graphics/png

USES=			gettext-runtime jpeg

USE_GITHUB=		yes
GH_ACCOUNT=		garglk
GH_PROJECT=		garglk
GH_TAGNAME=		b4a966f

USE_GNOME=		gtk20 atk glib20 pango cairo gdkpixbuf2

OPTIONS_DEFINE=		SDL ADVSYS AGILITY ALAN2 ALAN3 BOCFEL FROTZ \
			GEAS GIT GLULXE HUGO JACL LEVEL9 MAGNETIC \
			NITFOL SCARE SCOTT
OPTIONS_DEFAULT=	SDL ADVSYS AGILITY ALAN2 ALAN3 BOCFEL FROTZ \
			GEAS GIT GLULXE HUGO JACL LEVEL9 MAGNETIC \
			NITFOL SCARE SCOTT
OPTIONS_SUB=		yes

SDL_DESC=		Enable SDL sound support
SDL_VARS=		USESDL=yes
SDL_VARS_OFF=		USESDL=no
SDL_LIB_DEPENDS=	libsmpeg.so:multimedia/smpeg \
			libvorbisfile.so:audio/libvorbis
SDL_USE=		SDL=sdl,mixer,sound

ADVSYS_DESC=		Enable AdvSys interpreter
ADVSYS_VARS=		MAKE_ADVSYS=yes
ADVSYS_VARS_OFF=	MAKE_ADVSYS=no
AGILITY_DESC=		Enable AGiliTy interpreter (AGT)
AGILITY_VARS=		MAKE_AGILITY=yes
AGILITY_VARS_OFF=	MAKE_AGILITY=no
ALAN2_DESC=		Enable Alan v2 interpreter
ALAN2_VARS=		MAKE_ALAN2=yes
ALAN2_VARS_OFF=		MAKE_ALAN2=no
ALAN3_DESC=		Enable Alan v3 interpreter
ALAN3_VARS=		MAKE_ALAN3=yes
ALAN3_VARS_OFF=		MAKE_ALAN3=no
BOCFEL_DESC=		Enable Bocfel interpreter (Z-machine)
BOCFEL_VARS=		MAKE_BOCFEL=yes
BOCFEL_VARS_OFF=	MAKE_BOCFEL=no
FROTZ_DESC=		Enable Frotz interpreter (Z-machine)
FROTZ_VARS=		MAKE_FROTZ=yes
FROTZ_VARS_OFF=		MAKE_FROTZ=no
GEAS_DESC=		Enable Geas interpreter (Quest)
GEAS_VARS=		MAKE_GEAS=yes
GEAS_VARS_OFF=		MAKE_GEAS=no
GIT_DESC=		Enable Git interpreter (Glulx)
GIT_VARS=		MAKE_GIT=yes
GIT_VARS_OFF=		MAKE_GIT=no
GLULXE_DESC=		Enable Glulxe interpreter (Glulx)
GLULXE_VARS=		MAKE_GLULXE=yes
GLULXE_VARS_OFF=	MAKE_GLULXE=no
HUGO_DESC=		Enable HUGO interpreter
HUGO_VARS=		MAKE_HUGO=yes
HUGO_VARS_OFF=		MAKE_HUGO=no
JACL_DESC=		Enable JACL interpreter
JACL_VARS=		MAKE_JACL=yes
JACL_VARS_OFF=		MAKE_JACL=no
LEVEL9_DESC=		Enable Level 9 interpreter
LEVEL9_VARS=		MAKE_LEVEL9=yes
LEVEL9_VARS_OFF=	MAKE_LEVEL9=no
MAGNETIC_DESC=		Enable Magnetic Scrolls interpreter
MAGNETIC_VARS=		MAKE_MAGNETIC=yes
MAGNETIC_VARS_OFF=	MAKE_MAGNETIC=no
NITFOL_DESC=		Enable Nitfol interpreter (Z-machine)
NITFOL_VARS=		MAKE_NITFOL=yes
NITFOL_VARS_OFF=	MAKE_NITFOL=no
SCARE_DESC=		Enable SCARE interpreter (ADRIFT)
SCARE_VARS=		MAKE_SCARE=yes
SCARE_VARS_OFF=		MAKE_SCARE=no
SCOTT_DESC=		Enable Scott Adams Grand Adventures interpreter
SCOTT_VARS=		MAKE_SCOTT=yes
SCOTT_VARS_OFF=		MAKE_SCOTT=no

JAM_ENV=	CC=clang \
		CXX=clang++ \
		USESDL=${USESDL} \
		MAKE_ADVSYS=${MAKE_ADVSYS} \
		MAKE_AGILITY=${MAKE_AGILITY} \
		MAKE_ALAN2=${MAKE_ALAN2} \
		MAKE_ALAN3=${MAKE_ALAN3} \
		MAKE_BOCFEL=${MAKE_BOCFEL} \
		MAKE_FROTZ=${MAKE_FROTZ} \
		MAKE_GEAS=${MAKE_GEAS} \
		MAKE_GIT=${MAKE_GIT} \
		MAKE_GLULXE=${MAKE_GLULXE} \
		MAKE_HUGO=${MAKE_HUGO} \
		MAKE_JACL=${MAKE_JACL} \
		MAKE_LEVEL9=${MAKE_LEVEL9} \
		MAKE_MAGNETIC=${MAKE_MAGNETIC} \
		MAKE_NITFOL=${MAKE_NITFOL} \
		MAKE_SCARE=${MAKE_SCARE} \
		MAKE_SCOTT=${MAKE_SCOTT} \
		GARGLKINI=${LOCALBASE}/etc/garglk.ini
JAM_ARGS=	-j${MAKE_JOBS_NUMBER}

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
		${WRKSRC}/garglk/launchgtk.c

do-build:
	 @(cd ${BUILD_WRKSRC}; ${SETENV} ${JAM_ENV} jam ${JAM_ARGS} install)

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin/garglk
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/gargoyle ${STAGEDIR}${PREFIX}/bin/garglk
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/tadsr ${STAGEDIR}${PREFIX}/bin/garglk

do-install-ADVSYS-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/advsys ${STAGEDIR}${PREFIX}/bin/garglk

do-install-AGILITY-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/agility ${STAGEDIR}${PREFIX}/bin/garglk

do-install-ALAN2-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/alan2 ${STAGEDIR}${PREFIX}/bin/garglk

do-install-ALAN3-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/alan3 ${STAGEDIR}${PREFIX}/bin/garglk

do-install-BOCFEL-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/bocfel ${STAGEDIR}${PREFIX}/bin/garglk

do-install-FROTZ-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/frotz ${STAGEDIR}${PREFIX}/bin/garglk

do-install-GEAS-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/geas ${STAGEDIR}${PREFIX}/bin/garglk

do-install-GIT-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/git ${STAGEDIR}${PREFIX}/bin/garglk

do-install-GLULXE-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/glulxe ${STAGEDIR}${PREFIX}/bin/garglk

do-install-HUGO-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/hugo ${STAGEDIR}${PREFIX}/bin/garglk

do-install-JACL-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/jacl ${STAGEDIR}${PREFIX}/bin/garglk

do-install-LEVEL9-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/level9 ${STAGEDIR}${PREFIX}/bin/garglk

do-install-MAGNETIC-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/magnetic ${STAGEDIR}${PREFIX}/bin/garglk

do-install-NITFOL-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/nitfol ${STAGEDIR}${PREFIX}/bin/garglk

do-install-SCARE-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/scare ${STAGEDIR}${PREFIX}/bin/garglk

do-install-SCOTT-on:
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/scott ${STAGEDIR}${PREFIX}/bin/garglk

	${LN} -s garglk/gargoyle ${STAGEDIR}${PREFIX}/bin/gargoyle
	${INSTALL_LIB} ${WRKSRC}/build/dist/libgarglk.so ${STAGEDIR}${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/garglk/garglk.ini ${STAGEDIR}${PREFIX}/etc/garglk.ini.sample

.include <bsd.port.mk>
