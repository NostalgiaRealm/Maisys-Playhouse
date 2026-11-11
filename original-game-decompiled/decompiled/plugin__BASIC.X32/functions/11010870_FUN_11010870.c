
/* ==== FUN_11010870 @ 11010870 ==== 
 * signature: uint __cdecl FUN_11010870(undefined4 param_1, int param_2, int param_3)
 * body: 11010870-11010937
 */

uint __cdecl FUN_11010870(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint3 uVar4;
  uint uVar3;
  short sVar5;
  
  sVar5 = 0;
  iVar2 = *(int *)(param_3 + 0xc);
  if (iVar2 != 0) {
    sVar5 = *(short *)(iVar2 + 0xc);
  }
  if (*(int *)(param_3 + 8) == 0) {
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  if ((*(byte *)(param_2 + 0x54) & 1) == 0) {
    uVar3 = FUN_1100b970(param_1,param_2,param_3);
    return uVar3 & 0xffffff00;
  }
  sVar1 = *(short *)(param_2 + 0x1e);
  uVar4 = (uint3)(char)((ushort)sVar1 >> 8);
  if (sVar1 < 0x3f3) {
    if (sVar1 == 0x3f2) {
      uVar3 = FUN_1100bce0(param_1,param_2,param_3);
      return uVar3 & 0xffffff00;
    }
    if (sVar1 != 1000) {
      return (uint)uVar4 << 8;
    }
    uVar3 = FUN_1100ba10(param_1,param_2,param_3);
    return uVar3 & 0xffffff00;
  }
  if (sVar1 == 0x44c) {
    uVar3 = FUN_1100bd10(param_1,param_2,param_3);
    return uVar3 & 0xffffff00;
  }
  if (sVar1 != 9000) {
    return (uint)uVar4 << 8;
  }
  uVar3 = FUN_1100be10(param_1,param_2,param_3,0,sVar5);
  return uVar3 & 0xffffff00;
}


