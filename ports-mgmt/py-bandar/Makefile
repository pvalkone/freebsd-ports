# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	bandar
DISTVERSION=	0.1.0_1
CATEGORIES=	ports-mgmt python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Create development overlays for the ports tree

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	git:${PORTSDIR}/devel/git \
		port:${PORTSDIR}/ports-mgmt/porttools \
		poudriere:${PORTSDIR}/ports-mgmt/poudriere \
		fusefs-unionfs>=1.0:${PORTSDIR}/sysutils/fusefs-unionfs

WRKSRC=		${WRKDIR}/${PORTNAME}-`echo "${DISTVERSION}" | ${SED} 's/_[0-9+]$$//'`
USES=		python:3.2+
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
