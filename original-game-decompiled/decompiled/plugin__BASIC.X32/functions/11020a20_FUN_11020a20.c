
/* ==== FUN_11020a20 @ 11020a20 ==== 
 * signature: undefined4 __cdecl FUN_11020a20(int param_1, int param_2, int param_3, undefined * param_4, undefined * param_5, undefined4 * param_6)
 * body: 11020a20-11020b8d
 */

undefined4 __cdecl
FUN_11020a20(int param_1,int param_2,int param_3,undefined *param_4,undefined *param_5,
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
  undefined2 extraout_var;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_2c;
  undefined4 *local_24;
  int local_20;
  int local_18;
  int local_10;
  
  iVar3 = *(int *)(param_3 + 0x18);
  local_2c = 1;
  sVar1 = *(short *)(iVar3 + 0x1a);
  iVar4 = *(int *)(param_2 + 0x18);
  uVar8 = *(int *)(param_2 + 0x14) - (int)*(short *)(iVar3 + 0x24);
  sVar2 = *(short *)(iVar3 + 0x26);
  hMem = *(HGLOBAL *)(iVar3 + 0x1c);
  if (hMem == (HGLOBAL)0x0) {
    return 0xffffffff;
  }
  pvVar6 = GlobalLock(hMem);
  if (*(int *)(param_1 + 0x10) == 0x20) {
    local_2c = 4;
  }
  else if (*(int *)(param_1 + 0x10) == 0x10) {
    local_2c = 2;
  }
  iVar3 = *(int *)(param_2 + 4);
  local_10 = *(int *)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0xc);
  local_20 = (int)pvVar6 + (iVar4 - sVar2) * (int)sVar1 + ((int)uVar8 >> 3);
  local_24 = (undefined4 *)
             FUN_1101f460(CONCAT22((short)((uint)local_10 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                          *(undefined4 *)(param_2 + 0x1c));
  local_18 = FUN_1101f460(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                          *(undefined4 *)(param_1 + 0x1c));
  iVar4 = *(int *)(param_1 + 0xc);
  if (0 < local_10) {
    do {
      puVar9 = local_24;
      puVar10 = param_6;
      for (uVar7 = (uint)(iVar3 * local_2c) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = iVar3 * local_2c & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      (*(code *)param_4)(local_18,param_6,iVar3,param_3);
      (*(code *)param_5)(param_6,local_24,iVar3,local_20,uVar8 & 7,0);
      local_24 = (undefined4 *)((int)local_24 + iVar5);
      local_18 = local_18 + iVar4;
      local_20 = local_20 + sVar1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  GlobalUnlock(hMem);
  return 1;
}


