# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	magnet2torrent
PORTVERSION=	20170213
PORTEPOCH=	0
CATEGORIES=	net-p2p
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Command line tool that converts magnet links into .torrent files

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/libtorrent.so:net-p2p/libtorrent-rasterbar-python

PLIST_FILES=	bin/magnet2torrent

USE_GITHUB=	yes
GH_ACCOUNT=	danfolkes
GH_PROJECT=	Magnet2Torrent
GH_TAGNAME=	8a31931

USES=		python shebangfix
NO_ARCH=	yes
NO_BUILD=	yes
SHEBANG_FILES=	Magnet_To_Torrent2.py

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/Magnet_To_Torrent2.py ${STAGEDIR}${PREFIX}/bin/magnet2torrent

.include <bsd.port.mk>
