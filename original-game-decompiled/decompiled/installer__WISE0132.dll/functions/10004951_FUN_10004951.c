
/* ==== FUN_10004951 @ 10004951 ==== 
 * signature: undefined __cdecl FUN_10004951(HKEY param_1, int param_2)
 * body: 10004951-10004a1f
 */

void __cdecl FUN_10004951(HKEY param_1,int param_2)

{
  HKEY lpString2;
  int iVar1;
  LSTATUS LVar2;
  HKEY__ local_18c [96];
  DWORD local_c;
  int local_8;
  
  lpString2 = param_1;
  local_8 = 0;
  do {
    lstrcpyA((LPSTR)local_18c,(LPCSTR)lpString2);
    lstrcatA((LPSTR)local_18c,&DAT_1001f314);
    iVar1 = lstrlenA((LPCSTR)lpString2);
    if (DAT_100241e8 != 0) {
      LVar2 = RegOpenKeyExA(*(HKEY *)(&DAT_1001f160 + param_2 * 4),(LPCSTR)lpString2,0,0x1f,&param_1
                           );
      if (LVar2 == 0) {
        local_c = 0x100;
        LVar2 = RegEnumKeyExA(param_1,0,(LPSTR)((int)&local_18c[0].unused + iVar1 + 1),&local_c,
                              (LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
        RegCloseKey(param_1);
        if (LVar2 == 0) {
          FUN_10004951(local_18c,param_2);
          goto LAB_100049fa;
        }
      }
      local_8 = 0x800;
    }
LAB_100049fa:
    local_8 = local_8 + 1;
    if (0x7ff < local_8) {
      RegDeleteKeyA(*(HKEY *)(&DAT_1001f160 + param_2 * 4),(LPCSTR)lpString2);
      return;
    }
  } while( true );
}


