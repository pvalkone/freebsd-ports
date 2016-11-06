# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	 i3-gaps-next
PORTVERSION=	 4.12.20161106
CATEGORIES=	 x11-wm

MAINTAINER=	 petteri.valkonen@iki.fi
COMMENT=	 Fork of the i3wm tiling window manager (next branch)

LICENSE=	 BSD3CLAUSE

LIB_DEPENDS=	 libstartup-notification-1.so:x11/startup-notification \
		 libxcb-util.so:x11/xcb-util \
		 libxcb-keysyms.so:x11/xcb-util-keysyms \
		 libxcb-icccm.so:x11/xcb-util-wm \
		 libev.so:devel/libev \
		 libyajl.so:devel/yajl \
		 libcairo.so:graphics/cairo \
		 libpangocairo-1.0.so:x11-toolkits/pango \
		 libpcre.so:devel/pcre \
		 libxcb-cursor.so:x11/xcb-util-cursor \
		 libxkbcommon.so:x11/libxkbcommon \
		 libxcb-xrm.so:x11/xcb-util-xrm \
		 libiconv.so:converters/libiconv \
		 libgobject-2.0.so:devel/glib20 \
		 libintl.so:devel/gettext-runtime

CFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	 -L${LOCALBASE}/lib -liconv
USES=		 gmake pkgconfig autoreconf
USE_GCC=	 yes
GNU_CONFIGURE=	 yes
USE_XORG=	 xcb
USE_GITHUB=	 yes
GH_ACCOUNT=	 Airblader
GH_PROJECT=	 i3
GH_TAGNAME=	 c438cab

RELEASE_VERSION=${PORTVERSION}
RELEASE_DATE=	`${ECHO_CMD} "${PORTVERSION}" | ${SED} -n 's/.*\.\([0-9]\{4\}\)\([0-9]\{2\}\)\([0-9]\{2\}\)$$/\1-\2-\3/p'`
RELEASE_BRANCH=	`${SED} -n 's/export RELEASE_BRANCH="\(.*\)"/\1/p' ${WRKSRC}/release.sh`

BUILDDIR=${WRKSRC}/build

post-patch:
	${ECHO_CMD} "${RELEASE_VERSION}" > ${WRKSRC}/VERSION
	${ECHO_CMD} "${RELEASE_VERSION} (${RELEASE_DATE}, branch \"${RELEASE_BRANCH}\")" > ${WRKSRC}/I3_VERSION

do-configure:
	cd ${WRKSRC} && \
	${AUTORECONF} -fi && \
	${MKDIR} ${BUILDDIR} && \
	cd ${BUILDDIR} && \
	LDFLAGS="${LDFLAGS}" ../configure

do-build:
	cd ${BUILDDIR} && ${GMAKE}

do-install:
	cd ${BUILDDIR} && ${GMAKE} install DESTDIR="${STAGEDIR}"

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/i3-config-wizard \
	${STAGEDIR}${PREFIX}/bin/i3-nagbar \
	${STAGEDIR}${PREFIX}/bin/i3bar \
	${STAGEDIR}${PREFIX}/bin/i3 \
	${STAGEDIR}${PREFIX}/bin/i3-input \
	${STAGEDIR}${PREFIX}/bin/i3-msg \
	${STAGEDIR}${PREFIX}/bin/i3-dump-log

.include <bsd.port.mk>
