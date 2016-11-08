# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	mopidy-soundcloud
PORTVERSION=	2.0.2
CATEGORIES=	multimedia python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Mopidy-SoundCloud-${PORTVERSION}

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Mopidy extension for playing music from SoundCloud

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/mopidy/__init__.py:multimedia/py-mopidy

USES=		python
USE_PYTHON=	distutils autoplist
USE_GSTREAMER1=	ugly soup
NO_ARCH=	yes

.include <bsd.port.mk>
