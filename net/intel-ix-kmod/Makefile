PORTNAME=	ix
PORTVERSION=	3.4.31
PORTEPOCH=	0
MASTER_SITES?=	https://downloadmirror.intel.com/864024/
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	freebsd@intel.com
COMMENT=	10 gigabit FreeBSD Base Driver for Intel(R) Network Connections

MANPAGENAME=	ix
MANPAGELINKS=	if_ix if_ixgbe

MASTERDIR=	${.CURDIR}/../intel-ixl-kmod
PATCHDIR=	${.CURDIR}/files
PKGDIR=		${.CURDIR}

DISTINFO_FILE=	${.CURDIR}/distinfo

OPTIONS_DEFINE=	SRIOV

SRIOV_DESC=	Enable SR-IOV support (experimental)

post-patch-SRIOV-on:
	@${SED} -i '' 's|SRIOV_ENABLE = 0|SRIOV_ENABLE = 1|g' ${WRKSRC}/Makefile

.include "${MASTERDIR}/Makefile"
