// Copyright 2021-2021 The jdh99 Authors. All rights reserved.
// ���û�����������
// Authors: jdh99 <jdh821@163.com>

#ifndef TZTYPE_H
#define TZTYPE_H

#include <stdint.h>
#include <stdbool.h>

// δʹ����������.�ɱ������������
#define TZ_UNUSED(v) (void)v

// �ж����ȼ�
#define TZ_IRQ_PRIORITY_HIGHEST 0
#define TZ_IRQ_PRIORITY_HIGH 1
#define TZ_IRQ_PRIORITY_MIDDLE 2
#define TZ_IRQ_PRIORITY_LOW 3
#define TZ_IRQ_PRIORITY_LOWEST 4

#pragma pack(1)

// ���������ݽṹ
#define TZ_BUFFER_TINY_LEN 32
typedef struct {
    int len;
    uint8_t buf[TZ_BUFFER_TINY_LEN];
} TZBuffeTiny;

#define TZ_BUFFER_SMALL_LEN 64
typedef struct {
    int len;
    uint8_t buf[TZ_BUFFER_SMALL_LEN];
} TZBufferSmall;

#define TZ_BUFFER_LEN 128
typedef struct {
    int len;
    uint8_t buf[TZ_BUFFER_LEN];
} TZBuffer;

#define TZ_BUFFER_BIG_LEN 256
typedef struct {
    int len;
    uint8_t buf[TZ_BUFFER_BIG_LEN];
} TZBufferBig;

#define TZ_BUFFER_LARGE_LEN 512
typedef struct {
    int len;
    uint8_t buf[TZ_BUFFER_LARGE_LEN];
} TZBufferLarge;

// TZBufferDynamic ��̬����
typedef struct {
    int len;
    uint8_t buf[];
} TZBufferDynamic;

#pragma pack()

// TZIsAllowSendFunc �Ƿ������ͺ�������
typedef bool (*TZIsAllowSendFunc)(void);

// TZEmptyFunc �պ�������
typedef void (*TZEmptyFunc)(void);

// TZDataFunc ���ݺ�������
typedef void (*TZDataFunc)(uint8_t* bytes, int size);

// TZWriteIO �������ŵ�ƽ
typedef void (*TZWriteIO)(bool level);

// TZReadIO ��ȡ���ŵ�ƽ
typedef bool (*TZReadIO)(void);

#endif
