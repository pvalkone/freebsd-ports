PORTNAME=	nand2tetris
PORTVERSION=	2.7
CATEGORIES=	devel java
MASTER_SITES=	https://drive.google.com/uc?export=download&id=1xZzcMIUETv3u3sdpM_oTJSTetpVee3KZ&dummy=/

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Software suite accompanying the Nand2Tetris course

LICENSE=	GPLv3

USES=		zip
NO_BUILD=	yes
NO_ARCH=	yes

USE_JAVA=	yes
JAVA_OS=	native
JAVA_RUN=	yes
JAVA_VERSION=	8+

WRKSRC=		${WRKDIR}/${PORTNAME}
TOOLS_DIR=	${WRKSRC}/tools
SCRIPT_FILES=	Assembler.sh CPUEmulator.sh HardwareSimulator.sh JackCompiler.sh VMEmulator.sh

post-patch:
.for f in ${SCRIPT_FILES}
	@${REINPLACE_CMD} 's|cd .*|cd ${DATADIR}|' ${TOOLS_DIR}/${f}
.endfor

do-install:
.for f in ${SCRIPT_FILES}
	${INSTALL_SCRIPT} ${TOOLS_DIR}/${f} ${STAGEDIR}${PREFIX}/bin/${f:S,.sh$,,}
.endfor
	@${MKDIR} ${STAGEDIR}${DATADIR}
	@cd ${TOOLS_DIR} && \
	for d in `find . -type d -mindepth 1`; do \
		${MKDIR} ${STAGEDIR}${DATADIR}/$${d}; \
	done && \
	for f in `find bin builtInChips builtInVMCode OS \
			-name '*.jar' \
			-or -name "*.html" \
			-or -name "*.txt" \
			-or -name "*.vm" \
			-or -name "*.gif" \
			-or -name "*.hdl" \
			-or -name "*.class"`; do \
		${INSTALL_DATA} ${TOOLS_DIR}/$${f} ${STAGEDIR}${DATADIR}/$${f}; \
	done

.include <bsd.port.mk>
