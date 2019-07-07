/** @file
  Copyright (C) 2019, vit9696. All rights reserved.

  All rights reserved.

  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
**/

#ifndef OC_APPLE_BOOT_POLICY_LIB_H
#define OC_APPLE_BOOT_POLICY_LIB_H

#include <Protocol/AppleBootPolicy.h>

/**
  Install and initialise Apple Boot policy protocol.

  @param[in] Overwrite  Overwrite installed protocol.

  @retval installed or located protocol or NULL.
**/
APPLE_BOOT_POLICY_PROTOCOL *
OcAppleBootPolicyInstallProtocol (
  IN BOOLEAN  Reinstall
  );

#endif // OC_APPLE_BOOT_POLICY_LIB_H
