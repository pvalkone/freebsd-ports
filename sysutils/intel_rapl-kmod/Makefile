PORTNAME=	intel_rapl
DISTVERSION=	0.2.0.20260913
CATEGORIES=	sysutils
PKGNAMESUFFIX=	-kmod

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Intel RAPL package power limits and power measurement
WWW=		https://github.com/spagu/intel_rapl

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64
ONLY_FOR_ARCHS_REASON=	RAPL is an Intel x86 feature, only tested on amd64

USES=		kmod uidfix

USE_GITHUB=	yes
GH_ACCOUNT=	spagu
GH_TAGNAME=	bf5a8ba

TEST_TARGET=	clean run

BUILD_WRKSRC=	${WRKSRC}/src
INSTALL_WRKSRC=	${WRKSRC}/src

TEST_WRKSRC=	${WRKSRC}/tests/unit

PLIST_FILES=	${KMODDIR}/intel_rapl.ko \
		share/man/man4/intel_rapl.4.gz

post-install:
	${INSTALL_MAN} ${WRKSRC}/man/intel_rapl.4 \
		${STAGEDIR}${PREFIX}/share/man/man4/

.include <bsd.port.mk>
