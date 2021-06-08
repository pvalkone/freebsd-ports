PORTNAME=   himalaya
DISTVERSIONPREFIX=v
DISTVERSION=0.4.0
CATEGORIES= mail

MAINTAINER= petteri.valkonen@iki.fi
COMMENT=    CLI email client

LICENSE=BSD3CLAUSE

USES=       cargo ssl
USE_GITHUB= yes
GH_ACCOUNT= soywod

CARGO_CRATES=	\
  addr2line-0.14.1 \
  adler-1.0.2 \
  aho-corasick-0.7.18 \
  ansi_term-0.11.0 \
  atty-0.2.14 \
  autocfg-1.0.1 \
  backtrace-0.3.56 \
  base64-0.10.1 \
  base64-0.12.3 \
  base64-0.13.0 \
  bitflags-1.2.1 \
  bitvec-0.19.5 \
  bufstream-0.1.4 \
  byteorder-1.3.4 \
  cc-1.0.67 \
  cfg-if-0.1.10 \
  cfg-if-1.0.0 \
  charset-0.1.2 \
  chrono-0.4.19 \
  clap-2.33.3 \
  cloudabi-0.0.3 \
  core-foundation-0.9.1 \
  core-foundation-sys-0.8.2 \
  encoding_rs-0.8.26 \
  env_logger-0.8.3 \
  error-chain-0.12.4 \
  fastrand-1.4.1 \
  fixedbitset-0.2.0 \
  fnv-1.0.7 \
  foreign-types-0.3.2 \
  foreign-types-shared-0.1.1 \
  funty-1.1.0 \
  getrandom-0.2.2 \
  gimli-0.23.0 \
  hashbrown-0.9.1 \
  hermit-abi-0.1.18 \
  hostname-0.3.1 \
  httpdate-1.0.0 \
  humantime-2.1.0 \
  idna-0.2.3 \
  imap-3.0.0-alpha.3 \
  imap-proto-0.14.1 \
  indexmap-1.6.2 \
  instant-0.1.9 \
  itoa-0.4.7 \
  lazy_static-1.4.0 \
  lettre-0.10.0-rc.1 \
  libc-0.2.94 \
  lock_api-0.3.4 \
  lock_api-0.4.4 \
  log-0.4.14 \
  mailparse-0.13.1 \
  match_cfg-0.1.0 \
  matches-0.1.8 \
  memchr-1.0.2 \
  memchr-2.4.0 \
  mime-0.3.16 \
  miniz_oxide-0.4.4 \
  native-tls-0.2.7 \
  nom-3.2.1 \
  nom-6.1.2 \
  num-integer-0.1.44 \
  num-traits-0.2.14 \
  object-0.23.0 \
  once_cell-1.7.2 \
  openssl-0.10.34 \
  openssl-probe-0.1.4 \
  openssl-sys-0.9.63 \
  parking_lot-0.10.2 \
  parking_lot-0.11.1 \
  parking_lot_core-0.7.2 \
  parking_lot_core-0.8.3 \
  petgraph-0.5.1 \
  pkg-config-0.3.19 \
  ppv-lite86-0.2.10 \
  proc-macro2-1.0.24 \
  quote-1.0.8 \
  quoted_printable-0.4.3 \
  r2d2-0.8.9 \
  radium-0.5.3 \
  rand-0.8.3 \
  rand_chacha-0.3.0 \
  rand_core-0.6.2 \
  rand_hc-0.3.0 \
  redox_syscall-0.1.57 \
  redox_syscall-0.2.8 \
  regex-1.5.4 \
  regex-syntax-0.6.25 \
  remove_dir_all-0.5.3 \
  rfc2047-decoder-0.1.2 \
  rustc-demangle-0.1.18 \
  ryu-1.0.5 \
  schannel-0.1.19 \
  scheduled-thread-pool-0.2.5 \
  scopeguard-1.1.0 \
  security-framework-2.2.0 \
  security-framework-sys-2.2.0 \
  serde-1.0.118 \
  serde_derive-1.0.118 \
  serde_json-1.0.61 \
  smallvec-1.6.1 \
  strsim-0.8.0 \
  syn-1.0.55 \
  tap-1.0.1 \
  tempfile-3.2.0 \
  termcolor-1.1.2 \
  terminal_size-0.1.15 \
  textwrap-0.11.0 \
  time-0.1.44 \
  tinyvec-1.2.0 \
  tinyvec_macros-0.1.0 \
  toml-0.5.8 \
  tree_magic-0.2.3 \
  unicode-bidi-0.3.5 \
  unicode-normalization-0.1.17 \
  unicode-width-0.1.8 \
  unicode-xid-0.2.1 \
  uuid-0.8.2 \
  vcpkg-0.2.12 \
  version_check-0.9.3 \
  wasi-0.10.0+wasi-snapshot-preview1 \
  winapi-0.3.9 \
  winapi-i686-pc-windows-gnu-0.4.0 \
  winapi-util-0.1.5 \
  winapi-x86_64-pc-windows-gnu-0.4.0 \
  wyz-0.2.0

PLIST_FILES=bin/himalaya

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/himalaya

.include <bsd.port.mk>
