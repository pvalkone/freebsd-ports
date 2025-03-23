PORTNAME=		zxfer
PORTVERSION=		1.1.7
DISTVERSIONPREFIX=	v
CATEGORIES=		filesystems sysutils
PKGNAMESUFFIX=		-raw-sends

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Easily and reliably transfer ZFS filesystems, supports raw sends
WWW=		https://github.com/allanjude/zxfer/pull/55

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	evilham
GH_TAGNAME=	b800526

NO_BUILD=	yes

OPTIONS_DEFINE=	RSYNC

RSYNC_DESC=		Enable RSYNC Support
RSYNC_RUN_DEPENDS=	rsync:net/rsync

PLIST_FILES=	share/man/man8/zxfer.8.gz \
		sbin/zxfer

CONFLICTS_INSTALL=	filesystems/zxfer

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/zxfer ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/zxfer.8 ${STAGEDIR}${PREFIX}/share/man/man8

.include <bsd.port.mk>
