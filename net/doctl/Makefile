# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		doctl
PORTVERSION=		1.5.0
DISTVERSIONPREFIX=	v
CATEGORIES=		net
MASTER_SITES=		# none
DISTFILES=		# none

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Command line tool for DigitalOcean services

LICENSE=		APACHE20

BUILD_DEPENDS=		go:lang/go \
			git:devel/git

NO_FETCH=		yes
PLIST_FILES=		bin/doctl

GOPATH=			${WRKDIR}/.gopkg
GO_CMD=			GOPATH='${GOPATH}' go
PACKAGE_BASE_PATH=	github.com/digitalocean/${PORTNAME}
DOCTL_CMD_PATH=		${PACKAGE_BASE_PATH}/cmd/doctl
OUT_BIN=		${WRKDIR}/out/doctl
BASE_FLAG=		-X ${PACKAGE_BASE_PATH}

do-build:
	# Temporarily ignore errors for 'go get'
	# See: https://github.com/digitalocean/doctl/issues/42#issuecomment-209125581
	set +e && \
	${GO_CMD} get ${DOCTL_CMD_PATH}; \
	set -e && \
	cd ${GOPATH}/src/${PACKAGE_BASE_PATH} && \
	git checkout tags/${DISTVERSIONPREFIX}${DISTVERSION}
	${GO_CMD} build \
		-o ${OUT_BIN} \
		-ldflags "${BASE_FLAG}.Build=`git rev-parse --short HEAD` \
			${BASE_FLAG}.Major=${PORTVERSION:R:R} \
			${BASE_FLAG}.Minor=${PORTVERSION:R:E} \
			${BASE_FLAG}.Patch=${PORTVERSION:E} \
			${BASE_FLAG}.Label=release" \
		${DOCTL_CMD_PATH}

do-install:
	${INSTALL_PROGRAM} ${OUT_BIN} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
