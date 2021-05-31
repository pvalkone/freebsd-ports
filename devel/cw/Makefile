PORTNAME=			cw
PORTVERSION=		4.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=			devel

MAINTAINER=	petteri.valkonen@iki.fi
COMMENT=	Tool to tail AWS CloudWatch Logs from your terminal

LICENSE=APACHE20

USES=go:modules

USE_GITHUB=yes
GH_ACCOUNT=lucagrulla

PLIST_FILES=bin/cw

GH_TUPLE=	\
		alecthomas:kong:v0.2.16:alecthomas_kong/vendor/github.com/alecthomas/kong \
		aws:aws-sdk-go-v2:cdc9a4c1860a:aws_aws_sdk_go_v2_config \
		aws:aws-sdk-go-v2:credentials/v1.1.6:aws_aws_sdk_go_v2_credentials \
		aws:aws-sdk-go-v2:fdbaadbce5fd:aws_aws_sdk_go_v2_imds \
		aws:aws-sdk-go-v2:v1.3.0:aws_aws_sdk_go_v2_sts/vendor/github.com/aws/aws-sdk-go-v2 \
		aws:aws-sdk-go-v2:v1.3.2:aws_aws_sdk_go_v2 \
		aws:smithy-go:v1.3.1:aws_smithy_go/vendor/github.com/aws/smithy-go \
		davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
		fatih:color:v1.10.0:fatih_color/vendor/github.com/fatih/color \
		go-yaml:yaml:9f266ea9e77c:go_yaml_yaml/vendor/gopkg.in/yaml.v3 \
		golang:sys:fdedc70b468f:golang_sys/vendor/golang.org/x/sys \
		jmespath:go-jmespath:v0.4.0:jmespath_go_jmespath/vendor/github.com/jmespath/go-jmespath \
		mattn:go-colorable:v0.1.8:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
		mattn:go-isatty:v0.0.12:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
		pkg:errors:v0.9.1:pkg_errors/vendor/github.com/pkg/errors \
		pmezard:go-difflib:v1.0.0:pmezard_go_difflib/vendor/github.com/pmezard/go-difflib \
		stretchr:testify:v1.7.0:stretchr_testify/vendor/github.com/stretchr/testify

post-extract:
	@${RLN} ${WRKSRC_aws_aws_sdk_go_v2} ${WRKSRC}/vendor/github.com/aws/aws-sdk-go-v2
	@${RM} -r ${WRKSRC}/vendor/github.com/aws/aws-sdk-go-v2/config
	@${RLN} ${WRKSRC_aws_aws_sdk_go_v2_config}/config ${WRKSRC}/vendor/github.com/aws/aws-sdk-go-v2/config
	@${RM} -r ${WRKSRC}/vendor/github.com/aws/aws-sdk-go-v2/credentials
	@${RLN} ${WRKSRC_aws_aws_sdk_go_v2_credentials}/credentials ${WRKSRC}/vendor/github.com/aws/aws-sdk-go-v2/credentials
	@${RM} -r ${WRKSRC}/vendor/github.com/aws/aws-sdk-go-v2/feature/ec2/imds
	@${RLN} ${WRKSRC_aws_aws_sdk_go_v2_imds}/feature/ec2/imds ${WRKSRC}/vendor/github.com/aws/aws-sdk-go-v2/feature/ec2/imds

.include <bsd.port.mk>
