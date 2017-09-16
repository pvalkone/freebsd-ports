# $FreeBSD$

# vim: ts=8 noet

PORTNAME=			sterm-scrollback-base16
PORTVERSION=			0.7
PORTREVISION=			3
CATEGORIES=			x11
MASTER_SITES=			http://dl.suckless.org/st/
DISTNAME=			st-${PORTVERSION}

PATCH_SITES=			http://st.suckless.org/patches/
PATCHFILES=			scrollback/st-scrollback-${PORTVERSION}.diff \
				clipboard/st-clipboard-${PORTVERSION}.diff
PATCH_DIST_STRIP=		-p1

MAINTAINER=			petteri.valkonen@iki.fi
COMMENT=			Simple X terminal

LICENSE=			MITX
LICENSE_NAME=			MIT/X Consortium License
LICENSE_FILE=			${WRKSRC}/LICENSE
LICENSE_PERMS=			dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

LIB_DEPENDS=			libfontconfig.so:x11-fonts/fontconfig \
				libfreetype.so:print/freetype2

USES=				pkgconfig
USE_XORG=			x11 xext xft

PLIST_FILES=			bin/st man/man1/st.1.gz

PORTDOCS=			README

OPTIONS_DEFINE=			DOCS BASE16_3024_DARK BASE16_BRIGHT_DARK BASE16_DEFAULT_DARK BASE16_MATERIA_DARK BASE16_OCEAN_DARK
OPTIONS_DEFAULT=		BASE16_DEFAULT_DARK

BASE16_3024_DARK_DESC=		Use Base16 3024 dark 256 colour scheme
BASE16_3024_DARK_VARS=		ST_CONF=${PATCHDIR}/config-base16-3024-256-dark.h
BASE16_3024_DARK_PREVENTS=	BASE16_BRIGHT_DARK BASE16_DEFAULT_DARK BASE16_MATERIA_DARK BASE16_OCEAN_DARK

BASE16_BRIGHT_DARK_DESC=	Use Base16 bright dark 256 colour scheme
BASE16_BRIGHT_DARK_VARS=	ST_CONF=${PATCHDIR}/config-base16-bright-256-dark.h
BASE16_BRIGHT_DARK_PREVENTS=	BASE16_3024_DARK BASE16_DEFAULT_DARK BASE16_MATERIA_DARK BASE16_OCEAN_DARK

BASE16_DEFAULT_DARK_DESC=       Use Base16 default dark 256 colour scheme
BASE16_DEFAULT_DARK_VARS=       ST_CONF=${PATCHDIR}/config-base16-default-256-dark.h
BASE16_DEFAULT_DARK_PREVENTS=   BASE16_3024_DARK BASE16_BRIGHT BASE16_MATERIA_DARK BASE16_OCEAN_DARK

BASE16_MATERIA_DARK_DESC=       Use Base16 materia dark 256 colour scheme
BASE16_MATERIA_DARK_VARS=       ST_CONF=${PATCHDIR}/config-base16-materia-256-dark.h
BASE16_MATERIA_DARK_PREVENTS=   BASE16_3024_DARK BASE16_BRIGHT BASE16_DEFAULT BASE16_OCEAN_DARK

BASE16_OCEAN_DARK_DESC=		Use Base16 ocean dark 256 colour scheme
BASE16_OCEAN_DARK_VARS=		ST_CONF=${PATCHDIR}/config-base16-ocean-256-dark.h
BASE16_OCEAN_DARK_PREVENTS=	BASE16_3024_DARK BASE16_BRIGHT_DARK BASE16_DEFAULT_DARK BASE16_MATERIA_DARK

.include <bsd.port.options.mk>

pre-everything::
	@${ECHO_MSG} "You can build st with your own config.h using the ST_CONF knob:"
	@${ECHO_MSG} "make ST_CONF=/path/to/st/config.h install clean"

post-patch:
.if defined(ST_CONF)
	@${ECHO_MSG} "creating config.h from ${ST_CONF}"
	@${CP} ${ST_CONF} ${WRKSRC}/config.h
.endif
	@${REINPLACE_CMD} -e 's|^VERSION = .*|VERSION = ${PORTVERSION}|' \
		-e 's|^PREFIX = .*|PREFIX = ${PREFIX}|' \
		-e 's|^LOCALBASE = .*|LOCALBASE = ${LOCALBASE}|' \
		-e "s|^MANPREFIX = .*|MANPREFIX = ${MANPREFIX}/man|" \
		-e "s|^X11INC = .*|X11INC = ${LOCALBASE}/include|" \
		-e "s|^X11LIB = .*|X11LIB = ${LOCALBASE}/lib|" \
		${WRKSRC}/config.mk

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/st

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for doc in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${doc} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
