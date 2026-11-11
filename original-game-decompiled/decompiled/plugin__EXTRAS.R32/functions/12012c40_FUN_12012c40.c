
/* ==== FUN_12012c40 @ 12012c40 ==== 
 * signature: undefined4 __cdecl FUN_12012c40(int param_1, uint * param_2, short * param_3, short * param_4)
 * body: 12012c40-12012c9d
 */

undefined4 __cdecl FUN_12012c40(int param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_12027a70(param_4,param_3,(undefined4 *)0x0,(undefined4 *)0x0,
                         (undefined4 *)(param_1 + 0x2e));
    return uVar2;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_msgflag_12037710);
  if ((char)uVar1 == '\0') {
    FUN_120271d0(param_2,(uint *)s_sendcommand_120376fc);
  }
  return 0x10000;
}


