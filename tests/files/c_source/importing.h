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

#ifndef IMPORTING_H
#define IMPORTING_H

#ifdef __cplusplus
extern "C" {
#endif

#include "pbtools.h"
#include "imported.h"
#include "imported_duplicated_package.h"
#include "imported2.h"

/**
 * Message importing.Message.
 */
struct importing_message_repeated_t {
    int length;
    struct importing_message_t **items_pp;
    struct importing_message_t *head_p;
    struct importing_message_t *tail_p;
};

struct importing_message_t {
    struct pbtools_message_base_t base;
    enum imported_imported_enum_e v1;
    struct imported_imported_message_t *v2_p;
};

/**
 * Message importing.Message2.
 */
struct importing_message2_repeated_t {
    int length;
    struct importing_message2_t **items_pp;
    struct importing_message2_t *head_p;
    struct importing_message2_t *tail_p;
};

struct importing_message2_t {
    struct pbtools_message_base_t base;
    struct importing_message_t *v1_p;
    struct imported2_foo_bar_imported2_message_t *v2_p;
};

/**
 * Message importing.Message3.
 */
struct importing_message3_repeated_t {
    int length;
    struct importing_message3_t **items_pp;
    struct importing_message3_t *head_p;
    struct importing_message3_t *tail_p;
};

struct importing_message3_t {
    struct pbtools_message_base_t base;
    enum imported_imported_duplicated_package_enum_e v1;
    struct imported_imported_duplicated_package_message_t *v2_p;
};

int importing_message_v2_alloc(
    struct importing_message_t *self_p);

/**
 * Encoding and decoding of importing.Message.
 */
struct importing_message_t *
importing_message_new(
    void *workspace_p,
    size_t size);

int importing_message_encode(
    struct importing_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int importing_message_decode(
    struct importing_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

int importing_message2_v1_alloc(
    struct importing_message2_t *self_p);

int importing_message2_v2_alloc(
    struct importing_message2_t *self_p);

/**
 * Encoding and decoding of importing.Message2.
 */
struct importing_message2_t *
importing_message2_new(
    void *workspace_p,
    size_t size);

int importing_message2_encode(
    struct importing_message2_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int importing_message2_decode(
    struct importing_message2_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

int importing_message3_v2_alloc(
    struct importing_message3_t *self_p);

/**
 * Encoding and decoding of importing.Message3.
 */
struct importing_message3_t *
importing_message3_new(
    void *workspace_p,
    size_t size);

int importing_message3_encode(
    struct importing_message3_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int importing_message3_decode(
    struct importing_message3_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

/* Internal functions. Do not use! */

void importing_message_init(
    struct importing_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct importing_message_t *next_p);

void importing_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct importing_message_t *self_p);

void importing_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message_t *self_p);

void importing_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct importing_message_repeated_t *repeated_p);

void importing_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct importing_message_repeated_t *repeated_p);

void importing_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message_repeated_t *repeated_p);

void importing_message2_init(
    struct importing_message2_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct importing_message2_t *next_p);

void importing_message2_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct importing_message2_t *self_p);

void importing_message2_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message2_t *self_p);

void importing_message2_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct importing_message2_repeated_t *repeated_p);

void importing_message2_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct importing_message2_repeated_t *repeated_p);

void importing_message2_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message2_repeated_t *repeated_p);

void importing_message3_init(
    struct importing_message3_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct importing_message3_t *next_p);

void importing_message3_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct importing_message3_t *self_p);

void importing_message3_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message3_t *self_p);

void importing_message3_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct importing_message3_repeated_t *repeated_p);

void importing_message3_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct importing_message3_repeated_t *repeated_p);

void importing_message3_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message3_repeated_t *repeated_p);

#ifdef __cplusplus
}
#endif

#endif
