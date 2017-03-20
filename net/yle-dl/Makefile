# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	yle-dl
PORTVERSION=	2.15
CATEGORIES=	net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Download videos from Yle servers

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/Crypto/__init__.py:security/py-pycrypto \
		${PYTHON_SITELIBDIR}/youtube_dl/__init__.py:www/py-youtube_dl \
		rtmpdump:multimedia/rtmpdump

USES=		python php
USE_PHP=	bcmath curl hash mcrypt simplexml
USE_GITHUB=	yes
GH_ACCOUNT=	aajanki

OPTIONS_DEFINE=	MUXMP4
MUXMP4_DESC=	Install post-processing script for muxing a video into a mp4
OPTIONS_DEFAULT=MUXMP4

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MMUXMP4}
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/muxmp4 ${STAGEDIR}${DATADIR}
.endif

.include <bsd.port.mk>
