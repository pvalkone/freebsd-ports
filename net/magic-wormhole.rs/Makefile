PORTNAME=	magic-wormhole.rs
DISTVERSION=	0.7.6
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Get things from one computer to another, safely
WWW=		https://github.com/magic-wormhole/magic-wormhole.rs

LICENSE=	EUPL12

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	magic-wormhole

WRKSRC_SUBDIR=	cli

BINARY_NAME=	wormhole-rs

PLIST_FILES=	bin/${BINARY_NAME} \
		share/man/man1/wormhole.1.gz

OPTIONS_DEFINE=		COMPLETIONS
OPTIONS_DEFAULT=	COMPLETIONS

COMPLETIONS_DESC=	Install bash, zsh, and fish shell completions

COMPLETIONS_PLIST_FILES=	share/bash-completion/completions/${BINARY_NAME}.bash \
				share/fish/vendor_completions.d/${BINARY_NAME}.fish \
				share/zsh/site-functions/_${BINARY_NAME}

post-install:
	${INSTALL_MAN} ${WRKSRC}/../wormhole.1 ${STAGEDIR}${PREFIX}/share/man/man1

post-install-COMPLETIONS-on:
.for _shell in bash fish zsh
	${STAGEDIR}${PREFIX}/bin/${BINARY_NAME} completion ${_shell} > \
		${STAGEDIR}${PREFIX}/${COMPLETIONS_PLIST_FILES:M*${_shell}*}
.endfor

.include <bsd.port.mk>
