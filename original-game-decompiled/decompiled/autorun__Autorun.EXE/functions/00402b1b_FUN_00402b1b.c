
/* ==== FUN_00402b1b @ 00402b1b ==== 
 * signature: undefined __cdecl FUN_00402b1b(LPSTR param_1)
 * body: 00402b1b-00402b7b
 */

void __cdecl FUN_00402b1b(LPSTR param_1)

{
  int iVar1;
  HFILE HVar2;
  uint uVar3;
  LPSTR pCVar4;
  _OFSTRUCT local_8c;
  
  GetWindowsDirectoryA(param_1,0x100);
  uVar3 = 0;
  iVar1 = lstrlenA(param_1);
  pCVar4 = param_1 + iVar1 + -1;
  if (param_1[iVar1 + -1] != '\\') {
    pCVar4 = pCVar4 + 1;
  }
  do {
    wsprintfA(pCVar4,s___GLC_04x_TMP_0040425c,uVar3 & 0xffff);
    uVar3 = uVar3 + 1;
    HVar2 = OpenFile(param_1,&local_8c,0x4000);
  } while (HVar2 != -1);
  return;
}


