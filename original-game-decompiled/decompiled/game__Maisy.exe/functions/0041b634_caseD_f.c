
/* ==== switchD_0041b4b3::caseD_f @ 0041b634 ==== 
 * signature: undefined4 __stdcall caseD_f(void)
 * body: 0041b634-0041b67c;0041b68d-0041b6a6
 */

undefined4 switchD_0041b4b3::caseD_f(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  puVar2 = FUN_00412c20(0x172);
  *(undefined4 **)(unaff_EBP + -0x84) = puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *(undefined4 **)(unaff_EBP + -0x40) = puVar2;
    FUN_0041bbc0(puVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    *puVar2 = &PTR_FUN_004bf2c8;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    *puVar2 = &PTR_FUN_004bee10;
    *(undefined1 *)(unaff_EBP + -4) = 10;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar2;
  FUN_004185c0(*(void **)(unaff_EBP + -0x14),*(int *)(unaff_EBP + 0xc));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0041bb74();
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


