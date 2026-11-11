
/* ==== FUN_004aa4dc @ 004aa4dc ==== 
 * signature: undefined __stdcall FUN_004aa4dc(int param_1, undefined4 * param_2)
 * body: 004aa4dc-004aa599
 */

void FUN_004aa4dc(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  HWND hWnd;
  HWND pHVar5;
  BOOL BVar6;
  HWND hWnd_00;
  HWND hWnd_01;
  
  hWnd_01 = (HWND)0x0;
  if (param_1 != 0) {
    hWnd_01 = *(HWND *)(param_1 + 0x1c);
  }
  if (hWnd_01 != (HWND)0x0) goto LAB_004aa51e;
  iVar1 = FUN_004a7052();
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_004a7052();
    iVar2 = (**(code **)(*piVar3 + 0x78))();
  }
  hWnd_01 = (HWND)0x0;
  if (iVar2 != 0) {
    hWnd_01 = *(HWND *)(iVar2 + 0x1c);
  }
  for (; pHVar5 = hWnd_01, hWnd_00 = hWnd_01, hWnd_01 != (HWND)0x0; hWnd_01 = GetParent(hWnd_01)) {
LAB_004aa51e:
    uVar4 = GetWindowLongA(hWnd_01,-0x10);
    pHVar5 = hWnd_01;
    hWnd_00 = hWnd_01;
    if ((uVar4 & 0x40000000) == 0) break;
  }
  while (hWnd = pHVar5, hWnd != (HWND)0x0) {
    pHVar5 = GetParent(hWnd);
    hWnd_01 = hWnd;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (((hWnd_01 == (HWND)0x0) || (BVar6 = IsWindowEnabled(hWnd_01), BVar6 == 0)) ||
       (hWnd_01 == hWnd_00)) {
      *param_2 = 0;
    }
    else {
      *param_2 = hWnd_01;
      EnableWindow(hWnd_01,0);
    }
  }
  if ((param_1 == 0) && (hWnd_00 != (HWND)0x0)) {
    hWnd_00 = GetLastActivePopup(hWnd_00);
  }
  CWnd::FromHandle(hWnd_00);
  return;
}


