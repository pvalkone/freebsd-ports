PORTNAME=	scrutiny
DISTVERSIONPREFIX=	v
# Maintenance: after updating DISTVERSION, regenerate files/modules.txt
# with 'go mod vendor' in a copy of the source.
DISTVERSION=	1.76.4
PORTREVISION=	1
CATEGORIES=	sysutils
PKGNAMESUFFIX=	-collector

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	S.M.A.R.T. and ZFS collectors for the Scrutiny disk monitor
WWW=		https://github.com/Starosdev/scrutiny

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	smartctl:sysutils/smartmontools

USES=		go:modules
USE_GITHUB=	yes
GH_ACCOUNT=	Starosdev

# GH_TUPLE only lists the modules that 'go list -deps' reports for the
# GO_TARGET packages.
GH_TUPLE=	cpuguy83:go-md2man:v2.0.7:cpuguy83_go_md2man_v2/vendor/github.com/cpuguy83/go-md2man/v2 \
		fatih:color:v1.19.0:fatih_color/vendor/github.com/fatih/color \
		fsnotify:fsnotify:v1.10.1:fsnotify_fsnotify/vendor/github.com/fsnotify/fsnotify \
		go-gorm:gorm:v1.31.2:go_gorm_gorm/vendor/gorm.io/gorm \
		go-viper:mapstructure:v2.5.0:go_viper_mapstructure_v2/vendor/github.com/go-viper/mapstructure/v2 \
		go-yaml:yaml:v3.0.1:go_yaml_yaml/vendor/gopkg.in/yaml.v3 \
		golang:sys:v0.48.0:golang_sys/vendor/golang.org/x/sys \
		golang:text:v0.42.0:golang_text/vendor/golang.org/x/text \
		jaypipes:ghw:v0.25.0:jaypipes_ghw/vendor/github.com/jaypipes/ghw \
		jaypipes:pcidb:v1.1.1:jaypipes_pcidb/vendor/github.com/jaypipes/pcidb \
		jinzhu:inflection:v1.0.0:jinzhu_inflection/vendor/github.com/jinzhu/inflection \
		jinzhu:now:v1.1.5:jinzhu_now/vendor/github.com/jinzhu/now \
		mattn:go-colorable:v0.1.15:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
		mattn:go-isatty:v0.0.24:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
		pelletier:go-toml:v2.4.3:pelletier_go_toml_v2/vendor/github.com/pelletier/go-toml/v2 \
		robfig:cron:v3.0.1:robfig_cron_v3/vendor/github.com/robfig/cron/v3 \
		russross:blackfriday:v2.1.0:russross_blackfriday_v2/vendor/github.com/russross/blackfriday/v2 \
		sagikazarmark:locafero:v0.12.0:sagikazarmark_locafero/vendor/github.com/sagikazarmark/locafero \
		samber:lo:v1.53.0:samber_lo/vendor/github.com/samber/lo \
		sirupsen:logrus:v1.10.2:sirupsen_logrus/vendor/github.com/sirupsen/logrus \
		spf13:afero:v1.15.0:spf13_afero/vendor/github.com/spf13/afero \
		spf13:cast:v1.10.0:spf13_cast/vendor/github.com/spf13/cast \
		spf13:pflag:v1.0.10:spf13_pflag/vendor/github.com/spf13/pflag \
		spf13:viper:v1.21.0:spf13_viper/vendor/github.com/spf13/viper \
		subosito:gotenv:v1.6.0:subosito_gotenv/vendor/github.com/subosito/gotenv \
		uber-go:automaxprocs:v1.6.0:uber_go_automaxprocs/vendor/go.uber.org/automaxprocs \
		urfave:cli:v2.27.7:urfave_cli_v2/vendor/github.com/urfave/cli/v2 \
		xrash:smetrics:686a1a2994c1:xrash_smetrics/vendor/github.com/xrash/smetrics \
		yaml:go-yaml:v3.0.5:yaml_go_yaml/vendor/go.yaml.in/yaml/v3

GO_TARGET=	./collector/cmd/collector-metrics:scrutiny-collector-metrics \
		./collector/cmd/collector-zfs:scrutiny-collector-zfs
GO_BUILDFLAGS=	-ldflags "-X main.goos=${OPSYS:tl} -X main.goarch=${ARCH}"

SUB_FILES=	pkg-message

PLIST_FILES=	bin/scrutiny-collector-metrics \
		bin/scrutiny-collector-zfs \
		"@dir etc/scrutiny" \
		"@sample etc/scrutiny/collector.yaml.sample"

post-extract:
	@${MKDIR} ${WRKSRC}/vendor
	${INSTALL_DATA} ${FILESDIR}/modules.txt ${WRKSRC}/vendor/modules.txt

post-patch:
	@${REINPLACE_CMD} -e 's|/opt/scrutiny/config|${PREFIX}/etc/scrutiny|g' \
		${WRKSRC}/collector/cmd/collector-metrics/collector-metrics.go \
		${WRKSRC}/collector/cmd/collector-zfs/collector-zfs.go \
		${WRKSRC}/example.collector.yaml

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/scrutiny
	${INSTALL_DATA} ${WRKSRC}/example.collector.yaml \
		${STAGEDIR}${PREFIX}/etc/scrutiny/collector.yaml.sample

.include <bsd.port.mk>
