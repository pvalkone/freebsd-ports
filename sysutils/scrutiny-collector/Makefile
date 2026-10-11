PORTNAME=	scrutiny
DISTVERSIONPREFIX=	v
# Maintenance: after updating DISTVERSION or the tuples, regenerate
# files/modules.txt with 'go mod vendor' in a copy of the source.
DISTVERSION=	0.9.5
CATEGORIES=	sysutils
PKGNAMESUFFIX=	-collector

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	S.M.A.R.T. metrics collector for the Scrutiny disk monitor
WWW=		https://github.com/AnalogJ/scrutiny

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	smartctl:sysutils/smartmontools

USES=		go:modules
USE_GITHUB=	yes
GH_ACCOUNT=	AnalogJ

GH_TUPLE=	analogj:go-util:39b497cca03b:analogj_go_util/vendor/github.com/analogj/go-util \
		apapsch:go-jsonmerge:v2.0.0:apapsch_go_jsonmerge_v2/vendor/github.com/apapsch/go-jsonmerge/v2 \
		bytedance:gopkg:v0.1.3:bytedance_gopkg/vendor/github.com/bytedance/gopkg \
		bytedance:sonic:loader/v0.5.0:bytedance_sonic_loader \
		bytedance:sonic:v1.15.0:bytedance_sonic/vendor/github.com/bytedance/sonic \
		cloudwego:base64x:v0.1.6:cloudwego_base64x/vendor/github.com/cloudwego/base64x \
		cpuguy83:go-md2man:v2.0.7:cpuguy83_go_md2man_v2/vendor/github.com/cpuguy83/go-md2man/v2 \
		davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
		dustin:go-humanize:v1.0.1:dustin_go_humanize/vendor/github.com/dustin/go-humanize \
		eclipse:paho.golang:v0.23.0:eclipse_paho_golang/vendor/github.com/eclipse/paho.golang \
		fatih:color:v1.18.0:fatih_color/vendor/github.com/fatih/color \
		fsnotify:fsnotify:v1.10.1:fsnotify_fsnotify/vendor/github.com/fsnotify/fsnotify \
		gabriel-vasile:mimetype:v1.4.13:gabriel_vasile_mimetype/vendor/github.com/gabriel-vasile/mimetype \
		gin-contrib:sse:v1.1.0:gin_contrib_sse/vendor/github.com/gin-contrib/sse \
		gin-gonic:gin:v1.11.0:gin_gonic_gin/vendor/github.com/gin-gonic/gin \
		glebarez:go-sqlite:v1.22.0:glebarez_go_sqlite/vendor/github.com/glebarez/go-sqlite \
		glebarez:sqlite:v1.11.0:glebarez_sqlite/vendor/github.com/glebarez/sqlite \
		go-gorm:gorm:v1.31.1:go_gorm_gorm/vendor/gorm.io/gorm \
		go-gormigrate:gormigrate:v2.1.5:go_gormigrate_gormigrate_v2/vendor/github.com/go-gormigrate/gormigrate/v2 \
		go-ole:go-ole:v1.3.0:go_ole_go_ole/vendor/github.com/go-ole/go-ole \
		go-playground:locales:v0.14.1:go_playground_locales/vendor/github.com/go-playground/locales \
		go-playground:universal-translator:v0.18.1:go_playground_universal_translator/vendor/github.com/go-playground/universal-translator \
		go-playground:validator:v10.30.1:go_playground_validator_v10/vendor/github.com/go-playground/validator/v10 \
		go-viper:mapstructure:v2.5.0:go_viper_mapstructure_v2/vendor/github.com/go-viper/mapstructure/v2 \
		go-yaml:yaml:v2.4.0:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
		go-yaml:yaml:v3.0.1:go_yaml_yaml_1/vendor/gopkg.in/yaml.v3 \
		goccy:go-json:v0.10.5:goccy_go_json/vendor/github.com/goccy/go-json \
		goccy:go-yaml:v1.19.2:goccy_go_yaml/vendor/github.com/goccy/go-yaml \
		gofrs:uuid:v5.4.0:gofrs_uuid_v5/vendor/github.com/gofrs/uuid/v5 \
		golang:arch:v0.23.0:golang_arch/vendor/golang.org/x/arch \
		golang:crypto:v0.54.0:golang_crypto/vendor/golang.org/x/crypto \
		golang:exp:716be5621a96:golang_exp/vendor/golang.org/x/exp \
		golang:net:v0.57.0:golang_net/vendor/golang.org/x/net \
		golang:sync:v0.22.0:golang_sync/vendor/golang.org/x/sync \
		golang:sys:v0.47.0:golang_sys/vendor/golang.org/x/sys \
		golang:term:v0.45.0:golang_term/vendor/golang.org/x/term \
		golang:text:v0.40.0:golang_text/vendor/golang.org/x/text \
		google:uuid:v1.6.0:google_uuid/vendor/github.com/google/uuid \
		gorilla:websocket:v1.5.3:gorilla_websocket/vendor/github.com/gorilla/websocket \
		influxdata:influxdb-client-go:v2.14.0:influxdata_influxdb_client_go_v2/vendor/github.com/influxdata/influxdb-client-go/v2 \
		influxdata:line-protocol:b1ad95c89adf:influxdata_line_protocol/vendor/github.com/influxdata/line-protocol \
		jaypipes:ghw:v0.21.2:jaypipes_ghw/vendor/github.com/jaypipes/ghw \
		jaypipes:pcidb:v1.1.1:jaypipes_pcidb/vendor/github.com/jaypipes/pcidb \
		jinzhu:inflection:v1.0.0:jinzhu_inflection/vendor/github.com/jinzhu/inflection \
		jinzhu:now:v1.1.5:jinzhu_now/vendor/github.com/jinzhu/now \
		json-iterator:go:v1.1.12:json_iterator_go/vendor/github.com/json-iterator/go \
		klauspost:cpuid:v2.3.0:klauspost_cpuid_v2/vendor/github.com/klauspost/cpuid/v2 \
		kvz:logstreamer:bf5cfbd32e39:kvz_logstreamer/vendor/github.com/kvz/logstreamer \
		leodido:go-urn:v1.4.0:leodido_go_urn/vendor/github.com/leodido/go-urn \
		mattn:go-colorable:v0.1.15:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
		mattn:go-isatty:v0.0.24:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
		mitchellh:go-homedir:v1.1.0:mitchellh_go_homedir/vendor/github.com/mitchellh/go-homedir \
		modern-go:concurrent:bacd9c7ef1dd:modern_go_concurrent/vendor/github.com/modern-go/concurrent \
		modern-go:reflect2:v1.0.2:modern_go_reflect2/vendor/github.com/modern-go/reflect2 \
		ncruces:go-strftime:v1.0.0:ncruces_go_strftime/vendor/github.com/ncruces/go-strftime \
		nicholas-fedor:shoutrrr:v0.16.3:nicholas_fedor_shoutrrr/vendor/github.com/nicholas-fedor/shoutrrr \
		oapi-codegen:runtime:v1.1.2:oapi_codegen_runtime/vendor/github.com/oapi-codegen/runtime \
		pelletier:go-toml:v2.4.3:pelletier_go_toml_v2/vendor/github.com/pelletier/go-toml/v2 \
		pkg:errors:v0.9.1:pkg_errors/vendor/github.com/pkg/errors \
		pmezard:go-difflib:v1.0.0:pmezard_go_difflib/vendor/github.com/pmezard/go-difflib \
		protocolbuffers:protobuf-go:v1.36.11:protocolbuffers_protobuf_go/vendor/google.golang.org/protobuf \
		quic-go:qpack:v0.6.0:quic_go_qpack/vendor/github.com/quic-go/qpack \
		quic-go:quic-go:v0.59.1:quic_go_quic_go/vendor/github.com/quic-go/quic-go \
		remyoudompheng:bigfft:24d4a6f8daec:remyoudompheng_bigfft/vendor/github.com/remyoudompheng/bigfft \
		russross:blackfriday:v2.1.0:russross_blackfriday_v2/vendor/github.com/russross/blackfriday/v2 \
		sagikazarmark:locafero:v0.12.0:sagikazarmark_locafero/vendor/github.com/sagikazarmark/locafero \
		sirupsen:logrus:v1.9.4:sirupsen_logrus/vendor/github.com/sirupsen/logrus \
		spf13:afero:v1.15.0:spf13_afero/vendor/github.com/spf13/afero \
		spf13:cast:v1.10.0:spf13_cast/vendor/github.com/spf13/cast \
		spf13:pflag:v1.0.10:spf13_pflag/vendor/github.com/spf13/pflag \
		spf13:viper:v1.21.0:spf13_viper/vendor/github.com/spf13/viper \
		stretchr:testify:v1.11.1:stretchr_testify/vendor/github.com/stretchr/testify \
		subosito:gotenv:v1.6.0:subosito_gotenv/vendor/github.com/subosito/gotenv \
		twitchyliquid64:golang-asm:v0.15.1:twitchyliquid64_golang_asm/vendor/github.com/twitchyliquid64/golang-asm \
		uber-go:mock:v0.6.0:uber_go_mock/vendor/go.uber.org/mock \
		ugorji:go:codec/v1.3.1:ugorji_go_codec/vendor/github.com/ugorji/go \
		urfave:cli:v2.27.7:urfave_cli_v2/vendor/github.com/urfave/cli/v2 \
		xrash:smetrics:55b8f293f342:xrash_smetrics/vendor/github.com/xrash/smetrics \
		yaml:go-yaml:v3.0.5:yaml_go_yaml/vendor/go.yaml.in/yaml/v3 \
		yusufpapurcu:wmi:v1.2.4:yusufpapurcu_wmi/vendor/github.com/yusufpapurcu/wmi

