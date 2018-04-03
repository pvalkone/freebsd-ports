# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		dnscontrol
PORTVERSION=		0.2.6
DISTVERSIONPREFIX=	v
CATEGORIES=		dns

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Synchronize your DNS to multiple providers from a simple DSL

LICENSE=	MIT

USES=		go
GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

USE_GITHUB=	yes
GH_ACCOUNT=	StackExchange
GH_TAGNAME=	e563c536

PLIST_FILES=	bin/dnscontrol \
		"@sample etc/dnsconfig.js.sample" \
		"@sample etc/creds.json.sample"

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/bin/dnscontrol ${STAGEDIR}${PREFIX}/bin

post-install:
	${INSTALL_DATA} ${WRKSRC}/docs/assets/dnsconfig.js-example.txt \
		${STAGEDIR}${PREFIX}/etc/dnsconfig.js.sample
	${INSTALL_DATA} ${WRKSRC}/docs/assets/creds.json-example.txt \
		${STAGEDIR}${PREFIX}/etc/creds.json.sample

.include <bsd.port.mk>
