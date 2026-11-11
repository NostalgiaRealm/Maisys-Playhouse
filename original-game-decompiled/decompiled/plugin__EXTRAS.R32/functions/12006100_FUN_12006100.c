
/* ==== FUN_12006100 @ 12006100 ==== 
 * signature: LPBYTE __cdecl FUN_12006100(LPCSTR param_1)
 * body: 12006100-12006312
 */

LPBYTE __cdecl FUN_12006100(LPCSTR param_1)

{
  code *pcVar1;
  LSTATUS LVar2;
  HKEY local_118;
  HKEY local_114;
  DWORD local_110;
  LPBYTE local_10c;
  int local_108;
  DWORD local_104;
  BYTE local_100 [256];
  
  local_10c = (LPBYTE)0x0;
  local_118 = (HKEY)0x0;
  local_114 = (HKEY)0x80000000;
  local_110 = 0xfe;
  RegOpenKeyExA((HKEY)0x80000000,param_1,0,0x20019,&local_118);
  local_108 = RegQueryValueExA(local_118,(LPCSTR)0x0,(LPDWORD)0x0,&local_104,local_100,&local_110);
  RegCloseKey(local_118);
  if ((local_108 == 0) && (local_104 == 1)) {
    local_114 = (HKEY)0x0;
    local_118 = (HKEY)0x80000000;
    RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_100,0,0x20019,&local_114);
    if (local_114 != (HKEY)0x0) {
      local_118 = (HKEY)0x0;
      RegOpenKeyExA(local_114,s_shell_12037214,0,0x20019,&local_118);
      RegCloseKey(local_114);
      if (local_118 != (HKEY)0x0) {
        local_114 = (HKEY)0x0;
        RegOpenKeyExA(local_118,&DAT_1203720c,0,0x20019,&local_114);
        RegCloseKey(local_118);
        if (local_114 != (HKEY)0x0) {
          local_118 = (HKEY)0x0;
          RegOpenKeyExA(local_114,s_command_12037204,0,0x20019,&local_118);
          RegCloseKey(local_114);
          if (local_118 != (HKEY)0x0) {
            local_110 = 0;
            RegQueryValueExA(local_118,(LPCSTR)0x0,(LPDWORD)0x0,&local_104,(LPBYTE)0x0,&local_110);
            if (local_110 == 0) {
              local_110 = 0x100;
            }
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_108);
            DAT_12039a9c = (*pcVar1)(local_108,&local_10c,local_110 + 1);
            if (local_10c != (LPBYTE)0x0) {
              LVar2 = RegQueryValueExA(local_118,(LPCSTR)0x0,(LPDWORD)0x0,&local_104,local_10c,
                                       &local_110);
              if (LVar2 != 0) {
                pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_108);
                DAT_12039a9c = (*pcVar1)(local_108,local_10c);
                local_10c = (LPBYTE)0x0;
              }
            }
            RegCloseKey(local_118);
          }
        }
      }
    }
  }
  return local_10c;
}


