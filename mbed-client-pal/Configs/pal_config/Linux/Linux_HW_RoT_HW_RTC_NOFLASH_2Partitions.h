/*******************************************************************************
 * Copyright 2016, 2017 ARM Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/


#ifndef PAL_USE_HW_ROT 
    #define PAL_USE_HW_ROT     1
#endif

#ifndef PAL_USE_HW_RTC
    #define PAL_USE_HW_RTC    1
#endif

#ifndef PAL_USE_INTERNAL_FLASH 
    #define PAL_USE_INTERNAL_FLASH  0
#endif

#ifndef PAL_INT_FLASH_NUM_SECTIONS
    #define PAL_INT_FLASH_NUM_SECTIONS 0
#endif

#ifndef PAL_NUMBER_OF_PARTITIONS
    #define PAL_NUMBER_OF_PARTITIONS 2
#endif 

#define PAL_SKIP_TEST_MODULE_RTOS
#define PAL_SKIP_TEST_MODULE_NETWORK
#define PAL_SKIP_TEST_MODULE_CRYPTO
#define PAL_SKIP_TEST_MODULE_UPDATE
#define PAL_SKIP_TEST_MODULE_TLS
#define PAL_SKIP_TEST_MODULE_INTERNALFLASH



#include "Linux_default.h"
