
/* ==== FUN_00451bf2 @ 00451bf2 ==== 
 * signature: undefined4 __stdcall FUN_00451bf2(void)
 * body: 00451bf2-00451c05
 */

undefined4 FUN_00451bf2(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00451c18();
  uVar1 = *(undefined4 *)(unaff_EBP + -0x28);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


