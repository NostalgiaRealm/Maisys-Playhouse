
/* ==== FUN_0040812b @ 0040812b ==== 
 * signature: undefined __cdecl FUN_0040812b(LPCSTR param_1)
 * body: 0040812b-004081b9
 */

void __cdecl FUN_0040812b(LPCSTR param_1)

{
  int iVar1;
  int iVar2;
  CHAR local_104 [256];
  
  FUN_00408980(param_1,0);
  FUN_00408713(param_1);
  iVar1 = lstrlenA(param_1);
  if ((4 < iVar1) && (DAT_00413834 != 0)) {
    iVar2 = lstrcmpiA(param_1 + iVar1 + -4,&DAT_004105ec);
    if (iVar2 == 0) {
      lstrcpyA(local_104,param_1);
      lstrcpyA(local_104 + iVar1 + -4,&DAT_004105e4);
      FUN_00408713(local_104);
      lstrcpyA(local_104 + iVar1 + -4,&DAT_004105dc);
      FUN_00408713(local_104);
    }
  }
  return;
}


