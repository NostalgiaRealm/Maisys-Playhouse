
/* ==== FUN_00474850 @ 00474850 ==== 
 * signature: undefined1 __thiscall FUN_00474850(void * this, int param_1, int param_2, short * param_3, int * param_4)
 * body: 00474850-004749be
 */

undefined1 __thiscall FUN_00474850(void *this,int param_1,int param_2,short *param_3,int *param_4)

{
  short sVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  bVar2 = true;
  if (param_1 < 0x322) {
    if (param_1 == 0x321) {
      (**(code **)(*(int *)this + 0x330))();
    }
    else if (param_1 == 0xc9) {
      sVar1 = *(short *)((int)this + 0x46);
      if ((((sVar1 != 4) && (sVar1 != 7)) && (sVar1 != 0)) &&
         ((sVar1 != 1 && (*(void **)((int)this + 0x52) != (void *)0x0)))) {
        uVar4 = FUN_00427e20(*(void **)((int)this + 0x52),
                             *(int **)(*(int *)((int)this + 0x5a) + 0x48));
        if (uVar4 != 0) {
          (**(code **)(*(int *)this + 0x2f0))(0,1);
        }
      }
      (**(code **)(**(int **)((int)this + 0x5a) + 0x228))();
      if (*(int *)((int)this + 0x52) != 0) {
        if (*param_3 == 0x1d) {
          (**(code **)(**(int **)((int)this + 0x5a) + 0x250))(*(undefined4 *)(param_3 + 3));
        }
        else {
          (**(code **)(**(int **)((int)this + 0x5a) + 0x250))(0);
        }
        FUN_00427cc0(*(void **)((int)this + 0x52),0);
      }
      *(undefined2 *)((int)this + 0x46) = 5;
      bVar2 = false;
    }
    else {
      bVar2 = false;
    }
  }
  else if (param_1 == 0x322) {
    (**(code **)(*(int *)this + 0x334))();
  }
  else if (param_1 == 0x323) {
    if ((*(byte *)(*(int *)((int)this + 0x5a) + 0x29) & 1) == 0) {
      (**(code **)(*(int *)this + 0x330))();
    }
    else {
      (**(code **)(*(int *)this + 0x334))();
    }
  }
  else if (param_1 == 0x6a8) {
    if (*(int *)((int)this + 0x52) != 0) {
      if (*param_3 == 0x1d) {
        uVar5 = *(undefined4 *)(param_3 + 3);
      }
      else {
        uVar5 = 0;
      }
      (**(code **)(**(int **)((int)this + 0x5a) + 0x250))(uVar5);
      FUN_00427cc0(*(void **)((int)this + 0x52),0);
    }
    FUN_00468950(*(int **)((int)this + 0x5a));
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    uVar3 = FUN_0046bad0(this,param_1,param_2,param_3,param_4);
    return uVar3;
  }
  return 1;
}


