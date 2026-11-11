
/* ==== FUN_00401e5d @ 00401e5d ==== 
 * signature: undefined4 __cdecl FUN_00401e5d(HINSTANCE param_1)
 * body: 00401e5d-00401f75
 */

undefined4 __cdecl FUN_00401e5d(HINSTANCE param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int nWidth;
  int nHeight;
  HWND hWndParent;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  
  DAT_00413bd0 = param_1;
  if ((DAT_00413878 == 0) && (DAT_004138a8 == 0)) {
    DAT_004138ac = FUN_00409e03(0x6f,&DAT_00413cc4);
    GetObjectA(DAT_004138ac,0x18,local_1c);
    lpParam = (LPVOID)0x0;
    hMenu = (HMENU)0x0;
    hWndParent = (HWND)0x0;
    nWidth = local_18;
    nHeight = local_14;
    hInstance = param_1;
    iVar1 = GetSystemMetrics(1);
    iVar1 = (iVar1 - local_14) / 2;
    iVar2 = GetSystemMetrics(0);
    DAT_0041381c = CreateWindowExA(8,PTR_s_GLBSUninstall_00410050,&DAT_004101ac,0x90000000,
                                   (iVar2 - local_18) / 2,iVar1,nWidth,nHeight,hWndParent,hMenu,
                                   hInstance,lpParam);
    SetTimer(DAT_0041381c,1,0x9c4,(TIMERPROC)0x0);
  }
  DAT_00413820 = CreateWindowExA(0,PTR_s_GLBSUninstall_00410050,&DAT_004101ac,0xcd0000,0,0,0x280,
                                 0x1e0,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  if (DAT_00413820 == (HWND)0x0) {
    uVar3 = 0;
  }
  else {
    if (DAT_00413bfc != (LPCSTR)0x0) {
      SetWindowTextA(DAT_00413820,DAT_00413bfc);
    }
    if (((DAT_00413878 == 0) && (DAT_004138a8 == 0)) && (DAT_00413838 == 0)) {
      ShowWindow(DAT_00413820,3);
    }
    UpdateWindow(DAT_00413820);
    uVar3 = 1;
  }
  return uVar3;
}


