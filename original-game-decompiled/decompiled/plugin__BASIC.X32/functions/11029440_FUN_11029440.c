
/* ==== FUN_11029440 @ 11029440 ==== 
 * signature: int __cdecl FUN_11029440(SIZE_T param_1, int param_2)
 * body: 11029440-1102947f
 */

int __cdecl FUN_11029440(SIZE_T param_1,int param_2)

{
  int iVar1;
  
  if (0xffffffe0 < param_1) {
    return 0;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    iVar1 = FUN_11029480(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_2 == 0) break;
    iVar1 = __callnewh(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}


