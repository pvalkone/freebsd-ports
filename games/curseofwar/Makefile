# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		curseofwar
PORTVERSION=		1.2.0
DISTVERSIONPREFIX=	v
PORTREVISION=		1
CATEGORIES=		games

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Real-time strategy game

LICENSE=		GPLv3

USES=			gmake
USE_GITHUB=		yes
GH_ACCOUNT=		a-nikolaev
USE_CXXSTD=		gnu++98

OPTIONS_DEFINE=		SDL
OPTIONS_DEFAULT=
SDL_USE=		SDL=yes
SDL_MAKE_ENV=		SDL=yes
SDL_PLIST_FILES=	bin/curseofwar-sdl \
			man/man6/curseofwar-sdl.6.gz \
			${DATADIR}/images/tileset.bmp \
			${DATADIR}/images/type.bmp \
			${DATADIR}/images/ui.bmp
SDL_PLIST_FILES_OFF=	bin/curseofwar \
			man/man6/curseofwar.6.gz

PLIST_FILES=		${DOCSDIR}/changelog.gz

post-patch:
	@${REINPLACE_CMD} -e "s/%VERSION%/${PORTVERSION}/g" \
	${WRKSRC}/${PORTNAME}.6 ${WRKSRC}/${PORTNAME}-sdl.6

do-install:

do-install-SDL-off:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.6 ${STAGEDIR}${PREFIX}/man/man6

do-install-SDL-on:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME}-sdl ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}-sdl.6 ${STAGEDIR}${PREFIX}/man/man6

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${GZIP_CMD} -c ${WRKSRC}/CHANGELOG > ${WRKSRC}/changelog.gz && \
	${INSTALL_MAN} ${WRKSRC}/changelog.gz ${STAGEDIR}${DOCSDIR}

post-install-SDL-on:
	@${MKDIR} ${STAGEDIR}${DATADIR}/images
	(cd ${WRKSRC}/images && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}/images)

.include <bsd.port.mk>
