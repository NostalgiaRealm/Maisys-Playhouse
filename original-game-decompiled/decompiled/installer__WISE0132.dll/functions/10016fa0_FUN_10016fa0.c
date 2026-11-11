
/* ==== FUN_10016fa0 @ 10016fa0 ==== 
 * signature: int __cdecl FUN_10016fa0(byte * param_1, byte * param_2, LPWSTR param_3)
 * body: 10016fa0-10016fda
 */

int __cdecl FUN_10016fa0(byte *param_1,byte *param_2,LPWSTR param_3)

{
  int iVar1;
  
  if (param_3 == (LPWSTR)0x0) {
    return 0;
  }
  iVar1 = FUN_10019260(DAT_10023734,1,param_1,param_3,param_2,(int)param_3,DAT_10023730);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


