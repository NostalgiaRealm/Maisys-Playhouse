
/* ==== FUN_00496d8c @ 00496d8c ==== 
 * signature: undefined1[10] __stdcall FUN_00496d8c(void)
 * body: 00496d8c-00496dbb
 */

undefined1  [10] FUN_00496d8c(void)

{
  float10 fVar1;
  int unaff_EBP;
  float10 in_ST0;
  undefined1 auVar2 [10];
  float10 fVar3;
  
  fVar3 = ((float10)1 + ABS(in_ST0)) * ((float10)1 - ABS(in_ST0));
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
       (ushort)(fVar3 == fVar1) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) == 0) {
    return (undefined1  [10])SQRT(fVar3);
  }
  auVar2 = FUN_004987e6();
  return auVar2;
}


