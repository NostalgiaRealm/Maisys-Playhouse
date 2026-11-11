
/* ==== Ctl3dUnregister @ 5f001620 ==== 
 * signature: undefined4 __stdcall Ctl3dUnregister(int param_1)
 * body: 5f001620-5f0016da
 */

undefined4 Ctl3dUnregister(int param_1)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
                    /* 0x1620  13  Ctl3dUnregister */
  iVar3 = 0;
  DVar1 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  if (0 < DAT_5f00518c) {
    do {
      if (((&DAT_5f005194)[iVar3 * 5] == DVar1) &&
         ((iVar2 = (&DAT_5f00519c)[iVar3 * 5], (&DAT_5f00519c)[iVar3 * 5] = iVar2 + -1,
          iVar2 + -1 == 0 || ((&DAT_5f005190)[iVar3 * 5] == param_1)))) {
        UnhookWindowsHookEx((HHOOK)(&DAT_5f005198)[iVar3 * 5]);
        DAT_5f00518c = DAT_5f00518c + -1;
        if (iVar3 < DAT_5f00518c) {
          puVar5 = &DAT_5f005190 + iVar3 * 5;
          do {
            iVar3 = iVar3 + 1;
            puVar4 = puVar5 + 5;
            puVar6 = puVar5;
            for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = puVar5 + 5;
          } while (iVar3 < DAT_5f00518c);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_5f00518c);
  }
  DAT_5f005134 = DAT_5f005134 + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  if (DAT_5f005134 == 0) {
    FUN_5f002430();
  }
  return 1;
}


