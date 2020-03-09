# $FreeBSD$

PORTNAME=		zoxide
DISTVERSIONPREFIX=	v
DISTVERSION=		0.1.1
CATEGORIES=		sysutils

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Cd command that learns your habits

LICENSE=	MIT

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	ajeetdsouza

CARGO_CRATES=	ansi_term-0.11.0 \
		atty-0.2.14 \
		arrayref-0.3.6 \
		arrayvec-0.5.1 \
		autocfg-1.0.0 \
		backtrace-sys-0.1.33 \
		backtrace-0.3.45 \
		base64-0.11.0 \
		bincode-1.2.1 \
		bitflags-1.2.1 \
		blake2b_simd-0.5.10 \
		byteorder-1.3.4 \
		cc-1.0.50 \
		cfg-if-0.1.10 \
		clap-2.33.0 \
		constant_time_eq-0.1.5 \
		crossbeam-utils-0.7.2 \
		dirs-sys-0.3.4 \
		dirs-2.0.2 \
		failure_derive-0.1.7 \
		failure-0.1.7 \
		fs2-0.4.3 \
		getrandom-0.1.14 \
		hermit-abi-0.1.8 \
		lazy_static-1.4.0 \
		libc-0.2.67 \
		proc-macro2-1.0.9 \
		quote-1.0.3 \
		redox_users-0.3.4 \
		redox_syscall-0.1.56 \
		rust-argon2-0.7.0 \
		rustc-demangle-0.1.16 \
		serde_derive-1.0.104 \
		serde-1.0.104 \
		strsim-0.8.0 \
		syn-1.0.16 \
		synstructure-0.12.3 \
		textwrap-0.11.0 \
		unicode-width-0.1.7 \
		unicode-xid-0.2.0 \
		vec_map-0.8.1 \
		wasi-0.9.0+wasi-snapshot-preview1 \
		winapi-0.3.8 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-x86_64-pc-windows-gnu-0.4.0

PLIST_FILES=	bin/${PORTNAME} \
		${DATADIR}/${PORTNAME}.plugin.zsh

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.plugin.zsh ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
