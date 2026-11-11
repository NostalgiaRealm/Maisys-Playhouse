
/* ==== FUN_00468cc0 @ 00468cc0 ==== 
 * signature: undefined __cdecl FUN_00468cc0(int param_1, int param_2, short * param_3)
 * body: 00468cc0-00468d71
 */

void __cdecl FUN_00468cc0(int param_1,int param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  if (*(int *)(param_3 + 8) == 0) {
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
  puVar7 = *(uint **)(param_1 + 0x1c);
  puVar4 = *(uint **)(param_2 + 0x1c);
  iVar9 = (int)uVar5 >> 1;
  sVar1 = *param_3;
  if (0 < iVar9) {
    do {
      uVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      if (uVar3 != CONCAT22(sVar1,sVar1)) {
        uVar2 = CONCAT22(sVar1,sVar1) ^ uVar3;
        if ((uVar2 & 0xffff) == 0) {
          *(short *)((int)puVar4 + 2) = (short)(uVar3 >> 0x10);
        }
        else if ((uVar2 & 0xffff0000) == 0) {
          *(short *)puVar4 = (short)uVar3;
        }
        else {
          *puVar4 = uVar3;
        }
      }
      puVar4 = puVar4 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (((uVar5 & 1) != 0) && (sVar1 != (short)*puVar7)) {
    *(short *)puVar4 = (short)*puVar7;
  }
  return;
}


