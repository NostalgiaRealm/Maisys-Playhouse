
/* ==== FUN_0044e1a0 @ 0044e1a0 ==== 
 * signature: undefined __thiscall FUN_0044e1a0(void * this, int * param_1)
 * body: 0044e1a0-0044e2c1
 */

void __thiscall FUN_0044e1a0(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (0 < *(short *)((int)*(void **)((int)this + 0x60) + 0xc)) {
    uVar4 = FUN_00430570(*(void **)((int)this + 0x60),(int)param_1);
    if ((char)uVar4 != '\0') {
      piVar1 = *(int **)((int)this + 100);
      if (param_1 != piVar1) {
        sVar3 = (**(code **)(*param_1 + 0xd0))();
        if (sVar3 == 2) {
          (**(code **)(*(int *)this + 0xe8))(param_1);
          return;
        }
        if (sVar3 == 1) {
          (**(code **)(**(int **)((int)this + 100) + 0xe0))();
          FUN_00430790(*(void **)((int)this + 0x60),(int)param_1);
          return;
        }
      }
      pcVar2 = *(code **)(*param_1 + 0xd4);
      do {
        sVar3 = (*pcVar2)();
      } while (sVar3 == 0);
      if (sVar3 == 1) {
        (**(code **)(*param_1 + 0xd8))();
        (**(code **)(**(int **)((int)this + 100) + 0xe0))();
      }
      else {
        (**(code **)(*param_1 + 0xdc))();
      }
      FUN_00430790(*(void **)((int)this + 0x60),(int)param_1);
      piVar5 = (int *)FUN_004308b0(*(void **)((int)this + 0x60),1);
      *(int **)((int)this + 100) = piVar5;
      if ((piVar5 != (int *)0x0) && (piVar1 != piVar5)) {
        sVar3 = (**(code **)(*piVar5 + 0xd0))();
        if (sVar3 == 2) {
          (**(code **)(*(int *)this + 0xe8))(*(undefined4 *)((int)this + 100));
          return;
        }
        if (sVar3 == 1) {
          (**(code **)(**(int **)((int)this + 100) + 0xe0))();
          FUN_00430790(*(void **)((int)this + 0x60),*(int *)((int)this + 100));
          *(undefined4 *)((int)this + 100) = 0;
        }
      }
    }
  }
  return;
}


