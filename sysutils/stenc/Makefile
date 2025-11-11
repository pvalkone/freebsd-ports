PORTNAME=	stenc
DISTVERSION=	2.0.1
CATEGORIES=	sysutils

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	SCSI Tape Encryption Manager
WWW=		https://github.com/scsitape/stenc

LICENSE=	GPLv2

BUILD_DEPENDS=	pandoc:textproc/hs-pandoc
RUN_DEPENDS=	bash-completion>0:shells/bash-completion

USES=		autoreconf compiler:c++17-lang pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	scsitape

GNU_CONFIGURE=	yes

TEST_TARGET=	check

PLIST_FILES=	bin/${PORTNAME} \
		share/bash-completion/completions/${PORTNAME} \
		share/man/man1/${PORTNAME}.1.gz

pre-configure:
	@(cd ${WRKSRC} && ./autogen.sh)

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/bash-completion/completions
	${INSTALL_MAN}	${WRKSRC}/man/${PORTNAME}.1		${STAGEDIR}${PREFIX}/share/man/man1
	${INSTALL_DATA} ${WRKSRC}/bash-completion/${PORTNAME}	${STAGEDIR}${PREFIX}/share/bash-completion/completions/${PORTNAME}

.include <bsd.port.mk>
