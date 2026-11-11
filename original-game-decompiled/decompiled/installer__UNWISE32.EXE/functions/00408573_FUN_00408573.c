
/* ==== FUN_00408573 @ 00408573 ==== 
 * signature: undefined __cdecl FUN_00408573(LPCSTR param_1, int param_2)
 * body: 00408573-0040868a
 */

void __cdecl FUN_00408573(LPCSTR param_1,int param_2)

{
  int iVar1;
  LSTATUS LVar2;
  HKEY hKey;
  CHAR local_194;
  CHAR aCStack_193 [383];
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  int local_8;
  
  local_8 = 0;
  do {
    lstrcpyA(&local_194,param_1);
    lstrcatA(&local_194,&DAT_004100cc);
    iVar1 = lstrlenA(param_1);
    if (DAT_00413834 == 0) {
      LVar2 = RegOpenKeyA((HKEY)0x80000000,param_1,&local_c);
      if (LVar2 == 0) {
        LVar2 = RegEnumKeyA(local_c,0,aCStack_193 + iVar1,0x100);
        RegCloseKey(local_c);
        if (LVar2 == 0) goto LAB_0040863a;
      }
LAB_0040864d:
      local_8 = 0x800;
    }
    else {
      LVar2 = RegOpenKeyExA(*(HKEY *)(&DAT_00410020 + param_2 * 4),param_1,0,0x1f,&local_10);
      if (LVar2 != 0) goto LAB_0040864d;
      local_14 = 0x100;
      LVar2 = RegEnumKeyExA(local_10,0,aCStack_193 + iVar1,&local_14,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,(PFILETIME)0x0);
      RegCloseKey(local_10);
      if (LVar2 != 0) goto LAB_0040864d;
LAB_0040863a:
      FUN_00408573(&local_194,param_2);
    }
    local_8 = local_8 + 1;
    if (0x7ff < local_8) {
      if (DAT_00413834 == 0) {
        hKey = (HKEY)0x80000000;
      }
      else {
        hKey = *(HKEY *)(&DAT_00410020 + param_2 * 4);
      }
      RegDeleteKeyA(hKey,param_1);
      return;
    }
  } while( true );
}


