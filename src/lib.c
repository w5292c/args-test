/*
 * MIT License
 *
 * Copyright (c) 2017 Alexander Chumakov
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include "lib.h"

#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>

#define PAIRS_MAX_COUNT (10)

void test_append(ArgType type, ...)
{
  va_list ap;

  int n = 0;
  bool done = false;
  va_start(ap, type);
  while (!done && n++ < PAIRS_MAX_COUNT) {
    switch (type) {
    case ArgTypeInt8: {
      const int8_t value = va_arg(ap, int);
      fprintf(stdout, "type: 'int8_t', value: %d\n", value);
      }
      break;
    case ArgTypeUint8: {
      const uint8_t value = va_arg(ap, unsigned int);
      fprintf(stdout, "type: 'uint8_t', value: %u\n", value);
      }
      break;
    case ArgTypeInt16: {
      const int16_t value = va_arg(ap, int);
      fprintf(stdout, "type: 'int16_t', value: %d\n", value);
      }
      break;
    case ArgTypeUint16: {
      const uint16_t value = va_arg(ap, unsigned int);
      fprintf(stdout, "type: 'uint16_t', value: %u\n", value);
      }
      break;
    case ArgTypeInt32: {
      const int32_t value = va_arg(ap, int);
      fprintf(stdout, "type: 'int32_t', value: %u\n", value);
      }
      break;
    case ArgTypeUint32: {
      const uint32_t value = va_arg(ap, unsigned int);
      fprintf(stdout, "type: 'uint32_t', value: %u\n", value);
      }
      break;
    case ArgTypeString: {
      const char *const value = va_arg(ap, const char *);
      fprintf(stdout, "type: 'string', value: \"%s\"\n", value ? value : "<null>");
      }
      break;
    case ArgTypeNull:
    default:
      done = true;
      break;
    }

    type = va_arg(ap, ArgType);
  }

  va_end(ap);
}
