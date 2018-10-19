# $FreeBSD$

PORTNAME=		sterm-scrollback-base16
DISTVERSION=		0.8.1
CATEGORIES=		x11
MASTER_SITES=		http://dl.suckless.org/st/
DISTNAME=		st-${PORTVERSION}

PATCH_SITES=		http://st.suckless.org/patches/
PATCHFILES=		scrollback/st-scrollback-0.8.diff
PATCH_DIST_STRIP=	-p1

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Simple X terminal

LICENSE=		MIT
LICENSE_FILE=		${WRKSRC}/LICENSE

LIB_DEPENDS=		libfontconfig.so:x11-fonts/fontconfig \
			libfreetype.so:print/freetype2

CONFLICTS_INSTALL=	sterm

USES=			pkgconfig
USE_XORG=		x11 xext xft

PLIST_FILES=		bin/st man/man1/st.1.gz

# This way we avoid running tic on st.info which does not work as expected.
BINARY_ALIAS=		tic=true

PORTDATA=		config.def.h st.info
PORTDOCS=		FAQ LEGACY README TODO

OPTIONS_DEFINE=				DOCS
OPTIONS_RADIO=				BASE16
OPTIONS_RADIO_BASE16=			BASE16_3024 BASE16_DEFAULT_DARK BASE16_OCEAN
BASE16_3024_DESC=			3024 colour theme
BASE16_3024_EXTRA_PATCHES=		${PATCHDIR}/extra-base16-3024-patch-config.def.h
BASE16_DEFAULT_DARK_DESC=		Default dark colour theme
BASE16_DEFAULT_DARK_EXTRA_PATCHES=	${PATCHDIR}/extra-base16-default-dark-patch-config.def.h
BASE16_OCEAN_DESC=			Ocean colour theme
BASE16_OCEAN_EXTRA_PATCHES=		${PATCHDIR}/extra-base16-ocean-patch-config.def.h

pre-everything::
	@${ECHO_MSG} "You can build st with your own config.h using the ST_CONF knob:"
	@${ECHO_MSG} "make ST_CONF=/path/to/st/config.h install clean"

post-patch:
.if defined(ST_CONF)
	@${ECHO_MSG} "creating config.h from ${ST_CONF}"
	@${LN} -sf ${ST_CONF} ${WRKSRC}/config.h
.endif
	@${REINPLACE_CMD} -e 's|^VERSION = .*|VERSION = ${PORTVERSION}|' \
		-e 's|^PREFIX = .*|PREFIX = ${PREFIX}|' \
		-e "s|^MANPREFIX = .*|MANPREFIX = ${MANPREFIX}/man|" \
		-e "s|^X11INC = .*|X11INC = ${LOCALBASE}/include|" \
		-e "s|^X11LIB = .*|X11LIB = ${LOCALBASE}/lib|" \
		-e "s|^CPPFLAGS =|CPPFLAGS +=|" \
		${WRKSRC}/config.mk

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/st
	@${MKDIR} ${STAGEDIR}${DATADIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDATA} ${STAGEDIR}${DATADIR}

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
