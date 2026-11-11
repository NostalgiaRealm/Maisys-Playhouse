
/* ==== FUN_1100d1d0 @ 1100d1d0 ==== 
 * signature: undefined __cdecl FUN_1100d1d0(int param_1, int param_2, int * param_3)
 * body: 1100d1d0-1100d248
 */

void __cdecl FUN_1100d1d0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  if (param_3[4] == 0) {
    uVar4 = (int)*(uint *)(param_1 + 0xc) >> 0x1f;
    uVar4 = (*(uint *)(param_1 + 0xc) ^ uVar4) - uVar4;
    puVar6 = *(undefined4 **)(param_1 + 0x1c);
    puVar8 = *(undefined4 **)(param_2 + 0x1c);
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    return;
  }
  uVar4 = *(uint *)(param_1 + 4);
  piVar7 = *(int **)(param_1 + 0x1c);
  iVar1 = *param_3;
  piVar3 = *(int **)(param_2 + 0x1c);
  iVar5 = (int)uVar4 >> 1;
  if (0 < iVar5) {
    do {
      if (*piVar7 != iVar1) {
        *piVar3 = *piVar7;
      }
      if (piVar7[1] != iVar1) {
        piVar3[1] = piVar7[1];
      }
      piVar7 = piVar7 + 2;
      piVar3 = piVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (((uVar4 & 1) != 0) && (*piVar7 != iVar1)) {
    *piVar3 = *piVar7;
  }
  return;
}


