
/* ==== FUN_00407db3 @ 00407db3 ==== 
 * signature: char __cdecl FUN_00407db3(LPCSTR param_1, undefined4 param_2, int param_3)
 * body: 00407db3-00407fb9
 */

char __cdecl FUN_00407db3(LPCSTR param_1,undefined4 param_2,int param_3)

{
  LSTATUS LVar1;
  int iVar2;
  char local_210 [256];
  int local_110 [64];
  DWORD local_10;
  DWORD local_c;
  HKEY local_8;
  
  if ((DAT_0041385c != 0) &&
     (LVar1 = RegOpenKeyExA((HKEY)0x80000002,PTR_s_Software_Microsoft_Windows_Curre_0041004c,0,0x1f,
                            &local_8), LVar1 == 0)) {
    local_10 = 0x100;
    LVar1 = RegQueryValueExA(local_8,param_1,(LPDWORD)0x0,&local_c,(LPBYTE)local_110,&local_10);
    if (LVar1 == 0) {
      if (local_c == 1) {
        iVar2 = FUN_0040a4f0((byte *)local_110);
      }
      else if ((local_c == 4) || ((iVar2 = -1, local_c == 3 && (local_10 == 4)))) {
        iVar2 = local_110[0];
      }
      if (iVar2 < 1) {
        local_110[0] = -1;
      }
      else {
        if (DAT_004138c8 == 0) {
          local_110[0] = -param_3;
        }
        else {
          local_110[0] = -1;
        }
        local_110[0] = iVar2 + local_110[0];
        if (local_110[0] < 0) {
          local_110[0] = 0;
        }
      }
      if (local_110[0] == 0) {
        FUN_00408e33(DAT_00413bd0,0x26,local_210,0x100);
        wsprintfA(DAT_004138b0,local_210,param_1);
        FUN_00408e33(DAT_00413bd0,0x27,local_210,0x100);
        lstrcatA(DAT_004138b0,local_210);
        if ((DAT_00413878 == 0) && (DAT_00413cd0 == 0)) {
          if (DAT_00413894 == 0) {
            if (DAT_00413bcc != 0) {
              KillTimer(DAT_00413818,0x19);
            }
            iVar2 = DialogBoxParamA(DAT_00413bd0,(LPCSTR)0x68,DAT_00413818,_SharedDlg_16,0);
            if (DAT_00413bcc != 0) {
              SetTimer(DAT_00413818,0x19,0x96,(TIMERPROC)0x0);
            }
            if (iVar2 == 1) {
              DAT_00413cd0 = 1;
            }
            if (iVar2 == 0x3ef) {
              iVar2 = 0x3ed;
              DAT_00413894 = 1;
            }
            SetFocus(DAT_00413818);
          }
          else {
            iVar2 = 0x3ed;
          }
        }
        else {
          iVar2 = 7;
        }
        RegDeleteValueA(local_8,param_1);
        return (iVar2 == 0x3ed) + '\x01';
      }
      if (0 < local_110[0]) {
        RegSetValueExA(local_8,param_1,0,4,(BYTE *)local_110,4);
        return '\x01';
      }
    }
    RegCloseKey(local_8);
  }
  return '\0';
}


