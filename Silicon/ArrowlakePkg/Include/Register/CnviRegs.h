/** @file
  Register names for CNVi

  Conventions:

  - Prefixes:
    Definitions beginning with "R_" are registers
    Definitions beginning with "B_" are bits within registers
    Definitions beginning with "V_" are meaningful values within the bits
    Definitions beginning with "S_" are register sizes
    Definitions beginning with "N_" are the bit position
  - In general, PCH registers are denoted by "_PCH_" in register names
  - Registers / bits that are different between PCH generations are denoted by
    "_PCH_[generation_name]_" in register/bit names.
  - Registers / bits that are specific to PCH-H denoted by "_H_" in register/bit names.
    Registers / bits that are specific to PCH-LP denoted by "_LP_" in register/bit names.
    e.g., "_PCH_H_", "_PCH_LP_"
    Registers / bits names without _H_ or _LP_ apply for both H and LP.
  - Registers / bits that are different between SKUs are denoted by "_[SKU_name]"
    at the end of the register/bit names
  - Registers / bits of new devices introduced in a PCH generation will be just named
    as "_PCH_" without [generation_name] inserted.

  Copyright (c) 2024, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/
#ifndef _CNVI_REGS_H_
#define _CNVI_REGS_H_

//
//  CNVi WiFi Registers (D20:F3)
//
#define R_CNVI_CFG_WIFI_GIO_DEV_CAP                0x44          ///< Device Capabilities
#define R_CNVI_CFG_GIO_DEV                         0x48
#define R_CNVI_CFG_WIFI_GIO_DEV_CTRL               0x48          ///< Device Control
#define R_CNVI_CFG_WIFI_PMCSR                      0xCC          ///< Power Management Status and Control Register
//
// Private registers description for CNVi WiFi
//
#define R_CNVI_VER2_PCR_CNVI_PLDR_ABORT            0x80
#define R_CNVI_VER4_PCR_CNVI_PLDR_ABORT            0x44
#define B_CNVI_PCR_CNVI_PLDR_ABORT_ENABLE          BIT0
#define B_CNVI_PCR_CNVI_PLDR_ABORT_REQUEST         BIT1
#define B_CNVI_PCR_SCU_CNVB_CNVI_READY             BIT2
#define R_CNVI_PCR_STAT                            0x8100

#endif // _CNVI_REGS_H_
