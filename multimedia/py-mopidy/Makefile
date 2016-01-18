# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	mopidy
PORTVERSION=	1.1.1
CATEGORIES=	multimedia python
MASTER_SITES=	CHEESESHOP
DISTNAME=	Mopidy-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Extensible music server written in Python

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/tornado/__init__.py:${PORTSDIR}/www/py-tornado \
		${PYTHON_SITELIBDIR}/requests/__init__.py:${PORTSDIR}/www/py-requests \
		${PYTHON_SITELIBDIR}/pykka/__init__.py:${PORTSDIR}/devel/py-pykka \
		${PYTHON_SITELIBDIR}/six.py:${PORTSDIR}/devel/py-six \
		${PYTHON_SITELIBDIR}/gobject/__init__.py:${PORTSDIR}/devel/py-gobject \
		${PYTHON_SITELIBDIR}/gst-0.10/gst/__init__.py:${PORTSDIR}/multimedia/py-gstreamer

USES=		python
USE_PYTHON=	distutils autoplist
USE_GSTREAMER=	core

.include <bsd.port.mk>
