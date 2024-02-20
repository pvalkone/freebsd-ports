PORTNAME=	zfs_to_glacier
PORTVERSION=	e6c376993da13ec0295999cc332b445338b9f5c2
CATEGORIES=	sysutils

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Tool to sync ZFS snapshots to S3 Glacier
WWW=		https://github.com/andaag/zfs-to-glacier

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo ssl
USE_GITHUB=	yes
GH_ACCOUNT=	andaag
GH_PROJECT=	zfs-to-glacier

PLIST_FILES=	bin/zfs_to_glacier

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/zfs_to_glacier

.include <bsd.port.mk>
