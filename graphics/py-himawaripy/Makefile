# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	himawaripy
PORTVERSION=	20180907
PORTEPOCH=	0
CATEGORIES=	graphics python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Set near-realtime picture of Earth as your desktop background

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}appdirs>0:devel/py-appdirs@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dateutil>0:devel/py-dateutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow@${PY_FLAVOR} \
		pidof:sysutils/pidof

USES=		python:3.6+
USE_PYTHON=	distutils autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	boramalper
GH_TAGNAME=	95076ae

NO_ARCH=	yes

.include <bsd.port.mk>
