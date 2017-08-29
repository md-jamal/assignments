/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "RSAPrivateKey"
 * 	found in "rsa.asn1"
 */

#include "RSAPrivateKey.h"

static asn_TYPE_member_t asn_MBR_RSAPrivateKey_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RSAPrivateKey, version),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Version,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSAPrivateKey, modulus),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"modulus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSAPrivateKey, publicExponent),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"publicExponent"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSAPrivateKey, privateExponent),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"privateExponent"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSAPrivateKey, prime1),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"prime1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSAPrivateKey, prime2),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"prime2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSAPrivateKey, exponent1),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"exponent1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSAPrivateKey, exponent2),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"exponent2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSAPrivateKey, coefficient),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"coefficient"
		},
	{ ATF_POINTER, 1, offsetof(struct RSAPrivateKey, otherPrimeInfos),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_OtherPrimeInfos,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"otherPrimeInfos"
		},
};
static ber_tlv_tag_t asn_DEF_RSAPrivateKey_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RSAPrivateKey_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 8 }, /* version at 7 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 7 }, /* modulus at 8 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -2, 6 }, /* publicExponent at 9 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, -3, 5 }, /* privateExponent at 10 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 4, -4, 4 }, /* prime1 at 11 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 5, -5, 3 }, /* prime2 at 12 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 6, -6, 2 }, /* exponent1 at 13 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 7, -7, 1 }, /* exponent2 at 14 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 8, -8, 0 }, /* coefficient at 15 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 9, 0, 0 } /* otherPrimeInfos at 16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RSAPrivateKey_specs_1 = {
	sizeof(struct RSAPrivateKey),
	offsetof(struct RSAPrivateKey, _asn_ctx),
	asn_MAP_RSAPrivateKey_tag2el_1,
	10,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RSAPrivateKey = {
	"RSAPrivateKey",
	"RSAPrivateKey",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RSAPrivateKey_tags_1,
	sizeof(asn_DEF_RSAPrivateKey_tags_1)
		/sizeof(asn_DEF_RSAPrivateKey_tags_1[0]), /* 1 */
	asn_DEF_RSAPrivateKey_tags_1,	/* Same as above */
	sizeof(asn_DEF_RSAPrivateKey_tags_1)
		/sizeof(asn_DEF_RSAPrivateKey_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RSAPrivateKey_1,
	10,	/* Elements count */
	&asn_SPC_RSAPrivateKey_specs_1	/* Additional specs */
};

