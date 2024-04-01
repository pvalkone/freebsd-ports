PORTNAME=	star_traders
PORTVERSION=	7.20
CATEGORIES=	games
MASTER_SITES=	https://ftp.zap.org.au/pub/trader/unix/
DISTNAME=	trader-${PORTVERSION}

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Simple text-based game of interstellar trading
WWW=		https://www.zap.org.au/projects/trader

LICENSE=	GPLv3

WRKSRC=		${WRKDIR}/${DISTNAME}
USES=		gettext-runtime iconv ncurses tar:xz
GNU_CONFIGURE=	yes

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
