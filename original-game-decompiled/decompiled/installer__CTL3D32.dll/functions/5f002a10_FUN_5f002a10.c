
/* ==== FUN_5f002a10 @ 5f002a10 ==== 
 * signature: undefined __stdcall FUN_5f002a10(int param_1, HWND param_2, int * param_3)
 * body: 5f002a10-5f002bbd
 */

void FUN_5f002a10(int param_1,HWND param_2,int *param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  uint uVar5;
  int iVar6;
  HWND pHVar7;
  int iVar8;
  bool bVar9;
  int local_4;
  
  DVar3 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  if (DVar3 != DAT_5f005184) {
    iVar8 = 0;
    bVar9 = DAT_5f00518c == 0;
    if (0 < DAT_5f00518c) {
      pDVar4 = &DAT_5f005194;
      do {
        DVar2 = DVar3;
        iVar1 = iVar8;
        if (*pDVar4 == DVar3) break;
        pDVar4 = pDVar4 + 5;
        iVar8 = iVar8 + 1;
        DVar2 = DAT_5f005184;
        iVar1 = DAT_5f005188;
      } while (iVar8 < DAT_5f00518c);
      DAT_5f005188 = iVar1;
      DAT_5f005184 = DVar2;
      bVar9 = iVar8 == DAT_5f00518c;
    }
    if (bVar9) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
      CallNextHookEx((HHOOK)0x0,param_1,(WPARAM)param_2,(LPARAM)param_3);
      return;
    }
  }
  iVar8 = DAT_5f005188;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  if (param_1 != 3) goto LAB_5f002b9c;
  iVar1 = *param_3;
  if (*(int *)(iVar1 + 0x28) != 0x8002) {
    if (((&DAT_5f0051a0)[iVar8 * 0x14] & 1) == 0) goto LAB_5f002b9c;
    iVar6 = FUN_5f0029d0(*(HWND *)(iVar1 + 0xc));
    if (iVar6 == 0) {
      if ((*(HWND *)(iVar1 + 0xc) == (HWND)0x0) || (DAT_5f005152 == 0x18)) goto LAB_5f002b9c;
      pHVar7 = GetParent(*(HWND *)(iVar1 + 0xc));
      iVar6 = FUN_5f0029d0(pHVar7);
      if (iVar6 == 0) goto LAB_5f002b9c;
    }
    FUN_5f002df0(param_2,0xffff,1,*(undefined4 *)(iVar1 + 0xc));
    goto LAB_5f002b9c;
  }
  if (DAT_5f005152 != 0x20) {
    FUN_5f001210(param_2,Ctl3dDlgProc);
    goto LAB_5f002b9c;
  }
  if (DAT_5f005150 < 0x35f) {
LAB_5f002af0:
    local_4 = 1;
  }
  else {
    uVar5 = GetWindowLongA(param_2,-0x10);
    local_4 = 0;
    if ((uVar5 & 4) == 0) goto LAB_5f002af0;
  }
  SendMessageA(param_2,0x11f0,0,(LPARAM)&local_4);
  if (local_4 != 0) {
    FUN_5f001070(param_2,0x5f0026a0);
  }
LAB_5f002b9c:
  CallNextHookEx((HHOOK)(&DAT_5f005198)[iVar8 * 5],param_1,(WPARAM)param_2,(LPARAM)param_3);
  return;
}


