
/* ==== FUN_1101bdb0 @ 1101bdb0 ==== 
 * signature: undefined4 __cdecl FUN_1101bdb0(undefined4 param_1, undefined2 * param_2, short * param_3, int param_4)
 * body: 1101bdb0-1101be68
 */

undefined4 __cdecl FUN_1101bdb0(undefined4 param_1,undefined2 *param_2,short *param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = (ushort)((uint)param_3 >> 0x10);
  switch(param_4 + -1) {
  case 0:
  case 1:
    break;
  case 2:
  case 3:
    if (*param_3 != 0x11) {
      return CONCAT22(uVar3,0xffea);
    }
    *param_2 = 1;
    if (param_4 != 3) {
      uVar2 = *(uint *)(param_3 + 3);
      *(uint *)(param_2 + 1) = uVar2;
      return uVar2 & 0xffff0000;
    }
    uVar2 = *(uint *)(param_3 + 1);
    *(uint *)(param_2 + 1) = uVar2;
    return uVar2 & 0xffff0000;
  case 4:
  case 5:
    if (*param_3 != 0x16) {
      return CONCAT22(uVar3,0xffeb);
    }
    *param_2 = 0x15;
    if (param_4 != 5) {
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 7);
      uVar2 = *(uint *)(param_3 + 5);
      *(uint *)(param_2 + 1) = uVar2;
      return uVar2 & 0xffff0000;
    }
    *(double *)(param_2 + 1) = *(double *)(param_3 + 1) * 57.29577951308232;
    return (uint)uVar3 << 0x10;
  default:
    return CONCAT22((short)((uint)(param_4 + -1) >> 0x10),0xffff);
  }
  if (*param_3 != 0x10) {
    return CONCAT22(uVar3,0xfff9);
  }
  *param_2 = 1;
  if (param_4 != 1) {
    sVar1 = param_3[2];
    *(int *)(param_2 + 1) = (int)sVar1;
    return (uint)(ushort)(sVar1 >> 0xf) << 0x10;
  }
  sVar1 = param_3[1];
  *(int *)(param_2 + 1) = (int)sVar1;
  return (uint)(ushort)(sVar1 >> 0xf) << 0x10;
}


