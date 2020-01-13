# $FreeBSD$

PORTNAME=	cistern
PORTVERSION=	0.2.0
PORTEPOCH=	1
CATEGORIES=	sysutils

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Monitor Continuous Integration pipelines from the command line

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	git:devel/git \
		pandoc:textproc/hs-pandoc
RUN_DEPENDS=	git:devel/git

USES=		go
GO_TARGET=	./cmd/make
GO_ENV+=	GO111MODULE=on

USE_GITHUB=	yes
GH_ACCOUNT=	nbedos

PLIST_FILES=	bin/${PORTNAME} \
		man/man1/${PORTNAME}.1.gz

post-patch:
	@${REINPLACE_CMD} -e "s/gitVersion, err := gitDescribe()/gitVersion, err := \"${PORTVERSION}\", error(nil)/" \
	${GO_WRKSRC}/cmd/make/main.go

do-build:
	@(cd ${GO_WRKSRC} && ${SETENV} ${MAKE_ENV} ${GO_ENV} ${GO_CMD} run ${GO_TARGET} ${PORTNAME})

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/build/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/build/${PORTNAME}.man.1 ${STAGEDIR}${PREFIX}/man/man1/${PORTNAME}.1

.include <bsd.port.mk>
