/* Ghidra 12.1.4 generated C-like pseudocode for stream_002_0001797e.exe.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

/* ==== FUN_5f001000 @ 5f001000 ==== 
 * signature: HANDLE __cdecl FUN_5f001000(HWND param_1)
 * body: 5f001000-5f00101c
 */

HANDLE __cdecl FUN_5f001000(HWND param_1)

{
  HANDLE pvVar1;
  
  if (param_1 == (HWND)0x0) {
    return (HANDLE)0x0;
  }
  pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
  return pvVar1;
}



/* ==== FUN_5f001020 @ 5f001020 ==== 
 * signature: HANDLE __cdecl FUN_5f001020(HWND param_1, int param_2)
 * body: 5f001020-5f001065
 */

HANDLE __cdecl FUN_5f001020(HWND param_1,int param_2)

{
  HANDLE hData;
  
  hData = FUN_5f001000(param_1);
  if (hData == (HANDLE)0x0) {
    hData = DAT_5f00a220;
    if (param_2 != 6) {
      hData = (HANDLE)(&DAT_5f00a194)[param_2 * 6];
    }
    SetPropA(param_1,(LPCSTR)(uint)DAT_5f00513e,hData);
  }
  return hData;
}



/* ==== FUN_5f001070 @ 5f001070 ==== 
 * signature: undefined __cdecl FUN_5f001070(HWND param_1, LONG param_2)
 * body: 5f001070-5f001154
 */

void __cdecl FUN_5f001070(HWND param_1,LONG param_2)

