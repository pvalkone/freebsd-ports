# $FreeBSD$

PORTNAME=		kustomize
DISTVERSIONPREFIX=	kustomize/v
DISTVERSION=		3.8.6
CATEGORIES=		devel

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Customization of Kubernetes YAML configurations

LICENSE=	APACHE20

USES=		go
USE_GITHUB=	yes
GH_ACCOUNT=	kubernetes-sigs

PLIST_FILES=	bin/kustomize

do-build:
	@cd ${WRKSRC}/kustomize && ${SETENV} ${GO_ENV} ${GO_CMD} install .

.include <bsd.port.mk>
