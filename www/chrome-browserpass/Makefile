# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	chrome-browserpass
PORTVERSION=	1.0.4
CATEGORIES=	www

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Chrome browser extension for pass, a UNIX password manager

LICENSE=	MIT

RUN_DEPENDS=	chrome:www/chromium \
		pass:sysutils/password-store

USE_GITHUB=	yes
GH_ACCOUNT=	dannyvankooten
GH_PROJECT=	browserpass
USES=		go
GO_PKGNAME=	github.com/${GH_ACCOUNT}/${GH_PROJECT}

NATIVE_MSG_DIR=	etc/chrome/native-messaging-hosts
POLICY_DIR=	etc/chrome/policies/managed
APP_NAME=	com.dannyvankooten.browserpass

PLIST_FILES=	${NATIVE_MSG_DIR}/${PORTNAME} \
		${NATIVE_MSG_DIR}/${APP_NAME}.json \
		${POLICY_DIR}/${APP_NAME}.json

post-patch:
	@${REINPLACE_CMD} -e 's|%%replace%%|${PREFIX}/${NATIVE_MSG_DIR}/${PORTNAME}|' ${WRKSRC}/chrome/host.json

do-build:
	@(cd ${GO_WRKSRC}; ${SETENV} ${MAKE_ENV} ${GO_ENV} ${GO_CMD} build -v -o ${PORTNAME} ./cmd/browserpass)

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${NATIVE_MSG_DIR}
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/${NATIVE_MSG_DIR}/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/chrome/host.json ${STAGEDIR}${PREFIX}/${NATIVE_MSG_DIR}/${APP_NAME}.json
	${MKDIR} ${STAGEDIR}${PREFIX}/${POLICY_DIR}
	${INSTALL_DATA} ${WRKSRC}/chrome/policy.json ${STAGEDIR}${PREFIX}/${POLICY_DIR}/${APP_NAME}.json

.include <bsd.port.mk>
