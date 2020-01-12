# $FreeBSD$

PORTNAME=		kepubify
PORTVERSION=		2.5.0
DISTVERSIONPREFIX=	v
CATEGORIES=		textproc

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	EPUB to KEPUB converter

LICENSE=	MIT

BUILD_DEPENDS=	ca_root_nss>0:security/ca_root_nss

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	geek1011

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
GO_TARGET=	${GO_PKGNAME} \
		${GO_PKGNAME}/covergen \
		${GO_PKGNAME}/seriesmeta

PLIST_FILES=	bin/covergen \
		bin/kepubify \
		bin/seriesmeta

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/bin/* ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
