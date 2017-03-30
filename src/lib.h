#ifndef W5292C_LIB_H
#define W5292C_LIB_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef enum {
  ArgTypeNull,
  ArgTypeInt8,
  ArgTypeUint8,
  ArgTypeInt16,
  ArgTypeUint16,
  ArgTypeInt32,
  ArgTypeUint32,
  ArgTypeString
} ArgType;

void test_append(ArgType type, ...);

#ifdef __cplusplus
} /* extern "C" { */
#endif /* __cplusplus */

#endif /* W5292C_LIB_H */
