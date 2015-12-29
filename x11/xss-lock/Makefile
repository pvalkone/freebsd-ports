# $FreeBSD$

PORTNAME=     xss-lock
PORTVERSION=  0.3.0 
CATEGORIES=   x11
MASTER_SITES= https://bitbucket.org/raymonad/xss-lock/get/
DISTFILES=    v${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=   petteri.valkonen@iki.fi
COMMENT=      Use external locker as X screen saver
LICENSE=      MIT

WRKSRC=       ${WRKDIR}/raymonad-xss-lock-94aec045ffd6
USES=         cmake
LIB_DEPENDS=  libxcb-util.so.1:${PORTSDIR}/x11/xcb-util \
              libintl.so.8:${PORTSDIR}/devel/gettext-runtime \
              libglib-2.0.so.0:${PORTSDIR}/devel/glib20 \
              libgobject-2.0.so.0:${PORTSDIR}/devel/glib20 \
              libgio-2.0.so.0:${PORTSDIR}/devel/glib20 \
              libxcb.so.1:${PORTSDIR}/x11/libxcb \
              libxcb-screensaver.so.0:${PORTSDIR}/x11/libxcb

post-patch:
	@${REINPLACE_CMD} -e 's|share/man/man1|man/man1|' ${WRKSRC}/doc/CMakeLists.txt

.include <bsd.port.mk>
