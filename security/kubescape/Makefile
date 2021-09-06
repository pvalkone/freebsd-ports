PORTNAME=						kubescape
DISTVERSIONPREFIX=	v
DISTVERSION=				1.0.66
CATEGORIES=					security

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=		Tool for testing if Kubernetes is deployed securely

LICENSE=APACHE20

USES=				go:modules
USE_GITHUB=	yes
GH_ACCOUNT=	armosec

PLIST_FILES=bin/kubescape

#do-build:
#	@cd ${WRKSRC}/${PORTNAME} && ${SETENV} GOPATH=${WRKSRC} ${GO_CMD} build .

GH_TUPLE=	\
		Azure:go-autorest:79a63e70c4d8:azure_go_autorest_adal \
		Azure:go-autorest:autorest/v0.11.18:azure_go_autorest_autorest \
		Azure:go-autorest:b3a0b30a7423:azure_go_autorest_date \
		Azure:go-autorest:logger/v0.2.1:azure_go_autorest_logger \
		Azure:go-autorest:tracing/v0.6.0:azure_go_autorest_tracing \
		Azure:go-autorest:v14.2.0:azure_go_autorest/vendor/github.com/Azure/go-autorest \
		OneOfOne:xxhash:v1.2.8:oneofone_xxhash/vendor/github.com/OneOfOne/xxhash \
		aws:aws-sdk-go:v1.40.30:aws_aws_sdk_go/vendor/github.com/aws/aws-sdk-go \
		briandowns:spinner:v1.16.0:briandowns_spinner/vendor/github.com/briandowns/spinner \
		bytecodealliance:wasmtime-go:v0.28.0:bytecodealliance_wasmtime_go/vendor/github.com/bytecodealliance/wasmtime-go \
		coreos:go-oidc:v2.2.1:coreos_go_oidc/vendor/github.com/coreos/go-oidc \
		davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
		docker:go-connections:v0.4.0:docker_go_connections/vendor/github.com/docker/go-connections \
		docker:go-units:v0.4.0:docker_go_units/vendor/github.com/docker/go-units \
		enescakir:emoji:v1.0.0:enescakir_emoji/vendor/github.com/enescakir/emoji \
		evanphx:json-patch:v4.11.0:evanphx_json_patch/vendor/github.com/evanphx/json-patch \
		fatih:color:v1.12.0:fatih_color/vendor/github.com/fatih/color \
		form3tech-oss:jwt-go:v3.2.3:form3tech_oss_jwt_go/vendor/github.com/form3tech-oss/jwt-go \
		francoispqt:gojay:v1.2.13:francoispqt_gojay/vendor/github.com/francoispqt/gojay \
		ghodss:yaml:v1.0.0:ghodss_yaml/vendor/github.com/ghodss/yaml \
		go-inf:inf:v0.9.1:go_inf_inf/vendor/gopkg.in/inf.v0 \
		go-logr:logr:v0.4.0:go_logr_logr/vendor/github.com/go-logr/logr \
		go-yaml:yaml:496545a6307b:go_yaml_yaml_1/vendor/gopkg.in/yaml.v3 \
		go-yaml:yaml:v2.4.0:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
		gobwas:glob:v0.2.3:gobwas_glob/vendor/github.com/gobwas/glob \
		gofrs:uuid:v4.0.0:gofrs_uuid/vendor/github.com/gofrs/uuid \
		gogo:protobuf:v1.3.2:gogo_protobuf/vendor/github.com/gogo/protobuf \
		golang:appengine:v1.6.7:golang_appengine/vendor/google.golang.org/appengine \
		golang:crypto:5ea612d1eb83:golang_crypto/vendor/golang.org/x/crypto \
		golang:glog:v1.0.0:golang_glog/vendor/github.com/golang/glog \
		golang:net:04defd469f4e:golang_net/vendor/golang.org/x/net \
		golang:oauth2:2bc19b11175f:golang_oauth2/vendor/golang.org/x/oauth2 \
		golang:protobuf:v1.5.2:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:sys:0f9fa26af87c:golang_sys/vendor/golang.org/x/sys \
		golang:term:6a3ed077a48d:golang_term/vendor/golang.org/x/term \
		golang:text:v0.3.6:golang_text/vendor/golang.org/x/text \
		golang:time:1f47c861a9ac:golang_time/vendor/golang.org/x/time \
		google:go-cmp:v0.5.5:google_go_cmp/vendor/github.com/google/go-cmp \
		google:gofuzz:v1.1.0:google_gofuzz/vendor/github.com/google/gofuzz \
		googleapis:gnostic:v0.5.5:googleapis_gnostic/vendor/github.com/googleapis/gnostic \
		googleapis:google-cloud-go:v0.81.0:googleapis_google_cloud_go/vendor/cloud.google.com/go \
		imdario:mergo:v0.3.12:imdario_mergo/vendor/github.com/imdario/mergo \
		inconshreveable:mousetrap:v1.0.0:inconshreveable_mousetrap/vendor/github.com/inconshreveable/mousetrap \
		jmespath:go-jmespath:v0.4.0:jmespath_go_jmespath/vendor/github.com/jmespath/go-jmespath \
		json-iterator:go:v1.1.11:json_iterator_go/vendor/github.com/json-iterator/go \
		kubernetes-sigs:controller-runtime:v0.9.6:kubernetes_sigs_controller_runtime/vendor/sigs.k8s.io/controller-runtime \
		kubernetes-sigs:structured-merge-diff:v4.1.2:kubernetes_sigs_structured_merge_diff/vendor/sigs.k8s.io/structured-merge-diff/v4 \
		kubernetes-sigs:yaml:v1.2.0:kubernetes_sigs_yaml/vendor/sigs.k8s.io/yaml \
		kubernetes:api:v0.22.1:kubernetes_api/vendor/k8s.io/api \
		kubernetes:apimachinery:v0.22.1:kubernetes_apimachinery/vendor/k8s.io/apimachinery \
		kubernetes:client-go:v0.22.1:kubernetes_client_go/vendor/k8s.io/client-go \
		kubernetes:klog:v2.9.0:kubernetes_klog/vendor/k8s.io/klog/v2 \
		kubernetes:kube-openapi:95288971da7e:kubernetes_kube_openapi/vendor/k8s.io/kube-openapi \
		kubernetes:utils:7f3ee0f31471:kubernetes_utils/vendor/k8s.io/utils \
		mattn:go-colorable:v0.1.8:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
		mattn:go-isatty:v0.0.13:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
		mattn:go-runewidth:v0.0.9:mattn_go_runewidth/vendor/github.com/mattn/go-runewidth \
		moby:moby:v20.10.8:moby_moby/vendor/github.com/docker/docker \
		modern-go:concurrent:bacd9c7ef1dd:modern_go_concurrent/vendor/github.com/modern-go/concurrent \
		modern-go:reflect2:v1.0.1:modern_go_reflect2/vendor/github.com/modern-go/reflect2 \
		olekukonko:tablewriter:v0.0.5:olekukonko_tablewriter/vendor/github.com/olekukonko/tablewriter \
		open-policy-agent:opa:v0.31.0:open_policy_agent_opa/vendor/github.com/open-policy-agent/opa \
		opencontainers:go-digest:v1.0.0:opencontainers_go_digest/vendor/github.com/opencontainers/go-digest \
		opencontainers:image-spec:v1.0.1:opencontainers_image_spec/vendor/github.com/opencontainers/image-spec \
		pkg:errors:v0.9.1:pkg_errors/vendor/github.com/pkg/errors \
		pquerna:cachecontrol:0dec1b30a021:pquerna_cachecontrol/vendor/github.com/pquerna/cachecontrol \
		protocolbuffers:protobuf-go:v1.26.0:protocolbuffers_protobuf_go/vendor/google.golang.org/protobuf \
		rcrowley:go-metrics:10cdbea86bc0:rcrowley_go_metrics/vendor/github.com/rcrowley/go-metrics \
		satori:go.uuid:v1.2.0:satori_go_uuid/vendor/github.com/satori/go.uuid \
		spf13:cobra:v1.2.1:spf13_cobra/vendor/github.com/spf13/cobra \
		spf13:pflag:v1.0.5:spf13_pflag/vendor/github.com/spf13/pflag \
		square:go-jose:v2.2.2:square_go_jose/vendor/gopkg.in/square/go-jose.v2 \
		xeipuuv:gojsonpointer:02993c407bfb:xeipuuv_gojsonpointer/vendor/github.com/xeipuuv/gojsonpointer \
		xeipuuv:gojsonreference:bd5ef7bd5415:xeipuuv_gojsonreference/vendor/github.com/xeipuuv/gojsonreference \
		yashtewari:glob-intersection:5c77d914dd0b:yashtewari_glob_intersection/vendor/github.com/yashtewari/glob-intersection

