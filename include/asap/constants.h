/* * Copyright (C) 2018 Leonardo Guilherme Lucena de Freitas
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef ASAP_CONSTANTS_H
#define ASAP_CONSTANTS_H

#include <cstdint>

namespace asap {
  static constexpr uint64_t SECONDS_IN_MINUTE = 60;
  static constexpr uint64_t SECONDS_IN_HOUR = SECONDS_IN_MINUTE * 60;
  static constexpr uint64_t SECONDS_IN_DAY = SECONDS_IN_HOUR * 24;
  static constexpr uint64_t SECONDS_IN_MONTH = SECONDS_IN_DAY * 30;
  static constexpr uint64_t SECONDS_IN_YEAR = SECONDS_IN_DAY * 365;
  static constexpr uint64_t SECONDS_IN_WEEK = SECONDS_IN_DAY * 7;
}

#endif //ASAP_CONSTANTS_H
