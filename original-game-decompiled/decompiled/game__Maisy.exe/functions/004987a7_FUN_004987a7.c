
/* ==== FUN_004987a7 @ 004987a7 ==== 
 * signature: float10 __stdcall FUN_004987a7(void)
 * body: 004987a7-004987e5
 */

float10 FUN_004987a7(void)

{
  float10 fVar1;
  int unaff_EBP;
  unkbyte10 in_ST0;
  float10 fVar2;
  float10 in_ST1;
  
  *(unkbyte10 *)(unaff_EBP + -0x9e) = in_ST0;
  fVar1 = *(float10 *)(unaff_EBP + -0x9e);
  fVar2 = fVar1;
  if ((*(byte *)(unaff_EBP + -0x97) & 0x40) != 0) {
    *(float10 *)(unaff_EBP + -0x9e) = in_ST1;
    fVar2 = *(float10 *)(unaff_EBP + -0x9e);
    in_ST1 = fVar1;
    if ((*(byte *)(unaff_EBP + -0x97) & 0x40) != 0) {
      *(undefined1 *)(unaff_EBP + -0x90) = 7;
      goto LAB_004987e3;
    }
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 1;
LAB_004987e3:
  return fVar2 + in_ST1;
}


