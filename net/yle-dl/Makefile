PORTNAME=	yle-dl
PORTVERSION=	20210808
CATEGORIES=	net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Download videos from Yle servers

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycryptodomex>=0:security/py-pycryptodomex@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}progress>=0:devel/py-progress@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}lxml>=0:devel/py-lxml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}defusedxml>=0:devel/py-defusedxml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}future>=0:devel/py-future@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}attrs>=18.1.0:devel/py-attrs@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}configargparse>=0.13.0:devel/py-configargparse@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR} \
		ffmpeg>=4.1:multimedia/ffmpeg \
		wget:ftp/wget

USES=		python:3.5+
USE_PYTHON=	distutils autoplist noflavors

USE_GITHUB=	yes
GH_ACCOUNT=	aajanki

NO_ARCH=	yes

PLIST_FILES=	"@sample etc/yledl.conf.sample"

OPTIONS_DEFINE=		MUXMP4
MUXMP4_DESC=		Install post-processing script for muxing a video into a mp4
MUXMP4_PLIST_FILES=	${DATADIR}/muxmp4

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc
	${INSTALL_DATA} ${WRKSRC}/yledl.conf.sample ${STAGEDIR}${PREFIX}/etc/yledl.conf.sample

post-install-MUXMP4-on:
	@${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/muxmp4 ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
