
/* ==== FUN_0046ac10 @ 0046ac10 ==== 
 * signature: undefined __thiscall FUN_0046ac10(void * this, int * param_1, int param_2)
 * body: 0046ac10-0046ad07
 */

void __thiscall FUN_0046ac10(void *this,int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (param_2 < 1) {
    param_2 = 1;
  }
  if ((*(uint *)((int)param_1 + 0x1e) & 0x400) != 0) {
    if (param_2 == 1) {
      FUN_0043de50(param_1,this,'\0',0);
      return;
    }
    iVar2 = (**(code **)(*param_1 + 0x1a0))();
    if (param_2 < iVar2) {
      param_2 = param_2 + -1;
    }
    pcVar1 = *(code **)(*(int *)this + 0x194);
    piVar3 = (int *)(*pcVar1)(param_2);
    if (piVar3 == (int *)0x0) {
      uVar4 = (**(code **)(*(int *)this + 0x1c0))();
      piVar3 = (int *)(*pcVar1)(uVar4);
    }
    FUN_0043dc60(param_1,piVar3,'\0');
    return;
  }
  if ((*(uint *)((int)param_1 + 0x1e) & 2) != 0) {
    if (param_2 == 1) {
      FUN_0043d880(param_1,this,'\0',0,(short *)0x0,'\x01');
      return;
    }
    iVar2 = (**(code **)(*param_1 + 0x1a0))();
    if (param_2 < iVar2) {
      param_2 = param_2 + -1;
    }
    pcVar1 = *(code **)(*(int *)this + 0x198);
    piVar3 = (int *)(*pcVar1)(param_2);
    if (piVar3 == (int *)0x0) {
      uVar4 = (**(code **)(*(int *)this + 0x1c4))();
      piVar3 = (int *)(*pcVar1)(uVar4);
    }
    FUN_0043da70(param_1,piVar3,'\0',(short *)0x0,'\x01');
  }
  return;
}


