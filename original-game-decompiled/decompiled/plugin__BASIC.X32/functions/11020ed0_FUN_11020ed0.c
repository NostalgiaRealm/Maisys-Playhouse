
/* ==== FUN_11020ed0 @ 11020ed0 ==== 
 * signature: short __cdecl FUN_11020ed0(undefined4 * param_1, short * param_2, short param_3, undefined4 param_4, undefined4 param_5)
 * body: 11020ed0-11020f81
 */

short __cdecl
FUN_11020ed0(undefined4 *param_1,short *param_2,short param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  short sVar3;
  short local_30 [24];
  
  uVar1 = FUN_11021320(param_3);
  uVar2 = FUN_11020d50(param_1,local_30,param_3,(short)uVar1);
  sVar3 = (short)uVar2;
  if (sVar3 == 0) {
    uVar2 = FUN_11020e70(param_1,param_2,local_30,param_4,param_5);
    sVar3 = (short)uVar2;
    if (sVar3 == 0) {
      FUN_11020e00(param_1,param_2);
      uVar1 = FUN_11021320(param_3);
      uVar2 = FUN_11020d50(param_1,param_2,param_3,(short)uVar1);
      sVar3 = (short)uVar2;
      if (sVar3 == 0) {
        uVar2 = FUN_11020e70(param_1,local_30,param_2,param_4,param_5);
        sVar3 = (short)uVar2;
      }
    }
    FUN_11020e00(param_1,local_30);
  }
  return sVar3;
}


