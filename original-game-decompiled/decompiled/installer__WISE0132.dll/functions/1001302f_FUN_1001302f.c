
/* ==== FUN_1001302f @ 1001302f ==== 
 * signature: DWORD __cdecl FUN_1001302f(int param_1, DWORD param_2, LPCSTR param_3, LPCSTR param_4, LPCSTR param_5, CHAR * param_6, LPCSTR param_7, LPSTR param_8, PUINT param_9)
 * body: 1001302f-10013191
 */

DWORD __cdecl
FUN_1001302f(int param_1,DWORD param_2,LPCSTR param_3,LPCSTR param_4,LPCSTR param_5,CHAR *param_6,
            LPCSTR param_7,LPSTR param_8,PUINT param_9)

{
  int iVar1;
  LPCSTR pCVar2;
  DWORD DVar3;
  BOOL BVar4;
  CHAR local_304 [256];
  CHAR local_204 [256];
  CHAR local_104 [256];
  
  if (param_1 == 0) {
    if (DAT_100241e8 != 0) {
      lstrcpyA(local_204,param_5);
      FUN_10012386(local_204,0);
      param_5 = local_204;
      lstrcpyA(local_104,param_6);
      FUN_10012386(local_104,0);
      param_6 = local_104;
      lstrcpyA(local_304,param_7);
      FUN_10012386(local_304,0);
      param_7 = local_304;
    }
    DVar3 = VerInstallFileA(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  else {
    param_9 = (PUINT)*param_9;
    wsprintfA(local_104,s__s__s_1001f2e4,param_6,param_4);
    iVar1 = FUN_10012539(local_104);
    if (iVar1 == 0) {
      FUN_10012386(local_104,0);
      pCVar2 = local_104;
    }
    else {
      FUN_1001393a(local_204,local_104);
      pCVar2 = local_204;
    }
    pCVar2 = FUN_1000b94f(pCVar2);
    DVar3 = VerInstallFileA(param_2,param_3,pCVar2,param_5,param_6,param_7,param_8,(PUINT)&param_9);
    if ((iVar1 != 0) && (BVar4 = MoveFileA(local_204,local_104), BVar4 == 0)) {
      DVar3 = DVar3 | 0x80;
    }
  }
  return DVar3;
}


