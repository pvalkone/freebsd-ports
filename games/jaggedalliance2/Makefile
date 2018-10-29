# Created by: Christoph Mallon <christoph.mallon@gmx.de>
# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		ja2
PORTVERSION=		0.14.01
DISTVERSIONPREFIX=	v
PORTREVISION=		1
CATEGORIES=		games

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Port of "Jagged Alliance 2" using SDL

# Ignore this if you feel adventurous
ONLY_FOR_ARCHS=		aarch64 amd64 arm armv6 armv7 i386
ONLY_FOR_ARCHS_REASON=	Needs a little endian environment

USES=		gmake tar:bzip2

NO_CDROM=	License only permits non-commercial use

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}
USE_SDL=	sdl
USE_GCC=	yes
USE_CXXSTD=	gnu++98
USE_GITHUB=	yes
GH_ACCOUNT=	ja2-stracciatella
GH_PROJECT=	ja2-stracciatella

MAKE_ENV=	Q=

SUB_FILES=	pkg-message

post-patch:
	@${REINPLACE_CMD} -e 's|/some/place/where/the/data/is|${DATADIR}|' \
		${WRKSRC}/sgp/SGP.cc

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/ja2
	${INSTALL_DATA} ${WRKSRC}/_build/distr-files-linux/ja2-stracciatella.desktop \
		${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${WRKSRC}/Build/Res/jagged3.ico \
		${STAGEDIR}${PREFIX}/share/pixmaps/jagged2.ico

.include <bsd.port.mk>
