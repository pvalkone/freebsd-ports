# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	chrome-browserpass
PORTVERSION=	1.0.2.20170210
CATEGORIES=	www

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Chrome browser extension for pass, a UNIX password manager

LICENSE=	MIT

BUILD_DEPENDS=	chrome:www/chromium \
		go:lang/go \
		git:devel/git

RUN_DEPENDS=	chrome:www/chromium \
		pass:sysutils/password-store

USE_GITHUB=	yes
GH_ACCOUNT=	dannyvankooten
GH_PROJECT=	browserpass
GH_TAGNAME=	40f8f76

NATIVE_MSG_DIR=	etc/chrome/native-messaging-hosts
POLICY_DIR=	etc/chrome/policies/managed
APP_NAME=	com.dannyvankooten.browserpass

PLIST_FILES=	${NATIVE_MSG_DIR}/${PORTNAME} \
		${NATIVE_MSG_DIR}/${APP_NAME}.json \
		${POLICY_DIR}/${APP_NAME}.json

post-patch:
	@${REINPLACE_CMD} -e 's|%%replace%%|${PREFIX}/${NATIVE_MSG_DIR}/${PORTNAME}|' ${WRKSRC}/chrome/host.json

do-build:
	cd ${WRKSRC} && \
	${SETENV} GOPATH="${WRKSRC}" go get github.com/mattn/go-zglob && \
	${SETENV} GOPATH="${WRKSRC}" go build -v -o ${PORTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${NATIVE_MSG_DIR}
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/${NATIVE_MSG_DIR}/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/chrome/host.json ${STAGEDIR}${PREFIX}/${NATIVE_MSG_DIR}/${APP_NAME}.json
	${MKDIR} ${STAGEDIR}${PREFIX}/${POLICY_DIR}
	${INSTALL_DATA} ${WRKSRC}/chrome/policy.json ${STAGEDIR}${PREFIX}/${POLICY_DIR}/${APP_NAME}.json

.include <bsd.port.mk>
