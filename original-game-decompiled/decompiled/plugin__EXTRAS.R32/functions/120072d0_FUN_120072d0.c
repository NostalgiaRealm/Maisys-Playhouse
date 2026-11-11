
/* ==== FUN_120072d0 @ 120072d0 ==== 
 * signature: undefined4 __cdecl FUN_120072d0(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 120072d0-12007307
 */

undefined4 __cdecl FUN_120072d0(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_12027a70(param_4,param_3,param_1,(undefined4 *)0x0,(undefined4 *)0x0);
    return uVar2;
  }
  return 0x10000;
}


