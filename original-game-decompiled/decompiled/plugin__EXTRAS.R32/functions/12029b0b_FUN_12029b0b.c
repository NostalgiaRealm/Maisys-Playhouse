
/* ==== FUN_12029b0b @ 12029b0b ==== 
 * signature: undefined FUN_12029b0b(void)
 * body: 12029b0b-12029b4d
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_12029b0b(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  while( true ) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + 0x10) + 8) + *(int *)(unaff_EBP + -0x1c) * 8);
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    if (iVar2 == *(int *)(unaff_EBP + 0x14)) break;
    if ((*(int *)(unaff_EBP + -0x1c) < 0) ||
       (*(int *)(*(int *)(unaff_EBP + 0x10) + 4) <= *(int *)(unaff_EBP + -0x1c))) {
      *(undefined4 *)(iVar1 + -4) = 0x12029acf;
      _inconsistency();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + 0x10) + 8) + 4 + *(int *)(unaff_EBP + -0x1c) * 8)
    ;
    *(int *)(unaff_EBP + -0x24) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + -4) = 0x103;
      *(undefined4 *)(iVar1 + -8) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(iVar1 + -0x10) = 0x12029afc;
      __CallSettingFrame_12
                (*(undefined4 *)(iVar1 + -0xc),*(undefined4 *)(iVar1 + -8),
                 *(undefined4 *)(iVar1 + -4));
    }
  }
  if (*(int *)(unaff_EBP + -0x1c) != *(int *)(unaff_EBP + 0x14)) {
    *(undefined4 *)(iVar1 + -4) = 0x12029b36;
    _inconsistency();
  }
  **(undefined4 **)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x1c);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return;
}


