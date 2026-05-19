PORTNAME=	zfs-prune-snapshots
DISTVERSIONPREFIX=	v
DISTVERSION=	1.5.0
PORTREVISION=	1
CATEGORIES=	sysutils

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Prune ZFS snapshots older than a given age by prefix or suffix
WWW=		https://github.com/bahamas10/zfs-prune-snapshots

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	bash:shells/bash

USES=		shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	bahamas10

SHEBANG_FILES=	${PORTNAME}

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME} \
		share/man/man1/${PORTNAME}.1.gz

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${INSTALL_MAN} ${WRKSRC}/man/${PORTNAME}.1 \
		${STAGEDIR}${PREFIX}/share/man/man1/${PORTNAME}.1

.include <bsd.port.mk>