{
  HANDLE pvVar1;
  BOOL BVar2;
  CHAR local_10 [16];
  
  pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005138);
  if (pvVar1 == (HANDLE)0x0) {
    pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
    if (pvVar1 == (HANDLE)0x0) {
      pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005142);
      if (pvVar1 == (HANDLE)0x0) {
        pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f00513c);
        if (pvVar1 == (HANDLE)0x0) {
          pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005140);
          if (pvVar1 == (HANDLE)0x0) {
            pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f00513a);
            if (pvVar1 == (HANDLE)0x0) {
              pvVar1 = FUN_5f001000(param_1);
              if (pvVar1 == (HANDLE)0x0) {
                if (DAT_5f00a235 != '\0') {
                  BVar2 = IsWindowUnicode(param_1);
                  if (BVar2 == 0) {
                    GetClassNameA(param_1,local_10,0x10);
                    lstrcmpiA(local_10,&DAT_5f00c000);
                  }
                }
                pvVar1 = (HANDLE)SetWindowLongA(param_1,-4,param_2);
                SetPropA(param_1,(LPCSTR)(uint)DAT_5f00513e,pvVar1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ==== FUN_5f001160 @ 5f001160 ==== 
 * signature: LRESULT __stdcall FUN_5f001160(int param_1, WPARAM param_2, int param_3)
 * body: 5f001160-5f00120e
 */

LRESULT FUN_5f001160(int param_1,WPARAM param_2,int param_3)

{
  LRESULT LVar1;
  uint uVar2;
  int local_4;
  
  LVar1 = CallNextHookEx(DAT_5f005108,param_1,param_2,param_3);
  if (*(int *)(param_3 + 0xc) != DAT_5f005104) {
    return LVar1;
  }
  UnhookWindowsHookEx(DAT_5f005108);
  if (0x35e < DAT_5f005150) {
    uVar2 = GetWindowLongA(*(HWND *)(param_3 + 0xc),-0x10);
    local_4 = 0;
    if ((uVar2 & 4) != 0) goto LAB_5f0011c5;
  }
  local_4 = 1;
LAB_5f0011c5:
  SendMessageA(*(HWND *)(param_3 + 0xc),0x11f0,0,(LPARAM)&local_4);
  if (local_4 != 0) {
    FUN_5f001070(*(HWND *)(param_3 + 0xc),DAT_5f00510c);
  }
  DAT_5f00510c = 0;
  DAT_5f005108 = (HHOOK)0x0;
  DAT_5f005104 = 0;
  return LVar1;
}



/* ==== FUN_5f001210 @ 5f001210 ==== 
 * signature: undefined __cdecl FUN_5f001210(undefined4 param_1, undefined4 param_2)
 * body: 5f001210-5f001243
 */

void __cdecl FUN_5f001210(undefined4 param_1,undefined4 param_2)

{
  DWORD dwThreadId;
  
  DAT_5f00510c = param_2;
  DAT_5f005104 = param_1;
  dwThreadId = GetCurrentThreadId();
  DAT_5f005108 = SetWindowsHookExA(4,FUN_5f001160,DAT_5f00514c,dwThreadId);
  return;
}



/* ==== FUN_5f001250 @ 5f001250 ==== 
 * signature: LRESULT __cdecl FUN_5f001250(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4, int param_5)
 * body: 5f001250-5f0012a1
 */

LRESULT __cdecl FUN_5f001250(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5)

{
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  
  lpPrevWndFunc = FUN_5f001020(param_1,param_5);
  LVar1 = CallWindowProcA(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  RemovePropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
  RemovePropA(param_1,(LPCSTR)(uint)DAT_5f005144);
  return LVar1;
}



/* ==== FUN_5f0012b0 @ 5f0012b0 ==== 
 * signature: undefined __cdecl FUN_5f0012b0(undefined4 * param_1)
 * body: 5f0012b0-5f0012c9
 */

void __cdecl FUN_5f0012b0(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}



/* ==== FUN_5f0012d0 @ 5f0012d0 ==== 
 * signature: undefined __stdcall FUN_5f0012d0(void)
 * body: 5f0012d0-5f0012f8
 */

void FUN_5f0012d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_5f005174;
  do {
    FUN_5f0012b0(puVar1);
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_5f005180);
  FUN_5f0012b0(&DAT_5f005180);
  return;
}



/* ==== FUN_5f001300 @ 5f001300 ==== 
 * signature: undefined __cdecl FUN_5f001300(HDC param_1, int * param_2)
 * body: 5f001300-5f001329
 */

void __cdecl FUN_5f001300(HDC param_1,int *param_2)

{
  PatBlt(param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],0xf00021);
  return;
}



/* ==== FUN_5f001330 @ 5f001330 ==== 
 * signature: undefined __cdecl FUN_5f001330(HDC param_1, int * param_2, ushort param_3, ushort param_4, ushort param_5)
 * body: 5f001330-5f001461
 */

void __cdecl FUN_5f001330(HDC param_1,int *param_2,ushort param_3,ushort param_4,ushort param_5)

{
  COLORREF color;
  RECT local_10;
  
  color = SetBkColor(param_1,*(COLORREF *)(&DAT_5f005154 + (uint)param_3 * 4));
  local_10.left = *param_2;
  local_10.top = param_2[1];
  local_10.right = param_2[2];
  local_10.bottom = local_10.top + 1;
  if ((param_5 & 2) != 0) {
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  local_10.bottom = param_2[3];
  local_10.right = local_10.left + 1;
  if ((param_5 & 1) != 0) {
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  if (param_3 != param_4) {
    SetBkColor(param_1,*(COLORREF *)(&DAT_5f005154 + (uint)param_4 * 4));
  }
  local_10.right = param_2[2];
  local_10.left = local_10.right + -1;
  if ((param_5 & 4) != 0) {
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  if ((param_5 & 8) != 0) {
    local_10.left = *param_2;
    local_10.top = local_10.bottom + -1;
    if ((param_5 & 0x1000) != 0) {
      local_10.right = local_10.right + -2;
    }
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  SetBkColor(param_1,color);
  return;
}



/* ==== FUN_5f001470 @ 5f001470 ==== 
 * signature: undefined __cdecl FUN_5f001470(HDC param_1, int * param_2, ushort param_3)
 * body: 5f001470-5f0014de
 */

void __cdecl FUN_5f001470(HDC param_1,int *param_2,ushort param_3)

{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  local_4 = param_2[3];
  FUN_5f001330(param_1,&local_10,7,1,param_3 & 0xf);
  local_10 = local_10 + -1;
  local_c = local_c + -1;
  local_8 = local_8 + 1;
  local_4 = local_4 + 1;
  FUN_5f001330(param_1,&local_10,2,0,param_3);
  return;
}



/* ==== FUN_5f0014e0 @ 5f0014e0 ==== 
 * signature: undefined __cdecl FUN_5f0014e0(HWND param_1, HDC param_2)
 * body: 5f0014e0-5f001515
 */

void __cdecl FUN_5f0014e0(HWND param_1,HDC param_2)

{
  tagRECT local_10;
  
  GetClientRect(param_1,&local_10);
  IntersectClipRect(param_2,local_10.left,local_10.top,local_10.right,local_10.bottom);
  return;
}



/* ==== FUN_5f001520 @ 5f001520 ==== 
 * signature: undefined __cdecl FUN_5f001520(HDC param_1, char * param_2, LONG * param_3, LONG * param_4)
 * body: 5f001520-5f0015cb
 */

void __cdecl FUN_5f001520(HDC param_1,char *param_2,LONG *param_3,LONG *param_4)

{
  char cVar1;
  int c;
  char *pcVar2;
  tagSIZE *lpsz;
  tagSIZE local_108;
  char local_100 [256];
  
  pcVar2 = local_100;
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    cVar1 = *param_2;
    if (cVar1 == '&') {
      param_2 = param_2 + 1;
      if (*param_2 == '\0') break;
LAB_5f001577:
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    }
    else {
      if (DAT_5f00a235 == '\0') goto LAB_5f001577;
      if (cVar1 == DAT_5f00a234) {
        param_2 = param_2 + 1;
        if (*param_2 != '\0') goto LAB_5f001577;
        break;
      }
      if ((cVar1 != '\x1e') && (cVar1 != '\x1f')) goto LAB_5f001577;
      if (param_2[1] == '\0') break;
      param_2 = CharNextA(param_2 + 1);
    }
    cVar1 = *param_2;
  }
  lpsz = &local_108;
  *pcVar2 = '\0';
  c = lstrlenA(local_100);
  GetTextExtentPointA(param_1,local_100,c,lpsz);
  *param_3 = local_108.cx;
  *param_4 = local_108.cy;
  return;
}



/* ==== Ctl3dRegister @ 5f0015d0 ==== 
 * signature: undefined4 __stdcall Ctl3dRegister(undefined4 param_1)
 * body: 5f0015d0-5f001614
 */

undefined4 Ctl3dRegister(undefined4 param_1)

{
  int iVar1;
  
                    /* 0x15d0  12  Ctl3dRegister */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  DAT_5f005134 = DAT_5f005134 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  if (DAT_5f005134 == 1) {
    FUN_5f002140();
  }
  iVar1 = Ctl3dIsAutoSubclass();
  if (iVar1 != 0) {
    Ctl3dAutoSubclass(param_1);
  }
  return DAT_5f005130;
}



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



/* ==== Ctl3dAutoSubclass @ 5f0016e0 ==== 
 * signature: undefined __stdcall Ctl3dAutoSubclass(undefined4 param_1)
 * body: 5f0016e0-5f0016ee
 */

void Ctl3dAutoSubclass(undefined4 param_1)

{
                    /* 0x16e0  16  Ctl3dAutoSubclass */
  Ctl3dAutoSubclassEx(param_1,0);
  return;
}



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



/* ==== Ctl3dUnAutoSubclass @ 5f001860 ==== 
 * signature: undefined4 __stdcall Ctl3dUnAutoSubclass(void)
 * body: 5f001860-5f0018f8
 */

undefined4 Ctl3dUnAutoSubclass(void)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
                    /* 0x1860  24  Ctl3dUnAutoSubclass */
  iVar3 = 0;
  DVar1 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  if (0 < DAT_5f00518c) {
    do {
      if (((&DAT_5f005194)[iVar3 * 5] == DVar1) &&
         (iVar2 = (&DAT_5f00519c)[iVar3 * 5], (&DAT_5f00519c)[iVar3 * 5] = iVar2 + -1,
         iVar2 + -1 == 0)) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  return 1;
}



/* ==== Ctl3dSetStyle @ 5f001900 ==== 
 * signature: undefined2 __stdcall Ctl3dSetStyle(void)
 * body: 5f001900-5f001905
 */

undefined2 Ctl3dSetStyle(void)

{
                    /* 0x1900  19  Ctl3dSetStyle */
  return 0;
}



/* ==== Ctl3dGetVer @ 5f001910 ==== 
 * signature: undefined2 __stdcall Ctl3dGetVer(void)
 * body: 5f001910-5f001914
 */

undefined2 Ctl3dGetVer(void)

{
                    /* 0x1910  1  Ctl3dGetVer */
  return 0x231;
}



/* ==== Ctl3dEnabled @ 5f001920 ==== 
 * signature: undefined4 __stdcall Ctl3dEnabled(void)
 * body: 5f001920-5f001925
 */

undefined4 Ctl3dEnabled(void)

{
                    /* 0x1920  5  Ctl3dEnabled */
  return DAT_5f005130;
}



/* ==== Ctl3dSubclassCtl @ 5f001930 ==== 
 * signature: bool __stdcall Ctl3dSubclassCtl(HWND param_1)
 * body: 5f001930-5f001956
 */

bool Ctl3dSubclassCtl(HWND param_1)

{
  bool bVar1;
  
                    /* 0x1930  3  Ctl3dSubclassCtl */
  if (DAT_5f005130 == 0) {
    return false;
  }
  bVar1 = FUN_5f002df0(param_1,0xffff,0,0);
  return bVar1;
}



/* ==== Ctl3dUnsubclassCtl @ 5f001960 ==== 
 * signature: undefined4 __stdcall Ctl3dUnsubclassCtl(HWND param_1)
 * body: 5f001960-5f001a66
 */

undefined4 Ctl3dUnsubclassCtl(HWND param_1)

{
  code *pcVar1;
  HANDLE pvVar2;
  HWND hWnd;
  int iVar3;
  
                    /* 0x1960  26  Ctl3dUnsubclassCtl */
  if (DAT_5f005130 != 0) {
    pcVar1 = (code *)GetWindowLongA(param_1,-4);
    iVar3 = 0;
    do {
      if ((code *)(&DAT_5f00a190)[iVar3 * 6] == pcVar1) {
        pvVar2 = FUN_5f001020(param_1,iVar3);
        RemovePropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
        SetWindowLongA(param_1,-4,(LONG)pvVar2);
        pcVar1 = (code *)0x0;
        iVar3 = 0x10;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    if (iVar3 == 6) {
      if (pcVar1 == Ctl3dDlgProc) {
        pvVar2 = FUN_5f001020(param_1,6);
        RemovePropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
        SetWindowLongA(param_1,-4,(LONG)pvVar2);
      }
      else {
        pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
        if (((pvVar2 != (HANDLE)0x0) ||
            (pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005142), pvVar2 != (HANDLE)0x0)) ||
           (pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005140), pvVar2 != (HANDLE)0x0)) {
          SetPropA(param_1,(LPCSTR)(uint)DAT_5f005144,(HANDLE)0x1);
        }
      }
    }
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      Ctl3dUnsubclassCtl(hWnd);
    }
    return 1;
  }
  return 0;
}



/* ==== Ctl3dSubclassCtlEx @ 5f001a70 ==== 
 * signature: undefined4 __stdcall Ctl3dSubclassCtlEx(HWND param_1, int param_2)
 * body: 5f001a70-5f001aff
 */

undefined4 Ctl3dSubclassCtlEx(HWND param_1,int param_2)

{
  HANDLE pvVar1;
  LONG LVar2;
  HWND pHVar3;
  int iVar4;
  
                    /* 0x1a70  25  Ctl3dSubclassCtlEx */
  if (DAT_5f005130 == 0) {
    return 0;
  }
  if ((-1 < param_2) && (param_2 < 7)) {
    pvVar1 = FUN_5f001000(param_1);
    if (pvVar1 != (HANDLE)0x0) {
      return 0;
    }
    LVar2 = GetWindowLongA(param_1,-0x10);
    pHVar3 = GetParent(param_1);
    iVar4 = (*(code *)(&PTR_FUN_5f00b050)[param_2 * 8])(param_1,LVar2,0xffff,0,pHVar3);
    if (iVar4 == 1) {
      FUN_5f001070(param_1,(&DAT_5f00a190)[param_2 * 6]);
    }
    return 1;
  }
  return 0;
}



/* ==== Ctl3dSubclassDlg @ 5f001b00 ==== 
 * signature: undefined4 __stdcall Ctl3dSubclassDlg(HWND param_1, ushort param_2)
 * body: 5f001b00-5f001b51
 */

undefined4 Ctl3dSubclassDlg(HWND param_1,ushort param_2)

{
  HWND hWnd;
  
                    /* 0x1b00  2  Ctl3dSubclassDlg */
  if (DAT_5f005130 == 0) {
    return 0;
  }
  for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    FUN_5f002df0(hWnd,param_2,0,0);
  }
  return 1;
}



/* ==== FUN_5f001b60 @ 5f001b60 ==== 
 * signature: undefined __cdecl FUN_5f001b60(HWND param_1, ushort param_2, undefined4 param_3)
 * body: 5f001b60-5f001c0f
 */

void __cdecl FUN_5f001b60(HWND param_1,ushort param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  int local_4;
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 == (HANDLE)0x0) {
    FUN_5f002df0(param_1,param_2,0,param_3);
    return;
  }
  pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005144);
  if (pvVar1 == (HANDLE)0x0) {
    local_4 = 0x29a;
    SendMessageA(param_1,0x1944,0,(LPARAM)&local_4);
    if (local_4 == 0x29a) {
      SendMessageA(param_1,0x1943,0,(LPARAM)&local_4);
      if (local_4 == 0x29a) {
        RemovePropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
        FUN_5f002df0(param_1,param_2,0,param_3);
      }
    }
  }
  return;
}



/* ==== FUN_5f001c10 @ 5f001c10 ==== 
 * signature: undefined4 __stdcall FUN_5f001c10(HWND param_1, ushort param_2)
 * body: 5f001c10-5f001c83
 */

undefined4 FUN_5f001c10(HWND param_1,ushort param_2)

{
  HWND hWnd;
  HWND hWnd_00;
  
  if (DAT_5f005130 != 0) {
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      FUN_5f001b60(hWnd,param_2,0);
      for (hWnd_00 = GetWindow(hWnd,5); hWnd_00 != (HWND)0x0; hWnd_00 = GetWindow(hWnd_00,2)) {
        FUN_5f001b60(hWnd_00,param_2,hWnd);
      }
    }
    return 1;
  }
  return 0;
}



/* ==== Ctl3dSubclassDlgEx @ 5f001c90 ==== 
 * signature: undefined4 __stdcall Ctl3dSubclassDlgEx(HWND param_1, ushort param_2)
 * body: 5f001c90-5f001cf2
 */

undefined4 Ctl3dSubclassDlgEx(HWND param_1,ushort param_2)

{
  HWND hWnd;
  
                    /* 0x1c90  21  Ctl3dSubclassDlgEx */
  if (DAT_5f005130 == 0) {
    return 0;
  }
  for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    FUN_5f002df0(hWnd,param_2,0,0);
  }
  FUN_5f001070(param_1,0x5f0026a0);
  return 1;
}



/* ==== Ctl3dCtlColor @ 5f001d00 ==== 
 * signature: undefined4 __stdcall Ctl3dCtlColor(void)
 * body: 5f001d00-5f001d04
 */

undefined4 Ctl3dCtlColor(void)

{
                    /* 0x1d00  4  Ctl3dCtlColor */
  return 0;
}



/* ==== Ctl3dCtlColorEx @ 5f001d10 ==== 
 * signature: undefined4 __stdcall Ctl3dCtlColorEx(uint param_1, HDC param_2, HWND param_3)
 * body: 5f001d10-5f001d91
 */

undefined4 Ctl3dCtlColorEx(uint param_1,HDC param_2,HWND param_3)

{
  HWND pHVar1;
  LONG LVar2;
  
                    /* 0x1d10  18  Ctl3dCtlColorEx */
  if (((DAT_5f005130 == 0) || (param_1 < 0x134)) || (param_1 == 0x137)) {
    return 0;
  }
  if (param_1 == 0x134) {
    if (DAT_5f005150 < 0x35f) {
      pHVar1 = GetWindow(param_3,5);
      if (pHVar1 != (HWND)0x0) {
        LVar2 = GetWindowLongA(param_3,-0x10);
        if (((byte)LVar2 & 3) != 3) goto LAB_5f001d64;
      }
    }
    return 0;
  }
LAB_5f001d64:
  SetTextColor(param_2,DAT_5f005160);
  SetBkColor(param_2,DAT_5f005158);
  return DAT_5f005178;
}



/* ==== Ctl3dColorChange @ 5f001da0 ==== 
 * signature: undefined4 __stdcall Ctl3dColorChange(void)
 * body: 5f001da0-5f001dc6
 */

undefined4 Ctl3dColorChange(void)

{
  undefined4 uVar1;
  
                    /* 0x1da0  6  Ctl3dColorChange */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  uVar1 = FUN_5f002510(0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  return uVar1;
}



/* ==== Ctl3dDlgFramePaint @ 5f001dd0 ==== 
 * signature: undefined __stdcall Ctl3dDlgFramePaint(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4)
 * body: 5f001dd0-5f001ded
 */

void Ctl3dDlgFramePaint(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
                    /* 0x1dd0  20  Ctl3dDlgFramePaint */
  FUN_5f001df0(param_1,param_2,param_3,param_4,1);
  return;
}



/* ==== FUN_5f001df0 @ 5f001df0 ==== 
 * signature: LRESULT __stdcall FUN_5f001df0(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4, int param_5)
 * body: 5f001df0-5f002095
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_5f001df0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5)

{
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  BOOL BVar2;
  uint uVar3;
  HDC hdc;
  int iVar4;
  bool bVar5;
  int local_38;
  HGDIOBJ local_34;
  tagRECT local_30;
  tagRECT local_20;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_5 == 0) {
    lpPrevWndFunc = FUN_5f001020(param_1,6);
  }
  else {
    lpPrevWndFunc = (WNDPROC)0x0;
  }
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    LVar1 = CallWindowProcA(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  }
  if (DAT_5f005130 == 0) {
    return LVar1;
  }
  BVar2 = IsIconic(param_1);
  if (BVar2 != 0) {
    return LVar1;
  }
  local_38 = 1;
  SendMessageA(param_1,0x11ef,0,(LPARAM)&local_38);
  uVar3 = GetWindowLongA(param_1,-0x10);
  if ((local_38 != 0) && ((uVar3 & 0x10400080) == 0x10400080)) {
    bVar5 = (uVar3 & 0xc00000) == 0xc00000;
    iVar4 = DAT_5f00a228 - (uint)bVar5;
    hdc = GetWindowDC(param_1);
    GetWindowRect(param_1,&local_30);
    local_30.right = local_30.right - local_30.left;
    local_30.bottom = local_30.bottom - local_30.top;
    local_30.top = 0;
    local_30.left = 0;
    FUN_5f001330(hdc,&local_30.left,2,7,0xf);
    InflateRect(&local_30,-1,-1);
    FUN_5f001330(hdc,&local_30.left,0,2,0xf);
    InflateRect(&local_30,-1,-1);
    local_34 = SelectObject(hdc,DAT_5f005178);
    local_20.left = local_30.left;
    local_20.top = local_30.top;
    local_20.bottom = local_30.bottom;
    local_20.right = local_30.left + _DAT_5f00a224;
    FUN_5f001300(hdc,&local_20.left);
    OffsetRect(&local_20,(local_30.right - local_30.left) - _DAT_5f00a224,0);
    FUN_5f001300(hdc,&local_20.left);
    local_20.left = local_30.left + _DAT_5f00a224;
    local_20.right = local_30.right - _DAT_5f00a224;
    local_20.bottom = local_20.top + iVar4;
    FUN_5f001300(hdc,&local_20.left);
    if (bVar5) {
      local_c = iVar4 + local_20.top;
      local_10 = local_20.left;
      local_8 = local_20.right;
      local_4 = DAT_5f00a22c + local_c;
      FUN_5f001330(hdc,&local_10,2,0,0xf);
    }
    local_20.top = local_20.top + ((local_30.bottom - local_30.top) - _DAT_5f00a224);
    local_20.bottom = local_20.top + DAT_5f00a228;
    FUN_5f001300(hdc,&local_20.left);
    SelectObject(hdc,local_34);
    ReleaseDC(param_1,hdc);
  }
  return LVar1;
}



/* ==== Ctl3dWinIniChange @ 5f0020a0 ==== 
 * signature: undefined __stdcall Ctl3dWinIniChange(void)
 * body: 5f0020a0-5f00213e
 */

void Ctl3dWinIniChange(void)

{
  int iVar1;
  CHAR local_c [12];
  
                    /* 0x20a0  22  Ctl3dWinIniChange */
  if (DAT_5f00a235 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
    DAT_5f00a234 = 0x1e;
    GetProfileStringA(s_windows_5f00c040,s_kanjimenu_5f00c034,s_roman_5f00c020,local_c,9);
    iVar1 = lstrcmpiA(local_c,s_kanji_5f00c010);
    if (iVar1 == 0) {
      DAT_5f00a234 = 0x1f;
    }
    GetProfileStringA(s_windows_5f00c040,s_hangeulmenu_5f00c028,s_english_5f00c018,local_c,9);
    iVar1 = lstrcmpiA(local_c,s_hangeul_5f00c008);
    if (iVar1 == 0) {
      DAT_5f00a234 = 0x1f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  }
  return;
}



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



/* ==== FUN_5f002430 @ 5f002430 ==== 
 * signature: undefined __stdcall FUN_5f002430(void)
 * body: 5f002430-5f002504
 */

void FUN_5f002430(void)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  piVar1 = &DAT_5f00a190;
  do {
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 6;
  } while (piVar1 < &DAT_5f00a220);
  FUN_5f0012d0();
  if (DAT_5f005138 != 0) {
    GlobalDeleteAtom(DAT_5f005138);
  }
  if (DAT_5f00513e != 0) {
    GlobalDeleteAtom(DAT_5f00513e);
  }
  if (DAT_5f00513c != 0) {
    GlobalDeleteAtom(DAT_5f00513c);
  }
  if (DAT_5f00513a != 0) {
    GlobalDeleteAtom(DAT_5f00513a);
  }
  if (DAT_5f005142 != 0) {
    GlobalDeleteAtom(DAT_5f005142);
  }
  if (DAT_5f005140 != 0) {
    GlobalDeleteAtom(DAT_5f005140);
  }
  if (DAT_5f005144 != 0) {
    GlobalDeleteAtom(DAT_5f005144);
  }
  DAT_5f005130 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  return;
}



/* ==== FUN_5f002510 @ 5f002510 ==== 
 * signature: undefined4 __cdecl FUN_5f002510(int param_1)
 * body: 5f002510-5f002698
 */

undefined4 __cdecl FUN_5f002510(int param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  DWORD *pDVar7;
  DWORD *pDVar8;
  bool bVar9;
  HBITMAP local_30;
  int local_2c [3];
  DWORD local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (DAT_5f005130 == 0) {
    return 0;
  }
  uVar5 = 0;
  do {
    uVar4 = (short)uVar5 + 1;
    DVar1 = GetSysColor((uint)(ushort)(&DAT_5f00b0f8)[uVar5]);
    (&local_20)[uVar5] = DVar1;
    uVar5 = (uint)uVar4;
  } while (uVar4 < 8);
  if (DAT_5f005150 == 0x300) {
    local_20 = 0xffffff;
  }
  if (((local_8 == 0) || (local_1c == local_8)) && (local_8 = 0xc0c0c0, local_1c != 0x808080)) {
    local_8 = 0x808080;
  }
  if (param_1 == 0) {
    iVar3 = 0x20;
    bVar9 = true;
    pcVar6 = &DAT_5f005154;
    pDVar7 = &local_20;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pcVar6 == (char)*pDVar7;
      pcVar6 = pcVar6 + 1;
      pDVar7 = (DWORD *)((int)pDVar7 + 1);
    } while (bVar9);
    if (bVar9) {
      return 1;
    }
  }
  local_30 = FUN_5f0047a0(DAT_5f005148,(LPCSTR)0x67c7,local_c,local_1c,local_18,local_20,local_10,
                          local_4);
  uVar5 = 0;
  do {
    uVar4 = (short)uVar5 + 1;
    pHVar2 = CreateSolidBrush((&local_20)[uVar5]);
    local_2c[uVar5] = (int)pHVar2;
    uVar5 = (uint)uVar4;
  } while (uVar4 < 3);
  uVar4 = 0;
  do {
    if (local_2c[uVar4] == 0) goto LAB_5f002668;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  if (local_30 != (HBITMAP)0x0) {
    FUN_5f0012d0();
    DAT_5f005174 = local_2c[0];
    DAT_5f005178 = local_2c[1];
    DAT_5f00517c = local_2c[2];
    pDVar7 = &local_20;
    pDVar8 = (DWORD *)&DAT_5f005154;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pDVar8 = *pDVar7;
      pDVar7 = pDVar7 + 1;
      pDVar8 = pDVar8 + 1;
    }
    DAT_5f005180 = local_30;
    return 1;
  }
LAB_5f002668:
  uVar5 = 0;
  do {
    uVar4 = (short)uVar5 + 1;
    FUN_5f0012b0(local_2c + uVar5);
    uVar5 = (uint)uVar4;
  } while (uVar4 < 3);
  FUN_5f0012b0(&local_30);
  return 0;
}



/* ==== Ctl3dDlgProc @ 5f0026a0 ==== 
 * signature: LRESULT __stdcall Ctl3dDlgProc(HWND param_1, uint param_2, HDC param_3, HWND param_4)
 * body: 5f0026a0-5f0029cf
 */

LRESULT Ctl3dDlgProc(HWND param_1,uint param_2,HDC param_3,HWND param_4)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  HWND pHVar7;
  UINT UVar8;
  HDC pHVar9;
  HWND pHVar10;
  int local_18;
  WNDPROC local_14;
  CHAR local_10 [16];
  
                    /* 0x26a0  17  Ctl3dDlgProc */
  if (param_2 == 0x82) {
    LVar1 = FUN_5f001250(param_1,0x82,(WPARAM)param_3,(LPARAM)param_4,6);
    return LVar1;
  }
  pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005144);
  if (pvVar2 != (HANDLE)0x0) {
    pWVar3 = FUN_5f001020(param_1,6);
    LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
    return LVar1;
  }
  if (param_2 < 0x87) {
    if ((0x84 < param_2) || (param_2 == 0xc)) {
      if ((DAT_5f005150 < 0x35f) && (BVar4 = IsIconic(param_1), BVar4 == 0)) {
        LVar1 = FUN_5f001df0(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4,0);
        return LVar1;
      }
      pWVar3 = FUN_5f001020(param_1,6);
      LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return LVar1;
    }
    goto LAB_5f002734;
  }
  if (0x138 < param_2) {
    if ((0x1942 < param_2) && (param_2 < 0x1945)) {
      param_4->unused = 1;
      return 0x3ee;
    }
    goto LAB_5f002734;
  }
  if (param_2 < 0x132) {
    if (param_2 != 0x110) goto LAB_5f002734;
    local_14 = FUN_5f001020(param_1,6);
    if (0x35e < DAT_5f005150) {
      uVar5 = GetWindowLongA(param_1,-0x10);
      local_18 = 0;
      if ((uVar5 & 4) != 0) goto LAB_5f00281a;
    }
    local_18 = 1;
LAB_5f00281a:
    SendMessageA(param_1,0x11f0,0,(LPARAM)&local_18);
    if (local_18 == 0) {
      Ctl3dUnsubclassCtl(param_1);
      LVar1 = CallWindowProcA(local_14,param_1,0x110,(WPARAM)param_3,(LPARAM)param_4);
      return LVar1;
    }
    LVar1 = CallWindowProcA(local_14,param_1,0x110,(WPARAM)param_3,(LPARAM)param_4);
    if ((DAT_5f005150 < 0x35f) || (uVar5 = GetWindowLongA(param_1,-0x10), (uVar5 & 4) == 0)) {
      FUN_5f001c10(param_1,0xffff);
    }
    return LVar1;
  }
  GetClassNameA(param_1,local_10,0x10);
  iVar6 = lstrcmpA(s__32770_5f00c1bc,local_10);
  if (iVar6 == 0) {
    pWVar3 = (WNDPROC)GetWindowLongA(param_1,4);
    if (pWVar3 != (WNDPROC)0x0) {
      if ((pWVar3 < (WNDPROC)0xffff0001) || (0x30a < DAT_5f005150)) {
        iVar6 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
        if ((iVar6 != 0) && (iVar6 != 1)) goto LAB_5f0029a4;
        UVar8 = param_2 + 0xcbf;
        pHVar7 = param_1;
        pHVar9 = param_3;
        pHVar10 = param_4;
        pWVar3 = FUN_5f001020(param_1,6);
        iVar6 = CallWindowProcA(pWVar3,pHVar7,UVar8,(WPARAM)pHVar9,(LPARAM)pHVar10);
      }
      else {
        UVar8 = param_2 + 0xcbf;
        pHVar7 = param_1;
        pHVar9 = param_3;
        pHVar10 = param_4;
        pWVar3 = FUN_5f001020(param_1,6);
        iVar6 = CallWindowProcA(pWVar3,pHVar7,UVar8,(WPARAM)pHVar9,(LPARAM)pHVar10);
      }
      if ((iVar6 != 0) && (iVar6 != 1)) goto LAB_5f0029a4;
    }
LAB_5f00299d:
    iVar6 = Ctl3dCtlColorEx(param_2,param_3,param_4);
  }
  else {
    UVar8 = param_2 + 0xcbf;
    pHVar7 = param_1;
    pHVar9 = param_3;
    pHVar10 = param_4;
    pWVar3 = FUN_5f001020(param_1,6);
    iVar6 = CallWindowProcA(pWVar3,pHVar7,UVar8,(WPARAM)pHVar9,(LPARAM)pHVar10);
    if ((iVar6 == 0) || (iVar6 == 1)) goto LAB_5f00299d;
  }
