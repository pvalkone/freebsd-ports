# $FreeBSD$

PORTNAME=		kustomize
DISTVERSIONPREFIX=	kustomize/v
DISTVERSION=		4.0.1
CATEGORIES=		devel

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Customization of Kubernetes YAML configurations

LICENSE=	APACHE20

USES=		go
USE_GITHUB=	yes
GH_ACCOUNT=	kubernetes-sigs

PLIST_FILES=	bin/kustomize

do-build:
	@cd ${WRKSRC}/${PORTNAME} && ${SETENV} GOPATH=${WRKSRC} ${GO_CMD} build .

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
