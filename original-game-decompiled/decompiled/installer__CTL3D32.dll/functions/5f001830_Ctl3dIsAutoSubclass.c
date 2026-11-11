
/* ==== Ctl3dIsAutoSubclass @ 5f001830 ==== 
 * signature: undefined4 __stdcall Ctl3dIsAutoSubclass(void)
 * body: 5f001830-5f00185d
 */

undefined4 Ctl3dIsAutoSubclass(void)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  
                    /* 0x1830  23  Ctl3dIsAutoSubclass */
  DVar1 = GetCurrentThreadId();
  iVar3 = 0;
  if (0 < DAT_5f00518c) {
    pDVar2 = &DAT_5f005194;
    do {
      if (*pDVar2 == DVar1) {
        return 1;
      }
      pDVar2 = pDVar2 + 5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_5f00518c);
  }
  return 0;
}


