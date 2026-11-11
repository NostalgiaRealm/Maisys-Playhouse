
/* ==== FUN_00437e80 @ 00437e80 ==== 
 * signature: undefined __thiscall FUN_00437e80(void * this, undefined4 param_1, int param_2)
 * body: 00437e80-00437fe8
 */

void __thiscall FUN_00437e80(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_18;
  int local_14;
  short local_a;
  short local_8;
  
  local_8 = 1;
  bVar7 = param_2 == 0;
  if (param_2 == 0) {
    local_8 = *(short *)((int)this + 0x7236);
  }
  local_a = 1;
  if (1 < local_8) {
    do {
      if (bVar7) {
        param_2 = (int)this + local_a * 0x124 + 0x26;
      }
      local_14 = 0;
      if (0 < *(int *)(param_2 + 0x112)) {
        local_18 = 0;
        do {
          iVar6 = *(int *)(param_2 + 0x116) + local_18;
          FUN_00436e90((int)this + *(short *)(iVar6 + 0x4c) * 0x124 + 0x26);
          pcVar4 = *(code **)(**(int **)(iVar6 + 0x62) + 0x188);
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(param_1,iVar6 + 0x14);
          }
          FUN_00436e30();
          sVar3 = *(short *)(iVar6 + 0x48);
          sVar2 = *(short *)(iVar6 + 0x4a);
          while (sVar2 != -1) {
            FUN_00436e90(param_2);
            piVar1 = (int *)((int)this + sVar3 * 0x124 + 0x13c);
            pcVar4 = *(code **)(**(int **)(*piVar1 + 0x62 + sVar2 * 0x80) + 0x188);
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(param_1,iVar6 + 0x14);
            }
            FUN_00436e30();
            iVar5 = *piVar1 + sVar2 * 0x80;
            sVar3 = *(short *)(iVar5 + 0x48);
            sVar2 = *(short *)(iVar5 + 0x4a);
          }
          local_14 = local_14 + 1;
          local_18 = local_18 + 0x80;
        } while (local_14 < *(int *)(param_2 + 0x112));
      }
      local_a = local_a + 1;
    } while (local_a < local_8);
  }
  return;
}