GL_TUPLE=	cznic:libc:6e4a801525dcb3e1f9c6a9e560ae30fed5752945:cznic_libc/vendor/modernc.org/libc \
		cznic:mathutil:28129eec384c30a304561c3c8779e4bb29cbff12:cznic_mathutil/vendor/modernc.org/mathutil \
		cznic:memory:0a6f7544739330ad95572cc272626a60176f2faf:cznic_memory/vendor/modernc.org/memory \
		cznic:sqlite:bb6a17d8df4bb5fe2c530d512ca14e8ddfeffc47:cznic_sqlite/vendor/modernc.org/sqlite \
		https://gitlab.howett.net:go:plist:ee69052608d9dc747b37cd807a2a89ff14e93051:go_plist/vendor/howett.net/plist

GO_TARGET=	./collector/cmd/collector-metrics:scrutiny-collector-metrics
GO_BUILDFLAGS=	-ldflags "-X main.goos=${OPSYS:tl} -X main.goarch=${ARCH}"

SUB_FILES=	pkg-message

PLIST_FILES=	bin/scrutiny-collector-metrics \
		"@dir etc/scrutiny" \
		"@sample etc/scrutiny/collector.yaml.sample"

post-extract:
	${INSTALL_DATA} ${FILESDIR}/modules.txt ${WRKSRC}/vendor/modules.txt
	@${RM} -r ${WRKSRC}/vendor/github.com/bytedance/sonic/loader
	@${RLN} ${WRKSRC_bytedance_sonic_loader}/loader ${WRKSRC}/vendor/github.com/bytedance/sonic/loader

post-patch:
	@${REINPLACE_CMD} -e 's|/opt/scrutiny/config|${PREFIX}/etc/scrutiny|g' \
		${WRKSRC}/collector/cmd/collector-metrics/collector-metrics.go \
		${WRKSRC}/example.collector.yaml

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/scrutiny
	${INSTALL_DATA} ${WRKSRC}/example.collector.yaml \
		${STAGEDIR}${PREFIX}/etc/scrutiny/collector.yaml.sample

.include <bsd.port.mk>
