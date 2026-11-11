
/* ==== FUN_11004410 @ 11004410 ==== 
 * signature: undefined4 __cdecl FUN_11004410(undefined4 param_1, short * param_2, int param_3)
 * body: 11004410-1100448b
 */

undefined4 __cdecl FUN_11004410(undefined4 param_1,short *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  uint3 extraout_var;
  uint3 extraout_var_00;
  
  sVar1 = *param_2;
  if (sVar1 == 3) {
    uVar2 = FUN_11014850(param_1,*(int *)(param_3 + 0x14));
    param_2[1] = (short)uVar2;
    return uVar2 & 0xffffff00;
  }
  if (sVar1 != 4) {
    if (sVar1 != 5) {
      return CONCAT31((int3)(char)((ushort)sVar1 >> 8),1);
    }
    FUN_11014960(param_1,*(int *)(param_3 + 0x14),(int)param_2[1],*(undefined4 *)(param_2 + 2));
    return (uint)extraout_var_00 << 8;
  }
  FUN_110148b0(param_1,*(int *)(param_3 + 0x14),(int)param_2[1],(undefined4 *)(param_2 + 2));
  return (uint)extraout_var << 8;
}


