# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	mopidy
PORTVERSION=	2.0.0
CATEGORIES=	multimedia python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Mopidy-${PORTVERSION}

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Extensible music server written in Python

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/tornado/__init__.py:www/py-tornado \
		${PYTHON_SITELIBDIR}/requests/__init__.py:www/py-requests \
		${PYTHON_SITELIBDIR}/pykka/__init__.py:devel/py-pykka \
		${PYTHON_SITELIBDIR}/six.py:devel/py-six \
		${PYTHON_SITELIBDIR}/gobject/__init__.py:devel/py-gobject \
		${PYTHON_SITELIBDIR}/gi/overrides/Gst.py:multimedia/py-gstreamer1

USES=		python
USE_PYTHON=	distutils autoplist
USE_GSTREAMER1=	core
NO_ARCH=	yes

.include <bsd.port.mk>
