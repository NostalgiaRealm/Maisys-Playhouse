
/* ==== Ctl3dAutoSubclassEx @ 5f0016f0 ==== 
 * signature: undefined4 __stdcall Ctl3dAutoSubclassEx(undefined4 param_1, uint param_2)
 * body: 5f0016f0-5f001828
 */

undefined4 Ctl3dAutoSubclassEx(undefined4 param_1,uint param_2)

{
  DWORD dwThreadId;
  int iVar1;
  HHOOK pHVar2;
  DWORD *pDVar3;
  uint uVar4;
  
                    /* 0x16f0  27  Ctl3dAutoSubclassEx */
  if (DAT_5f005150 < 0x30a) {
    return 0;
  }
  if (DAT_5f005130 == 0) {
    return 0;
  }
  uVar4 = param_2 | 1;
  if ((param_2 & 2) != 0) {
    uVar4 = param_2 & 0xfffffffc;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  if (DAT_5f00518c != 0x400) {
    dwThreadId = GetCurrentThreadId();
    iVar1 = 0;
    if (0 < DAT_5f00518c) {
      pDVar3 = &DAT_5f005194;
      do {
        if (*pDVar3 == dwThreadId) {
          (&DAT_5f00519c)[iVar1 * 5] = (&DAT_5f00519c)[iVar1 * 5] + 1;
          goto LAB_5f0017f6;
        }
        pDVar3 = pDVar3 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_5f00518c);
    }
    pHVar2 = SetWindowsHookExA(5,FUN_5f002a10,DAT_5f00514c,dwThreadId);
    if (pHVar2 != (HHOOK)0x0) {
      (&DAT_5f005190)[DAT_5f00518c * 5] = param_1;
      (&DAT_5f005194)[DAT_5f00518c * 5] = dwThreadId;
      (&DAT_5f005198)[DAT_5f00518c * 5] = pHVar2;
      (&DAT_5f00519c)[DAT_5f00518c * 5] = 1;
      *(uint *)(&DAT_5f0051a0 + DAT_5f00518c * 0x14) = uVar4;
      DAT_5f005188 = DAT_5f00518c;
      DAT_5f00518c = DAT_5f00518c + 1;
      DAT_5f005184 = dwThreadId;
LAB_5f0017f6:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
      return 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  return 0;
}


