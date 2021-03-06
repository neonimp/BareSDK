/**
 * This file is part of BareSDK and licensed under the:
 * BSD 3-Clause License
 * Copyright (c) 2021, Matheus Xavier
 * All rights reserved.
*/

#ifndef BARESDK_CODES_H
#define BARESDK_CODES_H

#include <stdint.h>

/* Warnings
 */
#define WARN(CODE) (last_warning = (CODE))

extern int bsdk_last_warning;

#define WNOTALIGN 0x1F01

/* Errors
 */
#define RAISE(CODE) (bsdk_last_error = (CODE))

extern int bsdk_last_error;

#define ESPC 0xFA01 /** The requested operation would go over a structure's size */
#define EVAL 0xFA02 /** Invalid value */
#define EACS 0xFA03 /** Invalid memory access i.e tried to pop an empty bsdk_stack */

#endif
