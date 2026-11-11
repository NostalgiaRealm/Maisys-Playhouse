
/* ==== FUN_004ace97 @ 004ace97 ==== 
 * signature: undefined4 * __stdcall FUN_004ace97(void)
 * body: 004ace97-004acf59
 */

undefined4 * FUN_004ace97(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *extraout_ECX;
  int *piVar5;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004abb44(extraout_ECX + 3);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44(extraout_ECX + 4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004abb44(extraout_ECX + 7);
  iVar1 = *(int *)(unaff_EBP + 0x14);
  *extraout_ECX = &PTR_FUN_004cd174;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piVar4 = (int *)FUN_004a5fed(iVar1 * 4 + 4);
  *(int **)(unaff_EBP + -0x10) = piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piVar5 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    piVar5 = piVar4 + 1;
    *piVar4 = iVar1;
    _eh_vector_constructor_iterator_(piVar5,4,iVar1,FUN_004abb44,CString::~CString);
  }
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  pcVar3 = *(char **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[2] = piVar5;
  extraout_ECX[1] = iVar1;
  extraout_ECX[5] = uVar2;
  CString::operator=((CString *)(extraout_ECX + 3),pcVar3);
  CString::operator=((CString *)(extraout_ECX + 4),*(char **)(unaff_EBP + 0x10));
  extraout_ECX[6] = *(undefined4 *)(unaff_EBP + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


