
/* ==== FUN_00405d20 @ 00405d20 ==== 
 * signature: undefined __thiscall FUN_00405d20(void * this, int * param_1)
 * body: 00405d20-00405e4b
 */

void __thiscall FUN_00405d20(void *this,int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  undefined4 local_30 [4];
  int *local_20 [2];
  undefined4 local_16;
  short local_c;
  int local_8;
  
  cVar2 = FUN_00469c30(param_1);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(*(int *)((int)this + 0x7e) + 0x26);
    local_c = (short)iVar1;
    if (iVar1 != 0) {
      sVar5 = 0;
      local_8 = FUN_00430190(*(int *)((int)this + 0x7e));
      if (0 < local_c) {
        do {
          piVar4 = (int *)(local_8 + sVar5 * 8);
          if (((int *)*piVar4 != (int *)0x0) && (piVar4[1] != 0)) {
            piVar3 = (int *)(**(code **)(*(int *)*piVar4 + 0x1c8))();
            if (piVar3 != param_1) {
              piVar3 = (int *)(**(code **)(*(int *)piVar4[1] + 0x1c8))();
              if (piVar3 != param_1) goto LAB_00405d92;
            }
            *piVar4 = 0;
          }
LAB_00405d92:
          sVar5 = sVar5 + 1;
        } while (sVar5 < local_c);
      }
      FUN_004301f0(*(int *)((int)this + 0x7e));
    }
    sVar5 = *(short *)(*(int *)((int)this + 0x76) + 0x26);
    if (0 < sVar5) {
      do {
        FUN_00430370(*(void **)((int)this + 0x76),(int)sVar5,local_20);
        if (local_20[0] != (int *)0x0) {
          piVar4 = (int *)(**(code **)(*local_20[0] + 0x1c8))();
          if (piVar4 == param_1) {
            local_20[0] = (int *)0x0;
            local_16 = 0;
            FUN_0042ff10(*(void **)((int)this + 0x76),(int)sVar5,local_20);
          }
        }
        sVar5 = sVar5 + -1;
      } while (sVar5 != 0);
    }
    local_30[0] = 0;
    sVar5 = *(short *)(*(int *)((int)this + 0x7a) + 0x26);
    if (0 < sVar5) {
      do {
        piVar4 = (int *)FUN_00430d20(*(void **)((int)this + 0x7a),(int)sVar5);
        if (piVar4 != (int *)0x0) {
          piVar4 = (int *)(**(code **)(*piVar4 + 0x1c8))();
          if (piVar4 == param_1) {
            FUN_0042ff10(*(void **)((int)this + 0x7a),(int)sVar5,local_30);
          }
        }
        sVar5 = sVar5 + -1;
      } while (sVar5 != 0);
    }
    (**(code **)(*param_1 + 0x1f8))(1);
  }
  return;
}


