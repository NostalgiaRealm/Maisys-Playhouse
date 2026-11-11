
/* ==== FUN_10010ec8 @ 10010ec8 ==== 
 * signature: undefined __cdecl FUN_10010ec8(LPCSTR param_1, LPCSTR param_2, short param_3)
 * body: 10010ec8-10010ffd
 */

void __cdecl FUN_10010ec8(LPCSTR param_1,LPCSTR param_2,short param_3)

{
  LPCSTR pCVar1;
  LPCSTR pCVar2;
  int iVar3;
  DWORD DVar4;
  CHAR *pCVar5;
  CHAR local_304 [512];
  CHAR local_104 [256];
  
  if (param_3 == 0) {
    lstrcpyA(local_104,param_1);
    pCVar1 = FUN_10014834(local_104,0x5c);
    pCVar2 = FUN_10014834(local_104,0x2e);
    if (pCVar1 < pCVar2) {
      pCVar1 = pCVar2;
    }
    if (*pCVar1 == '.') {
      pCVar5 = pCVar1 + 1;
    }
    else {
      lstrcatA(local_104,(LPCSTR)&DAT_1001fcfc);
      iVar3 = lstrlenA(local_104);
      pCVar5 = local_104 + iVar3;
    }
    _param_3 = 0;
    do {
      _param_3 = _param_3 + 1;
      wsprintfA(pCVar5,&DAT_1001fcf4,_param_3);
      iVar3 = FUN_10012539(local_104);
      if (iVar3 != 0) break;
    } while (_param_3 < 999);
    DeleteFileA(local_104);
    MoveFileA(param_1,local_104);
    MoveFileA(param_2,param_1);
    if (DAT_1001f030 != (HANDLE)0xffffffff) {
      wsprintfA(local_304,s_File_Edit___s_Backup_Copy___s_1001fcd0,param_1,local_104);
      DVar4 = lstrlenA(local_304);
      FileWrite(DAT_1001f030,local_304,DVar4);
    }
  }
  else {
    DeleteFileA(param_1);
    MoveFileA(param_2,param_1);
  }
  return;
}


