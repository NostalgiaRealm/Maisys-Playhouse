
/* ==== FUN_0043aed0 @ 0043aed0 ==== 
 * signature: undefined4 __cdecl FUN_0043aed0(int param_1, int param_2, undefined4 param_3, undefined * param_4, undefined * param_5, undefined4 param_6, int param_7)
 * body: 0043aed0-0043af8d
 */

undefined4 __cdecl
FUN_0043aed0(int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined *param_5,
            undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 extraout_var;
  int iVar9;
  int local_14;
  int local_c;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar7 = FUN_0043a270(CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                       *(undefined4 *)(param_2 + 0x1c));
  iVar8 = FUN_0043a270(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                       *(undefined4 *)(param_1 + 0x1c));
  iVar4 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 8);
  local_c = iVar6 + -1 >> 1;
  local_14 = iVar6;
  do {
    local_c = local_c - iVar2;
    if (local_c < 0) {
      iVar9 = iVar8;
      if (param_7 != 0) {
        (*(code *)param_4)(iVar8,param_7,param_6,uVar5);
        iVar9 = param_7;
      }
      (*(code *)param_5)(iVar9,iVar7,uVar1,param_3);
      iVar7 = iVar7 + iVar3;
      local_c = local_c + iVar6;
    }
    iVar8 = iVar8 + iVar4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  return 1;
}


