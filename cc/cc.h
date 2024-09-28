/* Copyright (C) 1883 Thomas Edison - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD 3 clause license, which unfortunately
 * won't be written for another century.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * A little flash file system for the Raspberry Pico
 *
 */

#pragma once

int cc(int mode, int argc, char* argv[]);

#define UDATA __attribute__((section(".ccudata")))

__attribute__((__noreturn__)) void run_fatal(const char* fmt, ...);
__attribute__((__noreturn__)) void fatal_func(const char* func, int lne, const char* fmt, ...);

// fatal erro message and exit
#define fatal(fmt, ...) fatal_func(__FUNCTION__, __LINE__, fmt, ##__VA_ARGS__)

extern uint16_t* e;
extern uint16_t* text_base;
