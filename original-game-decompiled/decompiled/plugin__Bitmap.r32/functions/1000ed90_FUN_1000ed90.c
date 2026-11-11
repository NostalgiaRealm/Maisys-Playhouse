
/* ==== FUN_1000ed90 @ 1000ed90 ==== 
 * signature: undefined4 __cdecl FUN_1000ed90(undefined4 param_1)
 * body: 1000ed90-1000edaf
 */

undefined4 __cdecl FUN_1000ed90(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100172cc != (code *)0x0) {
    iVar1 = (*DAT_100172cc)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


