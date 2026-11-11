
/* ==== FUN_00405f30 @ 00405f30 ==== 
 * signature: undefined __fastcall FUN_00405f30(int param_1)
 * body: 00405f30-00405f80
 */

void __fastcall FUN_00405f30(int param_1)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x72) + 0x26);
  iVar4 = FUN_00430190(*(int *)(param_1 + 0x72));
  while (sVar1 = sVar1 + -1, -1 < sVar1) {
    piVar2 = *(int **)(iVar4 + 4 + sVar1 * 8);
    piVar3 = *(int **)(iVar4 + sVar1 * 8);
    if (piVar2 == piVar3) {
      (**(code **)(*piVar2 + 0x2d8))();
    }
    else if ((*(byte *)((int)piVar3 + 0x1e) & 2) != 0) {
      (**(code **)(*piVar3 + 0x2d8))();
    }
  }
  FUN_004301f0(*(int *)(param_1 + 0x72));
  return;
}


