
/* ==== FUN_11018a20 @ 11018a20 ==== 
 * signature: uint __cdecl FUN_11018a20(undefined4 param_1, int param_2, int param_3)
 * body: 11018a20-11018ab2
 */

uint __cdecl FUN_11018a20(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 local_58 [10];
  short local_30;
  char *local_2c;
  char *local_26;
  
  sVar5 = 0;
  uVar2 = *(short *)(param_2 + 0x28) * 0x58 + 0x28;
  *(uint *)(param_3 + 8) = uVar2;
  if (0 < *(short *)(param_2 + 0x28)) {
    do {
      puVar6 = (undefined4 *)(sVar5 * 0x58 + *(int *)(param_2 + 0x20));
      puVar7 = local_58;
      for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      if (local_30 == 0x1c) {
        uVar4 = 0xffffffff;
        uVar2 = 0;
        pcVar8 = local_26;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + (~uVar4 - 1);
      }
      if (local_30 == 0xd) {
        uVar4 = 0xffffffff;
        uVar2 = 0;
        pcVar8 = local_2c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + (~uVar4 - 1);
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 < *(short *)(param_2 + 0x28));
  }
  *(undefined2 *)(param_3 + 0xc) = 1;
  return uVar2 & 0xffffff00;
}


