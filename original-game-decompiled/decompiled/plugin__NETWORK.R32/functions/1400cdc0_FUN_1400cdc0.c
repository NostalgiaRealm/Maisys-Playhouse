
/* ==== FUN_1400cdc0 @ 1400cdc0 ==== 
 * signature: uint __cdecl FUN_1400cdc0(int param_1, undefined4 param_2)
 * body: 1400cdc0-1400ce1a
 */

uint __cdecl FUN_1400cdc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_14014b30((int *)(param_1 + 0xd2),param_2);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_14014cf0(param_1,*(int *)(param_1 + 0xce),0x8fd,0);
    return CONCAT31((int3)((uint)iVar2 >> 8),(char)uVar1);
  }
  uVar3 = FUN_14014cf0(param_1,*(int *)(param_1 + 0xce),0x8fe,0);
  return uVar3 & 0xffffff00;
}


