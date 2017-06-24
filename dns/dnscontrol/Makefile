# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	dnscontrol
PORTVERSION=	20170619
PORTEPOCH=	0
CATEGORIES=	dns

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Synchronize your DNS to multiple providers from a simple DSL

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	StackExchange
GH_TAGNAME=	06461d3

USES=		go
GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

PLIST_FILES=	bin/dnscontrol

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/bin/dnscontrol ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
