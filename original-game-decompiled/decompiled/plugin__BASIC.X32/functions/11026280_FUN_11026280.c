
/* ==== FUN_11026280 @ 11026280 ==== 
 * signature: undefined __cdecl FUN_11026280(int param_1, int param_2, short * param_3)
 * body: 11026280-11026326
 */

void __cdecl FUN_11026280(int param_1,int param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  
  if (*(int *)(param_3 + 8) == 0) {
    uVar5 = (int)*(uint *)(param_1 + 0xc) >> 0x1f;
    uVar5 = (*(uint *)(param_1 + 0xc) ^ uVar5) - uVar5;
    puVar7 = *(undefined4 **)(param_1 + 0x1c);
    puVar9 = *(undefined4 **)(param_2 + 0x1c);
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    return;
  }
  uVar5 = *(uint *)(param_1 + 4);
  puVar6 = *(uint **)(param_1 + 0x1c);
  sVar1 = *param_3;
  puVar8 = *(uint **)(param_2 + 0x1c);
  iVar4 = (int)uVar5 >> 1;
  if (0 < iVar4) {
    do {
      uVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      if (uVar3 != CONCAT22(sVar1,sVar1)) {
        uVar2 = uVar3 ^ CONCAT22(sVar1,sVar1);
        if ((uVar2 & 0xffff) == 0) {
          *(short *)((int)puVar8 + 2) = (short)(uVar3 >> 0x10);
        }
        else if ((uVar2 & 0xffff0000) == 0) {
          *(short *)puVar8 = (short)uVar3;
        }
        else {
          *puVar8 = uVar3;
        }
      }
      puVar8 = puVar8 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (((uVar5 & 1) != 0) && (sVar1 != (short)*puVar6)) {
    *(short *)puVar8 = (short)*puVar6;
  }
  return;
}


