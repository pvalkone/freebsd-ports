# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	byuu
PORTVERSION=	1.4
CATEGORIES=	emulators

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Multi-system emulator

LICENSE=	GPLv3

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		gl gmake gnome openal sdl xorg
USE_GL=		gl
USE_GNOME=	cairo gdkpixbuf2 gtksourceview2
USE_XORG=	x11 xext xrandr xv
USE_SDL=	sdl2

PLIST_FILES=	bin/byuu \
		${DATADIR}/Database/BS\ Memory.bml \
		${DATADIR}/Database/Sufami\ Turbo.bml \
		${DATADIR}/Database/Super\ Famicom.bml \
		${DATADIR}/Firmware/cx4.data.rom \
		${DATADIR}/Firmware/sgb1.boot.rom \
		${DATADIR}/Firmware/sgb2.boot.rom

USE_GITHUB=	yes
GH_ACCOUNT=	byuu
GH_TAGNAME=	33cf9dd

do-build:
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${GMAKE} -C higan target=byuu local=false

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/higan/out/byuu ${STAGEDIR}${PREFIX}/bin

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/byuu
.for d in Database Firmware
	(cd ${WRKSRC}/icarus && ${COPYTREE_SHARE} ${d} ${STAGEDIR}${DATADIR})
.endfor

.include <bsd.port.mk>
