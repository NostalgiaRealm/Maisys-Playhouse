
/* ==== FUN_1201e0e0 @ 1201e0e0 ==== 
 * signature: undefined4 __cdecl FUN_1201e0e0(undefined4 param_1, uint * param_2)
 * body: 1201e0e0-1201e12f
 */

undefined4 __cdecl FUN_1201e0e0(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_msgflag_12037710);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_120271d0(param_2,(uint *)s_sendcommand_120376fc);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_120271d0(param_2,(uint *)s_enable_12037ac8);
      if ((char)uVar1 == '\0') {
        FUN_120271d0(param_2,(uint *)s_disable_12037ab4);
      }
    }
  }
  return 0x10000;
}


