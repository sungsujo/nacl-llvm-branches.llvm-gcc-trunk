/* APPLE LOCAL file v7 merge */
/* Test the `vcvt_nf32_u32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vcvt_nf32_u32 (void)
{
  float32x2_t out_float32x2_t;
  uint32x2_t arg0_uint32x2_t;

  out_float32x2_t = vcvt_n_f32_u32 (arg0_uint32x2_t, 1);
}

/* { dg-final { scan-assembler "vcvt\.f32.u32\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+, #\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
