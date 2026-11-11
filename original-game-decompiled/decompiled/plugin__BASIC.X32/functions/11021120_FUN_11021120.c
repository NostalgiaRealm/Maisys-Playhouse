
/* ==== FUN_11021120 @ 11021120 ==== 
 * signature: uint __fastcall FUN_11021120(undefined4 param_1, undefined4 param_2, undefined4 * param_3, short * param_4, short param_5)
 * body: 11021120-1102116c
 */

uint __fastcall
FUN_11021120(undefined4 param_1,undefined4 param_2,undefined4 *param_3,short *param_4,short param_5)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_5 == 1) {
    uVar2 = FUN_11019c00(param_3,param_2,param_3,param_4);
    return (uint)uVar2;
  }
  if (param_5 != 0x15) {
    if (param_5 != 0x1a) {
      return CONCAT22(param_5 >> 0xf,0xffe0);
    }
    uVar1 = FUN_11019ca0(param_3,param_4);
    return uVar1;
  }
  uVar1 = FUN_11019b70(param_4);
  return uVar1;
}