LAB_5f0029a4:
  if (iVar6 != 0) {
    return iVar6;
  }
LAB_5f002734:
  pWVar3 = FUN_5f001020(param_1,6);
  LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  return LVar1;
}



/* ==== FUN_5f0029d0 @ 5f0029d0 ==== 
 * signature: undefined4 __cdecl FUN_5f0029d0(HWND param_1)
 * body: 5f0029d0-5f002a08
 */

undefined4 __cdecl FUN_5f0029d0(HWND param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 == (HANDLE)0x0) {
    return 0;
  }
  if (0x35e < DAT_5f005150) {
    uVar2 = GetWindowLongA(param_1,-0x10);
    if ((uVar2 & 4) != 0) {
      return 0;
    }
  }
  return 1;
}



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



/* ==== FUN_5f002bc0 @ 5f002bc0 ==== 
 * signature: undefined4 __cdecl FUN_5f002bc0(undefined4 param_1, ushort param_2)
 * body: 5f002bc0-5f002be3
 */

undefined4 __cdecl FUN_5f002bc0(undefined4 param_1,ushort param_2)

{
  if (0x35e < DAT_5f005150) {
    return 0;
  }
  if ((param_2 & 0xffdf) < 10) {
    return 1;
  }
  return 0;
}



/* ==== FUN_5f002bf0 @ 5f002bf0 ==== 
 * signature: bool __stdcall FUN_5f002bf0(void)
 * body: 5f002bf0-5f002c36
 */

bool FUN_5f002bf0(void)

{
  int iVar1;
  HWND in_stack_00000014;
  CHAR local_10 [16];
  
  if ((0x35e < DAT_5f005150) && (in_stack_00000014 != (HWND)0x0)) {
    GetClassNameA(in_stack_00000014,local_10,0x10);
    iVar1 = lstrcmpA(local_10,"ComboBox");
    return (bool)('\x01' - (iVar1 == 0));
  }
  return true;
}



/* ==== FUN_5f002c40 @ 5f002c40 ==== 
 * signature: bool __stdcall FUN_5f002c40(void)
 * body: 5f002c40-5f002c86
 */

bool FUN_5f002c40(void)

{
  int iVar1;
  HWND in_stack_00000014;
  CHAR local_10 [16];
  
  if ((0x35e < DAT_5f005150) && (in_stack_00000014 != (HWND)0x0)) {
    GetClassNameA(in_stack_00000014,local_10,0x10);
    iVar1 = lstrcmpA(local_10,"ComboBox");
    return (bool)('\x01' - (iVar1 == 0));
  }
  return true;
}



/* ==== FUN_5f002c90 @ 5f002c90 ==== 
 * signature: undefined4 __stdcall FUN_5f002c90(void)
 * body: 5f002c90-5f002cce
 */

undefined4 FUN_5f002c90(void)

{
  uint uVar1;
  short in_stack_00000010;
  HWND in_stack_00000014;
  
  if (0x35e < DAT_5f005150) {
    return 0;
  }
  if (in_stack_00000010 == 1) {
    uVar1 = GetWindowLongA(in_stack_00000014,-0x10);
    if (((uVar1 & 3) != 2) && ((uVar1 & 3) != 3)) {
      return 1;
    }
    return 0;
  }
  return 1;
}



/* ==== FUN_5f002cd0 @ 5f002cd0 ==== 
 * signature: undefined4 __cdecl FUN_5f002cd0(HWND param_1, uint param_2, undefined4 param_3, short param_4)
 * body: 5f002cd0-5f002d98
 */

undefined4 __cdecl FUN_5f002cd0(HWND param_1,uint param_2,undefined4 param_3,short param_4)

{
  HWND pHVar1;
  
  if (0x35e < DAT_5f005150) {
    return 0;
  }
  if ((param_2 & 3) == 2) {
    if (param_4 == 1) {
      return 0;
    }
    pHVar1 = GetWindow(param_1,5);
    if (pHVar1 != (HWND)0x0) {
      FUN_5f002df0(pHVar1,4,param_4,param_1);
    }
    return 1;
  }
  if ((param_2 & 3) == 3) {
    return 1;
  }
  if (param_4 == 1) {
    return 1;
  }
  pHVar1 = GetWindow(param_1,5);
  if (pHVar1 != (HWND)0x0) {
    FUN_5f002df0(pHVar1,2,param_4,param_1);
    pHVar1 = GetWindow(pHVar1,2);
    if (pHVar1 != (HWND)0x0) {
      FUN_5f002df0(pHVar1,4,param_4,param_1);
    }
    return 1;
  }
  return 0;
}



/* ==== FUN_5f002da0 @ 5f002da0 ==== 
 * signature: undefined4 __cdecl FUN_5f002da0(undefined4 param_1, uint param_2, ushort param_3)
 * body: 5f002da0-5f002dee
 */

undefined4 __cdecl FUN_5f002da0(undefined4 param_1,uint param_2,ushort param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x1f;
  if ((uVar1 != 3) &&
     ((((param_3 & 0x10) != 0 && ((uVar1 < 3 || (uVar1 == 0xc)))) ||
      (((param_3 & 0x20) != 0 &&
       (((3 < uVar1 && (uVar1 < 10)) ||
        ((DAT_5f005150 < 0x35f && ((0xf < uVar1 && (uVar1 < 0x13)))))))))))) {
    return 1;
  }
  return 0;
}



/* ==== FUN_5f002df0 @ 5f002df0 ==== 
 * signature: bool __cdecl FUN_5f002df0(HWND param_1, ushort param_2, short param_3, undefined4 param_4)
 * body: 5f002df0-5f002edb
 */

bool __cdecl FUN_5f002df0(HWND param_1,ushort param_2,short param_3,undefined4 param_4)

{
  HANDLE pvVar1;
  int iVar2;
  LONG LVar3;
  ushort *puVar4;
  int iVar5;
  CHAR local_10 [16];
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 != (HANDLE)0x0) {
    return false;
  }
  iVar5 = 0;
  puVar4 = &DAT_5f00b054;
  GetClassNameA(param_1,local_10,0x10);
  do {
    if ((*puVar4 & param_2) != 0) {
      iVar2 = lstrcmpA((LPCSTR)(puVar4 + -0xe),local_10);
      if (iVar2 == 0) {
        LVar3 = GetWindowLongA(param_1,-0x10);
        iVar2 = (*(code *)(&PTR_FUN_5f00b050)[iVar5 * 8])
                          (param_1,LVar3,param_2,CONCAT22((short)((uint)puVar4 >> 0x10),param_3),
                           param_4);
        if (iVar2 == 1) {
          if ((param_3 == 1) && (DAT_5f005152 == 0x10)) {
            FUN_5f001210(param_1,(&DAT_5f00a190)[iVar5 * 6]);
            return true;
          }
          FUN_5f001070(param_1,(&DAT_5f00a190)[iVar5 * 6]);
        }
        return (bool)('\x01' - (iVar2 == 0));
      }
    }
    puVar4 = puVar4 + 0x10;
    iVar5 = iVar5 + 1;
    if (&UNK_5f00b113 < puVar4) {
      return false;
    }
  } while( true );
}



/* ==== FUN_5f002ee0 @ 5f002ee0 ==== 
 * signature: undefined __cdecl FUN_5f002ee0(HWND param_1, int param_2)
 * body: 5f002ee0-5f002f9d
 */

void __cdecl FUN_5f002ee0(HWND param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  HWND hWnd;
  undefined1 local_10 [12];
  int local_4;
  
  GetWindowRect(param_1,(LPRECT)local_10);
  uVar2 = GetWindowLongA(param_1,-0x10);
  if ((uVar2 & 0x10000000) != 0) {
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if ((((uVar1 & 0xc0) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 1) != 0)) {
        return;
      }
      if (((((byte)uVar1 & 3) == 2) && (local_10._8_4_ - *(int *)(param_2 + 0x10) == local_10._0_4_)
          ) && (*(int *)(param_2 + 0x14) <= local_4 - local_10._4_4_)) {
        local_10._4_4_ = local_10._4_4_ + *(int *)(param_2 + 0x14) + 1;
      }
    }
    InflateRect((LPRECT)local_10,1,1);
    hWnd = GetParent(param_1);
    ScreenToClient(hWnd,(LPPOINT)local_10);
    ScreenToClient(hWnd,(LPPOINT)(local_10 + 8));
    if ((uVar2 & 0x200000) != 0) {
      local_10._8_4_ = local_10._8_4_ + 1;
    }
    InvalidateRect(hWnd,(RECT *)local_10,0);
  }
  return;
}



/* ==== FUN_5f002fa0 @ 5f002fa0 ==== 
 * signature: undefined __cdecl FUN_5f002fa0(HWND param_1)
 * body: 5f002fa0-5f00300d
 */

void __cdecl FUN_5f002fa0(HWND param_1)

{
  uint uVar1;
  HWND hWnd;
  undefined1 local_10 [16];
  
  uVar1 = GetWindowLongA(param_1,-0x10);
  GetWindowRect(param_1,(LPRECT)local_10);
  InflateRect((LPRECT)local_10,1,1);
  hWnd = GetParent(param_1);
  ScreenToClient(hWnd,(LPPOINT)local_10);
  ScreenToClient(hWnd,(LPPOINT)(local_10 + 8));
  if ((uVar1 & 0x200000) != 0) {
    local_10._8_4_ = local_10._8_4_ + 1;
  }
  ValidateRect(hWnd,(RECT *)local_10);
  return;
}



/* ==== FUN_5f003010 @ 5f003010 ==== 
 * signature: undefined __cdecl FUN_5f003010(HWND param_1, HDC param_2, RECT * param_3, char * param_4, int param_5, short param_6, int param_7)
 * body: 5f003010-5f00334e
 */

void __cdecl
FUN_5f003010(HWND param_1,HDC param_2,RECT *param_3,char *param_4,int param_5,short param_6,
            int param_7)

