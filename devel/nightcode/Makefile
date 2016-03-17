# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	nightcode
PORTVERSION=	1.1.0
CATEGORIES=	devel java

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Simple IDE for Clojure

LICENSE=	UNLICENSE
LICENSE_NAME=	The Unlicense
LICENSE_FILE=	${WRKSRC}/UNLICENSE
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=	lein:${PORTSDIR}/devel/leiningen

JARFILE=	${PORTNAME}.jar
PLIST_FILES=	%%JAVAJARDIR%%/${JARFILE} \
		bin/${PORTNAME}
SUB_FILES=	${PORTNAME}
SUB_LIST=	JARFILE=${JARFILE}

NO_ARCH=	yes

WRKSRC=		${WRKDIR}/Nightcode-${PORTVERSION}
USE_GITHUB=	yes
GH_ACCOUNT=	oakes
USE_JAVA=	yes
JAVA_VERSION=	1.7+

do-build:
	cd ${WRKSRC} && LEIN_ROOT=yes ${LOCALBASE}/bin/lein uberjar

do-install:
	${MKDIR} ${STAGEDIR}${JAVAJARDIR}
	${INSTALL_DATA} ${WRKSRC}/target/${PORTNAME}-${PORTVERSION}-standalone.jar ${STAGEDIR}${JAVAJARDIR}/${JARFILE}
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
