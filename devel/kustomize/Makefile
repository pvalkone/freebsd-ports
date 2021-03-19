# $FreeBSD$

PORTNAME=		kustomize
DISTVERSIONPREFIX=	kustomize/v
DISTVERSION=		4.0.5
CATEGORIES=		devel

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Customization of Kubernetes YAML configurations

LICENSE=	APACHE20

BUILD_DEPENDS=	ca_root_nss>=0:security/ca_root_nss

USES=		go
USE_GITHUB=	yes
GH_ACCOUNT=	kubernetes-sigs

PLIST_FILES=	bin/kustomize

do-build:
	@cd ${WRKSRC}/${PORTNAME} && ${SETENV} GOPATH=${WRKSRC} ${GO_CMD} build .

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
