# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		xcb-util-xrm
PORTVERSION=		1.0
DISTVERSIONPREFIX=	v
CATEGORIES=		x11

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		XCB utility functions for the X resource manager

LICENSE=		MIT

LIB_DEPENDS=		libxcb-util.so:x11/xcb-util

USE_GITHUB=		yes
GH_ACCOUNT=		Airblader
USES=			libtool
USE_XORG=		xcb

# https://lists.freebsd.org/pipermail/freebsd-ports/2015-May/099220.html
post-extract:
	cd ${WRKSRC} && \
	git init && \
	git remote add origin https://github.com/${GH_ACCOUNT}/${PORTNAME} && \
	git fetch && \
	git reset --hard ${DISTVERSIONPREFIX}${PORTVERSION} && \
	git submodule init && \
	git submodule update --recursive

pre-configure:
	cd ${WRKSRC}; ${SH} autogen.sh

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libxcb-xrm.so.0.0.0

.include <bsd.port.mk>
