
/* ==== FUN_10006a30 @ 10006a30 ==== 
 * signature: undefined __cdecl FUN_10006a30(LPCSTR param_1, LPCSTR param_2)
 * body: 10006a30-10006a8a
 */

void __cdecl FUN_10006a30(LPCSTR param_1,LPCSTR param_2)

{
  CHAR CVar1;
  CHAR local_104 [256];
  
  lstrcpyA(local_104,param_1);
  CVar1 = FUN_10014819(local_104);
  if (CVar1 != '\\') {
    lstrcatA(local_104,&DAT_1001f314);
  }
  lstrcatA(local_104,param_2);
  DeleteFileA(local_104);
  return;
}


