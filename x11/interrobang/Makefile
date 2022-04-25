PORTNAME=	interrobang
PORTVERSION=	0.2.20180816
CATEGORIES=	x11

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Tiny launcher menu packing a big bang (syntax)

LICENSE=	GPLv3

PORTDOCS=	COPYING README.md

OPTIONS_DEFINE=	DOCS

USE_GITHUB=	yes
GH_ACCOUNT=	TrilbyWhite
GH_TAGNAME=	39d2716

USES=			xorg
USE_GCC=  yes
USE_XORG=	x11

post-patch:
	@${REINPLACE_CMD} -e 's|gcc|${CC}|g' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/interrobang ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/percontation ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/interrobang.1 ${STAGEDIR}${MAN1PREFIX}/man/man1
	@${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/config ${STAGEDIR}${ETCDIR}/config.sample

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
