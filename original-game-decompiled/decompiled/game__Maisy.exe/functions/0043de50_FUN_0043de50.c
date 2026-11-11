
/* ==== FUN_0043de50 @ 0043de50 ==== 
 * signature: int * __cdecl FUN_0043de50(int * param_1, int * param_2, char param_3, undefined4 param_4)
 * body: 0043de50-0043dff3
 */

int * __cdecl FUN_0043de50(int *param_1,int *param_2,char param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  void *this;
  int iVar7;
  short sVar8;
  
  bVar3 = false;
  bVar2 = false;
  iVar5 = *(int *)((int)param_1 + 0x2a);
  for (piVar4 = param_2; piVar4 != (int *)0x0; piVar4 = (int *)(**(code **)(*piVar4 + 0x16c))()) {
    if (param_1 == piVar4) {
      bVar3 = true;
      break;
    }
    if ((iVar5 != 0) && (*(int *)((int)piVar4 + 0x2a) == iVar5)) {
      bVar2 = true;
      break;
    }
  }
  if (bVar2) {
    return param_1;
  }
  if ((bVar3) && (param_3 == '\0')) {
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
  }
  else {
    if ((*(int *)((int)param_1 + 0x2a) == 0) || (param_1[1] == 0)) {
LAB_0043df23:
      param_1 = (int *)(**(code **)(iVar5 + 0xec))(param_2[1]);
    }
    else {
      sVar8 = *(short *)((int)param_1 + 0x36);
      this = (void *)FUN_00466a80(param_1[1]);
      iVar7 = FUN_00450230(this,sVar8);
      if (iVar7 == 0) goto LAB_0043df23;
      param_1 = (int *)FUN_0043f520(param_1,param_2[1]);
    }
    if (((*(byte *)(param_1 + 8) & 8) != 0) && (*(int *)((int)param_1 + 0x2a) != 0)) {
      FUN_0040ccd0(param_1,'\0');
    }
  }
  if ((*(uint *)((int)param_2 + 0x1e) & 0x80000) == 0) {
    if ((*(uint *)((int)param_2 + 0x1e) & 2) == 0) goto LAB_0043dfbe;
    iVar5 = *param_2;
    (**(code **)(iVar5 + 0x2b8))(param_1,param_4);
    (**(code **)(iVar5 + 0x2c8))();
    iVar5 = *param_1;
    (**(code **)(iVar5 + 0x1fc))(param_2);
    piVar6 = (int *)0x0;
  }
  else {
    FUN_00424600(param_2,param_1,(char)param_4);
    if (*(int **)((int)param_2 + 0x3a) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_2 + 0x3a) + 0x2c8))();
    }
    iVar5 = *param_1;
    (**(code **)(iVar5 + 0x1fc))(*(undefined4 *)((int)param_2 + 0x3a));
    piVar6 = param_2;
  }
  (**(code **)(iVar5 + 0x214))(piVar6);
  (**(code **)(iVar5 + 0x1f8))(0);
  (**(code **)(iVar5 + 0x1e4))();
LAB_0043dfbe:
  if ((param_2 != (int *)0x0) && ((*(byte *)(param_2 + 8) & 8) != 0)) {
    (**(code **)(*param_2 + 0x2ac))();
  }
  if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 8) & 8) != 0)) {
    (**(code **)(*piVar4 + 0x2ac))();
  }
  return param_1;
}


