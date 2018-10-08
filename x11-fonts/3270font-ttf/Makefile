# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		3270font
PORTVERSION=		2.0.0
DISTVERSIONPREFIX=	v
CATEGORIES=		x11-fonts
PKGNAMESUFFIX=		-ttf

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		IBM 3270 terminal font in TrueType format

LICENSE=		BSD3CLAUSE

BUILD_DEPENDS=		fontforge:print/fontforge

USES=			gmake fonts

PLIST_FILES=		%%FONTSDIR%%/3270Medium.ttf \
			%%FONTSDIR%%/3270SemiNarrow.ttf \
			%%FONTSDIR%%/3270Narrow.ttf

USE_GITHUB=		yes
GH_ACCOUNT=		rbanffy

do-build:
	cd ${WRKSRC} && ${GMAKE} test

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/build/*.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
