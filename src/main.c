#include "lib.h"

#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
  test_append(
    ArgTypeInt8, INT8_C(0x91),
    ArgTypeUint8, UINT8_C(0x92),
    ArgTypeInt16, INT16_C(0xa234),
    ArgTypeUint16, UINT16_C(0x9123),
    ArgTypeInt32, INT32_C(12345678),
    ArgTypeUint32, UINT32_C(87654321),
    ArgTypeString, "hello world!",
    ArgTypeNull
  );

  return 0;
}
