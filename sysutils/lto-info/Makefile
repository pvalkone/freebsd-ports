PORTNAME=	lto-info
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.1
CATEGORIES=	sysutils

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Tool to read the internal memory of LTO/Ultrium cartridges
WWW=		https://github.com/speed47/lto-info

LICENSE=	NONE

USES=		go:modules
USE_GITHUB=	yes
GH_ACCOUNT=	speed47

GH_TUPLE=	HewlettPackard:structex:v1.0.2:hewlettpackard_structex/vendor/github.com/HewlettPackard/structex \
		benmcclelland:mtio:f929531fb4fe:benmcclelland_mtio/vendor/github.com/benmcclelland/mtio \
		benmcclelland:sgio:f710aebf64c1:benmcclelland_sgio/vendor/github.com/benmcclelland/sgio \
		golang:sys:1e4c9ba3b0c4:golang_sys/vendor/golang.org/x/sys \
		jessevdk:go-flags:v1.5.0:jessevdk_go_flags/vendor/github.com/jessevdk/go-flags

PLIST_FILES=	bin/${PORTNAME} \
		share/man/man1/${PORTNAME}.1.gz

post-build:
	${GO_WRKDIR_BIN}/${PORTNAME} --man > ${WRKSRC}/${PORTNAME}.1

post-install:
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.mk>
