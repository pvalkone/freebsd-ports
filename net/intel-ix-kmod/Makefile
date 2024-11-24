PORTNAME=	ix
PORTVERSION=	3.3.38
PORTREVISION=	0
PORTEPOCH=	0
MASTER_SITES?=	https://downloadmirror.intel.com/822712/

DISTFILES=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	freebsd@intel.com
COMMENT=	10 gigabit FreeBSD Base Driver for Intel(R) Network Connections

MASTERDIR=	${.CURDIR}/../intel-ixl-kmod
PATCHDIR=	${.CURDIR}/files
PKGDIR=		${.CURDIR}
DISTINFO_FILE=	${.CURDIR}/distinfo

OPTIONS_DEFINE=	SRIOV
SRIOV_DESC=	Enable SR-IOV support (experimental)

MANPAGELINKS=

post-patch-SRIOV-on:
	@${SED} -i '' 's|SRIOV_ENABLE = 0|SRIOV_ENABLE = 1|g' ${WRKSRC}/Makefile

.include "${MASTERDIR}/Makefile"
