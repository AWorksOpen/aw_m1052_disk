/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013-2015 Damien P. George
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

// options to control how MicroPython is built

#define MICROPY_ALLOC_PATH_MAX      (PATH_MAX)
#define MICROPY_PERSISTENT_CODE_LOAD (0)
#define MICROPY_PERSISTENT_CODE_SAVE (1)

#define MICROPY_EMIT_X64            (1)
#define MICROPY_EMIT_X86            (1)
#define MICROPY_EMIT_THUMB          (1)
#define MICROPY_EMIT_INLINE_THUMB   (1)
#define MICROPY_EMIT_INLINE_THUMB_ARMV7M (1)
#define MICROPY_EMIT_INLINE_THUMB_FLOAT (1)
#define MICROPY_EMIT_ARM            (1)
#define MICROPY_EMIT_XTENSA         (1)
#define MICROPY_EMIT_INLINE_XTENSA  (1)
#define MICROPY_EMIT_XTENSAWIN      (1)

#define MICROPY_DYNAMIC_COMPILER    (1)
#define MICROPY_COMP_CONST_FOLDING  (1)
#define MICROPY_COMP_MODULE_CONST   (1)
#define MICROPY_COMP_CONST          (1)
#define MICROPY_COMP_DOUBLE_TUPLE_ASSIGN (1)
#define MICROPY_COMP_TRIPLE_TUPLE_ASSIGN (1)
#define MICROPY_COMP_RETURN_IF_EXPR (1)

#define MICROPY_OPT_CACHE_MAP_LOOKUP_IN_BYTECODE (0)

#define MICROPY_READER_POSIX        (0)
#define MICROPY_ENABLE_RUNTIME      (0)
#define MICROPY_ENABLE_GC           (1)
#define MICROPY_STACK_CHECK         (1)
#define MICROPY_HELPER_LEXER_UNIX   (1)
#define MICROPY_LONGINT_IMPL        (MICROPY_LONGINT_IMPL_MPZ)
#define MICROPY_ENABLE_SOURCE_LINE  (1)
#define MICROPY_ENABLE_DOC_STRING   (0)
#define MICROPY_ERROR_REPORTING     (MICROPY_ERROR_REPORTING_DETAILED)
#define MICROPY_WARNINGS            (1)

#define MICROPY_FLOAT_IMPL          (MICROPY_FLOAT_IMPL_DOUBLE)
#define MICROPY_CPYTHON_COMPAT      (1)
#define MICROPY_USE_INTERNAL_PRINTF (0)

#define MICROPY_PY_BUILTINS_STR_UNICODE (1)

// Define to 1 to use undertested inefficient GC helper implementation
// (if more efficient arch-specific one is not available).
#ifndef MICROPY_GCREGS_SETJMP
    #ifdef __mips__
        #define MICROPY_GCREGS_SETJMP (1)
    #else
        #define MICROPY_GCREGS_SETJMP (0)
    #endif
#endif

