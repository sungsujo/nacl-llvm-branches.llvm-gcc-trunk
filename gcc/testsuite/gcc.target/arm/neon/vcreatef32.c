/* APPLE LOCAL file v7 merge */
/* Test the `vcreatef32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vcreatef32 (void)
{
  float32x2_t out_float32x2_t;
  uint64_t arg0_uint64_t;

  out_float32x2_t = vcreate_f32 (arg0_uint64_t);
}

/* { dg-final { cleanup-saved-temps } } */
