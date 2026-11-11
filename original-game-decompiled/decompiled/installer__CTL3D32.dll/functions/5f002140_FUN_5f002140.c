
/* ==== FUN_5f002140 @ 5f002140 ==== 
 * signature: uint __stdcall FUN_5f002140(void)
 * body: 5f002140-5f00242f
 */

uint FUN_5f002140(void)

{
  undefined **lpClassName;
  DWORD DVar1;
  LPCSTR lpszCurrent;
  int iVar2;
  HDC hdc;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  char *lpText;
  char local_12e [2];
  tagWNDCLASSA local_12c;
  CHAR local_104 [260];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  DVar1 = GetEnvironmentVariableA(s_Ctl3d_RunAlways_5f00c1ac,local_12e,2);
  if ((DVar1 == 0) || (local_12e[0] != '1')) {
    DVar1 = GetVersion();
    if ((DVar1 & 0x80000000) != 0) {
      DVar1 = GetModuleFileNameA(DAT_5f005148,&DAT_5f005000,0x104);
      for (lpszCurrent = (LPCSTR)(DVar1 + 0x5f004fff); (LPCSTR)0x5f004fff < lpszCurrent;
          lpszCurrent = CharPrevA(&DAT_5f005000,lpszCurrent)) {
        if (*lpszCurrent == '\\') {
          if (lpszCurrent[-1] == ':') {
            lpszCurrent[1] = '\0';
          }
          else {
            *lpszCurrent = '\0';
          }
          break;
        }
      }
      GetSystemDirectoryA(local_104,0x104);
      iVar2 = lstrcmpiA(&DAT_5f005000,local_104);
      if (iVar2 != 0) {
        GetWindowsDirectoryA(local_104,0x104);
        iVar2 = lstrcmpiA(&DAT_5f005000,local_104);
        if (iVar2 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
          lpText = s_This_application_uses_CTL3D32_DL_5f00c07c;
          goto LAB_5f00218e;
        }
      }
      goto LAB_5f002269;
    }
    lpText = s_This_application_uses_CTL3D32_DL_5f00c108;
LAB_5f00218e:
    MessageBoxA((HWND)0x0,lpText,s_CTL3D32_DLL_5f00c1a0,0x10);
  }
  else {
LAB_5f002269:
    hdc = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(hdc,0xc);
    iVar3 = GetDeviceCaps(hdc,0xe);
    DAT_5f005130 = (uint)(3 < iVar2 * iVar3);
    iVar2 = GetSystemMetrics(1);
    if ((iVar2 == 0x15e) && (iVar2 = GetSystemMetrics(0), iVar2 == 0x280)) {
      DAT_5f005130 = 0;
    }
    ReleaseDC((HWND)0x0,hdc);
    if (DAT_5f005130 == 0) goto LAB_5f0021a0;
    DAT_5f005138 = GlobalAddAtomA(&DAT_5f00c070);
    if ((DAT_5f005138 != 0) && (DAT_5f00513e = GlobalAddAtomA(s_C3dNew_5f00c058), DAT_5f00513e != 0)
       ) {
      DAT_5f00513c = GlobalAddAtomA(&DAT_5f00c068);
      DAT_5f00513a = GlobalAddAtomA(&DAT_5f00c060);
      if ((DAT_5f00513c == 0) || (DAT_5f00513a == 0)) {
        DAT_5f005130 = 0;
        return 0;
      }
      DAT_5f005142 = GlobalAddAtomA(s_C3dLNew_5f00c050);
      DAT_5f005140 = GlobalAddAtomA(s_C3dHNew_5f00c048);
      if ((DAT_5f005142 == 0) || (DAT_5f005140 == 0)) {
        DAT_5f005130 = 0;
        return 0;
      }
      DAT_5f005144 = GlobalAddAtomA(&DAT_5f00c074);
      if (DAT_5f005144 != 0) {
        iVar2 = GetSystemMetrics(0x2a);
        DAT_5f00a235 = (char)iVar2;
        Ctl3dWinIniChange();
        iVar2 = FUN_5f002510(1);
        if (iVar2 != 0) {
          ppuVar6 = &PTR_BtnWndProc3d_5f00b04c;
          puVar5 = &DAT_5f00a190;
          do {
            lpClassName = ppuVar6 + -5;
            *puVar5 = *ppuVar6;
            ppuVar6 = ppuVar6 + 8;
            GetClassInfoA((HINSTANCE)0x0,(LPCSTR)lpClassName,&local_12c);
            puVar5[1] = local_12c.lpfnWndProc;
            puVar5 = puVar5 + 6;
          } while (ppuVar6 < &DAT_5f00b10c);
          BVar4 = GetClassInfoA((HINSTANCE)0x0,(LPCSTR)0x8002,&local_12c);
          if (BVar4 == 0) {
            DAT_5f00a220 = DefDlgProcA_exref;
          }
          else {
            DAT_5f00a220 = local_12c.lpfnWndProc;
          }
          goto LAB_5f0021a0;
        }
      }
    }
  }
  DAT_5f005130 = 0;
LAB_5f0021a0:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  return DAT_5f005130;
}


