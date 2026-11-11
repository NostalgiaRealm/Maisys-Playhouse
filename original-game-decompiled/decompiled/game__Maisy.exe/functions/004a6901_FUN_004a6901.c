
/* ==== FUN_004a6901 @ 004a6901 ==== 
 * signature: undefined4 __fastcall FUN_004a6901(CDialog * param_1)
 * body: 004a6901-004a6a21
 */

undefined4 __fastcall FUN_004a6901(CDialog *param_1)

{
  HMODULE hModule;
  bool bVar1;
  int iVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  undefined4 uVar3;
  HWND__ *hWnd;
  BOOL BVar4;
  ulong uVar5;
  HWND pHVar6;
  ulong uVar7;
  LPVOID local_4;
  
  local_4 = *(LPVOID *)(param_1 + 0x48);
  hResData = *(HGLOBAL *)(param_1 + 0x44);
  FUN_004bafca();
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar2 = FUN_004bafca();
    hModule = *(HMODULE *)(iVar2 + 0xc);
    hResInfo = FindResourceA(hModule,*(LPCSTR *)(param_1 + 0x40),&DAT_00000005);
    hResData = LoadResource(hModule,hResInfo);
  }
  if (hResData != (HGLOBAL)0x0) {
    local_4 = LockResource(hResData);
  }
  if (local_4 == (LPVOID)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    bVar1 = false;
    hWnd = CDialog::PreModal(param_1);
    FUN_004a8f79();
    CWnd::FromHandle(hWnd);
    if (hWnd != (HWND__ *)0x0) {
      BVar4 = IsWindowEnabled(hWnd);
      if (BVar4 != 0) {
        bVar1 = true;
        EnableWindow(hWnd,0);
      }
    }
    FUN_004a8f34((int)param_1);
    CWnd::FromHandle(hWnd);
    iVar2 = FUN_004a652f();
    if (iVar2 != 0) {
      if (((byte)param_1[0x24] & 0x10) != 0) {
        uVar7 = 4;
        uVar5 = CWnd::GetExStyle((CWnd *)param_1);
        if ((uVar5 & 0x100) != 0) {
          uVar7 = 5;
        }
        CWnd::RunModalLoop((CWnd *)param_1,uVar7);
      }
      CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,0,0,0,0,0x97);
    }
    if (bVar1) {
      EnableWindow(hWnd,1);
    }
    if (hWnd != (HWND__ *)0x0) {
      pHVar6 = GetActiveWindow();
      if (pHVar6 == *(HWND *)(param_1 + 0x1c)) {
        SetActiveWindow(hWnd);
      }
    }
    (**(code **)(*(int *)param_1 + 0x5c))();
    CDialog::PostModal(param_1);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
  }
  return uVar3;
}


