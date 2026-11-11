
/* ==== FUN_0043dc60 @ 0043dc60 ==== 
 * signature: int * __cdecl FUN_0043dc60(int * param_1, int * param_2, char param_3)
 * body: 0043dc60-0043de44
 */

int * __cdecl FUN_0043dc60(int *param_1,int *param_2,char param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  void *this;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  short sVar10;
  
  iVar8 = *param_2;
  bVar2 = false;
  piVar4 = (int *)(**(code **)(iVar8 + 0x16c))();
  bVar3 = false;
  iVar5 = *(int *)((int)param_1 + 0x2a);
  for (; piVar4 != (int *)0x0; piVar4 = (int *)(**(code **)(*piVar4 + 0x16c))()) {
    if (piVar4 == param_1) {
      bVar2 = true;
      break;
    }
    if ((iVar5 != 0) && (*(int *)((int)piVar4 + 0x2a) == iVar5)) {
      bVar3 = true;
      break;
    }
  }
  if (bVar3) {
    return param_1;
  }
  if ((bVar2) && (param_3 == '\0')) {
    return param_1;
  }
  iVar5 = *param_1;
  piVar4 = (int *)(**(code **)(iVar5 + 0x218))();
  (**(code **)(iVar5 + 0x120))(0);
  if (param_3 == '\0') {
    pcVar1 = *(code **)(iVar5 + 0x16c);
    iVar5 = (*pcVar1)();
    if (iVar5 != 0) {
      piVar6 = (int *)(*pcVar1)();
      (**(code **)(*piVar6 + 0x1c))(1);
    }
    FUN_004124a0(param_1);
    goto LAB_0043dd63;
  }
  if ((*(int *)((int)param_1 + 0x2a) == 0) || (param_1[1] == 0)) {
LAB_0043dd3d:
    param_1 = (int *)(**(code **)(iVar5 + 0xec))(param_2[1]);
  }
  else {
    sVar10 = *(short *)((int)param_1 + 0x36);
    this = (void *)FUN_00466a80(param_1[1]);
    iVar7 = FUN_00450230(this,sVar10);
    if (iVar7 == 0) goto LAB_0043dd3d;
    param_1 = (int *)FUN_0043f520(param_1,param_2[1]);
  }
  if (((*(byte *)(param_1 + 8) & 8) != 0) && (*(int *)((int)param_1 + 0x2a) != 0)) {
    FUN_0040ccd0(param_1,'\0');
  }
LAB_0043dd63:
  FUN_00412570(param_2,param_1);
  pcVar1 = *(code **)(iVar8 + 0x218);
  iVar8 = (*pcVar1)();
  if (iVar8 == 0) {
    piVar6 = *(int **)((int)param_2 + 0x3a);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x2c8))();
    }
    iVar8 = *param_1;
    (**(code **)(iVar8 + 0x1fc))(piVar6);
    (**(code **)(iVar8 + 0x214))(0);
    (**(code **)(iVar8 + 0x1f8))(0);
  }
  else {
    piVar6 = (int *)(*pcVar1)();
    if (*(int **)((int)piVar6 + 0x3a) != (int *)0x0) {
      (**(code **)(**(int **)((int)piVar6 + 0x3a) + 0x2c8))();
    }
    iVar8 = *param_1;
    (**(code **)(iVar8 + 0x1fc))(*(undefined4 *)((int)piVar6 + 0x3a));
    uVar9 = (*pcVar1)();
    (**(code **)(iVar8 + 0x214))(uVar9);
    (**(code **)(*piVar6 + 0x1f8))(0);
  }
  (**(code **)(iVar8 + 0x1e4))();
  if ((*(byte *)((int)param_2 + 0x1e) & 0x10) != 0) {
    piVar6 = (int *)(*pcVar1)();
  }
  if ((piVar6 != (int *)0x0) && ((*(byte *)(piVar6 + 8) & 8) != 0)) {
    (**(code **)(*piVar6 + 0x2ac))();
  }
  if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 8) & 8) != 0)) {
    (**(code **)(*piVar4 + 0x2ac))();
  }
  return param_1;
}


