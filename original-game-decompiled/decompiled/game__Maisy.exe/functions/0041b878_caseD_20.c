
/* ==== switchD_0041b4cb::caseD_20 @ 0041b878 ==== 
 * signature: undefined4 __stdcall caseD_20(void)
 * body: 0041b878-0041b8c9;0041b8e2-0041b8fb
 */

undefined4 switchD_0041b4cb::caseD_20(void)

{
  undefined4 uVar1;
  undefined4 *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  this = FUN_00412c20(0x92);
  *(undefined4 **)(unaff_EBP + -100) = this;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    *(undefined4 **)(unaff_EBP + -0x24) = this;
    FUN_00412c90(this,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    *this = &PTR_FUN_004bf780;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    *this = &PTR_FUN_004bf978;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    *this = &PTR_FUN_004c3508;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 **)(unaff_EBP + -0x14) = this;
  FUN_0042de30(*(void **)(unaff_EBP + -0x14),*(int *)(unaff_EBP + 0xc));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0041bb74();
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


