
/* ==== FUN_100039fd @ 100039fd ==== 
 * signature: undefined __cdecl FUN_100039fd(LPCSTR param_1, LPCSTR param_2)
 * body: 100039fd-10003a58
 */

void __cdecl FUN_100039fd(LPCSTR param_1,LPCSTR param_2)

{
  LPCSTR pCVar1;
  CHAR local_104 [256];
  
  GetTempPathA(0x100,local_104);
  pCVar1 = param_2;
  if (param_2 == (LPCSTR)0x0) {
    pCVar1 = &DAT_1001f3e4;
  }
  GetTempFileNameA(local_104,pCVar1,0,param_1);
  if (param_2 == (LPCSTR)0x0) {
    DeleteFileA(param_1);
    pCVar1 = FUN_10014834(param_1,0x5c);
    *pCVar1 = '\0';
  }
  return;
}


