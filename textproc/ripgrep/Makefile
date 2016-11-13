# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	ripgrep
PORTVERSION=	0.2.9
CATEGORIES=	textproc

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Command line search tool

LICENSE=	MIT

BUILD_DEPENDS=	cargo:devel/cargo

USE_GITHUB=	yes
GH_ACCOUNT=	BurntSushi

PLIST_FILES=	bin/rg

do-build:
	cd ${WRKSRC} && CARGO_HOME='${WRKDIR}/.cargo' cargo build --release

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/target/release/rg ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
