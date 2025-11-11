PORTNAME=	laines
PORTVERSION=	20251106
PORTEPOCH=	0
CATEGORIES=	emulators

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Cycle-accurate NES emulator in ~1000 lines of code
WWW=		https://github.com/AndreaOrru/LaiNES

LICENSE=	BSD2CLAUSE

USES=		scons sdl

USE_GITHUB=	yes
GH_ACCOUNT=	AndreaOrru
GH_PROJECT=	LaiNES
GH_TAGNAME=	1f3d126
GH_TUPLE=	brofield:simpleini:03e27b2:simpleini
USE_SDL=	image2 sdl2 ttf2

PLIST_FILES=	${DATADIR}/font.ttf \
		${DATADIR}/init.png \
		bin/laines

post-patch:
.for i in SConstruct src/gui.cpp
	@${REINPLACE_CMD} -e \
		's|%%DATADIR%%|${DATADIR}| ; \
 	 	 s|%%LOCALBASE%%|${LOCALBASE}| ; \
		 s|%%WRKSRC_simpleini%%|${WRKSRC_simpleini}|' \
		${WRKSRC}/${i}
.endfor

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/laines ${STAGEDIR}${PREFIX}/bin

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC}/res && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>
