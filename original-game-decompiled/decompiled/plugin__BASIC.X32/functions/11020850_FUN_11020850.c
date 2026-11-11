
/* ==== FUN_11020850 @ 11020850 ==== 
 * signature: undefined4 __cdecl FUN_11020850(int param_1, int param_2, int param_3, undefined * param_4, undefined * param_5, undefined * param_6, undefined4 param_7, undefined4 param_8)
 * body: 11020850-11020a17
 */

undefined4 __cdecl
FUN_11020850(int param_1,int param_2,int param_3,undefined *param_4,undefined *param_5,
            undefined *param_6,undefined4 param_7,undefined4 param_8)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  HGLOBAL hMem;
  int iVar5;
  undefined4 uVar6;
  LPVOID pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined2 extraout_var;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int local_34;
  undefined4 *local_2c;
  int local_28;
  int local_20;
  int local_18;
  undefined4 local_14;
  
  local_34 = 1;
  iVar3 = *(int *)(param_3 + 0x18);
  local_14 = 0xffffffff;
  sVar1 = *(short *)(iVar3 + 0x1a);
  iVar4 = *(int *)(param_2 + 0x18);
  uVar10 = *(int *)(param_2 + 0x14) - (int)*(short *)(iVar3 + 0x24);
  sVar2 = *(short *)(iVar3 + 0x26);
  hMem = *(HGLOBAL *)(iVar3 + 0x1c);
  if (hMem == (HGLOBAL)0x0) {
    return 0xffffffff;
  }
  pvVar7 = GlobalLock(hMem);
  if (*(int *)(param_1 + 0x10) == 0x20) {
    local_34 = 4;
  }
  else if (*(int *)(param_1 + 0x10) == 0x10) {
    local_34 = 2;
  }
  iVar3 = *(int *)(param_2 + 4);
  local_18 = *(int *)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0xc);
  local_28 = (int)pvVar7 + (iVar4 - sVar2) * (int)sVar1 + ((int)uVar10 >> 3);
  local_2c = (undefined4 *)
             FUN_1101f460(CONCAT22((short)((uint)local_18 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                          *(undefined4 *)(param_2 + 0x1c));
  local_20 = FUN_1101f460(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                          *(undefined4 *)(param_1 + 0x1c));
  iVar4 = *(int *)(param_1 + 0xc);
  uVar11 = iVar3 * local_34;
  uVar6 = *(undefined4 *)(param_1 + 4);
  puVar8 = (undefined4 *)FUN_11029420(uVar11);
  if (puVar8 != (undefined4 *)0x0) {
    if (0 < local_18) {
      do {
        (*(code *)param_4)(local_20,param_8,param_7,uVar6);
        puVar12 = local_2c;
        puVar13 = puVar8;
        for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar9 = uVar11 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        (*(code *)param_5)(param_8,puVar8,iVar3,param_3);
        (*(code *)param_6)(puVar8,local_2c,iVar3,local_28,uVar10 & 7,param_7);
        local_2c = (undefined4 *)((int)local_2c + iVar5);
        local_20 = local_20 + iVar4;
        local_28 = local_28 + sVar1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    local_14 = 1;
  }
  GlobalUnlock(hMem);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_11029180(puVar8);
  }
  return local_14;
}


