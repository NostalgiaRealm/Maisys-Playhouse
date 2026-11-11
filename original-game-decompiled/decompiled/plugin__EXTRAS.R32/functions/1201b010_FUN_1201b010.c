
/* ==== FUN_1201b010 @ 1201b010 ==== 
 * signature: undefined4 __cdecl FUN_1201b010(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1201b010-1201b049
 */

undefined4 __cdecl FUN_1201b010(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_12027a70(param_4,param_3,param_1,(undefined4 *)((int)param_1 + 10),(undefined4 *)0x0
                        );
    return uVar2;
  }
  return 0x10000;
}


