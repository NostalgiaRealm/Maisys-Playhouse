
/* ==== FUN_00411530 @ 00411530 ==== 
 * signature: undefined __thiscall FUN_00411530(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00411530-00411669
 */

void __thiscall FUN_00411530(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_64 [86];
  undefined4 local_e;
  undefined4 local_a;
  
  sVar1 = *(short *)(param_3 + 1);
  if (-1 < sVar1) {
    if (sVar1 < 2) {
      FUN_00486dd0(param_1,(undefined4 *)(local_64 + 2),param_3,0x5c);
      FUN_004283b0(this,param_1,(int)(local_64 + 2));
      FUN_00428460(this,param_1,(int)(local_64 + 2));
      iVar2 = *(int *)this;
      uVar6 = 0;
      uVar5 = *(undefined4 *)((int)this + 0xfe);
      uVar4 = FUN_00486c30(param_1);
      uVar5 = (**(code **)(*param_1 + 0x110))(uVar4,uVar5,uVar6);
      (**(code **)(iVar2 + 0x138))(uVar5);
      (**(code **)(iVar2 + 0x160))(0,1);
      *(undefined4 *)((int)this + 0x52) = 0;
      return;
    }
    if (sVar1 != 2) {
      return;
    }
    FUN_00486dd0(param_1,(undefined4 *)local_64,param_3,0x5e);
    FUN_004283b0(this,param_1,(int)local_64);
    *(undefined4 *)((int)this + 0xfe) = local_e;
    *(undefined4 *)((int)this + 0xbc) = local_a;
    FUN_00428460(this,param_1,(int)local_64);
    iVar2 = *(int *)this;
    cVar3 = (**(code **)(iVar2 + 0x15c))(0xb);
    if (cVar3 != '\0') {
      uVar6 = 0;
      uVar5 = *(undefined4 *)((int)this + 0xfe);
      *(undefined4 *)((int)this + 0xce) = 0;
      *(undefined4 *)((int)this + 0xd2) = 0xffffffff;
      uVar4 = FUN_00486c30(param_1);
      uVar5 = (**(code **)(*param_1 + 0x110))(uVar4,uVar5,uVar6);
      (**(code **)(iVar2 + 0x138))(uVar5);
      (**(code **)(iVar2 + 0x160))(0,1);
    }
  }
  return;
}