{
  BOOL BVar1;
  HGDIOBJ pvVar2;
  int iVar3;
  HWND pHVar4;
  int iVar5;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  local_10.left = param_3->left;
  local_10.top = param_3->top;
  local_10.right = param_3->right;
  local_10.bottom = param_3->bottom;
  FUN_5f001330(param_2,&param_3->left,7,7,0xf);
  InflateRect(&local_10,-1,-1);
  if ((param_6 == 1) && (BVar1 = IsWindowEnabled(param_1), BVar1 != 0)) {
    FUN_5f001330(param_2,&local_10.left,7,7,0xf);
    InflateRect(&local_10,-1,-1);
  }
  PatBlt(param_2,param_3->left,param_3->top,1,1,0xf00021);
  PatBlt(param_2,param_3->right + -1,param_3->top,1,1,0xf00021);
  PatBlt(param_2,param_3->left,param_3->bottom + -1,1,1,0xf00021);
  PatBlt(param_2,param_3->right + -1,param_3->bottom + -1,1,1,0xf00021);
  iVar5 = (param_7 == 0) + 1;
  pvVar2 = DAT_5f005174;
  if (param_7 != 0) {
    pvVar2 = DAT_5f00517c;
  }
  pvVar2 = SelectObject(param_2,pvVar2);
  PatBlt(param_2,local_10.left,local_10.top,iVar5,local_10.bottom - local_10.top,0xf00021);
  PatBlt(param_2,local_10.left,local_10.top,local_10.right - local_10.left,iVar5,0xf00021);
  if (param_7 == 0) {
    iVar5 = 0;
    SelectObject(param_2,DAT_5f00517c);
    local_10.bottom = local_10.bottom + -1;
    local_10.right = local_10.right + -1;
    do {
      PatBlt(param_2,local_10.left,local_10.bottom,(local_10.right - local_10.left) + 1,1,0xf00021);
      PatBlt(param_2,local_10.right,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
      if (iVar5 < 1) {
        InflateRect(&local_10,-1,-1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
  }
  local_10.left = local_10.left + 1;
  local_10.top = local_10.top + 1;
  SelectObject(param_2,DAT_5f005178);
  PatBlt(param_2,local_10.left,local_10.top,local_10.right - local_10.left,
         local_10.bottom - local_10.top,0xf00021);
  BVar1 = IsWindowEnabled(param_1);
  if (BVar1 == 0) {
    SetTextColor(param_2,DAT_5f00516c);
  }
  FUN_5f001520(param_2,param_4,&local_18,&local_14);
  local_10.top = local_10.top + ((local_10.bottom - local_10.top) - local_14) / 2;
  local_10.left = local_10.left + ((local_10.right - local_10.left) - local_18) / 2;
  iVar5 = local_10.top + local_14;
  if (local_10.bottom <= local_10.top + local_14) {
    iVar5 = local_10.bottom;
  }
  iVar3 = local_10.left + local_18;
  if (local_10.right <= local_10.left + local_18) {
    iVar3 = local_10.right;
  }
  local_10.right = iVar3;
  if (param_7 != 0) {
    local_10.bottom = iVar5;
    OffsetRect(&local_10,1,1);
    iVar3 = param_3->right + -3;
    if (local_10.right <= iVar3) {
      iVar3 = local_10.right;
    }
    iVar5 = param_3->bottom + -3;
    local_10.right = iVar3;
    if (local_10.bottom <= iVar5) {
      iVar5 = local_10.bottom;
    }
  }
  local_10.bottom = iVar5;
  DrawTextA(param_2,param_4,param_5,&local_10,0x20);
  pHVar4 = GetFocus();
  if (pHVar4 == param_1) {
    InflateRect(&local_10,1,1);
    IntersectRect(&local_10,&local_10,param_3);
    DrawFocusRect(param_2,&local_10);
  }
  if (pvVar2 != (HGDIOBJ)0x0) {
    SelectObject(param_2,pvVar2);
  }
  return;
}



/* ==== FUN_5f003350 @ 5f003350 ==== 
 * signature: undefined __cdecl FUN_5f003350(HWND param_1, HDC param_2, uint param_3)
 * body: 5f003350-5f00386e
 */

void __cdecl FUN_5f003350(HWND param_1,HDC param_2,uint param_3)

{
  uint uVar1;
  HWND hWnd;
  DWORD DVar2;
  HGDIOBJ pvVar3;
  HDC hdc;
  int x;
  HGDIOBJ local_154;
  int local_150;
  int local_14c;
  uint local_144;
  int local_140;
  int local_13c;
  HGDIOBJ local_138;
  uint local_134;
  tagRECT local_130;
  tagRECT local_120;
  undefined1 local_110 [12];
  int local_104;
  CHAR local_100 [256];
  
  uVar1 = GetWindowLongA(param_1,-0x10);
  local_144 = uVar1 & 0x20;
  uVar1 = uVar1 & 0x1f;
  hWnd = GetParent(param_1);
  SetBkMode(param_2,2);
  GetClientRect(param_1,&local_120);
  local_130.left = local_120.left;
  local_130.top = local_120.top;
  local_130.right = local_120.right;
  local_130.bottom = local_120.bottom;
  local_154 = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
  if (local_154 != (HGDIOBJ)0x0) {
    local_154 = SelectObject(param_2,local_154);
  }
  DVar2 = GetSysColor(0xf);
  SetBkColor(param_2,DVar2);
  DVar2 = GetSysColor(0x12);
  SetTextColor(param_2,DVar2);
  pvVar3 = (HGDIOBJ)SendMessageA(hWnd,0x135,(WPARAM)param_2,(LPARAM)param_1);
  local_138 = SelectObject(param_2,pvVar3);
  IntersectClipRect(param_2,local_130.left,local_130.top,local_130.right,local_130.bottom);
  if (((param_3 & 0x10) != 0) && (uVar1 != 7)) {
    PatBlt(param_2,local_130.left,local_130.top,local_130.right - local_130.left,
           local_130.bottom - local_130.top,0xf00021);
  }
  local_13c = IsWindowEnabled(param_1);
  local_110._0_4_ = SendMessageA(param_1,0xf2,0,0);
  local_14c = 0;
  local_134 = local_110._0_4_ & 3;
  local_110._0_4_ = local_110._0_4_ & 4;
  local_150 = ((int)local_110._0_4_ >> 1 | -(uint)(local_134 == 0) + 1) * 0xe;
  if (local_13c == 0) {
    local_150 = local_150 + (-(uint)(local_134 == 0) + 3) * 0xe;
  }
  if ((((param_3 & 10) != 0) || (uVar1 == 0)) || (uVar1 == 1)) {
    local_140 = GetWindowTextA(param_1,local_100,0x100);
  }
  switch(uVar1) {
  case 0:
  case 1:
    FUN_5f003010(param_1,param_2,&local_120,local_100,local_140,(short)uVar1,local_110._0_4_);
    goto switchD_5f00350c_caseD_8;
  case 2:
  case 3:
    break;
  case 4:
  case 9:
    local_14c = 0xd;
    break;
  case 5:
  case 6:
    if (local_134 == 2) {
      local_14c = 0x1a;
    }
    break;
  case 7:
    if ((param_3 & 6) != 0) {
      FUN_5f001520(param_2,local_100,(LONG *)&local_134,(LONG *)&local_144);
      if (local_144 == 0) {
        FUN_5f001520(param_2,&DAT_5f00c1c4,(LONG *)local_110,(LONG *)&local_144);
      }
      local_130.left = local_130.left + 4;
      local_130.right = local_130.left + local_134 + 4;
      local_130.bottom = local_130.top + local_144;
      if ((param_3 & 0x20) != 0) {
        local_110._4_4_ = local_130.top;
        local_110._8_4_ = local_120.right;
        local_110._0_4_ = local_130.left;
        local_104 = local_130.bottom;
        ClientToScreen(param_1,(LPPOINT)local_110);
        ClientToScreen(param_1,(LPPOINT)(local_110 + 8));
        ScreenToClient(hWnd,(LPPOINT)local_110);
        ScreenToClient(hWnd,(LPPOINT)(local_110 + 8));
        InvalidateRect(hWnd,(RECT *)local_110,1);
        return;
      }
      local_120.right = local_120.right + -1;
      local_120.bottom = local_120.bottom + -1;
      local_120.top = local_120.top + (int)local_144 / 2;
      FUN_5f001330(param_2,&local_120.left,2,2,0xf);
      OffsetRect(&local_120,1,1);
      FUN_5f001330(param_2,&local_120.left,0,0,0xf);
      if (local_13c == 0) {
        SetTextColor(param_2,DAT_5f00516c);
      }
      DrawTextA(param_2,local_100,local_140,&local_130,0x20);
    }
  default:
    goto switchD_5f00350c_caseD_8;
  }
  if (((param_3 & 4) != 0) && (hdc = CreateCompatibleDC(param_2), hdc != (HDC)0x0)) {
    pvVar3 = SelectObject(hdc,DAT_5f005180);
    if (pvVar3 != (HGDIOBJ)0x0) {
      x = local_130.left;
      if (local_144 != 0) {
        x = local_130.right + -0xe;
      }
      BitBlt(param_2,x,local_130.top + ((local_130.bottom - local_130.top) + -0xd) / 2,0xe,0xd,hdc,
             local_150,local_14c,0xcc0020);
      SelectObject(hdc,pvVar3);
    }
    DeleteDC(hdc);
  }
  if ((param_3 & 2) != 0) {
    if (local_144 == 0) {
      local_130.left = local_120.left + 0x12;
    }
    else {
      local_130.right = local_120.right + -0x12;
    }
    if (local_13c == 0) {
      SetTextColor(param_2,DAT_5f00516c);
    }
    DrawTextA(param_2,local_100,local_140,&local_130,0x24);
  }
  if ((param_3 & 8) != 0) {
    FUN_5f001520(param_2,local_100,(LONG *)local_110,(LONG *)&local_134);
    local_130.top = (int)((local_130.bottom - local_134) - local_130.top) / 2;
    local_130.bottom = local_130.top + local_134;
    if (local_144 == 0) {
      local_130.left = local_120.left + 0x12;
    }
    else {
      local_120.right = local_120.right + -0x12;
      local_130.left = local_120.left;
    }
    local_130.right = local_130.left + local_110._0_4_;
    InflateRect(&local_130,1,1);
    IntersectRect(&local_130,&local_130,&local_120);
    DrawFocusRect(param_2,&local_130);
  }
switchD_5f00350c_caseD_8:
  SelectObject(param_2,local_138);
  if (local_154 != (HGDIOBJ)0x0) {
    SelectObject(param_2,local_154);
  }
  return;
}



/* ==== BtnWndProc3d @ 5f0038a0 ==== 
 * signature: LRESULT __stdcall BtnWndProc3d(HWND param_1, uint param_2, HDC param_3, undefined4 * param_4)
 * body: 5f0038a0-5f003b4d
 */

LRESULT BtnWndProc3d(HWND param_1,uint param_2,HDC param_3,undefined4 *param_4)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  LONG LVar4;
  uint uVar5;
  uint uVar6;
  HDC pHVar7;
  uint uVar8;
  HWND hWnd;
  tagPAINTSTRUCT local_40;
  
                    /* 0x38a0  7  BtnWndProc3d */
  if (param_2 == 0x82) {
    LVar1 = FUN_5f001250(param_1,0x82,(WPARAM)param_3,(LPARAM)param_4,0);
    return LVar1;
  }
  pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005144);
  if (pvVar2 != (HANDLE)0x0) {
    pWVar3 = FUN_5f001020(param_1,0);
    LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
    return LVar1;
  }
  if (param_2 < 0xf2) {
    if (param_2 == 0xf1) goto LAB_5f003a46;
    switch(param_2) {
    case 7:
      uVar8 = 0x16;
      break;
    case 8:
      LVar4 = GetWindowLongA(param_1,-0x10);
      if (((byte)LVar4 & 0x1f) == 9) {
        SendMessageA(param_1,0xf3,0,0);
      }
      uVar8 = 0;
      break;
    default:
      goto switchD_5f003931_caseD_9;
    case 10:
      uVar8 = 6;
      break;
    case 0xc:
      uVar8 = GetWindowLongA(param_1,-0x10);
      if (((uVar8 & 0x10000000) == 0) || (((byte)uVar8 & 0x1f) != 7)) {
        uVar8 = 0x16;
      }
      else {
        uVar8 = 0x22;
      }
      break;
    case 0xf:
      uVar8 = SendMessageA(param_1,0xf2,0,0);
      pHVar7 = param_3;
      if (param_3 == (HDC)0x0) {
        pHVar7 = BeginPaint(param_1,&local_40);
      }
      uVar5 = GetWindowLongA(param_1,-0x10);
      if ((uVar5 & 0x10000000) != 0) {
        FUN_5f003350(param_1,pHVar7,uVar8 & 8 | 6);
      }
      if (param_3 == (HDC)0x0) {
        EndPaint(param_1,&local_40);
      }
      return 0;
    }
  }
  else {
    if (param_2 != 0xf3) {
      if ((0x1942 < param_2) && (param_2 < 0x1945)) {
        *param_4 = 1;
        return 1000;
      }
      goto switchD_5f003931_caseD_9;
    }
LAB_5f003a46:
    uVar8 = 4;
  }
  uVar5 = SendMessageA(param_1,0xf2,0,0);
  uVar6 = GetWindowLongA(param_1,-0x10);
  if ((uVar6 & 0x10000000) != 0) {
    if (param_2 != 7) {
      SetWindowLongA(param_1,-0x10,uVar6 & 0xefffffff);
    }
    hWnd = param_1;
    uVar6 = param_2;
    pWVar3 = FUN_5f001020(param_1,0);
    LVar1 = CallWindowProcA(pWVar3,hWnd,uVar6,(WPARAM)param_3,(LPARAM)param_4);
    if (param_2 != 7) {
      uVar6 = GetWindowLongA(param_1,-0x10);
      SetWindowLongA(param_1,-0x10,uVar6 | 0x10000000);
    }
    uVar6 = SendMessageA(param_1,0xf2,0,0);
    if ((((param_2 != 0xf3) && (param_2 != 0xf1)) || (uVar6 != uVar5)) &&
       (pHVar7 = GetDC(param_1), pHVar7 != (HDC)0x0)) {
      if (((uVar6 ^ uVar5) & 3) != 0) {
        uVar8 = uVar8 | 4;
      }
      ExcludeUpdateRgn(pHVar7,param_1);
      FUN_5f003350(param_1,pHVar7,(uVar6 ^ uVar5) & 8 | uVar8);
      ReleaseDC(param_1,pHVar7);
    }
    return LVar1;
  }
switchD_5f003931_caseD_9:
  pWVar3 = FUN_5f001020(param_1,0);
  LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  return LVar1;
}



/* ==== FUN_5f003b4e @ 5f003b4e ==== 
 * signature: undefined __stdcall FUN_5f003b4e(void)
 * body: 5f003b4e-5f003b4f
 */

void FUN_5f003b4e(void)

{
  code *pcVar1;
  LRESULT LVar2;
  HWND pHVar3;
  HDC hDC;
  LONG LVar4;
  int iVar5;
  HWND hWndTo;
  uint uVar6;
  char unaff_BL;
  ushort uVar7;
  int unaff_EBP;
  HWND unaff_ESI;
  int unaff_EDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined2 in_FPUStatusWord;
  uint uStack00000010;
  int in_stack_00000018;
  uint uStack0000001c;
  uint uStack00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  LRESULT in_stack_00000034;
  int in_stack_0000003c;
  int in_stack_00000044;
  int in_stack_0000005c;
  int in_stack_00000060;
  
  if (in_ZF || in_OF != in_SF) {
    *(char *)(unaff_EDI + -0x77) = *(char *)(unaff_EDI + -0x77) + unaff_BL;
    uRam555f0039 = in_FPUStatusWord;
    *(char *)(unaff_EBP + -0x34) = *(char *)(unaff_EBP + -0x34) + unaff_BL;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack00000010 = GetWindowLongA(unaff_ESI,-0x10);
  if (((uStack00000010 & 0x10000000) != 0) &&
     (((in_stack_00000060 != 3 || (((byte)uStack00000010 & 3) != 3)) ||
      (LVar2 = SendMessageA(unaff_ESI,0x157,0,0), LVar2 == 0)))) {
    if (in_stack_0000005c != 0) {
      HideCaret(unaff_ESI);
    }
    GetWindowRect(unaff_ESI,(LPRECT)&stack0x00000024);
    pHVar3 = GetParent(unaff_ESI);
    ScreenToClient(pHVar3,(LPPOINT)&stack0x00000024);
    uVar7 = 0xf;
    ScreenToClient(pHVar3,(LPPOINT)&stack0x0000002c);
    hDC = GetDC(pHVar3);
    uStack0000001c = uStack00000010 & 0x100000;
    if (uStack0000001c != 0) {
      uVar7 = 7;
    }
    uStack00000020 = uStack00000010 & 0x200000;
    if (uStack00000020 != 0) {
      uVar7 = uVar7 & 0xfffb;
    }
    LVar4 = GetWindowLongA(unaff_ESI,-0xc);
    hWndTo = pHVar3;
    if (in_stack_0000005c - LVar4 == -1000) {
      in_stack_00000018 = 0x29a;
      in_stack_00000034 = SendMessageA(pHVar3,0x1944,0,(LPARAM)&stack0x00000018);
      if (in_stack_00000018 == 0x29a) {
        in_stack_00000034 = SendMessageA(pHVar3,0x1943,0,(LPARAM)&stack0x00000018);
      }
      GetClassNameA(pHVar3,(LPSTR)&stack0x00000044,0x10);
      iVar5 = lstrcmpA((LPCSTR)&stack0x00000044,"ComboBox");
      if ((iVar5 == 0) || ((in_stack_00000018 == 1 && (in_stack_00000034 == 0x3eb)))) {
        hWndTo = GetParent(pHVar3);
        MapWindowPoints(pHVar3,hWndTo,(LPPOINT)&stack0x00000024,2);
        ReleaseDC(pHVar3,hDC);
        hDC = GetDC(hWndTo);
        if (in_stack_0000005c == 0) {
          uVar7 = uVar7 & 0xfffd;
          in_stack_00000028 = in_stack_00000028 + 1;
        }
        else {
          uVar6 = GetWindowLongA(pHVar3,-0x10);
          if (((uVar6 & 3) == 2) || ((uVar6 & 3) == 3)) {
            LVar2 = SendMessageA(pHVar3,0x157,0,0);
            if (LVar2 != 0) {
              ReleaseDC(hWndTo,hDC);
              ShowCaret(unaff_ESI);
              return;
            }
          }
          else {
            uVar7 = uVar7 & 0xfff7;
            pHVar3 = GetWindow(pHVar3,5);
            GetWindowRect(pHVar3,(LPRECT)&stack0x00000034);
            in_stack_0000002c = in_stack_0000002c + (in_stack_00000034 - in_stack_0000003c);
            FUN_5f001470(hDC,&stack0x00000024,0x1008);
            in_stack_0000002c = in_stack_0000002c + (in_stack_0000003c - in_stack_00000034);
          }
        }
      }
    }
    FUN_5f001470(hDC,&stack0x00000024,uVar7);
    iVar5 = in_stack_0000002c;
    if ((in_stack_00000060 == 3) && (((byte)uStack00000010 & 3) == 3)) {
      in_stack_00000024 = GetSystemMetrics(2);
      in_stack_00000024 = iVar5 - in_stack_00000024;
      FUN_5f001330(hDC,&stack0x00000024,7,7,0xc);
      FUN_5f002fa0(unaff_ESI);
    }
    else {
      if (uStack00000020 != 0) {
        in_stack_0000002c = in_stack_0000002c + 1;
        FUN_5f001330(hDC,&stack0x00000024,0,0,4);
        iVar5 = in_stack_0000002c + -1;
        in_stack_00000044 = in_stack_00000024;
        in_stack_0000002c = iVar5;
        in_stack_00000024 = GetSystemMetrics(2);
        in_stack_00000024 = iVar5 - in_stack_00000024;
        FUN_5f001330(hDC,&stack0x00000024,7,7,8);
        in_stack_00000024 = in_stack_00000044;
      }
      if (uStack0000001c != 0) {
        in_stack_00000030 = in_stack_00000030 + 1;
        FUN_5f001330(hDC,&stack0x00000024,0,0,8);
        iVar5 = in_stack_00000030 + -1;
        in_stack_00000030 = iVar5;
        in_stack_00000028 = GetSystemMetrics(0x15);
        in_stack_00000028 = iVar5 - in_stack_00000028;
        FUN_5f001330(hDC,&stack0x00000024,7,7,4);
      }
    }
    ReleaseDC(hWndTo,hDC);
    if (in_stack_0000005c != 0) {
      ShowCaret(unaff_ESI);
    }
  }
  return;
}



/* ==== FUN_5f003b80 @ 5f003b80 ==== 
 * signature: undefined __cdecl FUN_5f003b80(HWND param_1, int param_2, int param_3)
 * body: 5f003b80-5f003eb5
 */

void __cdecl FUN_5f003b80(HWND param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  LRESULT LVar3;
  HWND pHVar4;
  HDC hDC;
  LONG LVar5;
  int iVar6;
  HWND hWndTo;
  uint uVar7;
  ushort uVar8;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined1 local_30 [12];
  int local_24;
  tagRECT local_20;
  int local_10 [4];
  
  uVar2 = GetWindowLongA(param_1,-0x10);
  if (((uVar2 & 0x10000000) != 0) &&
     (((param_3 != 3 || (((byte)uVar2 & 3) != 3)) ||
      (LVar3 = SendMessageA(param_1,0x157,0,0), LVar3 == 0)))) {
    if (param_2 != 0) {
      HideCaret(param_1);
    }
    GetWindowRect(param_1,(LPRECT)local_30);
    pHVar4 = GetParent(param_1);
    ScreenToClient(pHVar4,(LPPOINT)local_30);
    uVar8 = 0xf;
    ScreenToClient(pHVar4,(LPPOINT)(local_30 + 8));
    hDC = GetDC(pHVar4);
    local_38 = uVar2 & 0x100000;
    if (local_38 != 0) {
      uVar8 = 7;
    }
    local_34 = uVar2 & 0x200000;
    if (local_34 != 0) {
      uVar8 = uVar8 & 0xfffb;
    }
    LVar5 = GetWindowLongA(param_1,-0xc);
    hWndTo = pHVar4;
    if (param_2 - LVar5 == -1000) {
      local_3c = 0x29a;
      local_20.left = SendMessageA(pHVar4,0x1944,0,(LPARAM)&local_3c);
      if (local_3c == 0x29a) {
        local_20.left = SendMessageA(pHVar4,0x1943,0,(LPARAM)&local_3c);
      }
      GetClassNameA(pHVar4,(LPSTR)local_10,0x10);
      iVar6 = lstrcmpA((LPCSTR)local_10,"ComboBox");
      if ((iVar6 == 0) || ((local_3c == 1 && (local_20.left == 0x3eb)))) {
        hWndTo = GetParent(pHVar4);
        MapWindowPoints(pHVar4,hWndTo,(LPPOINT)local_30,2);
        ReleaseDC(pHVar4,hDC);
        hDC = GetDC(hWndTo);
        if (param_2 == 0) {
          uVar8 = uVar8 & 0xfffd;
          local_30._4_4_ = local_30._4_4_ + 1;
        }
        else {
          uVar7 = GetWindowLongA(pHVar4,-0x10);
          if (((uVar7 & 3) == 2) || ((uVar7 & 3) == 3)) {
            LVar3 = SendMessageA(pHVar4,0x157,0,0);
            if (LVar3 != 0) {
              ReleaseDC(hWndTo,hDC);
              ShowCaret(param_1);
              return;
            }
          }
          else {
            uVar8 = uVar8 & 0xfff7;
            pHVar4 = GetWindow(pHVar4,5);
            GetWindowRect(pHVar4,&local_20);
            local_30._8_4_ = local_30._8_4_ + (local_20.left - local_20.right);
            FUN_5f001470(hDC,(int *)local_30,0x1008);
            local_30._8_4_ = local_30._8_4_ + (local_20.right - local_20.left);
          }
        }
      }
    }
    FUN_5f001470(hDC,(int *)local_30,uVar8);
    uVar1 = local_30._8_4_;
    if ((param_3 == 3) && (((byte)uVar2 & 3) == 3)) {
      local_30._0_4_ = GetSystemMetrics(2);
      local_30._0_4_ = uVar1 - local_30._0_4_;
      FUN_5f001330(hDC,(int *)local_30,7,7,0xc);
      FUN_5f002fa0(param_1);
    }
    else {
      if (local_34 != 0) {
        local_30._8_4_ = local_30._8_4_ + 1;
        FUN_5f001330(hDC,(int *)local_30,0,0,4);
        iVar6 = local_30._8_4_ + -1;
        local_10[0] = local_30._0_4_;
        local_30._8_4_ = iVar6;
        local_30._0_4_ = GetSystemMetrics(2);
        local_30._0_4_ = iVar6 - local_30._0_4_;
        FUN_5f001330(hDC,(int *)local_30,7,7,8);
        local_30._0_4_ = local_10[0];
      }
      if (local_38 != 0) {
        local_24 = local_24 + 1;
        FUN_5f001330(hDC,(int *)local_30,0,0,8);
        iVar6 = local_24 + -1;
        local_24 = iVar6;
        local_30._4_4_ = GetSystemMetrics(0x15);
        local_30._4_4_ = iVar6 - local_30._4_4_;
        FUN_5f001330(hDC,(int *)local_30,7,7,4);
      }
    }
    ReleaseDC(hWndTo,hDC);
    if (param_2 != 0) {
      ShowCaret(param_1);
    }
  }
  return;
}



/* ==== FUN_5f003ec0 @ 5f003ec0 ==== 
 * signature: uint __cdecl FUN_5f003ec0(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4, int param_5)
 * body: 5f003ec0-5f00400e
 */

uint __cdecl FUN_5f003ec0(HWND param_1,uint param_2,WPARAM param_3,undefined4 *param_4,int param_5)

{
  uint uVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  uint uVar4;
  HWND hWnd;
  WPARAM wParam;
  undefined4 *lParam;
  
  if (param_2 == 0x82) {
    uVar1 = FUN_5f001250(param_1,0x82,param_3,(LPARAM)param_4,param_5);
    return uVar1;
  }
  pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005144);
  if (pvVar2 == (HANDLE)0x0) {
    hWnd = param_1;
    uVar1 = param_2;
    wParam = param_3;
    lParam = param_4;
    pWVar3 = FUN_5f001020(param_1,param_5);
    uVar4 = CallWindowProcA(pWVar3,hWnd,uVar1,wParam,(LPARAM)lParam);
    uVar1 = uVar4;
    if ((param_5 == 3) && (uVar1 = GetWindowLongA(param_1,-0x10), ((byte)uVar1 & 3) == 2)) {
      return uVar4;
    }
    if (param_2 < 0x19) {
      if (param_2 == 0x18) {
        if ((DAT_5f005150 < 0x30a) && (param_3 == 0)) {
          FUN_5f002ee0(param_1,0);
        }
      }
      else if ((param_2 == 0xf) && (((param_5 != 3 || ((uVar1 & 3) == 2)) || ((uVar1 & 3) == 3)))) {
        FUN_5f003b80(param_1,1,param_5);
      }
    }
    else if (param_2 == 0x46) {
      if (0x309 < DAT_5f005150) {
        FUN_5f002ee0(param_1,(int)param_4);
      }
    }
    else if ((0x1942 < param_2) && (param_2 < 0x1945)) {
      *param_4 = 1;
      return 0x3ea;
    }
    return uVar4;
  }
  pWVar3 = FUN_5f001020(param_1,param_5);
  uVar1 = CallWindowProcA(pWVar3,param_1,param_2,param_3,(LPARAM)param_4);
  return uVar1;
}



/* ==== EditWndProc3d @ 5f004010 ==== 
 * signature: undefined __stdcall EditWndProc3d(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4)
 * body: 5f004010-5f004030
 */

void EditWndProc3d(HWND param_1,uint param_2,WPARAM param_3,undefined4 *param_4)

{
                    /* 0x4010  8  EditWndProc3d */
  FUN_5f003ec0(param_1,param_2,param_3,param_4,2);
  return;
}



/* ==== FUN_5f004040 @ 5f004040 ==== 
 * signature: LRESULT __cdecl FUN_5f004040(HWND param_1, uint param_2, WPARAM param_3, LONG * param_4, int param_5)
 * body: 5f004040-5f00426d
 */

LRESULT __cdecl FUN_5f004040(HWND param_1,uint param_2,WPARAM param_3,LONG *param_4,int param_5)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  HWND pHVar4;
  LONG *lParam;
  undefined1 local_20 [12];
  int local_14;
  tagRECT local_10;
  
  if (param_2 == 0x82) {
    LVar1 = FUN_5f001250(param_1,0x82,param_3,(LPARAM)param_4,param_5);
    return LVar1;
  }
  pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005144);
  if (pvVar2 == (HANDLE)0x0) {
    if (param_2 < 0x19) {
      if (param_2 == 0x18) {
        if ((DAT_5f005150 < 0x30a) && (param_3 == 0)) {
          FUN_5f002ee0(param_1,0);
        }
      }
      else if (param_2 == 0xf) {
        pHVar4 = param_1;
        pWVar3 = FUN_5f001020(param_1,param_5);
        LVar1 = CallWindowProcA(pWVar3,pHVar4,param_2,param_3,(LPARAM)param_4);
        FUN_5f003b80(param_1,0,param_5);
        return LVar1;
      }
    }
    else if (param_2 < 0x84) {
      if (param_2 == 0x83) {
        if (DAT_5f005150 < 0x30a) {
          GetWindowRect(param_1,&local_10);
          pHVar4 = param_1;
          lParam = param_4;
          pWVar3 = FUN_5f001020(param_1,param_5);
          LVar1 = CallWindowProcA(pWVar3,pHVar4,param_2,param_3,(LPARAM)lParam);
          local_20._0_4_ = *param_4;
          local_20._4_4_ = param_4[1];
          local_20._8_4_ = param_4[2];
          local_14 = param_4[3];
          InflateRect((LPRECT)local_20,2,1);
          if (local_14 < local_10.bottom) {
            local_20._4_4_ = local_14 + 1;
            local_14 = local_10.bottom + 1;
            pHVar4 = GetParent(param_1);
            ScreenToClient(pHVar4,(LPPOINT)local_20);
            ScreenToClient(pHVar4,(LPPOINT)(local_20 + 8));
            InvalidateRect(pHVar4,(RECT *)local_20,1);
          }
          return LVar1;
        }
      }
      else if ((param_2 == 0x46) && (0x309 < DAT_5f005150)) {
        FUN_5f002ee0(param_1,(int)param_4);
      }
    }
    else if ((0x1942 < param_2) && (param_2 < 0x1945)) {
      *param_4 = 1;
      return 0x3e9;
    }
    pWVar3 = FUN_5f001020(param_1,param_5);
    LVar1 = CallWindowProcA(pWVar3,param_1,param_2,param_3,(LPARAM)param_4);
    return LVar1;
  }
  pWVar3 = FUN_5f001020(param_1,param_5);
  LVar1 = CallWindowProcA(pWVar3,param_1,param_2,param_3,(LPARAM)param_4);
  return LVar1;
}



