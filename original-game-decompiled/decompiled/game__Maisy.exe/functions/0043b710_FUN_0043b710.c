
/* ==== FUN_0043b710 @ 0043b710 ==== 
 * signature: undefined4 __cdecl FUN_0043b710(int param_1, int param_2, int param_3, undefined * param_4, undefined * param_5, undefined4 * param_6)
 * body: 0043b710-0043b85c
 */

undefined4 __cdecl
FUN_0043b710(int param_1,int param_2,int param_3,undefined *param_4,undefined *param_5,
            undefined4 *param_6)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  HGLOBAL hMem;
  int iVar5;
  LPVOID pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int local_20;
  int local_18;
  int local_10;
  undefined4 *local_8;
  
  iVar3 = *(int *)(param_3 + 0x18);
  iVar8 = 1;
  sVar1 = *(short *)(iVar3 + 0x1a);
  sVar2 = *(short *)(iVar3 + 0x26);
  uVar10 = *(int *)(param_2 + 0x14) - (int)*(short *)(iVar3 + 0x24);
  iVar4 = *(int *)(param_2 + 0x18);
  hMem = *(HGLOBAL *)(iVar3 + 0x1c);
  if (hMem == (HGLOBAL)0x0) {
    return 0xffffffff;
  }
  pvVar6 = GlobalLock(hMem);
  if (*(int *)(param_1 + 0x10) == 0x20) {
    iVar8 = 4;
  }
  else if (*(int *)(param_1 + 0x10) == 0x10) {
    iVar8 = 2;
  }
  iVar3 = *(int *)(param_2 + 4);
  local_18 = *(int *)(param_2 + 8);
  local_10 = (int)pvVar6 + (iVar4 - sVar2) * (int)sVar1 + ((int)uVar10 >> 3);
  iVar4 = *(int *)(param_2 + 0xc);
  local_8 = (undefined4 *)
            FUN_0043a270(CONCAT22((short)((uint)local_18 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                         *(undefined4 *)(param_2 + 0x1c));
  local_20 = FUN_0043a270(CONCAT22((short)((uint)local_8 >> 0x10),*(undefined2 *)(param_1 + 0x20)),
                          *(undefined4 *)(param_1 + 0x1c));
  iVar5 = *(int *)(param_1 + 0xc);
  if (0 < local_18) {
    do {
      puVar9 = local_8;
      puVar11 = param_6;
      for (uVar7 = (uint)(iVar8 * iVar3) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar7 = iVar8 * iVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      (*(code *)param_4)(local_20,param_6,iVar3,param_3);
      (*(code *)param_5)(param_6,local_8,iVar3,local_10,uVar10 & 7,0);
      local_8 = (undefined4 *)((int)local_8 + iVar4);
      local_20 = local_20 + iVar5;
      local_10 = local_10 + sVar1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  GlobalUnlock(hMem);
  return 1;
}


