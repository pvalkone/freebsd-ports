# vim: ts=8 noet

PORTNAME=	laines
PORTVERSION=	20200610
PORTEPOCH=	0
CATEGORIES=	emulators

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Cycle-accurate NES emulator in ~1000 lines of code
WWW=		https://github.com/AndreaOrru/LaiNES

LICENSE=	BSD2CLAUSE

USES=		scons sdl

USE_SDL=	sdl2 ttf2 image2

PLIST_FILES=	bin/laines \
		${DATADIR}/font.ttf \
		${DATADIR}/init.png

USE_GITHUB=	yes
GH_ACCOUNT=	AndreaOrru
GH_PROJECT=	LaiNES
GH_TAGNAME=	b56dac7
GH_TUPLE=	brofield:simpleini:03e27b2:simpleini

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
