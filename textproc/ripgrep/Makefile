# Created by: Petteri Valkonen <petteri.valkonen@iki.fi>
# $FreeBSD$

# vim: ts=8 noet

PORTNAME=		ripgrep
PORTVERSION=		0.4.0
CATEGORIES=		textproc
MASTER_SITES=		#

MAINTAINER=		petteri.valkonen@iki.fi
COMMENT=		Command line search tool

LICENSE=		MIT UNLICENSE
LICENSE_COMB=		dual
LICENSE_NAME_UNLICENSE=	The Unlicense
LICENSE_FILE_UNLICENSE=	${WRKSRC}/UNLICENSE
LICENSE_PERMS_UNLICENSE=dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

CARGO_DEPENDENCY=	cargo:devel/cargo
FETCH_DEPENDS=		${CARGO_DEPENDENCY}
BUILD_DEPENDS=		${CARGO_DEPENDENCY}

PLIST_FILES=		bin/rg \
			man/man1/rg.1.gz
PORTDOCS=		COPYING README.md CHANGELOG.md

.include <bsd.port.pre.mk>

do-fetch:
.if !exists(${DISTDIR}/${DISTNAME}${EXTRACT_SUFX})
	${FETCH_CMD} -o ${DISTDIR}/${DISTNAME}${EXTRACT_SUFX} \
		https://github.com/BurntSushi/${PORTNAME}/archive/${PORTVERSION}${EXTRACT_SUFX}
.endif
.if !exists(${DISTDIR}/${DISTNAME}-registry${EXTRACT_SUFX})
	${MKDIR} ${WRKDIR}
	${TAR} -C ${WRKDIR} -xf ${DISTDIR}/${DISTNAME}${EXTRACT_SUFX}
	cd ${WRKSRC} && \
	CARGO_HOME='${WRKDIR}/.cargo' cargo fetch
	${TAR} -C ${WRKDIR} --exclude .git -czf ${DISTDIR}/${DISTNAME}-registry${EXTRACT_SUFX} .cargo
.endif

post-extract:
	${TAR} -C ${WRKSRC} -xf ${DISTDIR}/${DISTNAME}-registry${EXTRACT_SUFX}

do-build:
	cd ${WRKSRC} && \
	CARGO_HOME='${WRKSRC}/.cargo' cargo build --frozen --release

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/target/release/rg ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/doc/rg.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.post.mk>
