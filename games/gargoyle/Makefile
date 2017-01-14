# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		gargoyle
PORTVERSION=		2011.1.20161017
PORTREVISION=		2
CATEGORIES=		games

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Graphical player for Interactive Fiction games

LICENSE=		GPLv2

BUILD_DEPENDS=		jam:devel/jam \
			pkg-config:devel/pkgconf

LIB_DEPENDS=		libfontconfig.so:x11-fonts/fontconfig \
			libfreetype.so:print/freetype2 \
			libpng16.so:graphics/png

USE_GITHUB=		yes
GH_ACCOUNT=		garglk
GH_PROJECT=		garglk
GH_TAGNAME=		e3466aa

USE_GCC=		yes
USE_GNOME=		gtk20 atk glib20 pango cairo gdkpixbuf2
USES=			gettext-runtime jpeg

OPTIONS_DEFINE=		SDL ADVSYS AGILITY ALAN2 ALAN3 BOCFEL FROTZ \
			GIT GLULXE HUGO JACL LEVEL9 MAGNETIC NITFOL \
			SCARE SCOTT
OPTIONS_DEFAULT=	SDL ADVSYS AGILITY ALAN2 ALAN3 BOCFEL FROTZ \
			GIT GLULXE HUGO JACL LEVEL9 MAGNETIC NITFOL \
			SCARE SCOTT
OPTIONS_SUB=		yes

SDL_DESC=		Enable SDL support
SDL_VARS=		USESDL=yes
SDL_VARS_OFF=		USESDL=no
SDL_LIB_DEPENDS=	libsmpeg.so:multimedia/smpeg \
			libvorbisfile.so:audio/libvorbis
SDL_USE=		SDL=sdl,mixer,sound

ADVSYS_DESC=		Enable AdvSys interpreter
ADVSYS_VARS=		MAKE_ADVSYS=yes
ADVSYS_VARS_OFF=	MAKE_ADVSYS=no
AGILITY_DESC=		Enable AGiliTy interpreter
AGILITY_VARS=		MAKE_AGILITY=yes
AGILITY_VARS_OFF=	MAKE_AGILITY=no
ALAN2_DESC=		Enable Alan2 interpreter
ALAN2_VARS=		MAKE_ALAN2=yes
ALAN2_VARS_OFF=		MAKE_ALAN2=no
ALAN3_DESC=		Enable Alan3 interpreter
ALAN3_VARS=		MAKE_ALAN3=yes
ALAN3_VARS_OFF=		MAKE_ALAN3=no
BOCFEL_DESC=		Enable Bocfel interpreter
BOCFEL_VARS=		MAKE_BOCFEL=yes
BOCFEL_VARS_OFF=	MAKE_BOCFEL=no
FROTZ_DESC=		Enable Frotz interpreter
FROTZ_VARS=		MAKE_FROTZ=yes
FROTZ_VARS_OFF=		MAKE_FROTZ=no
GIT_DESC=		Enable Git interpreter
GIT_VARS=		MAKE_GIT=yes
GIT_VARS_OFF=		MAKE_GIT=no
GLULXE_DESC=		Enable Glulxe interpreter
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
NITFOL_DESC=		Enable Nitfol interpreter
NITFOL_VARS=		MAKE_NITFOL=yes
NITFOL_VARS_OFF=	MAKE_NITFOL=no
SCARE_DESC=		Enable SCARE interpreter
SCARE_VARS=		MAKE_SCARE=yes
SCARE_VARS_OFF=		MAKE_SCARE=no
SCOTT_DESC=		Enable Scott Adams Grand Adventures interpreter
SCOTT_VARS=		MAKE_SCOTT=yes
SCOTT_VARS_OFF=		MAKE_SCOTT=no

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
		${WRKSRC}/garglk/launchgtk.c

do-build:
	cd ${WRKSRC} && \
	USESDL=${USESDL} \
	MAKE_ADVSYS=${MAKE_ADVSYS} \
	MAKE_AGILITY=${MAKE_AGILITY} \
	MAKE_ALAN2=${MAKE_ALAN2} \
	MAKE_ALAN3=${MAKE_ALAN3} \
	MAKE_BOCFEL=${MAKE_BOCFEL} \
	MAKE_FROTZ=${MAKE_FROTZ} \
	MAKE_GEAS=no \
	MAKE_GIT=${MAKE_GIT} \
	MAKE_GLULXE=${MAKE_GLULXE} \
	MAKE_HUGO=${MAKE_HUGO} \
	MAKE_JACL=${MAKE_JACL} \
	MAKE_LEVEL9=${MAKE_LEVEL9} \
	MAKE_MAGNETIC=${MAKE_MAGNETIC} \
	MAKE_NITFOL=${MAKE_NITFOL} \
	MAKE_SCARE=${MAKE_SCARE} \
	MAKE_SCOTT=${MAKE_SCOTT} \
	GARGLKINI=${LOCALBASE}/etc/garglk.ini \
	jam install

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin/garglk
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/gargoyle ${STAGEDIR}${PREFIX}/bin/garglk
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/tadsr ${STAGEDIR}${PREFIX}/bin/garglk
.if ${PORT_OPTIONS:MADVSYS}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/advsys ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MAGILITY}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/agility ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MALAN2}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/alan2 ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MALAN3}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/alan3 ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MBOCFEL}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/bocfel ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MFROTZ}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/frotz ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MGIT}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/git ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MGLULXE}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/glulxe ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MHUGO}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/hugo ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MJACL}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/jacl ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MLEVEL9}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/level9 ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MMAGNETIC}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/magnetic ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MNITFOL}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/nitfol ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MSCARE}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/scare ${STAGEDIR}${PREFIX}/bin/garglk
.endif
.if ${PORT_OPTIONS:MSCOTT}
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/scott ${STAGEDIR}${PREFIX}/bin/garglk
.endif
	${LN} -s garglk/gargoyle ${STAGEDIR}${PREFIX}/bin/gargoyle
	${INSTALL_LIB} ${WRKSRC}/build/dist/libgarglk.so ${STAGEDIR}${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/garglk/garglk.ini ${STAGEDIR}${PREFIX}/etc/garglk.ini.sample

.include <bsd.port.mk>
