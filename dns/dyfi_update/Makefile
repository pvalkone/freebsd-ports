# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	dyfi_update
PORTVERSION=	1.2.0
CATEGORIES=	dns
MASTER_SITES=	http://www.dy.fi/files/
DISTNAME=	dyfi-update-pl-${DISTVERSION}

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Perl client for updating dy.fi hostnames automatically

LICENSE=	GPLv2

SCRIPT_FILE=	dyfi-update.pl
CONF_FILE=	dyfi-update.conf
PLIST_FILES=	bin/${SCRIPT_FILE} \
		"@sample etc/${CONF_FILE}.sample" \
		etc/rc.d/${PORTNAME}
SUB_FILES=	${PORTNAME}
SUB_LIST+=	SCRIPT_FILE=${SCRIPT_FILE} \
		CONF_FILE=${CONF_FILE}

NO_BUILD=	yes
NO_ARCH=	yes
USES=		perl5 shebangfix
USE_PERL5=	run
SHEBANG_FILES=	${SCRIPT_FILE}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${SCRIPT_FILE} ${STAGEDIR}${PREFIX}/bin

post-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/etc/rc.d/
	${INSTALL_DATA} ${WRKSRC}/${CONF_FILE} ${STAGEDIR}${PREFIX}/etc/${CONF_FILE}.sample

.include <bsd.port.mk>
