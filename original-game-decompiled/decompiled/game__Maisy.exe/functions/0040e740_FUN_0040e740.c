
/* ==== FUN_0040e740 @ 0040e740 ==== 
 * signature: undefined __cdecl FUN_0040e740(int param_1, int param_2, int * param_3)
 * body: 0040e740-0040e7ba
 */

void __cdecl FUN_0040e740(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  if (param_3[4] == 0) {
    uVar5 = (int)*(uint *)(param_1 + 0xc) >> 0x1f;
    uVar5 = (*(uint *)(param_1 + 0xc) ^ uVar5) - uVar5;
    puVar6 = *(undefined4 **)(param_1 + 0x1c);
    puVar8 = *(undefined4 **)(param_2 + 0x1c);
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    return;
  }
  uVar5 = *(uint *)(param_1 + 4);
  piVar7 = *(int **)(param_1 + 0x1c);
  iVar1 = *param_3;
  piVar4 = *(int **)(param_2 + 0x1c);
  iVar2 = (int)uVar5 >> 1;
  if (0 < iVar2) {
    do {
      if (*piVar7 != iVar1) {
        *piVar4 = *piVar7;
      }
      if (piVar7[1] != iVar1) {
        piVar4[1] = piVar7[1];
      }
      piVar7 = piVar7 + 2;
      piVar4 = piVar4 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (((uVar5 & 1) != 0) && (iVar1 != *piVar7)) {
    *piVar4 = *piVar7;
  }
  return;
}


