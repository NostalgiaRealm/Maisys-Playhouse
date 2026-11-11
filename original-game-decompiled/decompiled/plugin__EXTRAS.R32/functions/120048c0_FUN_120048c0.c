
/* ==== FUN_120048c0 @ 120048c0 ==== 
 * signature: undefined4 __cdecl FUN_120048c0(undefined4 param_1, undefined2 * param_2)
 * body: 120048c0-12004971
 */

undefined4 __cdecl FUN_120048c0(undefined4 param_1,undefined2 *param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  void **ppvVar5;
  tagOFNA local_190;
  CHAR local_110 [272];
  
  uVar3 = 0;
  pcVar4 = s_Text_Documents____TXT__1203713c;
  ppvVar5 = &local_190.pvReserved;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppvVar5 = *(void **)pcVar4;
    pcVar4 = pcVar4 + 4;
    ppvVar5 = ppvVar5 + 1;
  }
  *(undefined2 *)ppvVar5 = *(undefined2 *)pcVar4;
  local_190.lpstrFilter = (LPCSTR)&local_190.pvReserved;
  local_110[0] = '\0';
  local_190.lpstrFile = local_110;
  local_190.hwndOwner = (HWND)0x0;
  local_190.lpstrFileTitle = (LPSTR)0x0;
  local_190.nMaxFileTitle = 0;
  local_190.lStructSize = 0x4c;
  local_190.nFilterIndex = 1;
  local_190.lpstrInitialDir = (LPCSTR)0x0;
  local_190.nMaxFile = 0x10d;
  local_190.lpstrTitle = s_Select_File_12037130;
  local_190.Flags = 0x1804;
  BVar1 = GetOpenFileNameA(&local_190);
  if ((BVar1 == 0) || (local_110[0] == '\0')) {
    uVar3 = 0xa0000;
  }
  else {
    FUN_12027790(0,param_2,(int)local_110);
  }
  return uVar3;
}


