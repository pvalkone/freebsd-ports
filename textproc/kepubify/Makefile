# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		kepubify
PORTVERSION=		2.2.0
DISTVERSIONPREFIX=	v
CATEGORIES=		textproc

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	ePub to kepub converter

LICENSE=	MIT

USES=		go
GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

USE_GITHUB=	yes
GH_ACCOUNT=	geek1011

PLIST_FILES=	bin/kepubify

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/bin/kepubify ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
