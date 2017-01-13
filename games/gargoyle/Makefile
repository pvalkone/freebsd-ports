# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		gargoyle
PORTVERSION=		2011.1.20161017
CATEGORIES=		games

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Graphical player for Interactive Fiction games

LICENSE=		GPLv1

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

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
		${WRKSRC}/garglk/launchgtk.c

do-build:
	cd ${WRKSRC} && \
	USESDL=no \
	MAKE_GEAS=no \
	GARGLKINI=${LOCALBASE}/etc/garglk.ini \
	jam install

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin/garglk
.for f in advsys agility alan2 alan3 bocfel frotz gargoyle git glulxe \
	hugo jacl level9 magnetic nitfol scare scott tadsr
	${INSTALL_PROGRAM} ${WRKSRC}/build/dist/${f} ${STAGEDIR}${PREFIX}/bin/garglk
.endfor
	${LN} -s garglk/gargoyle ${STAGEDIR}${PREFIX}/bin/gargoyle
	${INSTALL_LIB} ${WRKSRC}/build/dist/libgarglk.so ${STAGEDIR}${PREFIX}/lib	
	${INSTALL_DATA} ${WRKSRC}/garglk/garglk.ini ${STAGEDIR}${PREFIX}/etc/garglk.ini.sample

.include <bsd.port.mk>
