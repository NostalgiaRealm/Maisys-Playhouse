
/* ==== FUN_004bb9dd @ 004bb9dd ==== 
 * signature: int __fastcall FUN_004bb9dd(int param_1)
 * body: 004bb9dd-004bbae1
 */

int __fastcall FUN_004bb9dd(int param_1)

{
  byte *pbVar1;
  HGLOBAL pvVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  if ((iVar4 <= iVar5) || ((*(byte *)(*(int *)(param_1 + 0x14) + iVar5 * 8) & 1) != 0)) {
    iVar5 = 1;
    if (1 < iVar4) {
      pbVar1 = *(byte **)(param_1 + 0x14);
      do {
        pbVar1 = pbVar1 + 8;
        if ((*pbVar1 & 1) == 0) break;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
      if (iVar5 < iVar4) goto LAB_004bbab9;
    }
    iVar4 = iVar4 + 0x20;
    if (*(LPCVOID *)(param_1 + 0x14) == (LPCVOID)0x0) {
      pvVar2 = GlobalAlloc(0x2002,iVar4 * 8);
    }
    else {
      pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x14));
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalReAlloc(pvVar2,iVar4 * 8,0x2002);
    }
    if (pvVar2 == (HGLOBAL)0x0) {
      hMem = GlobalHandle(*(LPCVOID *)(param_1 + 0x14));
      GlobalLock(hMem);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
      FUN_004a3538();
    }
    pvVar3 = GlobalLock(pvVar2);
    _memset((void *)((int)pvVar3 + *(int *)(param_1 + 8) * 8),0,(iVar4 - *(int *)(param_1 + 8)) * 8)
    ;
    *(int *)(param_1 + 8) = iVar4;
    *(LPVOID *)(param_1 + 0x14) = pvVar3;
  }
LAB_004bbab9:
  if (*(int *)(param_1 + 0x10) <= iVar5) {
    *(int *)(param_1 + 0x10) = iVar5 + 1;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 0x14) + iVar5 * 8);
  *pbVar1 = *pbVar1 | 1;
  *(int *)(param_1 + 0xc) = iVar5 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return iVar5;
}


