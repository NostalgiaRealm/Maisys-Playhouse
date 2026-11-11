
/* ==== FUN_00436480 @ 00436480 ==== 
 * signature: undefined __thiscall FUN_00436480(void * this, int param_1, int param_2)
 * body: 00436480-00436594
 */

void __thiscall FUN_00436480(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  short local_8;
  
  sVar3 = *(short *)(param_2 + 0x50);
  iVar5 = FUN_00434920(DAT_004d99ac,sVar3 * 4 + 4,0);
  *(int *)(param_2 + 0x62) = iVar5;
  if (iVar5 == 0) {
    FUN_004a3538();
  }
  sVar7 = 0;
  if (-1 < sVar3) {
    do {
      iVar5 = (int)sVar7;
      sVar7 = sVar7 + 1;
      *(undefined4 *)(*(int *)(param_2 + 0x62) + iVar5 * 4) =
           *(undefined4 *)(param_1 + 0x24 + iVar5 * 4);
    } while (sVar7 <= sVar3);
  }
  if (-1 < *(short *)(param_2 + 0x4a)) {
    local_8 = 0;
    iVar5 = *(int *)(param_2 + 0x62);
    iVar4 = *(int *)(*(int *)((int)this + *(short *)(param_2 + 0x48) * 0x124 + 0x13c) + 0x62 +
                    *(short *)(param_2 + 0x4a) * 0x80);
    if (0 < sVar3) {
      do {
        iVar1 = local_8 * 4;
        piVar6 = (int *)(iVar5 + iVar1);
        if (*piVar6 == 0) {
          return;
        }
        sVar7 = 0;
        do {
          iVar2 = sVar7 * 8;
          if (*(int *)(*(int *)(param_1 + 0x24 + iVar1) + iVar2) == 0) {
            *(undefined4 *)(*piVar6 + iVar2) = *(undefined4 *)(*(int *)(iVar1 + iVar4) + iVar2);
            *(undefined4 *)(*piVar6 + 4 + iVar2) =
                 *(undefined4 *)(*(int *)(iVar1 + iVar4) + 4 + iVar2);
          }
          sVar7 = sVar7 + 1;
        } while (sVar7 < 0x80);
        local_8 = local_8 + 1;
      } while (local_8 < sVar3);
    }
  }
  return;
}


