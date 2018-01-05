# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		vultr-cli
PORTVERSION=		1.15.0
CATEGORIES=		net

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Vultr command-line interface

LICENSE=		MIT

PLIST_FILES=		bin/vultr
USES=			go
GO_PKGNAME=		github.com/${GH_ACCOUNT}/${GH_PROJECT}

USE_GITHUB=		yes
GH_ACCOUNT=		JamesClonk
GH_PROJECT=		vultr

do-install:
	${INSTALL_PROGRAM} ${GO_WRKDIR_BIN}/vultr ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
