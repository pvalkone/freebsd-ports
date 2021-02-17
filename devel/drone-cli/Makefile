# $FreeBSD$

PORTNAME=		drone-cli
PORTVERSION=		1.2.4
DISTVERSIONPREFIX=	v
CATEGORIES=		devel

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Command line client for the Drone continuous integration server

LICENSE=		APACHE20

USES=			go

USE_GITHUB=		yes
GH_ACCOUNT=		drone

PORTDOCS=		README.md
OPTIONS_DEFINE=		DOCS

PLIST_FILES=		bin/drone

do-build:
	@cd ${WRKSRC} && \
	go build \
	  -buildmode=pie \
	  -trimpath \
	  -modcacherw \
	  -ldflags "-X main.version=${PORTVERSION} -extldflags ${LDFLAGS}" \
	  -o drone ./drone

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/drone/drone ${STAGEDIR}${PREFIX}/bin

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
