# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		curseofwar
PORTVERSION=		1.2.0
DISTVERSIONPREFIX=	v
CATEGORIES=		games

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Real-time strategy game

LICENSE=		GPLv3

USE_GITHUB=		yes
GH_ACCOUNT=		a-nikolaev
USES=			cmake
USE_SDL=		sdl

post-patch:
	@${REINPLACE_CMD} -e "s/%VERSION%/${PORTVERSION}/g" \
	${WRKSRC}/${PORTNAME}.6 ${WRKSRC}/${PORTNAME}-sdl.6

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME}-sdl ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.6 ${WRKSRC}/${PORTNAME}-sdl.6 \
	${STAGEDIR}${PREFIX}/man/man6

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${GZIP_CMD} -c ${WRKSRC}/CHANGELOG > ${WRKSRC}/changelog.gz && \
	${INSTALL_MAN} ${WRKSRC}/changelog.gz ${STAGEDIR}${DOCSDIR}
	${MKDIR} ${STAGEDIR}${DATADIR}/images
	(cd ${WRKSRC}/images && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}/images)

.include <bsd.port.mk>
