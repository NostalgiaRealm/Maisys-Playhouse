
/* ==== FUN_14010280 @ 14010280 ==== 
 * signature: undefined4 __cdecl FUN_14010280(undefined4 param_1, int param_2, short param_3, short * param_4, int * param_5)
 * body: 14010280-140103a7
 */

uint __cdecl FUN_14010280(undefined4 param_1,int param_2,short param_3,short *param_4,int *param_5)

{
  undefined1 *puVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  
  iVar5 = 0;
  param_4[5] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  *param_4 = param_3;
  if (param_5 != (int *)0x0) {
    iVar5 = *param_5;
  }
  uVar4 = param_2;
  if (iVar5 < *(int *)(param_2 + 0x4c)) {
    do {
      puVar1 = (undefined1 *)(*(int *)(param_2 + 0x50) + iVar5);
      sVar2 = CONCAT11(*puVar1,puVar1[1]);
      uVar4 = ((uint)(byte)puVar1[2] << 0x10 | (uint)*(byte *)(*(int *)(param_2 + 0x50) + 4 + iVar5)
              ) << 8 | (uint)(byte)puVar1[3] << 0x10 | (uint)(byte)puVar1[5];
      if ((sVar2 < 0x32) || (0x3e < sVar2)) {
        sVar7 = 0;
        sVar6 = 0;
      }
      else {
        sVar6 = 2;
        sVar7 = CONCAT11(puVar1[uVar4 + 6],puVar1[uVar4 + 7]);
      }
      if (sVar2 == param_3) {
        piVar3 = (int *)(puVar1 + 6);
        *(uint *)(param_4 + 1) = uVar4;
        *(int **)(param_4 + 3) = piVar3;
        if (sVar6 != 0) {
          param_4[5] = sVar7;
          piVar3 = (int *)(puVar1 + uVar4 + 8);
          *(int **)(param_4 + 6) = piVar3;
        }
        if (param_5 != (int *)0x0) {
          *param_5 = (int)sVar7 + (int)sVar6 + uVar4 + iVar5 + 6;
          piVar3 = param_5;
        }
        return CONCAT31((int3)((uint)piVar3 >> 8),1);
      }
      uVar4 = (int)sVar7 + (int)sVar6 + uVar4 + 6;
      iVar5 = iVar5 + uVar4;
    } while (iVar5 < *(int *)(param_2 + 0x4c));
  }
  return uVar4 & 0xffffff00;
}


