
/* ==== FUN_004625d0 @ 004625d0 ==== 
 * signature: undefined __thiscall FUN_004625d0(void * this, int param_1, undefined4 param_2, short * param_3, undefined4 param_4, short * param_5, short param_6, undefined1 param_7)
 * body: 004625d0-004627e7
 */

void __thiscall
FUN_004625d0(void *this,int param_1,undefined4 param_2,short *param_3,undefined4 param_4,
            short *param_5,short param_6,undefined1 param_7)

{
  short sVar1;
  char cVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  int iVar5;
  short sVar6;
  short **ppsVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_4c4 [267];
  undefined4 local_98;
  short *local_90 [4];
  short *local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_4c;
  undefined4 local_48;
  short *local_44;
  undefined4 local_40;
  short *local_3c;
  short local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 *local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  local_48 = param_2;
  local_44 = param_3;
  local_38 = param_6;
  local_40 = param_4;
  local_3c = param_5;
  local_35 = 0;
  local_36 = param_7;
  local_34 = 0;
  local_2e = *(undefined4 *)(param_1 + 10);
  puVar8 = &local_4c;
  local_2a = 0;
  local_32 = 0;
  puVar9 = local_4c4;
  iVar3 = FUN_0040c620(this);
  this_00 = (void *)FUN_004084c0(iVar3);
  FUN_0047a8c0(this_00,puVar8,puVar9);
  local_26 = local_98;
  iVar3 = FUN_0040c620(this);
  iVar3 = FUN_004084c0(iVar3);
  local_22 = *(undefined4 *)(iVar3 + 0x8a0);
  local_1e = local_4c4;
  iVar3 = FUN_0040c620(this);
  iVar3 = FUN_004084c0(iVar3);
  local_1a = FUN_0047bd30(iVar3);
  local_16 = 0;
  if (*(int **)((int)this + 0x13a) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x13a) + 600))(0x70,&local_48,0x3a);
  }
  if (*(int *)((int)this + 0x142) != 0) {
    sVar1 = *(short *)(*(int *)((int)this + 0x142) + 0xc);
    sVar6 = 1;
    if (0 < sVar1) {
      do {
        piVar4 = (int *)FUN_004308b0(*(void **)((int)this + 0x142),sVar6);
        if (*(int **)((int)this + 0x13a) != piVar4) {
          (**(code **)(*piVar4 + 600))(0x70,&local_48,0x3a);
        }
        sVar6 = sVar6 + 1;
      } while (sVar6 <= sVar1);
    }
  }
  iVar3 = *(int *)this;
  cVar2 = (**(code **)(iVar3 + 0x6c))();
  if (cVar2 != '\0') {
    ppsVar7 = local_90;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppsVar7 = (short *)0x0;
      ppsVar7 = ppsVar7 + 1;
    }
    *(undefined2 *)ppsVar7 = 0;
    local_90[2] = (short *)param_2;
    local_c = *param_5;
    if (*param_5 <= *param_3) {
      local_c = *param_3;
    }
    local_8 = param_3[2];
    if (param_5[2] <= param_3[2]) {
      local_8 = param_5[2];
    }
    local_a = param_5[1];
    if (param_5[1] <= param_3[1]) {
      local_a = param_3[1];
    }
    local_6 = param_5[3];
    if (param_3[3] <= param_5[3]) {
      local_6 = param_3[3];
    }
    local_90[3] = &local_c;
    local_80 = param_3;
    local_7c = (int)this + 0x120;
    local_90[1] = *(short **)((int)this + 0xc2);
    local_78 = 0;
    local_90[0] = (short *)0x0;
    if (DAT_004e1c4a < 0) {
      local_90[0] = (short *)0x2;
    }
    if (param_6 == 1) {
      (**(code **)(iVar3 + 0x44))(2,FUN_004613c0);
      return;
    }
    (**(code **)(iVar3 + 0x44))(3,FUN_00461410,local_90);
  }
  return;
}


