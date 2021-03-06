/*
 * windows_shmem_ioctl.h -- definitions used in shmem devices DeviceIoControl calls
 *
 * Copyright (c) 2017 Juniper Networks, Inc. All rights reserved.
 */
#ifndef _WINDOWS_SHMEM_IOCTL_H_
#define _WINDOWS_SHMEM_IOCTL_H_

#ifdef __KERNEL__
#include <Wdm.h>
#else
#include <winioctl.h>
#endif

#define SHMEM_GET_ADDRESS_FUNCTION_CODE (0x901)

#define IOCTL_SHMEM_GET_ADDRESS CTL_CODE(FILE_DEVICE_NAMED_PIPE, \
                                         SHMEM_GET_ADDRESS_FUNCTION_CODE, \
                                         METHOD_OUT_DIRECT, \
                                         FILE_ANY_ACCESS)

#endif // _WINDOWS_SHMEM_IOCTL_H_
