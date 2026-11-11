
/* ==== FUN_14020650 @ 14020650 ==== 
 * signature: undefined4 __cdecl FUN_14020650(undefined4 param_1)
 * body: 14020650-14020677
 */

undefined4 __cdecl FUN_14020650(undefined4 param_1)

{
  undefined4 uVar1;
  
  __lock(9);
  uVar1 = DAT_14028980;
  DAT_14028980 = param_1;
  FUN_1401a650(9);
  return uVar1;
}