#define MICROPY_PY___FILE__         (0)
//#define MICROPY_PY_ARRAY            (0)
//#define MICROPY_PY_ATTRTUPLE        (0)
//#define MICROPY_PY_COLLECTIONS      (0)
//#define MICROPY_PY_MATH             (0)
//#define MICROPY_PY_CMATH            (0)
//#define MICROPY_PY_GC               (0)
//#define MICROPY_PY_IO               (0)
//#define MICROPY_PY_SYS              (0)
#define MICROPY_PY_FUNCTION_ATTRS                (1)
#define MICROPY_PY_BUILTINS_STR_UNICODE          (1)
#define MICROPY_PY_BUILTINS_STR_CENTER           (1)
#define MICROPY_PY_BUILTINS_STR_PARTITION        (1)
#define MICROPY_PY_BUILTINS_STR_SPLITLINES       (1)
#define MICROPY_PY_BUILTINS_BYTEARRAY            (1)
#define MICROPY_PY_BUILTINS_MEMORYVIEW           (1)
#define MICROPY_PY_BUILTINS_SLICE_ATTRS          (1)
#define MICROPY_PY_ALL_SPECIAL_METHODS           (1)
#define MICROPY_PY_BUILTINS_COMPILE              (1)
#define MICROPY_PY_BUILTINS_EXECFILE             (1)
#define MICROPY_PY_BUILTINS_INPUT                (1)
#define MICROPY_PY_BUILTINS_POW3                 (1)
#define MICROPY_PY_BUILTINS_ENUMERATE            (1)
#define MICROPY_PY_BUILTINS_FILTER               (1)
#define MICROPY_PY_BUILTINS_FROZENSET            (1)
#define MICROPY_PY_BUILTINS_REVERSED             (1)
#define MICROPY_PY_BUILTINS_SET                  (1)
#define MICROPY_PY_BUILTINS_HELP                 (1)
//#define MICROPY_PY_BUILTINS_HELP_TEXT            aworks_help_text
#define MICROPY_PY_BUILTINS_HELP_MODULES         (1)
#define MICROPY_PY_BUILTINS_SLICE                (1)
#define MICROPY_PY_BUILTINS_PROPERTY             (1)
#define MICROPY_PY_BUILTINS_MIN_MAX              (1)
#define MICROPY_PY_UERRNO           (1)       /** \brief 错误模块 */
#define MICROPY_PY_UCTYPES          (1)       /** \brief 以结构化的方式访问访问二进制数据 */
#define MICROPY_PY_UZLIB            (1)       /** \brief zlib 解压缩 */
#define MICROPY_PY_UJSON            (1)       /** \brief JSON 编码 */
#define MICROPY_PY_URE              (1)       /** \brief 正则表达式 */
#define MICROPY_PY_UHEAPQ           (1)       /** \brief 堆队列算法 */
#define MICROPY_PY_UHASHLIB         (1)       /** \brief 哈希算法库 */
#define MICROPY_PY_UBINASCII        (0)       /** \brief binary/ASCLL 转换*/
#define MICROPY_PY_URANDOM          (1)       /** \brief 随机数生成模块*/
#define MICROPY_PY_MODUOS_FILE      (1)       /** \brief 文件系统*/
#define MICROPY_PY_MODUOS           (1)       /** \brief 以结构化的方式访问访问二进制数据*/
#define MICROPY_PY_USOCKET          (1)       /** \brief socket 模块*/
#define MICROPY_PY_NETWORK          (1)       /** \brief 网络模块*/
#define MICROPY_PY_GC               (1)       /** \brief 垃圾回收*/
#define MICROPY_PY_CMATH            (1)       /** \brief 复数运算*/
#define MICROPY_PY_IO               (1)       /** \brief 输入输出流*/
#define MICROPY_PY_STRUCT           (1)       /** \brief 压缩和不压缩数据类型*/
#define MICROPY_PY_SYS              (1)       /** \brief 系统功能*/
#define MICROPY_PY_MATH             (1)       /** \brief 数学运算*/
#define MICROPY_PY_COLLECTIONS      (1)       /** \brief 集合和容器类型*/
#define MICROPY_PY_ARRAY            (1)       /** \brief 数组*/
#define MICROPY_PY_EXTINT           (1)       /** \brief 中断模块*/
#define MICROPY_PY_LWIP             (1)       /** \brief LWIP模块*/
#define MICROPY_PY_BTREE            (1)

// type definitions for the specific machine

#ifdef __LP64__
typedef long mp_int_t; // must be pointer size
typedef unsigned long mp_uint_t; // must be pointer size
#elif defined(__MINGW32__) && defined(_WIN64)
#include <stdint.h>
typedef __int64 mp_int_t;
typedef unsigned __int64 mp_uint_t;
#elif defined(_MSC_VER) && defined(_WIN64)
typedef __int64 mp_int_t;
typedef unsigned __int64 mp_uint_t;
#else
// These are definitions for machines where sizeof(int) == sizeof(void*),
// regardless for actual size.
typedef int mp_int_t; // must be pointer size
typedef unsigned int mp_uint_t; // must be pointer size
#endif

// Cannot include <sys/types.h>, as it may lead to symbol name clashes
#if _FILE_OFFSET_BITS == 64 && !defined(__LP64__)
typedef long long mp_off_t;
#else
typedef long mp_off_t;
#endif

#define MP_PLAT_PRINT_STRN(str, len) (void)0

// We need to provide a declaration/definition of alloca()
#ifdef __FreeBSD__
#include <stdlib.h>
#elif defined(_WIN32)
#include <malloc.h>
#else
#include <alloca.h>
#endif

#include <stdint.h>

// MSVC specifics - see windows/mpconfigport.h for explanation
#ifdef _MSC_VER

#define MP_ENDIANNESS_LITTLE        (1)
#define NORETURN                    __declspec(noreturn)
#define MP_NOINLINE                 __declspec(noinline)
#define MP_LIKELY(x)                (x)
#define MP_UNLIKELY(x)              (x)
#define MICROPY_PORT_CONSTANTS      { "dummy", 0 }
#ifdef _WIN64
#define MP_SSIZE_MAX                _I64_MAX
#else
#define MP_SSIZE_MAX                _I32_MAX
#endif
#define MICROPY_MAKE_POINTER_CALLABLE(p) ((void *)(p)) //Avoid compiler warning about different const qualifiers
#define restrict
#define inline                      __inline
#define alignof(t)                  __alignof(t)
#undef MICROPY_ALLOC_PATH_MAX
#define MICROPY_ALLOC_PATH_MAX      260
#define PATH_MAX                    MICROPY_ALLOC_PATH_MAX
#define S_ISREG(m)                  (((m) & S_IFMT) == S_IFREG)
#define S_ISDIR(m)                  (((m) & S_IFMT) == S_IFDIR)
#ifdef _WIN64
#define SSIZE_MAX                   _I64_MAX
typedef __int64 ssize_t;
#else
#define SSIZE_MAX                   _I32_MAX
typedef int ssize_t;
#endif
typedef mp_off_t off_t;

#endif
