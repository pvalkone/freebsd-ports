PORTNAME=	httm
DISTVERSION=	0.9.0-20220507
CATEGORIES=	sysutils

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Interactive, file-level ZFS Time Machine-like tool

LICENSE=	MPL20

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	kimono-koans
GH_TAGNAME=	90570efbe1cac1689fa8f19cec56915f8bf3468e

CARGO_CRATES=	aho-corasick-0.7.18 \
		ansi_term-0.12.1 \
		arrayvec-0.5.2 \
		atty-0.2.14 \
		autocfg-1.1.0 \
		base-x-0.2.8 \
		beef-0.5.1 \
		bitflags-1.3.2 \
		bumpalo-3.9.1 \
		byteorder-1.4.3 \
		cc-1.0.73 \
		cfg-if-0.1.10 \
		cfg-if-1.0.0 \
		chrono-0.4.19 \
		clap-2.34.0 \
		clap-3.1.5 \
		const_fn-0.4.9 \
		crossbeam-0.8.1 \
		crossbeam-channel-0.4.4 \
		crossbeam-channel-0.5.2 \
		crossbeam-deque-0.8.1 \
		crossbeam-epoch-0.9.7 \
		crossbeam-queue-0.3.4 \
		crossbeam-utils-0.7.2 \
		crossbeam-utils-0.8.7 \
		darling-0.10.2 \
		darling_core-0.10.2 \
		darling_macro-0.10.2 \
		defer-drop-1.2.0 \
		derive_builder-0.9.0 \
		derive_builder_core-0.9.0 \
		dirs-2.0.2 \
		dirs-sys-0.3.6 \
		discard-1.0.4 \
		either-1.6.1 \
		env_logger-0.8.4 \
		fnv-1.0.7 \
		fuzzy-matcher-0.3.7 \
		fxhash-0.2.1 \
		getrandom-0.2.5 \
		hashbrown-0.11.2 \
		hermit-abi-0.1.19 \
		humantime-2.1.0 \
		ident_case-1.0.1 \
		indexmap-1.8.0 \
		itoa-1.0.1 \
		lazy_static-1.4.0 \
		libc-0.2.119 \
		log-0.4.14 \
		lscolors-0.9.0 \
		maybe-uninit-2.0.0 \
		memchr-2.4.1 \
		memoffset-0.6.5 \
		nix-0.14.1 \
		nix-0.19.1 \
		num-integer-0.1.44 \
		num-traits-0.2.14 \
		num_cpus-1.13.1 \
		number_prefix-0.4.0 \
		once_cell-1.10.0 \
		os_str_bytes-6.0.0 \
		proc-macro-hack-0.5.19 \
		proc-macro2-1.0.36 \
		quote-1.0.15 \
		rayon-1.5.1 \
		rayon-core-1.9.1 \
		redox_syscall-0.2.11 \
		redox_users-0.4.0 \
		regex-1.5.5 \
		regex-syntax-0.6.25 \
		rustc_version-0.2.3 \
		ryu-1.0.9 \
		scopeguard-1.1.0 \
		semver-0.9.0 \
		semver-parser-0.7.0 \
		serde-1.0.136 \
		serde_derive-1.0.136 \
		serde_json-1.0.79 \
		sha1-0.6.1 \
		sha1_smol-1.0.0 \
		shlex-0.1.1 \
		skim-0.9.4 \
		standback-0.2.17 \
		stdweb-0.4.20 \
		stdweb-derive-0.5.3 \
		stdweb-internal-macros-0.2.9 \
		stdweb-internal-runtime-0.1.5 \
		strsim-0.8.0 \
		strsim-0.9.3 \
		strsim-0.10.0 \
		syn-1.0.86 \
		term-0.6.1 \
		termcolor-1.1.3 \
		terminal_size-0.1.17 \
		textwrap-0.11.0 \
		textwrap-0.15.0 \
		thread_local-1.1.4 \
		time-0.1.44 \
		time-0.2.27 \
		time-macros-0.1.1 \
		time-macros-impl-0.1.2 \
		timer-0.2.0 \
		tuikit-0.4.5 \
		unicode-width-0.1.9 \
		unicode-xid-0.2.2 \
		utf8parse-0.2.0 \
		vec_map-0.8.2 \
		version_check-0.9.4 \
		void-1.0.2 \
		vte-0.9.0 \
		vte_generate_state_changes-0.1.1 \
		wasi-0.10.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.79 \
		wasm-bindgen-backend-0.2.79 \
		wasm-bindgen-macro-0.2.79 \
		wasm-bindgen-macro-support-0.2.79 \
		wasm-bindgen-shared-0.2.79 \
		which-4.2.4 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0

PLIST_FILES=	bin/httm \
		man/man1/httm.1.gz

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/httm
	${INSTALL_MAN} ${WRKSRC}/httm.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
