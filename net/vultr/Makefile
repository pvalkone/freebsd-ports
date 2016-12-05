# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		vultr
PORTVERSION=		1.11
DISTVERSIONPREFIX=	v
CATEGORIES=		net

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Vultr command-line interface

LICENSE=		MIT

USE_GITHUB=		yes
GH_ACCOUNT=		JamesClonk

PLIST_FILES=		bin/vultr
USES=			go
GO_PKGNAME=		github.com/${GH_ACCOUNT}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${GO_WRKDIR_BIN}/vultr ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
