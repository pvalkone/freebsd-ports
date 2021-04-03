# $FreeBSD$

PORTNAME=		streamrip
PORTVERSION=		0.2.13
DISTVERSIONPREFIX=	v
PORTREVISION=		1
CATEGORIES=		net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Scriptable music downloader for Qobuz, Tidal, and Deezer

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>=0:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ruamel.yaml>=0:devel/py-ruamel.yaml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pathvalidate>=0:devel/py-pathvalidate@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mutagen>=0:audio/py-mutagen@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tqdm>=0:misc/py-tqdm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pycryptodome>=0:security/py-pycryptodome@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pick>=0:devel/py-pick@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}colorama>=0:devel/py-colorama@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlite3>=0:databases/py-sqlite3@${PY_FLAVOR} \
		ffmpeg:multimedia/ffmpeg

USES=		python:3.7+
USE_PYTHON=	distutils autoplist noflavors
USE_GITHUB=	yes
GH_ACCOUNT=	nathom

NO_ARCH=	yes

.include <bsd.port.mk>
