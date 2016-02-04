# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		dmenu-xft-fuzzymatch
PORTVERSION=		4.5
CATEGORIES=		x11
MASTER_SITES=		http://dl.suckless.org/tools/
DISTNAME=		dmenu-${PORTVERSION}

PATCH_SITES=		http://tools.suckless.org/dmenu/patches/
PATCHFILES=		${DISTNAME}-xft.diff \
			${DISTNAME}-fuzzymatch.diff
PATCH_DIST_STRIP=	-p1

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Dynamic X menu with Xft support

LICENSE=		MIT

LIB_DEPENDS=		libfontconfig.so:${PORTSDIR}/x11-fonts/fontconfig

USE_XORG=		x11 xft
MAKE_ARGS=		CC="${CC}" PREFIX="${PREFIX}" MANPREFIX="${MANPREFIX}/man" \
			X11INC="${LOCALBASE}/include" X11LIB="${LOCALBASE}/lib"

post-patch:
		@${REINPLACE_CMD} -e 's|^CPPFLAGS.*|CPPFLAGS=-D_BSD_SOURCE -D_XOPEN_SOURCE=700 -D_POSIX_C_SOURCE=200809L -DVERSION=\\"$${VERSION}\\" $${XINERAMAFLAGS}|' \
		                  -e 's|^CFLAGS.*|CFLAGS += -std=c99 $${INCS} $${CPPFLAGS}|' \
		                  -e 's|^LDFLAGS.*|LDFLAGS += $${LIBS}|' ${WRKSRC}/config.mk

post-install:
		${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/dmenu \
		${STAGEDIR}${PREFIX}/bin/stest

.include <bsd.port.mk>
