
/* ==== FUN_11003f30 @ 11003f30 ==== 
 * signature: uint __cdecl FUN_11003f30(undefined4 * param_1, int param_2)
 * body: 11003f30-11004009
 */

uint __cdecl FUN_11003f30(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 local_84 [5];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_54 [3];
  undefined4 local_46;
  undefined4 local_30 [12];
  
  uVar1 = FUN_1100fc30((int)param_1);
  FUN_1100fb90(param_1,uVar1,local_54);
  FUN_1100fc50(param_1,uVar1,local_30);
  FUN_1100fc50(param_1,local_46,local_84);
  *(undefined4 *)(param_2 + 0x30) = uVar1;
  *(undefined1 *)(param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 0x36) = 1;
  *(undefined2 *)(param_2 + 0x4a) = 0x14;
  *(undefined2 *)(param_2 + 0x48) = 0x14;
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_2 + 0x20);
  *(undefined2 *)(param_2 + 0x5a) = 0;
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x40) = local_70;
  *(undefined4 *)(param_2 + 0x44) = local_6c;
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0x48);
  DVar2 = timeGetTime();
  *(uint *)(param_2 + 0x56) = *(int *)(param_2 + 0x52) / 100000 + (DVar2 * 6) / 100;
  uVar3 = FUN_11003980(0x1f5,param_1);
  return uVar3 & 0xffffff00;
}


