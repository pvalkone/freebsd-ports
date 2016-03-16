# $FreeBSD$

# vim: ts=8 noet

PORTNAME=	 i3-gaps-next
PORTVERSION=	 4.12.20160309
CATEGORIES=	 x11-wm

MAINTAINER=	 petteri.valkonen@iki.fi
COMMENT=	 Fork of the i3wm tiling window manager (next branch)

LICENSE=	 BSD3CLAUSE

LIB_DEPENDS=	 libstartup-notification-1.so:${PORTSDIR}/x11/startup-notification \
		 libxcb-util.so:${PORTSDIR}/x11/xcb-util \
		 libxcb-keysyms.so:${PORTSDIR}/x11/xcb-util-keysyms \
		 libxcb-icccm.so:${PORTSDIR}/x11/xcb-util-wm \
		 libev.so:${PORTSDIR}/devel/libev \
		 libyajl.so:${PORTSDIR}/devel/yajl \
		 libcairo.so:${PORTSDIR}/graphics/cairo \
		 libpangocairo-1.0.so:${PORTSDIR}/x11-toolkits/pango \
		 libpcre.so:${PORTSDIR}/devel/pcre \
		 libxcb-cursor.so:${PORTSDIR}/x11/xcb-util-cursor \
		 libxkbcommon.so:${PORTSDIR}/x11/libxkbcommon

CFLAGS+=	 -I${LOCALBASE}/include
USES=		 gmake pkgconfig
USE_XORG=	 xcb
USE_GITHUB=	 yes
GH_ACCOUNT=	 Airblader
GH_PROJECT=	 i3
GH_TAGNAME=	 d7fd3c0

RELEASE_VERSION=${PORTVERSION}
RELEASE_DATE=	`${ECHO_CMD} "${PORTVERSION}" | ${SED} -n 's/.*\.\([0-9]\{4\}\)\([0-9]\{2\}\)\([0-9]\{2\}\)$$/\1-\2-\3/p'`
RELEASE_BRANCH=	`${SED} -n 's/export RELEASE_BRANCH="\(.*\)"/\1/p' ${WRKSRC}/release.sh`

post-patch:
	${ECHO_CMD} "${RELEASE_VERSION}" > ${WRKSRC}/VERSION
	${ECHO_CMD} "${RELEASE_VERSION} (${RELEASE_DATE}, branch \\\"${RELEASE_BRANCH}\\\")" > ${WRKSRC}/I3_VERSION

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/i3-config-wizard \
	${STAGEDIR}${PREFIX}/bin/i3-nagbar \
	${STAGEDIR}${PREFIX}/bin/i3bar \
	${STAGEDIR}${PREFIX}/bin/i3 \
	${STAGEDIR}${PREFIX}/bin/i3-input \
	${STAGEDIR}${PREFIX}/bin/i3-msg \
	${STAGEDIR}${PREFIX}/bin/i3-dump-log

.include <bsd.port.mk>
