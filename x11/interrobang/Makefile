# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	interrobang
PORTVERSION=	0.2.20161224
CATEGORIES=	x11

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Tiny launcher menu packing a big bang (syntax)

LICENSE=	GPLv3

PLIST_FILES=	bin/interrobang \
		bin/percontation \
		man/man1/interrobang.1.gz \
		"@sample %%ETCDIR%%/config.sample"
PORTDOCS=	COPYING README.md

USE_GITHUB=	yes
GH_ACCOUNT=	TrilbyWhite
GH_TAGNAME=	321cd9d
USE_GCC=	5
USE_XORG=	x11

post-patch:
	@${REINPLACE_CMD} -e 's|gcc|gcc5|g' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/interrobang ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/percontation ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/interrobang.1 ${STAGEDIR}${MAN1PREFIX}/man/man1
	${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/config ${STAGEDIR}${ETCDIR}/config.sample

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
