
/* ==== FUN_10012070 @ 10012070 ==== 
 * signature: undefined __cdecl FUN_10012070(LPCSTR param_1)
 * body: 10012070-100120c4
 */

void __cdecl FUN_10012070(LPCSTR param_1)

{
  CHAR local_204 [256];
  CHAR local_104 [256];
  
  lstrcpyA(local_104,param_1);
  if (DAT_100241e8 != 0) {
    FUN_10012386(local_104,0);
  }
  CharToOemA(local_104,local_204);
  FUN_10016240(local_204);
  return;
}


