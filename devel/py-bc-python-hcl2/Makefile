# $FreeBSD$

PORTNAME=	bc-python-hcl2
PORTVERSION=	0.3.11
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	HCL2 parser written in Python using Lark

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lark-parser07>=0.7.8<0.8.0:devel/py-lark-parser07@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
