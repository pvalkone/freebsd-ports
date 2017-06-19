# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		doctl
PORTVERSION=		1.7.0
DISTVERSIONPREFIX=	v
CATEGORIES=		net

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Command line tool for DigitalOcean services

LICENSE=		APACHE20

USE_GITHUB=		yes
GH_ACCOUNT=		digitalocean

PLIST_FILES=		bin/doctl
USES=			go
GO_PKGNAME=		github.com/${GH_ACCOUNT}/${PORTNAME}
GO_TARGET=		${GO_PKGNAME}/cmd/doctl

do-build:
	cd ${GO_WRKSRC} && \
	${GO_ENV} ${GO_CMD} build \
		-ldflags "-X ${GO_PKGNAME}.Major=${PORTVERSION:R:R} \
			-X ${GO_PKGNAME}.Minor=${PORTVERSION:R:E} \
			-X ${GO_PKGNAME}.Patch=${PORTVERSION:E} \
			-X ${GO_PKGNAME}.Label=release" \
		${GO_TARGET}

do-install:
	${INSTALL_PROGRAM} ${GO_WRKSRC}/doctl ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
