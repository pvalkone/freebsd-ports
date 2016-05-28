# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	yle-dl
PORTVERSION=	2.10.1
CATEGORIES=	net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Download videos from Yle servers

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/Crypto/__init__.py:security/py-pycrypto \
		${PYTHON_SITELIBDIR}/youtube_dl/__init__.py:www/py-youtube_dl \
		rtmpdump:multimedia/rtmpdump

USES=		python
USE_PHP=	bcmath curl hash mcrypt simplexml
USE_GITHUB=	yes
GH_ACCOUNT=	aajanki

.include <bsd.port.mk>
