
/* ==== FUN_00490230 @ 00490230 ==== 
 * signature: int __cdecl FUN_00490230(SIZE_T param_1, int param_2)
 * body: 00490230-0049026f
 */

int __cdecl FUN_00490230(SIZE_T param_1,int param_2)

{
  int iVar1;
  
  if (0xffffffe0 < param_1) {
    return 0;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    iVar1 = FUN_00490270(param_1);
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


