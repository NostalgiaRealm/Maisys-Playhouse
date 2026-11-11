
/* ==== FUN_11032267 @ 11032267 ==== 
 * signature: undefined FUN_11032267(void)
 * body: 11032267-110324ba
 */

undefined4 FUN_11032267(int *param_1)

{
  int *piVar1;
  uint uVar2;
  bool in_ZF;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  piVar1 = param_1;
  if (in_ZF) {
    return 0;
  }
  uVar6 = param_1[5];
  if ((DAT_11037ec0 == uVar6) && (DAT_11037ed0 == uVar6)) goto LAB_110323fd;
  if (DAT_11039960 == 0) {
    FUN_110324c0(1,1,uVar6,4,1,0,0,2,0,0,0);
    uVar9 = 0;
    uVar10 = 0;
    uVar8 = 0;
    param_1 = (int *)param_1[5];
    uVar7 = 2;
    uVar6 = 0;
    uVar5 = 5;
    uVar4 = 10;
LAB_110323f1:
    uVar2 = 0;
    iVar3 = 1;
  }
  else {
    if (DAT_11039a00 != 0) {
      uVar10 = (uint)DAT_11039a06;
      uVar5 = 0;
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar5 = (uint)DAT_11039a04;
      uVar9 = (uint)DAT_11039a06;
    }
    FUN_110324c0(1,(uint)(DAT_11039a00 == 0),uVar6,(uint)DAT_11039a02,uVar9,uVar5,uVar10,
                 (uint)DAT_11039a08,(uint)DAT_11039a0a,(uint)DAT_11039a0c,(uint)DAT_11039a0e);
    if (DAT_110399ac == 0) {
      uVar9 = (uint)DAT_110399ba;
      uVar10 = (uint)DAT_110399b8;
      uVar8 = (uint)DAT_110399b6;
      uVar7 = (uint)DAT_110399b4;
      uVar6 = (uint)DAT_110399b0;
      uVar5 = (uint)DAT_110399b2;
      param_1 = (int *)param_1[5];
      uVar4 = (uint)DAT_110399ae;
      goto LAB_110323f1;
    }
    uVar9 = (uint)DAT_110399ba;
    uVar10 = (uint)DAT_110399b8;
    uVar8 = (uint)DAT_110399b6;
    uVar7 = (uint)DAT_110399b4;
    uVar2 = (uint)DAT_110399b2;
    param_1 = (int *)param_1[5];
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = (uint)DAT_110399ae;
    iVar3 = 0;
  }
  FUN_110324c0(0,iVar3,(uint)param_1,uVar4,uVar5,uVar6,uVar2,uVar7,uVar8,uVar10,uVar9);
LAB_110323fd:
  iVar3 = piVar1[7];
  if (DAT_11037ec4 < DAT_11037ed4) {
    if ((iVar3 < DAT_11037ec4) || (DAT_11037ed4 < iVar3)) {
      return 0;
    }
    if ((DAT_11037ec4 < iVar3) && (iVar3 < DAT_11037ed4)) {
      return 1;
    }
  }
  else {
    if (iVar3 < DAT_11037ed4) {
      return 1;
    }
    if (DAT_11037ec4 < iVar3) {
      return 1;
    }
    if ((DAT_11037ed4 < iVar3) && (iVar3 < DAT_11037ec4)) {
      return 0;
    }
  }
  iVar3 = ((piVar1[2] * 0x3c + piVar1[1]) * 0x3c + *piVar1) * 1000;
  if (piVar1[7] == DAT_11037ec4) {
    if (iVar3 < DAT_11037ec8) {
      return 0;
    }
  }
  else if (DAT_11037ed8 <= iVar3) {
    return 0;
  }
  return 1;
}


