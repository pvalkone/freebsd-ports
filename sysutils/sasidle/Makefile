# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	sasidle
DISTVERSION=	0.3.3
CATEGORIES=	sysutils
MASTER_SITES=
DISTFILES=
EXTRACT_ONLY=

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Script to stop disks in a ZFS pool connected via a SAS HBA

PLIST_FILES=	etc/rc.d/sasidled \
		bin/sasidle

NO_BUILD=	yes
NO_ARCH=	yes

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/sasidled ${STAGEDIR}${PREFIX}/etc/rc.d
	${INSTALL_SCRIPT} ${FILESDIR}/sasidle ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
