
/* ==== FUN_0040c090 @ 0040c090 ==== 
 * signature: undefined4 __cdecl FUN_0040c090(undefined4 param_1)
 * body: 0040c090-0040c0af
 */

undefined4 __cdecl FUN_0040c090(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_004134b8 != (code *)0x0) {
    iVar1 = (*DAT_004134b8)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


