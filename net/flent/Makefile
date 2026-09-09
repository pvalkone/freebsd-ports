PORTNAME=	flent
DISTVERSION=	2.3.0
CATEGORIES=	net
MASTER_SITES=	PYPI

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	FLExible Network Tester
WWW=		https://flent.org

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PY_SETUPTOOLS} \
		${PYTHON_PKGNAMEPREFIX}wheel>0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	bash>0:shells/bash \
		fping>0:net/fping \
		iperf>0:benchmarks/iperf \
		netperf>0:benchmarks/netperf

USES=		desktop-file-utils python:3.6+ shared-mime-info shebangfix
USE_PYTHON=	autoplist noflavors pep517

SHEBANG_FILES=	flent/scripts/*.sh

NO_ARCH=	yes

OPTIONS_DEFINE=	GUI MATPLOT
GUI_DESC=	Qt-based graphical user interface (requires X)
MATPLOT_DESC=	Plot results using matplotlib (requires X)

GUI_IMPLIES=		MATPLOT
GUI_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyside6>0:devel/pyside6@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}QtPy>0:devel/py-QtPy@${PY_FLAVOR}
MATPLOT_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}matplotlib>=3.6:math/py-matplotlib@${PY_FLAVOR}

.include <bsd.port.mk>
