PORTNAME=	ethflopd
DISTVERSION=	20200629
CATEGORIES=	net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Network server that serves emulated (virtual) floppy disk images
WWW=		https://ethflop.sourceforge.net/

LICENSE=	ISCL

USE_GITHUB=	yes
GH_ACCOUNT=	michaelortmann
GH_PROJECT=	ethflop
GH_TAGNAME=	ba73858

ALL_TARGET=	ethflopd

PLIST_FILES=	etc/rc.d/ethflopd \
		sbin/ethflopd

PORTDOCS=	ethflop.txt history.txt ideas.txt

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ethflopd ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_SCRIPT} ${FILESDIR}/ethflopd ${STAGEDIR}${PREFIX}/etc/rc.d

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
