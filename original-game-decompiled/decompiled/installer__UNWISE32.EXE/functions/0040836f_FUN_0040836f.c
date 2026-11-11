
/* ==== FUN_0040836f @ 0040836f ==== 
 * signature: undefined4 __stdcall FUN_0040836f(void)
 * body: 0040836f-00408572
 */

undefined4 FUN_0040836f(void)

{
  LSTATUS LVar1;
  int iVar2;
  HWND pHVar3;
  char local_310 [256];
  char local_210 [256];
  int local_110 [64];
  DWORD local_10;
  DWORD local_c;
  HKEY local_8;
  
  if (DAT_00413834 == 0) {
    return 0;
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Borland_Database_Engine_004106a0,0,0x1f,&local_8
                       );
  if (LVar1 != 0) {
    return 0;
  }
  local_c = 0x100;
  LVar1 = RegQueryValueExA(local_8,s_UseCount_00410694,(LPDWORD)0x0,&local_10,(LPBYTE)local_110,
                           &local_c);
  if (LVar1 == 0) {
    if (local_10 == 1) {
      iVar2 = FUN_0040a4f0((byte *)local_110);
    }
    else if ((local_10 == 4) || ((iVar2 = -1, local_10 == 3 && (local_c == 4)))) {
      iVar2 = local_110[0];
    }
    if (iVar2 == 1) {
      do {
        pHVar3 = FindWindowA(s_IB_Server_00410688,(LPCSTR)0x0);
        if (pHVar3 == (HWND)0x0) {
          iVar2 = 5;
        }
        else {
          FUN_00408e33(DAT_00413bd0,0x1c,local_310,0x100);
          FUN_00408e33(DAT_00413bd0,0x19,local_210,0x100);
          iVar2 = MessageBoxA(DAT_00413818,local_310,local_210,2);
          if (iVar2 == 3) {
            return 1;
          }
        }
      } while (iVar2 != 5);
      RegCloseKey(local_8);
      FUN_00408573(s_Software_Borland_Database_Engine_004106a0,2);
      FUN_00408573(s_Software_Borland_BLW32_00410670,2);
      LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Borland_0041065c,0,0x1f,&local_8);
      if (LVar1 != 0) {
        return 0;
      }
      LVar1 = RegEnumValueA(local_8,0,(LPSTR)local_110,&local_c,(LPDWORD)0x0,(LPDWORD)0x0,
                            (LPBYTE)0x0,(LPDWORD)0x0);
      if (LVar1 == 0) {
        RegCloseKey(local_8);
        return 0;
      }
      local_c = 0x100;
      LVar1 = RegEnumKeyExA(local_8,0,(LPSTR)local_110,&local_c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0
                            ,(PFILETIME)0x0);
      RegCloseKey(local_8);
      if (LVar1 == 0) {
        return 0;
      }
      RegDeleteKeyA((HKEY)0x80000002,s_Software_Borland_0041065c);
      return 0;
    }
    if (iVar2 < 2) {
      return 0;
    }
    wsprintfA((LPSTR)local_110,&DAT_00410658,iVar2 + -1);
    iVar2 = lstrlenA((LPCSTR)local_110);
    RegSetValueExA(local_8,s_UseCount_00410694,0,1,(BYTE *)local_110,iVar2 + 1);
  }
  RegCloseKey(local_8);
  return 0;
}


