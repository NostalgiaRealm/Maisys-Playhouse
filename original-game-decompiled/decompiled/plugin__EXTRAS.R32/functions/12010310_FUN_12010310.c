
/* ==== FUN_12010310 @ 12010310 ==== 
 * signature: undefined4 __cdecl FUN_12010310(undefined4 param_1, int param_2, short * param_3)
 * body: 12010310-1201033c
 */

undefined4 __cdecl FUN_12010310(undefined4 param_1,int param_2,short *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x10000;
  if (*param_3 == 0x6a) {
    *param_3 = 0x66;
  }
  if (*param_3 == 0x66) {
    FUN_120273e0(0,param_3,param_2);
    uVar1 = 0;
  }
  return uVar1;
}


