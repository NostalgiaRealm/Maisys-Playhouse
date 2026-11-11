
/* ==== FUN_00437c50 @ 00437c50 ==== 
 * signature: undefined __thiscall FUN_00437c50(void * this, int param_1)
 * body: 00437c50-00437d0c
 */

void __thiscall FUN_00437c50(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  short local_a;
  short local_8;
  
  local_8 = 1;
  bVar5 = param_1 == 0;
  if (param_1 == 0) {
    local_8 = *(short *)((int)this + 0x7236);
  }
  local_a = 1;
  if (1 < local_8) {
    do {
      if (bVar5) {
        param_1 = (int)this + local_a * 0x124 + 0x26;
      }
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x112)) {
        iVar3 = 0;
        do {
          iVar1 = *(int *)(param_1 + 0x116);
          FUN_00436e90(param_1);
          pcVar2 = *(code **)(**(int **)(iVar1 + 0x62 + iVar3) + 0x140);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(1);
          }
          iVar3 = iVar3 + 0x80;
          FUN_00436e30();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x112));
      }
      local_a = local_a + 1;
    } while (local_a < local_8);
  }
  return;
}


