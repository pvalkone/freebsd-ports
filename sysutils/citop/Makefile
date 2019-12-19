# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	citop
PORTVERSION=	0.1.1
CATEGORIES=	sysutils

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Monitor Continuous Integration pipelines from the command line

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	git:devel/git-lite \
		go:lang/go \
		pandoc:textproc/hs-pandoc

USE_GITHUB=	yes
GH_ACCOUNT=	nbedos

ALL_TARGET=	${PORTNAME}

PLIST_FILES=	bin/${PORTNAME} \
		man/man1/${PORTNAME}.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/build/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/build/${PORTNAME}.man.1 ${STAGEDIR}${PREFIX}/man/man1/${PORTNAME}.1

.include <bsd.port.mk>
