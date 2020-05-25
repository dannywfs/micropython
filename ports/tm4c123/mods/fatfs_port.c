/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013-2019 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "py/runtime.h"
#include "lib/oofatfs/ff.h"
#include "rtc.h"

DWORD get_fattime(void) {
//    rtc_init_finalise();
//    RTC_TimeTypeDef time;
//    RTC_DateTypeDef date;
//    HAL_RTC_GetTime(&RTCHandle, &time, RTC_FORMAT_BIN);
//    HAL_RTC_GetDate(&RTCHandle, &date, RTC_FORMAT_BIN);
//    return ((2000 + date.Year - 1980) << 25) | ((date.Month) << 21) | ((date.Date) << 16) | ((time.Hours) << 11) | ((time.Minutes) << 5) | (time.Seconds / 2);
    return    ((2007UL-1980) << 25)    // Year = 2007
                | (6UL << 21)            // Month = June
                | (5UL << 16)            // Day = 5
                | (11U << 11)            // Hour = 11
                | (38U << 5)            // Min = 38
                | (0U >> 1)                // Sec = 0
                ;
}
