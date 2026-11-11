
/* ==== FUN_1201e050 @ 1201e050 ==== 
 * signature: undefined4 __cdecl FUN_1201e050(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1201e050-1201e0d2
 */

undefined4 __cdecl FUN_1201e050(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_12027a70(param_4,param_3,param_1,(undefined4 *)((int)param_1 + 10),param_1 + 5);
    return uVar2;
  }
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


