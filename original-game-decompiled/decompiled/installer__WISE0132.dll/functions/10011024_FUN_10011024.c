
/* ==== FUN_10011024 @ 10011024 ==== 
 * signature: undefined4 __cdecl FUN_10011024(LPCSTR param_1, int param_2)
 * body: 10011024-10011093
 */

undefined4 __cdecl FUN_10011024(LPCSTR param_1,int param_2)

{
  LPCSTR pCVar1;
  CHAR local_304 [512];
  CHAR local_104 [256];
  
  lstrcpyA(local_104,param_1);
  if (param_2 == 0) {
    FUN_10012386(local_104,1);
    pCVar1 = (LPCSTR)DAT_100240b8[0x1a];
  }
  else {
    pCVar1 = (LPCSTR)*DAT_100240b8;
  }
  wsprintfA(local_304,pCVar1,local_104);
  FUN_1000b352(local_304);
  return 1;
}


