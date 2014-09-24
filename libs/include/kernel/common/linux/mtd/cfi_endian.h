/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#include <asm/byteorder.h>
#define CFI_HOST_ENDIAN
#ifdef CFI_LITTLE_ENDIAN
#define cpu_to_cfi8(x) (x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cfi8_to_cpu(x) (x)
#define cpu_to_cfi16(x) cpu_to_le16(x)
#define cpu_to_cfi32(x) cpu_to_le32(x)
#define cpu_to_cfi64(x) cpu_to_le64(x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cfi16_to_cpu(x) le16_to_cpu(x)
#define cfi32_to_cpu(x) le32_to_cpu(x)
#define cfi64_to_cpu(x) le64_to_cpu(x)
#elif defined (CFI_BIG_ENDIAN)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_to_cfi8(x) (x)
#define cfi8_to_cpu(x) (x)
#define cpu_to_cfi16(x) cpu_to_be16(x)
#define cpu_to_cfi32(x) cpu_to_be32(x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_to_cfi64(x) cpu_to_be64(x)
#define cfi16_to_cpu(x) be16_to_cpu(x)
#define cfi32_to_cpu(x) be32_to_cpu(x)
#define cfi64_to_cpu(x) be64_to_cpu(x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#elif defined (CFI_HOST_ENDIAN)
#define cpu_to_cfi8(x) (x)
#define cfi8_to_cpu(x) (x)
#define cpu_to_cfi16(x) (x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_to_cfi32(x) (x)
#define cpu_to_cfi64(x) (x)
#define cfi16_to_cpu(x) (x)
#define cfi32_to_cpu(x) (x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cfi64_to_cpu(x) (x)
#else
#error No CFI endianness defined
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
