
/* ==== FUN_004ba439 @ 004ba439 ==== 
 * signature: undefined __stdcall FUN_004ba439(void)
 * body: 004ba439-004ba53c
 */

void FUN_004ba439(void)

{
  ATOM AVar1;
  int *piVar2;
  HGLOBAL pvVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004caffc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((int *)extraout_ECX[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0x1e] + 4))(1);
  }
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xa0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(1);
  }
  iVar4 = FUN_004bafca();
  if (*(char *)(iVar4 + 0x14) == '\0') {
    if (DAT_004dd438 != (int *)0x0) {
      (**(code **)(*DAT_004dd438 + 4))(1);
      DAT_004dd438 = (int *)0x0;
    }
    if (DAT_004dd434 != (int *)0x0) {
      (**(code **)(*DAT_004dd434 + 4))(1);
      DAT_004dd434 = (int *)0x0;
    }
  }
  pvVar3 = *(HGLOBAL *)(*(int *)(unaff_EBP + -0x10) + 0x8c);
  if (pvVar3 != (HGLOBAL)0x0) {
    FUN_004b2f36(pvVar3);
  }
  pvVar3 = *(HGLOBAL *)(*(int *)(unaff_EBP + -0x10) + 0x90);
  if (pvVar3 != (HGLOBAL)0x0) {
    FUN_004b2f36(pvVar3);
  }
  AVar1 = *(ATOM *)(*(int *)(unaff_EBP + -0x10) + 0xa8);
  if (AVar1 != 0) {
    GlobalDeleteAtom(AVar1);
  }
  AVar1 = *(ATOM *)(*(int *)(unaff_EBP + -0x10) + 0xaa);
  if (AVar1 != 0) {
    GlobalDeleteAtom(AVar1);
  }
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xa4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004ba547();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


