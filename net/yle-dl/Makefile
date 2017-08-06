# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	yle-dl
PORTVERSION=	2.19
PORTREVISION=	2
CATEGORIES=	net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Download videos from Yle servers

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/Crypto/__init__.py:security/py-pycrypto \

USES=		python php
USE_PHP=	bcmath curl hash mcrypt simplexml
USE_GITHUB=	yes
GH_ACCOUNT=	aajanki

OPTIONS_DEFINE=		MUXMP4 RTMPDUMP
MUXMP4_DESC=		Install post-processing script for muxing a video into a mp4
RTMPDUMP_DESC=		Download Areena audio streams using RTMPDump
OPTIONS_DEFAULT=	MUXMP4
MUXMP4_PLIST_FILES=	%%DATADIR%%/muxmp4
RTMPDUMP_RUN_DEPENDS=	rtmpdump>=2.4:multimedia/rtmpdump

PLIST_FILES=		bin/yle-dl \
			%%DATADIR%%/AdobeHDS.php

post-install-MUXMP4-on:
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/muxmp4 ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
