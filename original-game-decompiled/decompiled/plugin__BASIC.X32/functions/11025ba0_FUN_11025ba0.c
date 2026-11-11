
/* ==== FUN_11025ba0 @ 11025ba0 ==== 
 * signature: undefined4 __cdecl FUN_11025ba0(undefined4 param_1, short * param_2, int param_3)
 * body: 11025ba0-11025c6d
 */

undefined4 __cdecl FUN_11025ba0(undefined4 param_1,short *param_2,int param_3)

{
  uint uVar1;
  uint3 extraout_var;
  uint3 extraout_var_00;
  short sVar2;
  
  sVar2 = *param_2;
  if (sVar2 == 3) {
    uVar1 = FUN_11014850(param_1,*(int *)(param_3 + 0x62));
    param_2[1] = (ushort)(*(short *)(param_3 + 0x30) == 0x1d) + (short)uVar1;
    return uVar1 & 0xffffff00;
  }
  if (sVar2 != 4) {
    if (sVar2 != 5) {
      return CONCAT31((int3)(char)((ushort)sVar2 >> 8),1);
    }
    sVar2 = param_2[1];
    if (*(short *)(param_3 + 0x30) == 0x1d) {
      if (sVar2 == 1) {
        uVar1 = *(uint *)(param_2 + 2);
        *(uint *)(param_3 + 0x36) = uVar1;
        return uVar1 & 0xffffff00;
      }
      sVar2 = sVar2 + -1;
    }
    FUN_11014960(param_1,*(int *)(param_3 + 0x62),(int)sVar2,*(undefined4 *)(param_2 + 2));
    return (uint)extraout_var_00 << 8;
  }
  sVar2 = param_2[1];
  if (*(short *)(param_3 + 0x30) == 0x1d) {
    if (sVar2 == 1) {
      uVar1 = *(uint *)(param_3 + 0x36);
      *(uint *)(param_2 + 2) = uVar1;
      return uVar1 & 0xffffff00;
    }
    sVar2 = sVar2 + -1;
  }
  FUN_110148b0(param_1,*(int *)(param_3 + 0x62),(int)sVar2,(undefined4 *)(param_2 + 2));
  return (uint)extraout_var << 8;
}


