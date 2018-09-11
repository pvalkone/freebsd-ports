# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		kepubify
PORTVERSION=		2.2.0
DISTVERSIONPREFIX=	v
PORTREVISION=		1
CATEGORIES=		textproc

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	ePub to kepub converter

LICENSE=	MIT

USES=		go
GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
GO_TARGET=	${GO_PKGNAME} \
		${GO_PKGNAME}/seriesmeta

USE_GITHUB=	yes
GH_ACCOUNT=	geek1011

PLIST_FILES=	bin/kepubify \
		bin/seriesmeta

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/bin/* ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
