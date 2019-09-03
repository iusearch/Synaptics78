//
// Created by hork on 2019/8/31.
//

#ifndef INC_78DRIVER_SYNAPTICS78_H
#define INC_78DRIVER_SYNAPTICS78_H

#include <libusb-1.0/libusb.h>
#include <iostream>
#include "string.h"

typedef struct
{
    unsigned char *content;
    size_t size;
} bulkData;

bulkData hexStringToBulkData(char *hexString);

void printHex(unsigned char *input, size_t size);

void op(libusb_device_handle *hd, bulkData data, size_t revSize);

int initProcess(libusb_device_handle *hd);

unsigned char *readINTR(libusb_device_handle *hd);

void waitForFingerOn(libusb_device_handle *hd);

bulkData writeAndReadBulk(libusb_device_handle *hd, bulkData data, size_t revSize);

void sendOneByte(libusb_device_handle *hd, unsigned char *data, size_t revSize);

void showImg(bulkData data);

#endif //INC_78DRIVER_SYNAPTICS78_H
