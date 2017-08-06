# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	yle-dl
PORTVERSION=	2.19
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Download videos from Yle servers

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/Crypto/__init__.py:security/py-pycrypto \
		rtmpdump:multimedia/rtmpdump

USES=		python php
USE_PHP=	bcmath curl hash mcrypt simplexml
USE_GITHUB=	yes
GH_ACCOUNT=	aajanki

OPTIONS_DEFINE=		MUXMP4
MUXMP4_DESC=		Install post-processing script for muxing a video into a mp4
OPTIONS_DEFAULT=	MUXMP4
MUXMP4_PLIST_FILES=	%%DATADIR%%/muxmp4

PLIST_FILES=		bin/yle-dl \
			%%DATADIR%%/AdobeHDS.php

post-install-MUXMP4-on:
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/muxmp4 ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
