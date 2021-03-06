# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	nightcode
PORTVERSION=	1.3.2
CATEGORIES=	devel java

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Simple IDE for Clojure

LICENSE=	UNLICENSE
LICENSE_NAME=	The Unlicense
LICENSE_FILE=	${WRKSRC}/UNLICENSE
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=	lein:devel/leiningen \
		bash:shells/bash

JAR_FILE=	${PORTNAME}.jar
SCRIPT_FILE=	${PORTNAME}
DESKTOP_FILE=	${PORTNAME}.desktop
ICON_FILE=	${PORTNAME}.svg
BIN_DIR=	bin
ICONS_DIR=	share/icons
APPS_DIR=	share/applications
PLIST_FILES=	%%JAVAJARDIR%%/${JAR_FILE} \
		${BIN_DIR}/${SCRIPT_FILE} \
		${ICONS_DIR}/${ICON_FILE} \
		${APPS_DIR}/${DESKTOP_FILE}
SUB_FILES=	${SCRIPT_FILE} \
		${DESKTOP_FILE}
SUB_LIST=	JAR_FILE=${JAR_FILE} \
		SCRIPT_FILE=${PREFIX}/${BIN_DIR}/${SCRIPT_FILE} \
		ICON_FILE=${PREFIX}/${ICONS_DIR}/${ICON_FILE}

NO_ARCH=	yes

WRKSRC=		${WRKDIR}/Nightcode-${PORTVERSION}
USE_GITHUB=	yes
GH_ACCOUNT=	oakes
USE_JAVA=	yes
JAVA_VERSION=	1.7+

do-build:
	cd ${WRKSRC} && LEIN_ROOT=yes ${LOCALBASE}/bin/lein uberjar

do-install:
	${MKDIR} ${STAGEDIR}${JAVAJARDIR} ${STAGEDIR}${PREFIX}/${ICONS_DIR} ${STAGEDIR}${PREFIX}/${APPS_DIR}
	${INSTALL_DATA} ${WRKSRC}/target/${PORTNAME}-${PORTVERSION}-standalone.jar ${STAGEDIR}${JAVAJARDIR}/${JAR_FILE}
	${INSTALL_DATA} ${WRKDIR}/${DESKTOP_FILE} ${STAGEDIR}${PREFIX}/${APPS_DIR}
	${INSTALL_DATA} ${WRKSRC}/graphics/logo_launcher.svg ${STAGEDIR}${PREFIX}/${ICONS_DIR}/${ICON_FILE}
	${INSTALL_SCRIPT} ${WRKDIR}/${SCRIPT_FILE} ${STAGEDIR}${PREFIX}/${BIN_DIR}

.include <bsd.port.mk>
