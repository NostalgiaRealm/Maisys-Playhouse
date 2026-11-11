
/* ==== FUN_004674d0 @ 004674d0 ==== 
 * signature: undefined4 __cdecl FUN_004674d0(undefined4 param_1, undefined4 param_2, int param_3)
 * body: 004674d0-0046750d
 */

undefined4 __cdecl FUN_004674d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == 0) {
    FUN_00410f30((int)DAT_004da390);
    FUN_00410ca0(DAT_004da390,0x28);
  }
  else {
    bVar1 = FUN_00410e70(DAT_004da390,(short)param_3);
    if (!bVar1) {
      return 0x10000;
    }
  }
  return 0;
}


