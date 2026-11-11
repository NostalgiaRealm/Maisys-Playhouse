
/* ==== FUN_1001404c @ 1001404c ==== 
 * signature: bool __cdecl FUN_1001404c(undefined4 * param_1, int param_2, int param_3)
 * body: 1001404c-1001413d
 */

bool __cdecl FUN_1001404c(undefined4 *param_1,int param_2,int param_3)

{
  CHAR CVar1;
  LPSTR lpFileName;
  int iVar2;
  HANDLE hObject;
  LPCSTR lpString2;
  CHAR local_108 [256];
  CHAR local_8 [3];
  undefined1 local_5;
  
  lpFileName = (LPSTR)FUN_10015d50(0x100);
  *param_1 = lpFileName;
  if (param_2 == 0) {
    GetWindowsDirectoryA(local_108,0x100);
    CVar1 = FUN_10014819(local_108);
    if (CVar1 != '\\') {
      lstrcatA(local_108,&DAT_1001f314);
    }
    FUN_1001393a(lpFileName,local_108);
  }
  else {
    local_5 = 0;
    local_8[0] = 'G';
    local_8[1] = 0x4c;
    local_8[2] = (CHAR)param_2;
    FUN_100039fd(lpFileName,local_8);
    if (param_2 == 0x5f) {
      DeleteFileA(lpFileName);
      lpString2 = &DAT_1001f670;
      iVar2 = lstrlenA(lpFileName);
      lstrcpyA(lpFileName + iVar2 + -3,lpString2);
    }
  }
  hObject = (HANDLE)FUN_1001223a(lpFileName,1,1);
  if (-1 < (int)hObject) {
    FUN_10013192(*(undefined4 *)(DAT_1002392c + 0x18),hObject,
                 *(undefined4 *)(DAT_1002392c + 0x44 + param_3 * 4),0);
    CloseHandle(hObject);
  }
  else {
    FUN_1000b352(PTR_s_Internal_Error_1001f048);
  }
  return -1 >= (int)hObject;
}


