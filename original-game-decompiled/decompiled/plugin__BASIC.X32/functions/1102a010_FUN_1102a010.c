
/* ==== FUN_1102a010 @ 1102a010 ==== 
 * signature: undefined4 __cdecl FUN_1102a010(undefined4 param_1)
 * body: 1102a010-1102a037
 */

undefined4 __cdecl FUN_1102a010(undefined4 param_1)

{
  undefined4 uVar1;
  
  __lock(9);
  uVar1 = DAT_110397ec;
  DAT_110397ec = param_1;
  FUN_1102b240(9);
  return uVar1;
}


