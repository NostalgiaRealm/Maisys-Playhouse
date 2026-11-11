
/* ==== FUN_0043b570 @ 0043b570 ==== 
 * signature: undefined4 __cdecl FUN_0043b570(int param_1, int param_2, int param_3, undefined * param_4, undefined * param_5, undefined * param_6, undefined4 param_7, undefined4 param_8)
 * body: 0043b570-0043b70e
 */

undefined4 __cdecl
FUN_0043b570(int param_1,int param_2,int param_3,undefined *param_4,undefined *param_5,
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
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int local_28;
  int local_20;
  undefined4 local_1c;
  undefined4 *local_14;
  int local_10;
  int local_8;
  
  local_8 = 1;
  iVar3 = *(int *)(param_3 + 0x18);
  local_1c = 0xffffffff;
  iVar4 = *(int *)(param_2 + 0x18);
  sVar1 = *(short *)(iVar3 + 0x1a);
  uVar12 = *(int *)(param_2 + 0x14) - (int)*(short *)(iVar3 + 0x24);
  sVar2 = *(short *)(iVar3 + 0x26);
  hMem = *(HGLOBAL *)(iVar3 + 0x1c);
  if (hMem == (HGLOBAL)0x0) {
    return 0xffffffff;
  }
  pvVar7 = GlobalLock(hMem);
  if (*(int *)(param_1 + 0x10) == 0x20) {
    local_8 = 4;
  }
  else if (*(int *)(param_1 + 0x10) == 0x10) {
    local_8 = 2;
  }
  iVar3 = *(int *)(param_2 + 4);
  local_20 = *(int *)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0xc);
  local_10 = (int)pvVar7 + (iVar4 - sVar2) * (int)sVar1 + ((int)uVar12 >> 3);
  local_14 = (undefined4 *)
             FUN_0043a270(CONCAT22((short)((uint)local_20 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                          *(undefined4 *)(param_2 + 0x1c));
  local_28 = FUN_0043a270(CONCAT22((short)((uint)local_14 >> 0x10),*(undefined2 *)(param_1 + 0x20)),
                          *(undefined4 *)(param_1 + 0x1c));
  iVar4 = *(int *)(param_1 + 0xc);
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar10 = local_8 * iVar3;
  puVar8 = (undefined4 *)FUN_00490210(uVar10);
  if (puVar8 != (undefined4 *)0x0) {
    if (0 < local_20) {
      do {
        (*(code *)param_4)(local_28,param_8,param_7,uVar6);
        puVar11 = local_14;
        puVar13 = puVar8;
        for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar9 = uVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        (*(code *)param_5)(param_8,puVar8,iVar3,param_3);
        (*(code *)param_6)(puVar8,local_14,iVar3,local_10,uVar12 & 7,param_7);
        local_14 = (undefined4 *)((int)local_14 + iVar5);
        local_28 = local_28 + iVar4;
        local_10 = local_10 + sVar1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    local_1c = 1;
  }
  GlobalUnlock(hMem);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_0048e750(puVar8);
  }
  return local_1c;
}