/* ==== ListWndProc3d @ 5f004270 ==== 
 * signature: undefined __stdcall ListWndProc3d(HWND param_1, uint param_2, WPARAM param_3, LONG * param_4)
 * body: 5f004270-5f004290
 */

void ListWndProc3d(HWND param_1,uint param_2,WPARAM param_3,LONG *param_4)

{
                    /* 0x4270  9  ListWndProc3d */
  FUN_5f004040(param_1,param_2,param_3,param_4,1);
  return;
}



/* ==== ComboWndProc3d @ 5f0042a0 ==== 
 * signature: uint __stdcall ComboWndProc3d(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4)
 * body: 5f0042a0-5f0042e2
 */

uint ComboWndProc3d(HWND param_1,uint param_2,WPARAM param_3,undefined4 *param_4)

{
  uint uVar1;
  
                    /* 0x42a0  10  ComboWndProc3d */
  if ((0x1942 < param_2) && (param_2 < 0x1945)) {
    *param_4 = 1;
    return 0x3eb;
  }
  uVar1 = FUN_5f003ec0(param_1,param_2,param_3,param_4,3);
  return uVar1;
}



/* ==== FUN_5f0042f0 @ 5f0042f0 ==== 
 * signature: undefined __cdecl FUN_5f0042f0(HWND param_1, HDC param_2, LPRECT param_3, uint param_4)
 * body: 5f0042f0-5f0043c4
 */

