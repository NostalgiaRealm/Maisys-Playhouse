
/* ==== FUN_00417460 @ 00417460 ==== 
 * signature: undefined __cdecl FUN_00417460(undefined2 * param_1, undefined2 * param_2)
 * body: 00417460-004175af
 */

void __cdecl FUN_00417460(undefined2 *param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  SIZE_T SVar3;
  HLOCAL hMem;
  uint uVar4;
  short *psVar5;
  int iVar6;
  undefined4 *puVar7;
  short local_68 [24];
  short local_38 [22];
  LPVOID local_c;
  short local_6;
  
  if (*(int *)(param_1 + 1) != 0) {
    FUN_00430370(*(void **)(param_1 + 4),1,local_38);
  }
  *param_2 = 0x1fd;
  *(undefined4 *)(param_2 + 3) = 0;
  uVar1 = FUN_00417690(param_1[3],(*(int *)(param_1 + 1) == 0) - 1 & (uint)local_38);
  param_2[7] = (short)uVar1;
  uVar2 = FUN_004175b0((short)uVar1);
  *(undefined4 *)(param_2 + 5) = uVar2;
  SVar3 = *(int *)(param_1 + 1) * *(int *)(param_2 + 5);
  *(SIZE_T *)(param_2 + 1) = SVar3;
  if (SVar3 == 0) {
    SVar3 = 4;
  }
  hMem = FUN_0043f6f0(SVar3);
  *(HLOCAL *)(param_2 + 8) = hMem;
  local_c = LocalLock(hMem);
  local_6 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    do {
      iVar6 = (int)local_6;
      FUN_00430370(*(void **)(param_1 + 4),iVar6 + 1,local_38);
      FUN_004166b0(local_38,local_68);
      if (param_2[7] == local_68[0]) {
        uVar1 = *(uint *)(param_2 + 5);
        psVar5 = local_68;
        puVar7 = (undefined4 *)((int)local_c + uVar1 * iVar6);
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *(undefined4 *)psVar5;
          psVar5 = psVar5 + 2;
          puVar7 = puVar7 + 1;
        }
        for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(char *)puVar7 = (char)*psVar5;
          psVar5 = (short *)((int)psVar5 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + 1;
      }
      local_6 = local_6 + 1;
    } while ((int)local_6 < *(int *)(param_1 + 1));
  }
  LocalUnlock(*(HLOCAL *)(param_2 + 8));
  SVar3 = *(int *)(param_2 + 3) * *(int *)(param_2 + 5);
  *(SIZE_T *)(param_2 + 1) = SVar3;
  if (SVar3 == 0) {
    SVar3 = 4;
  }
  FUN_0043f730(*(HLOCAL *)(param_2 + 8),SVar3);
  if (*(int *)(param_1 + 6) == -1) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  return;
}


