# $FreeBSD: head/sysutils/docker-compose/Makefile 542200 2020-07-14 07:59:28Z antoine $

PORTNAME=	docker-compose
PORTVERSION=	1.27.4
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	lifanov@FreeBSD.org
COMMENT=	Define and run multi-container applications with Docker

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cached-property>=1.2.0:devel/py-cached-property@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}colorama>=0.3.7:devel/py-colorama@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}distro>=1.5.0:sysutils/py-distro@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}docker>=4.3.1:sysutils/py-docker@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dockerpty>=0.4.1:devel/py-dockerpty@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}docopt>=0.6.1:devel/py-docopt@${PY_FLAVOR} \
		${PY_ENUM34} \
		${PY_IPADDRESS} \
		${PYTHON_PKGNAMEPREFIX}jsonschema>=2.5.1:devel/py-jsonschema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-dotenv>=0.13.0:www/py-python-dotenv@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.11.1:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.10.0:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}texttable>=0.9.0:textproc/py-texttable@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}websocket-client>=0.32.0:www/py-websocket-client@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}yaml>=3.11:devel/py-yaml@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python:3.6+
USE_PYTHON=	distutils autoplist concurrent optsuffix

.include <bsd.port.mk>