void __cdecl FUN_5f0042f0(HWND param_1,HDC param_2,LPRECT param_3,uint param_4)

{
  int iVar1;
  UINT format;
  COLORREF local_c;
  
  PatBlt(param_2,param_3->left,param_3->top,param_3->right - param_3->left,
         param_3->bottom - param_3->top,0xf00021);
  iVar1 = GetWindowTextLengthA(param_1);
  FUN_5f004908();
  if (&stack0x00000000 != (undefined1 *)0x18) {
    iVar1 = GetWindowTextA(param_1,&stack0xffffffe8,iVar1 + 2);
    if (iVar1 != 0) {
      format = 0x140;
      if (((byte)param_4 & 0xf) != 0xc) {
        format = (UINT)((ushort)param_4 & 0xf | 0x150);
      }
      if ((param_4 & 0x80) != 0) {
        format = (UINT)(ushort)((ushort)format | 0x800);
      }
      if ((param_4 & 0x8000000) != 0) {
        local_c = SetTextColor(param_2,DAT_5f00516c);
      }
      DrawTextA(param_2,&stack0xffffffe8,-1,param_3,format);
      if ((param_4 & 0x8000000) != 0) {
        SetTextColor(param_2,local_c);
      }
    }
  }
  return;
}



/* ==== FUN_5f0043d0 @ 5f0043d0 ==== 
 * signature: undefined __cdecl FUN_5f0043d0(HWND param_1, HDC param_2)
 * body: 5f0043d0-5f004533
 */

void __cdecl FUN_5f0043d0(HWND param_1,HDC param_2)

{
  uint uVar1;
  HGDIOBJ pvVar2;
  HWND hWnd;
  HGDIOBJ h;
  HGDIOBJ h_00;
  UINT Msg;
  HDC wParam;
  HWND lParam;
  tagRECT local_10;
  
  uVar1 = GetWindowLongA(param_1,-0x10);
  if ((uVar1 & 0x10000000) != 0) {
    GetClientRect(param_1,&local_10);
    switch(uVar1 & 0x1f) {
    case 0:
    case 1:
    case 2:
    case 0xc:
      pvVar2 = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
      if (pvVar2 == (HGDIOBJ)0x0) {
        pvVar2 = (HGDIOBJ)0x0;
      }
      else {
        pvVar2 = SelectObject(param_2,pvVar2);
      }
      SetBkMode(param_2,2);
      Msg = 0x138;
      wParam = param_2;
      lParam = param_1;
      hWnd = GetParent(param_1);
      h = (HGDIOBJ)SendMessageA(hWnd,Msg,(WPARAM)wParam,(LPARAM)lParam);
      h_00 = (HGDIOBJ)0x0;
      if (h != (HGDIOBJ)0x0) {
        h_00 = SelectObject(param_2,h);
      }
      FUN_5f0042f0(param_1,param_2,&local_10,uVar1);
      if (pvVar2 != (HGDIOBJ)0x0) {
        SelectObject(param_2,pvVar2);
      }
      if (h_00 != (HGDIOBJ)0x0) {
        SelectObject(param_2,h_00);
        return;
      }
      break;
    case 4:
    case 7:
      FUN_5f001330(param_2,&local_10.left,2,0,0xf);
      return;
    case 5:
    case 8:
    case 0x10:
    case 0x11:
    case 0x12:
      local_10.left = local_10.left + 1;
      local_10.top = local_10.top + 1;
      FUN_5f001330(param_2,&local_10.left,0,0,0xf);
      OffsetRect(&local_10,-1,-1);
      FUN_5f001330(param_2,&local_10.left,2,2,0xf);
      return;
    case 6:
    case 9:
      FUN_5f001330(param_2,&local_10.left,0,2,0xf);
    }
  }
  return;
}



/* ==== StaticWndProc3d @ 5f004570 ==== 
 * signature: LRESULT __stdcall StaticWndProc3d(HWND param_1, uint param_2, HDC param_3, undefined4 * param_4)
 * body: 5f004570-5f0046bb
 */

LRESULT StaticWndProc3d(HWND param_1,uint param_2,HDC param_3,undefined4 *param_4)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  HDC pHVar4;
  tagPAINTSTRUCT local_40;
  
                    /* 0x4570  11  StaticWndProc3d */
  if (param_2 == 0x82) {
    LVar1 = FUN_5f001250(param_1,0x82,(WPARAM)param_3,(LPARAM)param_4,4);
    return LVar1;
  }
  pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005144);
  if (pvVar2 != (HANDLE)0x0) {
    pWVar3 = FUN_5f001020(param_1,4);
    LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
    return LVar1;
  }
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      pHVar4 = param_3;
      if (param_3 == (HDC)0x0) {
        pHVar4 = BeginPaint(param_1,&local_40);
        FUN_5f0014e0(param_1,pHVar4);
      }
      FUN_5f0043d0(param_1,pHVar4);
      if (param_3 == (HDC)0x0) {
        EndPaint(param_1,&local_40);
      }
      return 0;
    }
    if (param_2 == 10) {
      pHVar4 = GetDC(param_1);
      FUN_5f0014e0(param_1,pHVar4);
      FUN_5f0043d0(param_1,pHVar4);
      ReleaseDC(param_1,pHVar4);
      return 0;
    }
  }
  else if ((0x1942 < param_2) && (param_2 < 0x1945)) {
    *param_4 = 1;
    return 0x3ec;
  }
  pWVar3 = FUN_5f001020(param_1,4);
  LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  return LVar1;
}



/* ==== entry @ 5f0046c0 ==== 
 * signature: undefined4 __stdcall entry(undefined4 param_1, int param_2)
 * body: 5f0046c0-5f004797
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 entry(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  DWORD DVar2;
  int iVar3;
  
  if (param_2 == 1) {
    hModule = GetModuleHandleA(s_KERNEL32_DLL_5f00c1e4);
    pFVar1 = GetProcAddress(hModule,s_DisableThreadLibraryCalls_5f00c1c8);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
    DAT_5f00514c = param_1;
    DAT_5f005148 = param_1;
    DVar2 = GetVersion();
    DAT_5f005150 = CONCAT11((char)DVar2,(char)(DVar2 >> 8));
    if (((DVar2 & 0x80000000) == 0) || (DAT_5f005152 = 0x10, 0x35e < DAT_5f005150)) {
      DAT_5f005152 = 0x20;
    }
    _DAT_5f00a224 = GetSystemMetrics(7);
    _DAT_5f00a224 = _DAT_5f00a224 + -1;
    iVar3 = GetSystemMetrics(8);
    DAT_5f00a228 = iVar3 + -1;
    DAT_5f00a22c = GetSystemMetrics(4);
    _DAT_5f00a230 = GetSystemMetrics(0x1e);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  }
  return 1;
}



/* ==== FUN_5f0047a0 @ 5f0047a0 ==== 
 * signature: HBITMAP __stdcall FUN_5f0047a0(HMODULE param_1, LPCSTR param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8)
 * body: 5f0047a0-5f004907
 */

HBITMAP FUN_5f0047a0(HMODULE param_1,LPCSTR param_2,uint param_3,uint param_4,uint param_5,
                    uint param_6,uint param_7,uint param_8)

{
  HRSRC hResInfo;
  DWORD dwBytes;
  DWORD *pDVar1;
  BITMAPINFOHEADER *pbmi;
  HDC hdc;
  HBITMAP pHVar2;
  uint uVar3;
  BITMAPINFOHEADER *pBVar4;
  
  hResInfo = FindResourceA(param_1,param_2,(LPCSTR)0x2);
  if (hResInfo == (HRSRC)0x0) {
    return (HBITMAP)0x0;
  }
  dwBytes = SizeofResource(param_1,hResInfo);
  pDVar1 = LoadResource(param_1,hResInfo);
  if (pDVar1 == (DWORD *)0x0) {
    return (HBITMAP)0x0;
  }
  pbmi = GlobalAlloc(0x40,dwBytes);
  if (pbmi == (BITMAPINFOHEADER *)0x0) {
    return (HBITMAP)0x0;
  }
  pBVar4 = pbmi;
  for (uVar3 = dwBytes >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pBVar4->biSize = *pDVar1;
    pDVar1 = pDVar1 + 1;
    pBVar4 = (BITMAPINFOHEADER *)&pBVar4->biWidth;
  }
  for (uVar3 = dwBytes & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)&pBVar4->biSize = (char)*pDVar1;
    pDVar1 = (DWORD *)((int)pDVar1 + 1);
    pBVar4 = (BITMAPINFOHEADER *)((int)&pBVar4->biSize + 1);
  }
  pbmi[1].biSize = (param_3 >> 8 & 0xff) << 8 | (param_3 & 0xff) << 0x10 | param_3 >> 0x10 & 0xff;
  pbmi[1].biYPelsPerMeter =
       (param_5 >> 8 & 0xff) << 8 | (param_5 & 0xff) << 0x10 | param_5 >> 0x10 & 0xff;
  pbmi[1].biClrUsed = (param_4 >> 8 & 0xff) << 8 | (param_4 & 0xff) << 0x10 | param_4 >> 0x10 & 0xff
  ;
  pbmi[2].biSizeImage =
       (param_6 >> 8 & 0xff) << 8 | (param_6 & 0xff) << 0x10 | param_6 >> 0x10 & 0xff;
  pbmi[2].biWidth = (param_7 >> 8 & 0xff) << 8 | (param_7 & 0xff) << 0x10 | param_7 >> 0x10 & 0xff;
  pbmi[2].biSize = (param_8 >> 8 & 0xff) << 8 | param_8 >> 0x10 & 0xff | (param_8 & 0xff) << 0x10;
  hdc = GetDC((HWND)0x0);
  pHVar2 = CreateDIBitmap(hdc,pbmi,4,&pbmi[2].biXPelsPerMeter,(BITMAPINFO *)pbmi,0);
  ReleaseDC((HWND)0x0,hdc);
  GlobalFree(pbmi);
  return pHVar2;
}



/* ==== FUN_5f004908 @ 5f004908 ==== 
 * signature: undefined __stdcall FUN_5f004908(void)
 * body: 5f004908-5f004934
 */

void FUN_5f004908(void)

{
  uint in_EAX;
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = (undefined4 *)&stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x400;
    *puVar1 = *puVar1;
  }
  *(undefined4 *)((int)puVar1 - in_EAX) = *(undefined4 *)((int)puVar1 - in_EAX);
                    /* WARNING: Could not recover jumptable at 0x5f004933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ==== KERNEL32.DLL::lstrcmpiA @ 5f004936 ==== 
 * signature: int __stdcall lstrcmpiA(LPCSTR lpString1, LPCSTR lpString2)
 * body: 5f004936-5f00493b
 * thunk to: KERNEL32.DLL::lstrcmpiA
 */

int lstrcmpiA(LPCSTR lpString1,LPCSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpiA(lpString1,lpString2);
  return iVar1;
}



/* ==== KERNEL32.DLL::GetCurrentThreadId @ 5f00493c ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 5f00493c-5f004941
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f00493c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



/* ==== KERNEL32.DLL::lstrlenA @ 5f004942 ==== 
 * signature: int __stdcall lstrlenA(LPCSTR lpString)
 * body: 5f004942-5f004947
 * thunk to: KERNEL32.DLL::lstrlenA
 */

int lstrlenA(LPCSTR lpString)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrlenA(lpString);
  return iVar1;
}



/* ==== KERNEL32.DLL::LeaveCriticalSection @ 5f004948 ==== 
 * signature: void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 5f004948-5f00494d
 * thunk to: KERNEL32.DLL::LeaveCriticalSection
 */

void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x5f004948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



