# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	claviger
PORTVERSION=	0.2.1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Synchronise remote SSH authorised_keys

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/tarjan/__init__.py:devel/py-tarjan \
		${PYTHON_SITELIBDIR}/yaml/__init__.py:devel/py-yaml \
		${PYTHON_SITELIBDIR}/demandimport/__init__.py:devel/py-demandimport \
		${PYTHON_SITELIBDIR}/jsonschema/__init__.py:devel/py-jsonschema

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
