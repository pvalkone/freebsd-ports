PORTNAME=	dsf2flac
PORTVERSION=	0.1Rev54
CATEGORIES=	audio

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Tool for translating DSD audio files into PCM
WWW=		https://github.com/hank/dsf2flac

LICENSE=	GPLv2

LIB_DEPENDS=	libboost_system.so:devel/boost-libs \
		libFLAC++.so:audio/flac \
		libFLAC.so:audio/flac \
		libid3.so:audio/id3lib \
		libtag.so:audio/taglib

USES=		autoreconf:build libtool pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	hank
GH_TAGNAME=	b0cf5aa

PLIST_FILES=	bin/dsf2flac

post-patch:
	@${REINPLACE_CMD} -e 's|/usr|${LOCALBASE}|g' ${WRKSRC}/m4/ax_lib_id3.m4
	@${REINPLACE_CMD} \
		-e 's|streampos|std::streampos|' \
		-e 's|streamoff|std::streamoff|' ${WRKSRC}/src/fstream_plus.*

pre-configure:
	cd ${WRKSRC} && ./autogen.sh

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/dsf2flac ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