/* ==== KERNEL32.DLL::EnterCriticalSection @ 5f00494e ==== 
 * signature: void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 5f00494e-5f004953
 * thunk to: KERNEL32.DLL::EnterCriticalSection
 */

void EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x5f00494e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}



/* ==== KERNEL32.DLL::GetProfileStringA @ 5f004954 ==== 
 * signature: DWORD __stdcall GetProfileStringA(LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpDefault, LPSTR lpReturnedString, DWORD nSize)
 * body: 5f004954-5f004959
 * thunk to: KERNEL32.DLL::GetProfileStringA
 */

DWORD GetProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,
                       DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize);
  return DVar1;
}



/* ==== KERNEL32.DLL::GlobalAddAtomA @ 5f00495a ==== 
 * signature: ATOM __stdcall GlobalAddAtomA(LPCSTR lpString)
 * body: 5f00495a-5f00495f
 * thunk to: KERNEL32.DLL::GlobalAddAtomA
 */

ATOM GlobalAddAtomA(LPCSTR lpString)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f00495a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalAddAtomA(lpString);
  return AVar1;
}



/* ==== KERNEL32.DLL::GetWindowsDirectoryA @ 5f004960 ==== 
 * signature: UINT __stdcall GetWindowsDirectoryA(LPSTR lpBuffer, UINT uSize)
 * body: 5f004960-5f004965
 * thunk to: KERNEL32.DLL::GetWindowsDirectoryA
 */

UINT GetWindowsDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWindowsDirectoryA(lpBuffer,uSize);
  return UVar1;
}



/* ==== KERNEL32.DLL::GetSystemDirectoryA @ 5f004966 ==== 
 * signature: UINT __stdcall GetSystemDirectoryA(LPSTR lpBuffer, UINT uSize)
 * body: 5f004966-5f00496b
 * thunk to: KERNEL32.DLL::GetSystemDirectoryA
 */

UINT GetSystemDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemDirectoryA(lpBuffer,uSize);
  return UVar1;
}



/* ==== KERNEL32.DLL::GetModuleFileNameA @ 5f00496c ==== 
 * signature: DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
 * body: 5f00496c-5f004971
 * thunk to: KERNEL32.DLL::GetModuleFileNameA
 */

DWORD GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}



/* ==== KERNEL32.DLL::GetVersion @ 5f004972 ==== 
 * signature: DWORD __stdcall GetVersion(void)
 * body: 5f004972-5f004977
 * thunk to: KERNEL32.DLL::GetVersion
 */

DWORD GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}



/* ==== KERNEL32.DLL::GetEnvironmentVariableA @ 5f004978 ==== 
 * signature: DWORD __stdcall GetEnvironmentVariableA(LPCSTR lpName, LPSTR lpBuffer, DWORD nSize)
 * body: 5f004978-5f00497d
 * thunk to: KERNEL32.DLL::GetEnvironmentVariableA
 */

DWORD GetEnvironmentVariableA(LPCSTR lpName,LPSTR lpBuffer,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetEnvironmentVariableA(lpName,lpBuffer,nSize);
  return DVar1;
}



/* ==== KERNEL32.DLL::GlobalDeleteAtom @ 5f00497e ==== 
 * signature: ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)
 * body: 5f00497e-5f004983
 * thunk to: KERNEL32.DLL::GlobalDeleteAtom
 */

ATOM GlobalDeleteAtom(ATOM nAtom)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f00497e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalDeleteAtom(nAtom);
  return AVar1;
}



/* ==== KERNEL32.DLL::lstrcmpA @ 5f004984 ==== 
 * signature: int __stdcall lstrcmpA(LPCSTR lpString1, LPCSTR lpString2)
 * body: 5f004984-5f004989
 * thunk to: KERNEL32.DLL::lstrcmpA
 */

int lstrcmpA(LPCSTR lpString1,LPCSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpA(lpString1,lpString2);
  return iVar1;
}



/* ==== KERNEL32.DLL::InitializeCriticalSection @ 5f00498a ==== 
 * signature: void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 5f00498a-5f00498f
 * thunk to: KERNEL32.DLL::InitializeCriticalSection
 */

void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x5f00498a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}



/* ==== KERNEL32.DLL::GetProcAddress @ 5f004990 ==== 
 * signature: FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
 * body: 5f004990-5f004995
 * thunk to: KERNEL32.DLL::GetProcAddress
 */

FARPROC GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}



/* ==== KERNEL32.DLL::GetModuleHandleA @ 5f004996 ==== 
 * signature: HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
 * body: 5f004996-5f00499b
 * thunk to: KERNEL32.DLL::GetModuleHandleA
 */

HMODULE GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}



/* ==== KERNEL32.DLL::GlobalFree @ 5f00499c ==== 
 * signature: HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)
 * body: 5f00499c-5f0049a1
 * thunk to: KERNEL32.DLL::GlobalFree
 */

HGLOBAL GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f00499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}



/* ==== KERNEL32.DLL::GlobalAlloc @ 5f0049a2 ==== 
 * signature: HGLOBAL __stdcall GlobalAlloc(UINT uFlags, SIZE_T dwBytes)
 * body: 5f0049a2-5f0049a7
 * thunk to: KERNEL32.DLL::GlobalAlloc
 */

HGLOBAL GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}



/* ==== KERNEL32.DLL::LoadResource @ 5f0049a8 ==== 
 * signature: HGLOBAL __stdcall LoadResource(HMODULE hModule, HRSRC hResInfo)
 * body: 5f0049a8-5f0049ad
 * thunk to: KERNEL32.DLL::LoadResource
 */

HGLOBAL LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}



/* ==== KERNEL32.DLL::SizeofResource @ 5f0049ae ==== 
 * signature: DWORD __stdcall SizeofResource(HMODULE hModule, HRSRC hResInfo)
 * body: 5f0049ae-5f0049b3
 * thunk to: KERNEL32.DLL::SizeofResource
 */

DWORD SizeofResource(HMODULE hModule,HRSRC hResInfo)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SizeofResource(hModule,hResInfo);
  return DVar1;
}



/* ==== KERNEL32.DLL::FindResourceA @ 5f0049b4 ==== 
 * signature: HRSRC __stdcall FindResourceA(HMODULE hModule, LPCSTR lpName, LPCSTR lpType)
 * body: 5f0049b4-5f0049b9
 * thunk to: KERNEL32.DLL::FindResourceA
 */

HRSRC FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceA(hModule,lpName,lpType);
  return pHVar1;
}



/* ==== USER32.DLL::GetPropA @ 5f0049ba ==== 
 * signature: HANDLE __stdcall GetPropA(HWND hWnd, LPCSTR lpString)
 * body: 5f0049ba-5f0049bf
 * thunk to: USER32.DLL::GetPropA
 */

HANDLE GetPropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetPropA(hWnd,lpString);
  return pvVar1;
}



/* ==== USER32.DLL::SetPropA @ 5f0049c0 ==== 
 * signature: BOOL __stdcall SetPropA(HWND hWnd, LPCSTR lpString, HANDLE hData)
 * body: 5f0049c0-5f0049c5
 * thunk to: USER32.DLL::SetPropA
 */

BOOL SetPropA(HWND hWnd,LPCSTR lpString,HANDLE hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetPropA(hWnd,lpString,hData);
  return BVar1;
}



/* ==== USER32.DLL::SetWindowLongA @ 5f0049c6 ==== 
 * signature: LONG __stdcall SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong)
 * body: 5f0049c6-5f0049cb
 * thunk to: USER32.DLL::SetWindowLongA
 */

LONG SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return LVar1;
}



/* ==== USER32.DLL::GetClassNameA @ 5f0049cc ==== 
 * signature: int __stdcall GetClassNameA(HWND hWnd, LPSTR lpClassName, int nMaxCount)
 * body: 5f0049cc-5f0049d1
 * thunk to: USER32.DLL::GetClassNameA
 */

int GetClassNameA(HWND hWnd,LPSTR lpClassName,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClassNameA(hWnd,lpClassName,nMaxCount);
  return iVar1;
}



/* ==== USER32.DLL::IsWindowUnicode @ 5f0049d2 ==== 
 * signature: BOOL __stdcall IsWindowUnicode(HWND hWnd)
 * body: 5f0049d2-5f0049d7
 * thunk to: USER32.DLL::IsWindowUnicode
 */

BOOL IsWindowUnicode(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowUnicode(hWnd);
  return BVar1;
}



/* ==== USER32.DLL::SendMessageA @ 5f0049d8 ==== 
 * signature: LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 5f0049d8-5f0049dd
 * thunk to: USER32.DLL::SendMessageA
 */

LRESULT SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1;
}



/* ==== USER32.DLL::GetWindowLongA @ 5f0049de ==== 
 * signature: LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex)
 * body: 5f0049de-5f0049e3
 * thunk to: USER32.DLL::GetWindowLongA
 */

LONG GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}



/* ==== USER32.DLL::UnhookWindowsHookEx @ 5f0049e4 ==== 
 * signature: BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)
 * body: 5f0049e4-5f0049e9
 * thunk to: USER32.DLL::UnhookWindowsHookEx
 */

BOOL UnhookWindowsHookEx(HHOOK hhk)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnhookWindowsHookEx(hhk);
  return BVar1;
}



/* ==== USER32.DLL::CallNextHookEx @ 5f0049ea ==== 
 * signature: LRESULT __stdcall CallNextHookEx(HHOOK hhk, int nCode, WPARAM wParam, LPARAM lParam)
 * body: 5f0049ea-5f0049ef
 * thunk to: USER32.DLL::CallNextHookEx
 */

LRESULT CallNextHookEx(HHOOK hhk,int nCode,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallNextHookEx(hhk,nCode,wParam,lParam);
  return LVar1;
}



/* ==== USER32.DLL::SetWindowsHookExA @ 5f0049f0 ==== 
 * signature: HHOOK __stdcall SetWindowsHookExA(int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId)
 * body: 5f0049f0-5f0049f5
 * thunk to: USER32.DLL::SetWindowsHookExA
 */

HHOOK SetWindowsHookExA(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId)

{
  HHOOK pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWindowsHookExA(idHook,lpfn,hmod,dwThreadId);
  return pHVar1;
}



/* ==== USER32.DLL::RemovePropA @ 5f0049f6 ==== 
 * signature: HANDLE __stdcall RemovePropA(HWND hWnd, LPCSTR lpString)
 * body: 5f0049f6-5f0049fb
 * thunk to: USER32.DLL::RemovePropA
 */

HANDLE RemovePropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = RemovePropA(hWnd,lpString);
  return pvVar1;
}



/* ==== USER32.DLL::CallWindowProcA @ 5f0049fc ==== 
 * signature: LRESULT __stdcall CallWindowProcA(WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 5f0049fc-5f004a01
 * thunk to: USER32.DLL::CallWindowProcA
 */

LRESULT CallWindowProcA(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallWindowProcA(lpPrevWndFunc,hWnd,Msg,wParam,lParam);
  return LVar1;
}



/* ==== USER32.DLL::GetClientRect @ 5f004a02 ==== 
 * signature: BOOL __stdcall GetClientRect(HWND hWnd, LPRECT lpRect)
 * body: 5f004a02-5f004a07
 * thunk to: USER32.DLL::GetClientRect
 */

BOOL GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClientRect(hWnd,lpRect);
  return BVar1;
}



/* ==== USER32.DLL::CharNextA @ 5f004a08 ==== 
 * signature: LPSTR __stdcall CharNextA(LPCSTR lpsz)
 * body: 5f004a08-5f004a0d
 * thunk to: USER32.DLL::CharNextA
 */

LPSTR CharNextA(LPCSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharNextA(lpsz);
  return pCVar1;
}



/* ==== USER32.DLL::GetWindow @ 5f004a0e ==== 
 * signature: HWND __stdcall GetWindow(HWND hWnd, UINT uCmd)
 * body: 5f004a0e-5f004a13
 * thunk to: USER32.DLL::GetWindow
 */

HWND GetWindow(HWND hWnd,UINT uCmd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindow(hWnd,uCmd);
  return pHVar1;
}



/* ==== USER32.DLL::GetParent @ 5f004a14 ==== 
 * signature: HWND __stdcall GetParent(HWND hWnd)
 * body: 5f004a14-5f004a19
 * thunk to: USER32.DLL::GetParent
 */

HWND GetParent(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetParent(hWnd);
  return pHVar1;
}



/* ==== USER32.DLL::ReleaseDC @ 5f004a1a ==== 
 * signature: int __stdcall ReleaseDC(HWND hWnd, HDC hDC)
 * body: 5f004a1a-5f004a1f
 * thunk to: USER32.DLL::ReleaseDC
 */

int ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}



/* ==== USER32.DLL::OffsetRect @ 5f004a20 ==== 
 * signature: BOOL __stdcall OffsetRect(LPRECT lprc, int dx, int dy)
 * body: 5f004a20-5f004a25
 * thunk to: USER32.DLL::OffsetRect
 */

BOOL OffsetRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetRect(lprc,dx,dy);
  return BVar1;
}



/* ==== USER32.DLL::InflateRect @ 5f004a26 ==== 
 * signature: BOOL __stdcall InflateRect(LPRECT lprc, int dx, int dy)
 * body: 5f004a26-5f004a2b
 * thunk to: USER32.DLL::InflateRect
 */

BOOL InflateRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InflateRect(lprc,dx,dy);
  return BVar1;
}



/* ==== USER32.DLL::GetWindowRect @ 5f004a2c ==== 
 * signature: BOOL __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect)
 * body: 5f004a2c-5f004a31
 * thunk to: USER32.DLL::GetWindowRect
 */

BOOL GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowRect(hWnd,lpRect);
  return BVar1;
}



/* ==== USER32.DLL::GetWindowDC @ 5f004a32 ==== 
 * signature: HDC __stdcall GetWindowDC(HWND hWnd)
 * body: 5f004a32-5f004a37
 * thunk to: USER32.DLL::GetWindowDC
 */

HDC GetWindowDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindowDC(hWnd);
  return pHVar1;
}



/* ==== USER32.DLL::IsIconic @ 5f004a38 ==== 
 * signature: BOOL __stdcall IsIconic(HWND hWnd)
 * body: 5f004a38-5f004a3d
 * thunk to: USER32.DLL::IsIconic
 */

BOOL IsIconic(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsIconic(hWnd);
  return BVar1;
}



/* ==== USER32.DLL::DefWindowProcA @ 5f004a3e ==== 
 * signature: LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 5f004a3e-5f004a43
 * thunk to: USER32.DLL::DefWindowProcA
 */

LRESULT DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return LVar1;
}



/* ==== USER32.DLL::DefDlgProcA @ 5f004a44 ==== 
 * signature: LRESULT __stdcall DefDlgProcA(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 5f004a44-5f004a49
 * thunk to: USER32.DLL::DefDlgProcA
 */

