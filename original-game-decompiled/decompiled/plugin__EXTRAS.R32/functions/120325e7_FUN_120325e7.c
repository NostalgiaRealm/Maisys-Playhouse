
/* ==== FUN_120325e7 @ 120325e7 ==== 
 * signature: undefined FUN_120325e7(void)
 * body: 120325e7-1203283a
 */

undefined4 FUN_120325e7(int *param_1)

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
  if ((DAT_120397b0 == uVar6) && (DAT_120397c0 == uVar6)) goto LAB_1203277d;
  if (DAT_120399e0 == 0) {
    FUN_12032840(1,1,uVar6,4,1,0,0,2,0,0,0);
    uVar9 = 0;
    uVar10 = 0;
    uVar8 = 0;
    param_1 = (int *)param_1[5];
    uVar7 = 2;
    uVar6 = 0;
    uVar5 = 5;
    uVar4 = 10;
LAB_12032771:
    uVar2 = 0;
    iVar3 = 1;
  }
  else {
    if (DAT_12039a80 != 0) {
      uVar10 = (uint)DAT_12039a86;
      uVar5 = 0;
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar5 = (uint)DAT_12039a84;
      uVar9 = (uint)DAT_12039a86;
    }
    FUN_12032840(1,(uint)(DAT_12039a80 == 0),uVar6,(uint)DAT_12039a82,uVar9,uVar5,uVar10,
                 (uint)DAT_12039a88,(uint)DAT_12039a8a,(uint)DAT_12039a8c,(uint)DAT_12039a8e);
    if (DAT_12039a2c == 0) {
      uVar9 = (uint)DAT_12039a3a;
      uVar10 = (uint)DAT_12039a38;
      uVar8 = (uint)DAT_12039a36;
      uVar7 = (uint)DAT_12039a34;
      uVar6 = (uint)DAT_12039a30;
      uVar5 = (uint)DAT_12039a32;
      param_1 = (int *)param_1[5];
      uVar4 = (uint)DAT_12039a2e;
      goto LAB_12032771;
    }
    uVar9 = (uint)DAT_12039a3a;
    uVar10 = (uint)DAT_12039a38;
    uVar8 = (uint)DAT_12039a36;
    uVar7 = (uint)DAT_12039a34;
    uVar2 = (uint)DAT_12039a32;
    param_1 = (int *)param_1[5];
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = (uint)DAT_12039a2e;
    iVar3 = 0;
  }
  FUN_12032840(0,iVar3,(uint)param_1,uVar4,uVar5,uVar6,uVar2,uVar7,uVar8,uVar10,uVar9);
LAB_1203277d:
  iVar3 = piVar1[7];
  if (DAT_120397b4 < DAT_120397c4) {
    if ((iVar3 < DAT_120397b4) || (DAT_120397c4 < iVar3)) {
      return 0;
    }
    if ((DAT_120397b4 < iVar3) && (iVar3 < DAT_120397c4)) {
      return 1;
    }
  }
  else {
    if (iVar3 < DAT_120397c4) {
      return 1;
    }
    if (DAT_120397b4 < iVar3) {
      return 1;
    }
    if ((DAT_120397c4 < iVar3) && (iVar3 < DAT_120397b4)) {
      return 0;
    }
  }
  iVar3 = ((piVar1[2] * 0x3c + piVar1[1]) * 0x3c + *piVar1) * 1000;
  if (piVar1[7] == DAT_120397b4) {
    if (iVar3 < DAT_120397b8) {
      return 0;
    }
  }
  else if (DAT_120397c8 <= iVar3) {
    return 0;
  }
  return 1;
}