post-extract:
	@${RM} -r ${WRKSRC}/vendor/github.com/Azure/go-autorest/autorest
	@${RLN} ${WRKSRC_azure_go_autorest_autorest}/autorest ${WRKSRC}/vendor/github.com/Azure/go-autorest/autorest
	@${RM} -r ${WRKSRC}/vendor/github.com/Azure/go-autorest/autorest/adal
	@${RLN} ${WRKSRC_azure_go_autorest_adal}/autorest/adal ${WRKSRC}/vendor/github.com/Azure/go-autorest/autorest/adal
	@${RM} -r ${WRKSRC}/vendor/github.com/Azure/go-autorest/autorest/date
	@${RLN} ${WRKSRC_azure_go_autorest_date}/autorest/date ${WRKSRC}/vendor/github.com/Azure/go-autorest/autorest/date
	@${RM} -r ${WRKSRC}/vendor/github.com/Azure/go-autorest/logger
	@${RLN} ${WRKSRC_azure_go_autorest_logger}/logger ${WRKSRC}/vendor/github.com/Azure/go-autorest/logger
	@${RM} -r ${WRKSRC}/vendor/github.com/Azure/go-autorest/tracing
	@${RLN} ${WRKSRC_azure_go_autorest_tracing}/tracing ${WRKSRC}/vendor/github.com/Azure/go-autorest/tracing

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/bin/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
