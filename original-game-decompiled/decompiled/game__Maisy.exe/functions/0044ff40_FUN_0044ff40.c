
/* ==== FUN_0044ff40 @ 0044ff40 ==== 
 * signature: undefined __fastcall FUN_0044ff40(int param_1)
 * body: 0044ff40-004500de
 */

void __fastcall FUN_0044ff40(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int *piVar12;
  
  if (DAT_004da378 != 0) {
    for (piVar6 = (int *)FUN_00458a00(DAT_004da378); piVar6 != (int *)0x0;
        piVar6 = (int *)(**(code **)(*piVar6 + 0x1b4))(0)) {
    }
    sVar11 = 0;
    sVar2 = *(short *)(*(int *)(param_1 + 0x26) + 0x26);
    iVar7 = FUN_00430190(*(int *)(param_1 + 0x26));
    sVar4 = sVar2 + -1;
    for (sVar1 = sVar4; -1 < sVar1; sVar1 = sVar1 + -1) {
      piVar6 = (int *)(iVar7 + sVar1 * 0x10);
      if (*piVar6 != 0) {
        while ((sVar5 = -1, sVar11 < sVar2 && (sVar5 = sVar11, *(int *)(sVar11 * 0x10 + iVar7) != 0)
               )) {
          sVar11 = sVar11 + 1;
        }
        if (sVar1 <= sVar11) break;
        if (sVar5 != -1) {
          iVar8 = (int)sVar5;
          piVar12 = (int *)(iVar7 + iVar8 * 0x10);
          *piVar12 = *piVar6;
          piVar12[2] = piVar6[2];
          *piVar6 = 0;
          piVar6[2] = 0;
          (**(code **)(*(int *)*piVar12 + 0x110))(iVar8 + 1);
          (**(code **)(*(int *)*piVar12 + 0x1c))(1);
          if (piVar12[2] != 0) {
            sVar5 = *(short *)(*(int *)(sVar11 * 0x10 + 8 + iVar7) + 0xc);
            sVar9 = 1;
            if (0 < sVar5) {
              do {
                sVar10 = sVar9 + 1;
                piVar6 = (int *)FUN_004308b0((void *)piVar12[2],sVar9);
                iVar3 = *piVar6;
                (**(code **)(iVar3 + 0x110))(iVar8 + 1);
                (**(code **)(iVar3 + 0x1c))(1);
                sVar9 = sVar10;
              } while (sVar10 <= sVar5);
            }
          }
        }
      }
    }
    iVar8 = 0;
    while ((-1 < sVar4 && (*(int *)(sVar4 * 0x10 + iVar7) == 0))) {
      iVar8 = iVar8 + 1;
      sVar4 = sVar4 + -1;
    }
    FUN_004301f0(*(int *)(param_1 + 0x26));
    if (iVar8 != 0) {
      FUN_00430110(*(void **)(param_1 + 0x26),(sVar2 - iVar8) + 1,iVar8);
    }
  }
  return;
}


