
/* ==== FUN_004500e0 @ 004500e0 ==== 
 * signature: int __fastcall FUN_004500e0(int param_1)
 * body: 004500e0-0045016d
 */

int __fastcall FUN_004500e0(int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  
  (**(code **)(**(int **)(param_1 + 4) + 0xf0))();
  sVar6 = 0;
  iVar5 = 0;
  sVar1 = *(short *)(*(int *)(param_1 + 0x26) + 0x26);
  iVar2 = FUN_00430190(*(int *)(param_1 + 0x26));
  if (0 < sVar1) {
    do {
      piVar4 = (int *)(iVar2 + sVar6 * 0x10);
      if ((int *)*piVar4 != (int *)0x0) {
        sVar3 = 0;
        if (piVar4[2] != 0) {
          sVar3 = *(short *)(piVar4[2] + 0xc);
        }
        if (sVar3 == 0) {
          iVar5 = iVar5 + 1;
          (**(code **)(*(int *)*piVar4 + 0xf8))();
          *piVar4 = 0;
        }
      }
      sVar6 = sVar6 + 1;
    } while (sVar6 < sVar1);
  }
  FUN_004301f0(*(int *)(param_1 + 0x26));
  FUN_0044ff40(param_1);
  return iVar5;
}


