PORTNAME=			stern
PORTVERSION=		1.19.0
DISTVERSIONPREFIX=	v
CATEGORIES=			devel

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Multi pod and container log tailing for Kubernetes

LICENSE=APACHE20

BUILD_DEPENDS=ca_root_nss>=0:security/ca_root_nss

USES=go:modules

USE_GITHUB=yes
GH_ACCOUNT=stern

PLIST_FILES=bin/stern

GH_TUPLE=	\
		AlecAivazis:survey:v2.1.1:alecaivazis_survey_v2/vendor/github.com/AlecAivazis/survey/v2 \
		Azure:go-autorest:4f818eac41f3:azure_go_autorest_adal \
		Azure:go-autorest:autorest/v0.11.12:azure_go_autorest_autorest \
		Azure:go-autorest:b3a0b30a7423:azure_go_autorest_date \
		Azure:go-autorest:logger/v0.2.0:azure_go_autorest_logger \
		Azure:go-autorest:tracing/v0.6.0:azure_go_autorest_tracing \
		Azure:go-autorest:v14.2.0:azure_go_autorest/vendor/github.com/Azure/go-autorest \
		PuerkitoBio:purell:v1.1.1:puerkitobio_purell/vendor/github.com/PuerkitoBio/purell \
		PuerkitoBio:urlesc:de5bf2ad4578:puerkitobio_urlesc/vendor/github.com/PuerkitoBio/urlesc \
		davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
		evanphx:json-patch:v4.9.0:evanphx_json_patch/vendor/github.com/evanphx/json-patch \
		fatih:color:v1.9.0:fatih_color/vendor/github.com/fatih/color \
		form3tech-oss:jwt-go:v3.2.2:form3tech_oss_jwt_go/vendor/github.com/form3tech-oss/jwt-go \
		go-errors:errors:v1.0.1:go_errors_errors/vendor/github.com/go-errors/errors \
		go-inf:inf:v0.9.1:go_inf_inf/vendor/gopkg.in/inf.v0 \
		go-logr:logr:v0.4.0:go_logr_logr/vendor/github.com/go-logr/logr \
		go-openapi:jsonpointer:v0.19.3:go_openapi_jsonpointer/vendor/github.com/go-openapi/jsonpointer \
		go-openapi:jsonreference:v0.19.3:go_openapi_jsonreference/vendor/github.com/go-openapi/jsonreference \
		go-openapi:spec:v0.19.5:go_openapi_spec/vendor/github.com/go-openapi/spec \
		go-openapi:swag:v0.19.5:go_openapi_swag/vendor/github.com/go-openapi/swag \
		go-yaml:yaml:9f266ea9e77c:go_yaml_yaml_1/vendor/gopkg.in/yaml.v3 \
		go-yaml:yaml:v2.4.0:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
		gogo:protobuf:v1.3.2:gogo_protobuf/vendor/github.com/gogo/protobuf \
		golang:appengine:v1.6.5:golang_appengine/vendor/google.golang.org/appengine \
		golang:crypto:5ea612d1eb83:golang_crypto/vendor/golang.org/x/crypto \
		golang:net:3d97a244fca7:golang_net/vendor/golang.org/x/net \
		golang:oauth2:bf48bf16ab8d:golang_oauth2/vendor/golang.org/x/oauth2 \
		golang:protobuf:v1.4.3:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:sys:a50acf3fe073:golang_sys/vendor/golang.org/x/sys \
		golang:term:6a3ed077a48d:golang_term/vendor/golang.org/x/term \
		golang:text:v0.3.4:golang_text/vendor/golang.org/x/text \
		golang:time:f8bda1e9f3ba:golang_time/vendor/golang.org/x/time \
		google:btree:v1.0.0:google_btree/vendor/github.com/google/btree \
		google:go-cmp:v0.5.2:google_go_cmp/vendor/github.com/google/go-cmp \
		google:gofuzz:v1.1.0:google_gofuzz/vendor/github.com/google/gofuzz \
		google:shlex:e7afc7fbc510:google_shlex/vendor/github.com/google/shlex \
		google:starlark-go:8dd3e2ee1dd5:google_starlark_go/vendor/go.starlark.net \
		google:uuid:v1.1.2:google_uuid/vendor/github.com/google/uuid \
		googleapis:gnostic:v0.4.1:googleapis_gnostic/vendor/github.com/googleapis/gnostic \
		googleapis:google-cloud-go:v0.54.0:googleapis_google_cloud_go/vendor/cloud.google.com/go \
		gregjones:httpcache:9cad4c3443a7:gregjones_httpcache/vendor/github.com/gregjones/httpcache \
		imdario:mergo:v0.3.5:imdario_mergo/vendor/github.com/imdario/mergo \
		inconshreveable:mousetrap:v1.0.0:inconshreveable_mousetrap/vendor/github.com/inconshreveable/mousetrap \
		json-iterator:go:v1.1.10:json_iterator_go/vendor/github.com/json-iterator/go \
		kballard:go-shellquote:95032a82bc51:kballard_go_shellquote/vendor/github.com/kballard/go-shellquote \
		kubernetes-sigs:kustomize:kyaml/v0.10.15:kubernetes_sigs_kustomize_kyaml/vendor/sigs.k8s.io/kustomize \
		kubernetes-sigs:kustomize:api/v0.8.5:kubernetes_sigs_kustomize_api/vendor/sigs.k8s.io/kustomize \
		kubernetes-sigs:structured-merge-diff:v4.1.0:kubernetes_sigs_structured_merge_diff/vendor/sigs.k8s.io/structured-merge-diff/v4 \
		kubernetes-sigs:yaml:v1.2.0:kubernetes_sigs_yaml/vendor/sigs.k8s.io/yaml \
		kubernetes:api:v0.21.0:kubernetes_api/vendor/k8s.io/api \
		kubernetes:apimachinery:v0.21.0:kubernetes_apimachinery/vendor/k8s.io/apimachinery \
		kubernetes:cli-runtime:v0.21.0:kubernetes_cli_runtime/vendor/k8s.io/cli-runtime \
		kubernetes:client-go:v0.21.0:kubernetes_client_go/vendor/k8s.io/client-go \
		kubernetes:klog:v2.8.0:kubernetes_klog/vendor/k8s.io/klog/v2 \
		kubernetes:kube-openapi:591a79e4bda7:kubernetes_kube_openapi/vendor/k8s.io/kube-openapi \
		kubernetes:utils:67b214c5f920:kubernetes_utils/vendor/k8s.io/utils \
		liggitt:tabwriter:89fcab3d43de:liggitt_tabwriter/vendor/github.com/liggitt/tabwriter \
		mailru:easyjson:v0.7.0:mailru_easyjson/vendor/github.com/mailru/easyjson \
		mattn:go-colorable:v0.1.4:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
		mattn:go-isatty:v0.0.11:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
		mgutz:ansi:9520e82c474b:mgutz_ansi/vendor/github.com/mgutz/ansi \
		modern-go:concurrent:bacd9c7ef1dd:modern_go_concurrent/vendor/github.com/modern-go/concurrent \
		modern-go:reflect2:v1.0.1:modern_go_reflect2/vendor/github.com/modern-go/reflect2 \
		monochromegane:go-gitignore:205db1a8cc00:monochromegane_go_gitignore/vendor/github.com/monochromegane/go-gitignore \
		peterbourgon:diskv:v2.0.1:peterbourgon_diskv/vendor/github.com/peterbourgon/diskv \
		pkg:errors:v0.9.1:pkg_errors/vendor/github.com/pkg/errors \
		pmezard:go-difflib:v1.0.0:pmezard_go_difflib/vendor/github.com/pmezard/go-difflib \
		protocolbuffers:protobuf-go:v1.25.0:protocolbuffers_protobuf_go/vendor/google.golang.org/protobuf \
		spf13:cobra:v1.1.1:spf13_cobra/vendor/github.com/spf13/cobra \
		spf13:pflag:v1.0.5:spf13_pflag/vendor/github.com/spf13/pflag \
		stretchr:testify:v1.6.1:stretchr_testify/vendor/github.com/stretchr/testify \
		xlab:treeprint:a009c3971eca:xlab_treeprint/vendor/github.com/xlab/treeprint

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

.include <bsd.port.mk>
