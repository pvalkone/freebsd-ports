# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	blastem
PORTVERSION=	0.5.0
CATEGORIES=	emulators
MASTER_SITES=	https://www.retrodev.com/repos/blastem/archive/
DISTNAME=	99d153d9e9ca

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Fast and accurate Genesis/Megadrive emulator

LICENSE=	GPLv3

BUILD_DEPENDS=	xcf2png:graphics/xcftools \
		vasmm68k_mot:devel/vasm \
		${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow

PLIST_FILES=	bin/blastem \
		%%DATADIR%%/rom.db \
		%%DATADIR%%/shaders/default.f.glsl \
		%%DATADIR%%/shaders/default.v.glsl \
		%%DATADIR%%/gamecontrollerdb.txt \
		%%DATADIR%%/menu.bin \
		"@sample %%ETCDIR%%/blastem.cfg.sample"

USES=		gmake pkgconfig python:2,build shebangfix
USE_GCC=	5+
USE_SDL=	sdl sdl2
USE_GL=		glew glu gl
SHEBANG_FILES=	img2tiles.py

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTNAME}
PORTDOCS=	README COPYING CHANGELOG
ALL_TARGET=	blastem menu.bin

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
