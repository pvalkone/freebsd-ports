# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	xss-lock
PORTVERSION=	0.3.0
CATEGORIES=	x11
MASTER_SITES=	https://bitbucket.org/raymonad/xss-lock/get/
DISTNAME=	v${PORTVERSION}

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Use external locker as X screen saver

LICENSE=	MIT

LIB_DEPENDS=	libxcb-util.so:${PORTSDIR}/x11/xcb-util \
		libintl.so:${PORTSDIR}/devel/gettext-runtime \
		libglib-2.0.so:${PORTSDIR}/devel/glib20 \
		libgobject-2.0.so:${PORTSDIR}/devel/glib20 \
		libgio-2.0.so:${PORTSDIR}/devel/glib20

WRKSRC=		${WRKDIR}/raymonad-xss-lock-94aec045ffd6
USE_XORG=	xcb
USES=		cmake

post-patch:
	@${REINPLACE_CMD} -e 's|share/man/man1|man/man1|' ${WRKSRC}/doc/CMakeLists.txt

.include <bsd.port.mk>
