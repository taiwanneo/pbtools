/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by pbtools.
 */

#ifndef IMPORTED_H
#define IMPORTED_H

#ifdef __cplusplus
extern "C" {
#endif

#include "pbtools.h"
#include "imported_duplicated_package.h"

/**
 * Enum imported.ImportedEnum.
 */
enum imported_imported_enum_e {
    imported_imported_enum_a_e = 0,
    imported_imported_enum_b_e = 1
};

/**
 * Message imported.ImportedMessage.
 */
struct imported_imported_message_repeated_t {
    int length;
    struct imported_imported_message_t **items_pp;
    struct imported_imported_message_t *head_p;
    struct imported_imported_message_t *tail_p;
};

struct imported_imported_message_t {
    struct pbtools_message_base_t base;
    bool v1;
    struct imported_imported_duplicated_package_message_t *v2_p;
};

int imported_imported_message_v2_alloc(
    struct imported_imported_message_t *self_p);

/**
 * Encoding and decoding of imported.ImportedMessage.
 */
struct imported_imported_message_t *
imported_imported_message_new(
    void *workspace_p,
    size_t size);

int imported_imported_message_encode(
    struct imported_imported_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int imported_imported_message_decode(
    struct imported_imported_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

/* Internal functions. Do not use! */

void imported_imported_message_init(
    struct imported_imported_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct imported_imported_message_t *next_p);

void imported_imported_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct imported_imported_message_t *self_p);

void imported_imported_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct imported_imported_message_t *self_p);

void imported_imported_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct imported_imported_message_repeated_t *repeated_p);

void imported_imported_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct imported_imported_message_repeated_t *repeated_p);

void imported_imported_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct imported_imported_message_repeated_t *repeated_p);

#ifdef __cplusplus
}
#endif

#endif
