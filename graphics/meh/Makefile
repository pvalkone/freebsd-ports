# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	meh
PORTVERSION=	0.3.20150412
CATEGORIES=	graphics

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Simple, minimalist, super fast image viewer

LICENSE=	MIT

LIB_DEPENDS=	libpng16.so:graphics/png \
		libgif.so:graphics/giflib

USE_GITHUB=	yes
GH_ACCOUNT=	jhawthorn
GH_TAGNAME=	4ab1c75

PLIST_FILES=	bin/meh \
		man/man1/meh.1.gz
PORTDOCS=	AUTHORS BUGS COPYING NEWS README THANKS

USES=		gmake jpeg
USE_XORG=	x11 xext

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

do-build:
	cd ${WRKSRC} && \
	CFLAGS="${CFLAGS}" LDFLAGS="${LDFLAGS}" ${MAKE_CMD}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/meh ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/doc/meh.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
