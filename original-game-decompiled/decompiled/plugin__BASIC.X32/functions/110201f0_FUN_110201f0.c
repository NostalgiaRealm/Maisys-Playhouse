
/* ==== FUN_110201f0 @ 110201f0 ==== 
 * signature: undefined4 __cdecl FUN_110201f0(int param_1, int param_2, undefined4 param_3, undefined * param_4, undefined * param_5, undefined4 param_6, int param_7)
 * body: 110201f0-110202c8
 */

undefined4 __cdecl
FUN_110201f0(int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined *param_5,
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
  undefined4 local_c;
  
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
  local_c = iVar2;
  if (param_7 == 0) goto LAB_11020282;
LAB_11020261:
  (*(code *)param_4)(iVar8,param_7,param_6,uVar5);
  do {
    iVar10 = param_7;
    if (param_7 == 0) goto LAB_11020282;
    while( true ) {
      (*(code *)param_5)(iVar10,iVar7,uVar1,param_3);
      local_c = local_c + -1;
      if (local_c == 0) {
        return 1;
      }
      iVar7 = iVar7 + iVar3;
      iVar9 = (iVar9 - iVar6) + 1;
      if (-1 < iVar9) break;
      iVar8 = iVar8 + iVar4;
      iVar9 = iVar2 + -1 + iVar9;
      if (param_7 != 0) goto LAB_11020261;
LAB_11020282:
      iVar10 = iVar8;
    }
  } while( true );
}


