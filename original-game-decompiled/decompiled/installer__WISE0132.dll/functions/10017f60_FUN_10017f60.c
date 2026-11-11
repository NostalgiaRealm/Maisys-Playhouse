
/* ==== FUN_10017f60 @ 10017f60 ==== 
 * signature: undefined4 __cdecl FUN_10017f60(undefined4 param_1)
 * body: 10017f60-10017f7f
 */

undefined4 __cdecl FUN_10017f60(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10023418 != (code *)0x0) {
    iVar1 = (*DAT_10023418)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


