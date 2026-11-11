
/* ==== FUN_004026c9 @ 004026c9 ==== 
 * signature: undefined4 __cdecl FUN_004026c9(HINSTANCE param_1)
 * body: 004026c9-004027dc
 */

undefined4 __cdecl FUN_004026c9(HINSTANCE param_1)

{
  HDC hdc;
  int nCmdShow;
  
  DAT_0040428c = CreateWindowExA(0,PTR_s_GLBSInstall_0040418c,&DAT_00404258,
                                 (-(uint)((DAT_004042d4 & 8) != 0) & 0x80c90000) + 0x80040000,
                                 -0x80000000,0,-0x80000000,0,(HWND)0x0,(HMENU)0x0,param_1,
                                 (LPVOID)0x0);
  if (DAT_0040428c == (HWND)0x0) {
    return 0;
  }
  hdc = GetDC(DAT_0040428c);
  DAT_004042c4 = GetDeviceCaps(hdc,8);
  DAT_004042c8 = GetDeviceCaps(hdc,10);
  ReleaseDC(DAT_0040428c,hdc);
  if (DAT_004042d0 == 0) {
    if ((DAT_004042d4 & 3) == 0) {
      nCmdShow = 3;
    }
    else {
      if ((DAT_004042d4 & 3) != 1) goto LAB_00402798;
      DAT_004042c8 = (DAT_004042c8 * 3) / 4;
      SetWindowPos(DAT_0040428c,(HWND)0x0,0,0,DAT_004042c4,DAT_004042c8,4);
      nCmdShow = 5;
    }
    ShowWindow(DAT_0040428c,nCmdShow);
  }
LAB_00402798:
  if ((DAT_004042d0 != 0) || (((byte)DAT_004042d4 & 3) == 2)) {
    SetWindowPos(DAT_0040428c,(HWND)0x0,0,0,DAT_004042c4,DAT_004042c8,4);
  }
  FUN_004027dd();
  UpdateWindow(DAT_0040428c);
  return 1;
}


