
/* ==== FUN_00476010 @ 00476010 ==== 
 * signature: undefined4 __cdecl FUN_00476010(int param_1)
 * body: 00476010-004760c5
 */

undefined4 __cdecl FUN_00476010(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  void *this;
  int *piVar6;
  
  piVar1 = *(int **)(param_1 + 0x1a);
  piVar2 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  iVar4 = *piVar1;
  if (piVar2 != (int *)0x0) {
    if (iVar4 == 0) {
      pcVar3 = *(code **)(*piVar2 + 0x10);
      iVar4 = (*pcVar3)();
      if (*(int *)(iVar4 + 0x82) != 0) {
        iVar4 = (*pcVar3)();
        uVar5 = FUN_00403510(*(void **)(iVar4 + 0x82),(int *)0x0,
                             *(int *)(*(int *)(param_1 + 0x16) + 8));
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
    }
    else {
      this = (void *)FUN_00466a70(piVar2[1]);
      piVar6 = FUN_0044e500(this,iVar4);
      iVar4 = 0;
      if (piVar6 != (int *)0x0) {
        pcVar3 = *(code **)(*piVar2 + 0x10);
        iVar4 = (*pcVar3)();
        if ((*(int *)(iVar4 + 0x82) != 0) && ((*(byte *)(piVar6 + 8) & 0x80) != 0)) {
          iVar4 = (*pcVar3)();
          iVar4 = FUN_004032d0(*(void **)(iVar4 + 0x82),piVar6,
                               *(int *)(*(int *)(param_1 + 0x16) + 8),
                               (byte)*(undefined4 *)((int)piVar1 + 10) & 1);
        }
      }
    }
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}


