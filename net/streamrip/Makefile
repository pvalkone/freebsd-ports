PORTNAME=		streamrip
PORTVERSION=		0.5.4
DISTVERSIONPREFIX=	v
CATEGORIES=		net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Scriptable music downloader for Qobuz, Tidal, Deezer and SoundCloud

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>=0:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ruamel.yaml>=0:devel/py-ruamel.yaml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}packaging>=0:devel/py-packaging@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pathvalidate>=0:devel/py-pathvalidate@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mutagen>=0:audio/py-mutagen@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tqdm>=0:misc/py-tqdm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}simple-term-menu>=0:devel/py-simple-term-menu@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlite3>=0:databases/py-sqlite3@${PY_FLAVOR} \
		ffmpeg:multimedia/ffmpeg

USES=		python:3.8+
USE_PYTHON=	distutils autoplist noflavors
USE_GITHUB=	yes
GH_ACCOUNT=	nathom

NO_ARCH=	yes

.include <bsd.port.mk>
