# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		vultr-cli
PORTVERSION=		2.0.0
DISTVERSIONPREFIX=	v
CATEGORIES=		net

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Vultr command-line interface

LICENSE=		MIT

USES=			go

USE_GITHUB=		yes
GH_ACCOUNT=		JamesClonk
GH_PROJECT=		vultr

GO_PKGNAME=		github.com/${GH_ACCOUNT}/${GH_PROJECT}

PLIST_FILES=		bin/vultr

do-install:
	${INSTALL_PROGRAM} ${GO_WRKDIR_BIN}/vultr ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
