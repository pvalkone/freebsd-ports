PORTNAME=	ethersrv-866
DISTVERSION=	20250324
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Improved fork of the EtherDFS Server for Linux
WWW=		https://github.com/oerg866/ethersrv-866

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	oerg866
GH_TAGNAME=	20a03fe

ALL_TARGET=	ethersrv

PLIST_FILES=	etc/rc.d/ethersrv \
		sbin/ethersrv

PORTDOCS=	README.TXT history.txt

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ethersrv ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_SCRIPT} ${FILESDIR}/ethersrv ${STAGEDIR}${PREFIX}/etc/rc.d

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
