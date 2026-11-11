
/* ==== FUN_11020120 @ 11020120 ==== 
 * signature: undefined4 __cdecl FUN_11020120(int param_1, int param_2, undefined4 param_3, undefined * param_4, undefined * param_5, undefined4 param_6, int param_7)
 * body: 11020120-110201e9
 */

undefined4 __cdecl
FUN_11020120(int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined *param_5,
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
  int iVar10;
  int local_4;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar7 = FUN_1101f460(CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                       *(undefined4 *)(param_2 + 0x1c));
  iVar8 = FUN_1101f460(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                       *(undefined4 *)(param_1 + 0x1c));
  iVar4 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 8);
  iVar9 = iVar6 + -1 >> 1;
  local_4 = iVar6;
  do {
    iVar9 = iVar9 - iVar2;
    if (iVar9 < 0) {
      iVar10 = iVar8;
      if (param_7 != 0) {
        (*(code *)param_4)(iVar8,param_7,param_6,uVar5);
        iVar10 = param_7;
      }
      (*(code *)param_5)(iVar10,iVar7,uVar1,param_3);
      iVar7 = iVar7 + iVar3;
      iVar9 = iVar9 + iVar6;
    }
    iVar8 = iVar8 + iVar4;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return 1;
}


