
/* ==== FUN_00498752 @ 00498752 ==== 
 * signature: float10 __stdcall FUN_00498752(void)
 * body: 00498752-0049877c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00498752(void)

{
  int unaff_EBP;
  unkbyte10 in_ST0;
  
  *(unkbyte10 *)(unaff_EBP + -0x9e) = in_ST0;
  if ((*(byte *)(unaff_EBP + -0x97) & 0x40) != 0) {
    *(undefined1 *)(unaff_EBP + -0x90) = 7;
    return *(float10 *)(unaff_EBP + -0x9e);
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 1;
  return *(float10 *)(unaff_EBP + -0x9e) + (float10)_DAT_004decf4;
}


