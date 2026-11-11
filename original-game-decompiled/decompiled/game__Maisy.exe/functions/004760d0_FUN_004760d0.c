
/* ==== FUN_004760d0 @ 004760d0 ==== 
 * signature: undefined4 __cdecl FUN_004760d0(int param_1)
 * body: 004760d0-0047618a
 */

undefined4 __cdecl FUN_004760d0(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char local_114 [256];
  void *local_14;
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(param_1 + 0x1a);
  iVar1 = *(int *)(*(int *)(param_1 + 0x16) + 4);
  if (iVar1 == 0) {
    *local_8 = 0;
    return 1;
  }
  local_c = 0xffffffff;
  pcVar2 = (char *)local_8[1];
  iVar5 = 1;
  local_14 = (void *)FUN_00466a70(*(int *)(iVar1 + 4));
  local_10 = FUN_0044e340((int)local_14);
  if (0 < local_10) {
    do {
      piVar3 = FUN_0044db20(local_14,iVar5,0,'\x01','\x01');
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x70))(local_114);
        uVar4 = FUN_0043d430(pcVar2,local_114);
        if (uVar4 == 0) {
          local_c = (**(code **)(*piVar3 + 0x150))();
          break;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= local_10);
  }
  *local_8 = local_c;
  return CONCAT31((int3)((uint)local_c >> 8),1);
}


