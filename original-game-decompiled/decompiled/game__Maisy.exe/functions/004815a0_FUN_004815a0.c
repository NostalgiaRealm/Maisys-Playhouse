
/* ==== FUN_004815a0 @ 004815a0 ==== 
 * signature: undefined4 __fastcall FUN_004815a0(int * param_1)
 * body: 004815a0-00481659
 */

undefined4 __fastcall FUN_004815a0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined2 local_8;
  
  iVar1 = *param_1;
  cVar2 = (**(code **)(iVar1 + 0x108))();
  if (cVar2 == '\0') {
    return 0x10000;
  }
  if ((*(byte *)((int)param_1 + 0x15a) & 1) != 0) {
    local_14 = (undefined1  [4])param_1[0x4d];
    local_10 = (undefined1  [4])param_1[0x4e];
    local_c = (undefined1  [4])param_1[0x4f];
    local_8 = (undefined2)param_1[0x50];
    FUN_00481810(param_1,(uint *)(local_14 + 2),*(uint *)((int)param_1 + 0x136));
    FUN_00481810(param_1,(uint *)(local_10 + 2),*(uint *)((int)param_1 + 0x13a));
    FUN_00481810(param_1,(uint *)(local_c + 2),*(uint *)((int)param_1 + 0x13e));
    uVar3 = (**(code **)(iVar1 + 0x14c))(local_14,*(undefined4 *)((int)param_1 + 0x13e));
    return uVar3;
  }
  uVar3 = (**(code **)(iVar1 + 0x14c))(param_1 + 0x4d,*(undefined4 *)((int)param_1 + 0x13e));
  return uVar3;
}


