
/* ==== FUN_004309d0 @ 004309d0 ==== 
 * signature: undefined __fastcall FUN_004309d0(int param_1)
 * body: 004309d0-00430a24
 */

void __fastcall FUN_004309d0(int param_1)

{
  int iVar1;
  LPVOID pvVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = 0;
  if ((*(HLOCAL *)(param_1 + 8) != (HLOCAL)0x0) && (*(short *)(param_1 + 0xc) != 0)) {
    pvVar2 = LocalLock(*(HLOCAL *)(param_1 + 8));
    sVar3 = 0;
    if (0 < *(short *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)((int)pvVar2 + sVar4 * 4);
        if (iVar1 != 0) {
          if (sVar3 != sVar4) {
            *(int *)((int)pvVar2 + sVar3 * 4) = iVar1;
          }
          sVar3 = sVar3 + 1;
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 < *(short *)(param_1 + 0xc));
    }
    *(short *)(param_1 + 0xc) = sVar3;
    LocalUnlock(*(HLOCAL *)(param_1 + 8));
  }
  return;
}