LRESULT DefDlgProcA(HWND hDlg,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefDlgProcA(hDlg,Msg,wParam,lParam);
  return LVar1;
}



/* ==== USER32.DLL::GetClassInfoA @ 5f004a4a ==== 
 * signature: BOOL __stdcall GetClassInfoA(HINSTANCE hInstance, LPCSTR lpClassName, LPWNDCLASSA lpWndClass)
 * body: 5f004a4a-5f004a4f
 * thunk to: USER32.DLL::GetClassInfoA
 */

BOOL GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClassInfoA(hInstance,lpClassName,lpWndClass);
  return BVar1;
}



/* ==== USER32.DLL::GetSystemMetrics @ 5f004a50 ==== 
 * signature: int __stdcall GetSystemMetrics(int nIndex)
 * body: 5f004a50-5f004a55
 * thunk to: USER32.DLL::GetSystemMetrics
 */

int GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}



/* ==== USER32.DLL::GetDC @ 5f004a56 ==== 
 * signature: HDC __stdcall GetDC(HWND hWnd)
 * body: 5f004a56-5f004a5b
 * thunk to: USER32.DLL::GetDC
 */

HDC GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}



/* ==== USER32.DLL::CharPrevA @ 5f004a5c ==== 
 * signature: LPSTR __stdcall CharPrevA(LPCSTR lpszStart, LPCSTR lpszCurrent)
 * body: 5f004a5c-5f004a61
 * thunk to: USER32.DLL::CharPrevA
 */

LPSTR CharPrevA(LPCSTR lpszStart,LPCSTR lpszCurrent)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharPrevA(lpszStart,lpszCurrent);
  return pCVar1;
}



/* ==== USER32.DLL::MessageBoxA @ 5f004a62 ==== 
 * signature: int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
 * body: 5f004a62-5f004a67
 * thunk to: USER32.DLL::MessageBoxA
 */

int MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return iVar1;
}



/* ==== USER32.DLL::GetSysColor @ 5f004a68 ==== 
 * signature: DWORD __stdcall GetSysColor(int nIndex)
 * body: 5f004a68-5f004a6d
 * thunk to: USER32.DLL::GetSysColor
 */

DWORD GetSysColor(int nIndex)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetSysColor(nIndex);
  return DVar1;
}



/* ==== USER32.DLL::InvalidateRect @ 5f004a6e ==== 
 * signature: BOOL __stdcall InvalidateRect(HWND hWnd, RECT * lpRect, BOOL bErase)
 * body: 5f004a6e-5f004a73
 * thunk to: USER32.DLL::InvalidateRect
 */

BOOL InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InvalidateRect(hWnd,lpRect,bErase);
  return BVar1;
}



/* ==== USER32.DLL::ScreenToClient @ 5f004a74 ==== 
 * signature: BOOL __stdcall ScreenToClient(HWND hWnd, LPPOINT lpPoint)
 * body: 5f004a74-5f004a79
 * thunk to: USER32.DLL::ScreenToClient
 */

BOOL ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScreenToClient(hWnd,lpPoint);
  return BVar1;
}



/* ==== USER32.DLL::ValidateRect @ 5f004a7a ==== 
 * signature: BOOL __stdcall ValidateRect(HWND hWnd, RECT * lpRect)
 * body: 5f004a7a-5f004a7f
 * thunk to: USER32.DLL::ValidateRect
 */

BOOL ValidateRect(HWND hWnd,RECT *lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ValidateRect(hWnd,lpRect);
  return BVar1;
}



/* ==== USER32.DLL::DrawFocusRect @ 5f004a80 ==== 
 * signature: BOOL __stdcall DrawFocusRect(HDC hDC, RECT * lprc)
 * body: 5f004a80-5f004a85
 * thunk to: USER32.DLL::DrawFocusRect
 */

BOOL DrawFocusRect(HDC hDC,RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawFocusRect(hDC,lprc);
  return BVar1;
}



/* ==== USER32.DLL::IntersectRect @ 5f004a86 ==== 
 * signature: BOOL __stdcall IntersectRect(LPRECT lprcDst, RECT * lprcSrc1, RECT * lprcSrc2)
 * body: 5f004a86-5f004a8b
 * thunk to: USER32.DLL::IntersectRect
 */

BOOL IntersectRect(LPRECT lprcDst,RECT *lprcSrc1,RECT *lprcSrc2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IntersectRect(lprcDst,lprcSrc1,lprcSrc2);
  return BVar1;
}



/* ==== USER32.DLL::GetFocus @ 5f004a8c ==== 
 * signature: HWND __stdcall GetFocus(void)
 * body: 5f004a8c-5f004a91
 * thunk to: USER32.DLL::GetFocus
 */

HWND GetFocus(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetFocus();
  return pHVar1;
}



/* ==== USER32.DLL::DrawTextA @ 5f004a92 ==== 
 * signature: int __stdcall DrawTextA(HDC hdc, LPCSTR lpchText, int cchText, LPRECT lprc, UINT format)
 * body: 5f004a92-5f004a97
 * thunk to: USER32.DLL::DrawTextA
 */

int DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextA(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}



/* ==== USER32.DLL::IsWindowEnabled @ 5f004a98 ==== 
 * signature: BOOL __stdcall IsWindowEnabled(HWND hWnd)
 * body: 5f004a98-5f004a9d
 * thunk to: USER32.DLL::IsWindowEnabled
 */

BOOL IsWindowEnabled(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowEnabled(hWnd);
  return BVar1;
}



/* ==== USER32.DLL::ClientToScreen @ 5f004a9e ==== 
 * signature: BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint)
 * body: 5f004a9e-5f004aa3
 * thunk to: USER32.DLL::ClientToScreen
 */

BOOL ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClientToScreen(hWnd,lpPoint);
  return BVar1;
}



/* ==== USER32.DLL::GetWindowTextA @ 5f004aa4 ==== 
 * signature: int __stdcall GetWindowTextA(HWND hWnd, LPSTR lpString, int nMaxCount)
 * body: 5f004aa4-5f004aa9
 * thunk to: USER32.DLL::GetWindowTextA
 */

int GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextA(hWnd,lpString,nMaxCount);
  return iVar1;
}



/* ==== USER32.DLL::ExcludeUpdateRgn @ 5f004aaa ==== 
 * signature: int __stdcall ExcludeUpdateRgn(HDC hDC, HWND hWnd)
 * body: 5f004aaa-5f004aaf
 * thunk to: USER32.DLL::ExcludeUpdateRgn
 */

int ExcludeUpdateRgn(HDC hDC,HWND hWnd)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExcludeUpdateRgn(hDC,hWnd);
  return iVar1;
}



/* ==== USER32.DLL::EndPaint @ 5f004ab0 ==== 
 * signature: BOOL __stdcall EndPaint(HWND hWnd, PAINTSTRUCT * lpPaint)
 * body: 5f004ab0-5f004ab5
 * thunk to: USER32.DLL::EndPaint
 */

BOOL EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndPaint(hWnd,lpPaint);
  return BVar1;
}



/* ==== USER32.DLL::BeginPaint @ 5f004ab6 ==== 
 * signature: HDC __stdcall BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
 * body: 5f004ab6-5f004abb
 * thunk to: USER32.DLL::BeginPaint
 */

HDC BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}



/* ==== USER32.DLL::ShowCaret @ 5f004abc ==== 
 * signature: BOOL __stdcall ShowCaret(HWND hWnd)
 * body: 5f004abc-5f004ac1
 * thunk to: USER32.DLL::ShowCaret
 */

BOOL ShowCaret(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowCaret(hWnd);
  return BVar1;
}



/* ==== USER32.DLL::MapWindowPoints @ 5f004ac2 ==== 
 * signature: int __stdcall MapWindowPoints(HWND hWndFrom, HWND hWndTo, LPPOINT lpPoints, UINT cPoints)
 * body: 5f004ac2-5f004ac7
 * thunk to: USER32.DLL::MapWindowPoints
 */

int MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MapWindowPoints(hWndFrom,hWndTo,lpPoints,cPoints);
  return iVar1;
}



/* ==== USER32.DLL::HideCaret @ 5f004ac8 ==== 
 * signature: BOOL __stdcall HideCaret(HWND hWnd)
 * body: 5f004ac8-5f004acd
 * thunk to: USER32.DLL::HideCaret
 */

BOOL HideCaret(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HideCaret(hWnd);
  return BVar1;
}



/* ==== USER32.DLL::GetWindowTextLengthA @ 5f004ace ==== 
 * signature: int __stdcall GetWindowTextLengthA(HWND hWnd)
 * body: 5f004ace-5f004ad3
 * thunk to: USER32.DLL::GetWindowTextLengthA
 */

int GetWindowTextLengthA(HWND hWnd)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextLengthA(hWnd);
  return iVar1;
}



/* ==== GDI32.DLL::DeleteObject @ 5f004ad4 ==== 
 * signature: BOOL __stdcall DeleteObject(HGDIOBJ ho)
 * body: 5f004ad4-5f004ad9
 * thunk to: GDI32.DLL::DeleteObject
 */

BOOL DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}



/* ==== GDI32.DLL::PatBlt @ 5f004ada ==== 
 * signature: BOOL __stdcall PatBlt(HDC hdc, int x, int y, int w, int h, DWORD rop)
 * body: 5f004ada-5f004adf
 * thunk to: GDI32.DLL::PatBlt
 */

BOOL PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PatBlt(hdc,x,y,w,h,rop);
  return BVar1;
}



/* ==== GDI32.DLL::SetBkColor @ 5f004ae0 ==== 
 * signature: COLORREF __stdcall SetBkColor(HDC hdc, COLORREF color)
 * body: 5f004ae0-5f004ae5
 * thunk to: GDI32.DLL::SetBkColor
 */

COLORREF SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetBkColor(hdc,color);
  return CVar1;
}



/* ==== GDI32.DLL::ExtTextOutA @ 5f004ae6 ==== 
 * signature: BOOL __stdcall ExtTextOutA(HDC hdc, int x, int y, UINT options, RECT * lprect, LPCSTR lpString, UINT c, INT * lpDx)
 * body: 5f004ae6-5f004aeb
 * thunk to: GDI32.DLL::ExtTextOutA
 */

BOOL ExtTextOutA(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCSTR lpString,UINT c,INT *lpDx)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ExtTextOutA(hdc,x,y,options,lprect,lpString,c,lpDx);
  return BVar1;
}



/* ==== GDI32.DLL::IntersectClipRect @ 5f004aec ==== 
 * signature: int __stdcall IntersectClipRect(HDC hdc, int left, int top, int right, int bottom)
 * body: 5f004aec-5f004af1
 * thunk to: GDI32.DLL::IntersectClipRect
 */

int IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IntersectClipRect(hdc,left,top,right,bottom);
  return iVar1;
}



/* ==== GDI32.DLL::GetTextExtentPointA @ 5f004af2 ==== 
 * signature: BOOL __stdcall GetTextExtentPointA(HDC hdc, LPCSTR lpString, int c, LPSIZE lpsz)
 * body: 5f004af2-5f004af7
 * thunk to: GDI32.DLL::GetTextExtentPointA
 */

BOOL GetTextExtentPointA(HDC hdc,LPCSTR lpString,int c,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPointA(hdc,lpString,c,lpsz);
  return BVar1;
}



/* ==== GDI32.DLL::SetTextColor @ 5f004af8 ==== 
 * signature: COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color)
 * body: 5f004af8-5f004afd
 * thunk to: GDI32.DLL::SetTextColor
 */

COLORREF SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetTextColor(hdc,color);
  return CVar1;
}



/* ==== GDI32.DLL::SelectObject @ 5f004afe ==== 
 * signature: HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h)
 * body: 5f004afe-5f004b03
 * thunk to: GDI32.DLL::SelectObject
 */

HGDIOBJ SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SelectObject(hdc,h);
  return pvVar1;
}



/* ==== GDI32.DLL::GetDeviceCaps @ 5f004b04 ==== 
 * signature: int __stdcall GetDeviceCaps(HDC hdc, int index)
 * body: 5f004b04-5f004b09
 * thunk to: GDI32.DLL::GetDeviceCaps
 */

int GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}



/* ==== GDI32.DLL::CreateSolidBrush @ 5f004b0a ==== 
 * signature: HBRUSH __stdcall CreateSolidBrush(COLORREF color)
 * body: 5f004b0a-5f004b0f
 * thunk to: GDI32.DLL::CreateSolidBrush
 */

HBRUSH CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}



/* ==== GDI32.DLL::DeleteDC @ 5f004b10 ==== 
 * signature: BOOL __stdcall DeleteDC(HDC hdc)
 * body: 5f004b10-5f004b15
 * thunk to: GDI32.DLL::DeleteDC
 */

BOOL DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}



/* ==== GDI32.DLL::BitBlt @ 5f004b16 ==== 
 * signature: BOOL __stdcall BitBlt(HDC hdc, int x, int y, int cx, int cy, HDC hdcSrc, int x1, int y1, DWORD rop)
 * body: 5f004b16-5f004b1b
 * thunk to: GDI32.DLL::BitBlt
 */

BOOL BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = BitBlt(hdc,x,y,cx,cy,hdcSrc,x1,y1,rop);
  return BVar1;
}



/* ==== GDI32.DLL::CreateCompatibleDC @ 5f004b1c ==== 
 * signature: HDC __stdcall CreateCompatibleDC(HDC hdc)
 * body: 5f004b1c-5f004b21
 * thunk to: GDI32.DLL::CreateCompatibleDC
 */

HDC CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}



/* ==== GDI32.DLL::SetBkMode @ 5f004b22 ==== 
 * signature: int __stdcall SetBkMode(HDC hdc, int mode)
 * body: 5f004b22-5f004b27
 * thunk to: GDI32.DLL::SetBkMode
 */

int SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}



/* ==== GDI32.DLL::CreateDIBitmap @ 5f004b28 ==== 
 * signature: HBITMAP __stdcall CreateDIBitmap(HDC hdc, BITMAPINFOHEADER * pbmih, DWORD flInit, void * pjBits, BITMAPINFO * pbmi, UINT iUsage)
 * body: 5f004b28-5f004b2d
 * thunk to: GDI32.DLL::CreateDIBitmap
 */

HBITMAP CreateDIBitmap(HDC hdc,BITMAPINFOHEADER *pbmih,DWORD flInit,void *pjBits,BITMAPINFO *pbmi,
                      UINT iUsage)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBitmap(hdc,pbmih,flInit,pjBits,pbmi,iUsage);
  return pHVar1;
}



/* ==== FUN_5f004b2e @ 5f004b2e ==== 
 * signature: undefined FUN_5f004b2e(void)
 * body: 5f004b2e-5f004bff
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_5f004b2e(void)

{
  char cVar1;
  char *in_EAX;
  
  cVar1 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


