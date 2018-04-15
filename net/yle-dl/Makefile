# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	yle-dl
PORTVERSION=	2.32
CATEGORIES=	net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Download videos from Yle servers

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycrypto>=0:security/py-pycrypto \
		${PYTHON_PKGNAMEPREFIX}progress>=0:devel/py-progress \
		${PYTHON_PKGNAMEPREFIX}lxml>=0:devel/py-lxml \
		${PYTHON_PKGNAMEPREFIX}amf>=0:www/py-amf \
		${PYTHON_PKGNAMEPREFIX}defusedxml>=0:devel/py-defusedxml \
		${PYTHON_PKGNAMEPREFIX}future>=0:devel/py-future

USES=		python php
USE_PYTHON=	distutils autoplist noflavors
USE_PHP=	bcmath curl hash mcrypt simplexml
USE_GITHUB=	yes
GH_ACCOUNT=	aajanki
NO_ARCH=	yes

OPTIONS_DEFINE=		MUXMP4 RTMPDUMP
MUXMP4_DESC=		Install post-processing script for muxing a video into a mp4
RTMPDUMP_DESC=		Download Areena audio streams using RTMPDump
OPTIONS_DEFAULT=	MUXMP4
MUXMP4_PLIST_FILES=	%%DATADIR%%/muxmp4
RTMPDUMP_RUN_DEPENDS=	rtmpdump>=2.4:multimedia/rtmpdump

post-install-MUXMP4-on:
	@${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/muxmp4 ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
