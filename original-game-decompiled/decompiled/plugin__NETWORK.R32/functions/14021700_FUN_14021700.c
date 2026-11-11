
/* ==== FUN_14021700 @ 14021700 ==== 
 * signature: undefined4 __stdcall FUN_14021700(int * param_1)
 * body: 14021700-14021700
 */

undefined4 FUN_14021700(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  piVar1 = param_1;
  if (DAT_1402841c == 0) {
    return 0;
  }
  uVar6 = param_1[5];
  if ((DAT_140284b8 == uVar6) && (DAT_140284c8 == uVar6)) goto LAB_1402189d;
  if (DAT_14028988 == 0) {
    FUN_14021960(1,1,uVar6,4,1,0,0,2,0,0,0);
    uVar9 = 0;
    uVar10 = 0;
    uVar8 = 0;
    param_1 = (int *)param_1[5];
    uVar7 = 2;
    uVar6 = 0;
    uVar5 = 5;
    uVar4 = 10;
LAB_14021891:
    uVar2 = 0;
    iVar3 = 1;
  }
  else {
    if (DAT_14028a28 != 0) {
      uVar10 = (uint)DAT_14028a2e;
      uVar5 = 0;
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar5 = (uint)DAT_14028a2c;
      uVar9 = (uint)DAT_14028a2e;
    }
    FUN_14021960(1,(uint)(DAT_14028a28 == 0),uVar6,(uint)DAT_14028a2a,uVar9,uVar5,uVar10,
                 (uint)DAT_14028a30,(uint)DAT_14028a32,(uint)DAT_14028a34,(uint)DAT_14028a36);
    if (DAT_140289d4 == 0) {
      uVar9 = (uint)DAT_140289e2;
      uVar10 = (uint)DAT_140289e0;
      uVar8 = (uint)DAT_140289de;
      uVar7 = (uint)DAT_140289dc;
      uVar6 = (uint)DAT_140289d8;
      uVar5 = (uint)DAT_140289da;
      param_1 = (int *)param_1[5];
      uVar4 = (uint)DAT_140289d6;
      goto LAB_14021891;
    }
    uVar9 = (uint)DAT_140289e2;
    uVar10 = (uint)DAT_140289e0;
    uVar8 = (uint)DAT_140289de;
    uVar7 = (uint)DAT_140289dc;
    uVar2 = (uint)DAT_140289da;
    param_1 = (int *)param_1[5];
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = (uint)DAT_140289d6;
    iVar3 = 0;
  }
  FUN_14021960(0,iVar3,(uint)param_1,uVar4,uVar5,uVar6,uVar2,uVar7,uVar8,uVar10,uVar9);
LAB_1402189d:
  iVar3 = piVar1[7];
  if (DAT_140284bc < DAT_140284cc) {
    if ((iVar3 < DAT_140284bc) || (DAT_140284cc < iVar3)) {
      return 0;
    }
    if ((DAT_140284bc < iVar3) && (iVar3 < DAT_140284cc)) {
      return 1;
    }
  }
  else {
    if (iVar3 < DAT_140284cc) {
      return 1;
    }
    if (DAT_140284bc < iVar3) {
      return 1;
    }
    if ((DAT_140284cc < iVar3) && (iVar3 < DAT_140284bc)) {
      return 0;
    }
  }
  iVar3 = ((piVar1[2] * 0x3c + piVar1[1]) * 0x3c + *piVar1) * 1000;
  if (piVar1[7] == DAT_140284bc) {
    if (iVar3 < DAT_140284c0) {
      return 0;
    }
  }
  else if (DAT_140284d0 <= iVar3) {
    return 0;
  }
  return 1;
}


