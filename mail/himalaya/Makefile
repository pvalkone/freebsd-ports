PORTNAME=	himalaya
DISTVERSIONPREFIX=	v
DISTVERSION=	1.2.0
CATEGORIES=	mail

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	CLI email client
WWW=		https://github.com/pimalaya/himalaya

LICENSE=	BSD3CLAUSE

USES=		cargo ssl
USE_GITHUB=	yes
GH_ACCOUNT=	soywod

PLIST_FILES=	bin/himalaya
PORTDOCS=	README.md

OPTIONS_DEFINE=		COMPLETIONS DOCS
OPTIONS_DEFAULT=	COMPLETIONS DOCS

COMPLETIONS_DESC=	Install shell completions for bash, zsh, and fish

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/himalaya

post-install-COMPLETIONS-on:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/bash-completion/completions
	${MKDIR} ${STAGEDIR}${PREFIX}/share/zsh/site-functions
	${MKDIR} ${STAGEDIR}${PREFIX}/share/fish/vendor_completions.d
	${STAGEDIR}${PREFIX}/bin/himalaya completion bash > ${STAGEDIR}${PREFIX}/share/bash-completion/completions/himalaya
	${STAGEDIR}${PREFIX}/bin/himalaya completion zsh > ${STAGEDIR}${PREFIX}/share/zsh/site-functions/_himalaya
	${STAGEDIR}${PREFIX}/bin/himalaya completion fish > ${STAGEDIR}${PREFIX}/share/fish/vendor_completions.d/himalaya.fish

PLIST_FILES_COMPLETIONS=	share/bash-completion/completions/himalaya \
				share/zsh/site-functions/_himalaya \
				share/fish/vendor_completions.d/himalaya.fish
post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
