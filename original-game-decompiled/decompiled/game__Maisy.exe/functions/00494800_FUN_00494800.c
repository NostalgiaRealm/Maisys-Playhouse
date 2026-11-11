
/* ==== FUN_00494800 @ 00494800 ==== 
 * signature: undefined4 __cdecl FUN_00494800(undefined4 param_1)
 * body: 00494800-00494827
 */

undefined4 __cdecl FUN_00494800(undefined4 param_1)

{
  undefined4 uVar1;
  
  __lock(9);
  uVar1 = DAT_004e54a0;
  DAT_004e54a0 = param_1;
  FUN_00493e20(9);
  return uVar1;
}


