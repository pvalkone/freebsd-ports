# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	laines
PORTVERSION=	20161201
PORTEPOCH=	0
CATEGORIES=	emulators

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Cycle-accurate NES emulator in ~1000 lines of code

LICENSE=	BSD2CLAUSE

PLIST_FILES=	bin/laines \
		%%DATADIR%%/font.ttf \
		%%DATADIR%%/init.png

USE_GITHUB=	yes
GH_ACCOUNT=	AndreaOrru
GH_PROJECT=	LaiNES
GH_TAGNAME=	621aa65

USES=		scons
USE_SDL+=	sdl2 ttf2 image2

post-patch:
.for i in SConstruct src/gui.cpp
	@${REINPLACE_CMD} -e \
		's|%%DATADIR%%|${DATADIR}| ; \
		 s|%%LOCALBASE%%|${LOCALBASE}|' ${WRKSRC}/${i}
.endfor

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/laines ${STAGEDIR}${PREFIX}/bin

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC}/res && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>
