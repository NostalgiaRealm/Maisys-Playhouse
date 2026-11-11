
/* ==== FUN_1001393a @ 1001393a ==== 
 * signature: undefined __cdecl FUN_1001393a(LPSTR param_1, LPCSTR param_2)
 * body: 1001393a-1001397e
 */

void __cdecl FUN_1001393a(LPSTR param_1,LPCSTR param_2)

{
  LPCSTR pCVar1;
  int iVar2;
  
  do {
    lstrcpyA(param_1,param_2);
    pCVar1 = FUN_1000b94f(param_1);
    wsprintfA(pCVar1,s__GLH_04x_TMP_1001fdb4,(uint)(ushort)DAT_10023e2c);
    DAT_10023e2c = DAT_10023e2c + 1;
    iVar2 = FUN_10012539(param_1);
  } while (iVar2 == 0);
  return;
}


