# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		3270font
PORTVERSION=		2.0.3
DISTVERSIONPREFIX=	v
CATEGORIES=		x11-fonts
PKGNAMESUFFIX=		-ttf

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		IBM 3270 terminal font in TrueType format

LICENSE=		BSD3CLAUSE

BUILD_DEPENDS=		fontforge:print/fontforge \
			${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow@${PY_FLAVOR}

USES=			gmake fonts python:3.7+,build

PLIST_FILES=		${FONTSDIR}/3270-Regular.ttf \
			${FONTSDIR}/3270Condensed-Regular.ttf \
			${FONTSDIR}/3270SemiCondensed-Regular.ttf

USE_GITHUB=		yes
GH_ACCOUNT=		rbanffy

ALL_TARGET=		test

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/build/*.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
