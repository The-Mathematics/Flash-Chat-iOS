/* This file was generated by upb_generator from the input file:
 *
 *     envoy/extensions/transport_sockets/tls/v3/tls_spiffe_validator_config.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_EXTENSIONS_TRANSPORT_SOCKETS_TLS_V3_TLS_SPIFFE_VALIDATOR_CONFIG_PROTO_UPBDEFS_H_
#define ENVOY_EXTENSIONS_TRANSPORT_SOCKETS_TLS_V3_TLS_SPIFFE_VALIDATOR_CONFIG_PROTO_UPBDEFS_H_

#include "upb/reflection/def.h"
#include "upb/reflection/internal/def_pool.h"

#include "upb/port/def.inc" // Must be last.
#ifdef __cplusplus
extern "C" {
#endif

extern _upb_DefPool_Init envoy_extensions_transport_sockets_tls_v3_tls_spiffe_validator_config_proto_upbdefinit;

UPB_INLINE const upb_MessageDef *envoy_extensions_transport_sockets_tls_v3_SPIFFECertValidatorConfig_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_extensions_transport_sockets_tls_v3_tls_spiffe_validator_config_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.extensions.transport_sockets.tls.v3.SPIFFECertValidatorConfig");
}

UPB_INLINE const upb_MessageDef *envoy_extensions_transport_sockets_tls_v3_SPIFFECertValidatorConfig_TrustDomain_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_extensions_transport_sockets_tls_v3_tls_spiffe_validator_config_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.extensions.transport_sockets.tls.v3.SPIFFECertValidatorConfig.TrustDomain");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* ENVOY_EXTENSIONS_TRANSPORT_SOCKETS_TLS_V3_TLS_SPIFFE_VALIDATOR_CONFIG_PROTO_UPBDEFS_H_ */
