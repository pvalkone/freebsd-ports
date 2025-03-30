PORTNAME=	magic-wormhole.rs
DISTVERSION=	0.7.5
CATEGORIES=	net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Get things from one computer to another, safely
WWW=		https://github.com/magic-wormhole/magic-wormhole.rs

LICENSE=	EUPL12

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	magic-wormhole

WRKSRC_SUBDIR=	cli

PLIST_FILES=	bin/wormhole-rs \
		share/man/man1/wormhole.1.gz

post-install:
	${INSTALL_MAN} ${WRKSRC}/../wormhole.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.mk>
