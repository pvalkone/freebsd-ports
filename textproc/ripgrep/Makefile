# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		ripgrep
PORTVERSION=		0.3.2
PORTREVISION=		2
CATEGORIES=		textproc

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Command line search tool

LICENSE=		MIT UNLICENSE
LICENSE_COMB=		dual
LICENSE_NAME_UNLICENSE=	The Unlicense
LICENSE_FILE_UNLICENSE=	${WRKSRC}/UNLICENSE
LICENSE_PERMS_UNLICENSE=dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=		cargo:devel/cargo

USE_GITHUB=		yes
GH_ACCOUNT=		BurntSushi

do-build:
	cd ${WRKSRC} && \
	CARGO_HOME='${WRKDIR}/.cargo' cargo build --release

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/target/release/rg ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/doc/rg.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in COPYING README.md CHANGELOG.md
	${INSTALL_MAN} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
