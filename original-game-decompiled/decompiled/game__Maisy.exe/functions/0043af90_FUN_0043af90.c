
/* ==== FUN_0043af90 @ 0043af90 ==== 
 * signature: undefined4 __cdecl FUN_0043af90(int param_1, int param_2, undefined4 param_3, undefined * param_4, undefined * param_5, undefined4 param_6, int param_7)
 * body: 0043af90-0043b05d
 */

undefined4 __cdecl
FUN_0043af90(int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined *param_5,
            undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined2 extraout_var;
  int iVar8;
  int iVar9;
  undefined4 local_24;
  undefined4 local_8;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  local_8 = FUN_0043a270(CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                         *(undefined4 *)(param_2 + 0x1c));
  iVar7 = FUN_0043a270(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                       *(undefined4 *)(param_1 + 0x1c));
  iVar4 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 8);
  iVar8 = iVar6 + -1 >> 1;
  local_24 = iVar2;
  if (param_7 == 0) goto LAB_0043b01b;
LAB_0043affb:
  (*(code *)param_4)(iVar7,param_7,param_6,uVar5);
  do {
    iVar9 = param_7;
    if (param_7 == 0) goto LAB_0043b01b;
    while( true ) {
      (*(code *)param_5)(iVar9,local_8,uVar1,param_3);
      local_24 = local_24 + -1;
      if (local_24 == 0) {
        return 1;
      }
      local_8 = local_8 + iVar3;
      iVar8 = (iVar8 - iVar6) + 1;
      if (-1 < iVar8) break;
      iVar7 = iVar7 + iVar4;
      iVar8 = iVar2 + -1 + iVar8;
      if (param_7 != 0) goto LAB_0043affb;
LAB_0043b01b:
      iVar9 = iVar7;
    }
  } while( true );
}


