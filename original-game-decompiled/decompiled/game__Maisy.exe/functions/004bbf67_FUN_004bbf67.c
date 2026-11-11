
/* ==== FUN_004bbf67 @ 004bbf67 ==== 
 * signature: undefined4 __stdcall FUN_004bbf67(void)
 * body: 004bbf67-004bc035
 */

/* WARNING: Removing unreachable block (ram,0x004bbfb3) */

undefined4 FUN_004bbf67(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  bool bVar4;
  
  FUN_004919ec();
  bVar4 = DAT_004e5104 == (DWORD *)0x0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  if (bVar4) {
    DVar1 = GetVersion();
    if (((DVar1 & 0x80000000) == 0) || (iVar2 = 1, 3 < (byte)DVar1)) {
      iVar2 = 0;
    }
    DAT_004e5104 = FUN_004bb94e(&DAT_004e5140,iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_004e5104 + 8));
  if (*extraout_ECX == 0) {
    iVar2 = FUN_004bb9dd((int)DAT_004e5104);
    *extraout_ECX = iVar2;
  }
  iVar2 = FUN_004bbb38(DAT_004e5104,*extraout_ECX);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  if (iVar2 == 0) {
    uVar3 = (**(code **)(unaff_EBP + 8))();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
    FUN_004bbb86();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_004e5104 + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar3;
}


