/** @file

  Copyright (c) 2019, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

  This file is automatically generated. Please do NOT modify !!!

**/

#ifndef __FSPTUPD_H__
#define __FSPTUPD_H__

#include <FspUpd.h>

#pragma pack(1)


/** Fsp T Core UPD
**/
typedef struct {

/** Offset 0x0020
**/
  UINT32                      MicrocodeRegionBase;

/** Offset 0x0024
**/
  UINT32                      MicrocodeRegionSize;

/** Offset 0x0028
**/
  UINT32                      CodeRegionBase;

/** Offset 0x002C
**/
  UINT32                      CodeRegionSize;

/** Offset 0x0030
**/
  UINT8                       Reserved[16];
} FSPT_CORE_UPD;

/** Fsp T Configuration
**/
typedef struct {

/** Offset 0x0040 - PcdSerialIoUartDebugEnable
  Enable SerialIo Uart debug library with/without initializing SerialIo Uart device in FSP.
  0:Disable, 1:Enable and Initialize, 2:Enable without Initializing
**/
  UINT8                       PcdSerialIoUartDebugEnable;

/** Offset 0x0041 - PcdSerialIoUartNumber - FSPT
  Select SerialIo Uart Controller for debug. Note: If UART0 is selected as CNVi BT
  Core interface, it cannot be used for debug purpose.
  0:SerialIoUart0, 1:SerialIoUart1, 2:SerialIoUart2
**/
  UINT8                       PcdSerialIoUartNumber;

/** Offset 0x0042 - PcdSerialIoUart0PinMuxing - FSPT
  Select SerialIo Uart0 pin muxing. Setting valid only if PcdSerialIoUartNumber is
  set to UART0.
  0:default pins, 1:pins muxed with CNV_BRI/RGI
**/
  UINT8                       PcdSerialIoUart0PinMuxing;

/** Offset 0x0043
**/
  UINT8                       UnusedUpdSpace0;

/** Offset 0x0044
**/
  UINT32                      PcdSerialIoUartInputClock;

/** Offset 0x0048 - Pci Express Base Address
  Base address to be programmed for Pci Express
**/
  UINT64                      PcdPciExpressBaseAddress;

/** Offset 0x0050 - Pci Express Region Length
  Region Length to be programmed for Pci Express
**/
  UINT32                      PcdPciExpressRegionLength;

/** Offset 0x0054
**/
  UINT8                       ReservedFsptUpd1[44];
} FSP_T_CONFIG;

/** Fsp T UPD Configuration
**/
typedef struct {

/** Offset 0x0000
**/
  FSP_UPD_HEADER              FspUpdHeader;

/** Offset 0x0020
**/
  FSPT_CORE_UPD               FsptCoreUpd;

/** Offset 0x0040
**/
  FSP_T_CONFIG                FsptConfig;

/** Offset 0x0080
**/
  UINT16                      UpdTerminator;
} FSPT_UPD;

#pragma pack()

#endif