# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	blastem
PORTVERSION=	0.6.2
CATEGORIES=	emulators
MASTER_SITES=	https://www.retrodev.com/repos/blastem/archive/
DISTNAME=	8aeac7bd9fa7

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Fast and accurate Genesis/Megadrive emulator

LICENSE=	GPLv3

BUILD_DEPENDS=	xcf2png:graphics/xcftools \
		vasmm68k_mot:devel/vasm \
		${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow@${PY_FLAVOR}

USES=		gl gmake pkgconfig python:2.7,build sdl shebangfix

PLIST_FILES=	bin/blastem \
		${DATADIR}/rom.db \
		${DATADIR}/shaders/default.f.glsl \
		${DATADIR}/shaders/default.v.glsl \
		${DATADIR}/gamecontrollerdb.txt \
		${DATADIR}/menu.bin \
		"@sample ${ETCDIR}/blastem.cfg.sample"

USE_GCC=	yes
USE_SDL=	sdl2
USE_GL=		glew glu gl
SHEBANG_FILES=	img2tiles.py

OPTIONS_DEFINE=	DOCS
PORTDOCS=	README COPYING CHANGELOG
WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTNAME}
ALL_TARGET=	blastem menu.bin
MAKE_ENV+=	DATA_PATH=${DATADIR}

post-patch:
.for i in render_sdl.c util.c
	@${REINPLACE_CMD} -e \
		's|%%DATADIR%%|${DATADIR}| ; \
		 s|%%ETCDIR%%|${ETCDIR}|' \
		${WRKSRC}/${i}
.endfor

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/blastem ${STAGEDIR}${PREFIX}/bin

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/blastem
	@${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/default.cfg ${STAGEDIR}${ETCDIR}/blastem.cfg.sample
	@${MKDIR} ${STAGEDIR}${DATADIR}
.for i in rom.db gamecontrollerdb.txt menu.bin
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DATADIR}
.endfor
	(cd ${WRKSRC} && ${COPYTREE_SHARE} shaders ${STAGEDIR}${DATADIR})
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
