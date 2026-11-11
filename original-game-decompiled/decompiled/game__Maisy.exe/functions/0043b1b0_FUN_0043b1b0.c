
/* ==== FUN_0043b1b0 @ 0043b1b0 ==== 
 * signature: undefined4 __cdecl FUN_0043b1b0(int param_1, int param_2, int param_3, undefined * param_4, undefined * param_5, undefined * param_6, undefined4 param_7, int param_8)
 * body: 0043b1b0-0043b37c
 */

undefined4 __cdecl
FUN_0043b1b0(int param_1,int param_2,int param_3,undefined *param_4,undefined *param_5,
            undefined *param_6,undefined4 param_7,int param_8)

{
  short sVar1;
  short sVar2;
  int iVar3;
  HGLOBAL hMem;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  LPVOID pvVar9;
  SIZE_T SVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined2 extraout_var;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int local_30;
  int local_28;
  undefined4 local_24;
  undefined4 *local_20;
  int local_1c;
  int local_14;
  int local_c;
  
  local_c = 1;
  iVar3 = *(int *)(param_3 + 0x18);
  local_24 = 0xffffffff;
  sVar1 = *(short *)(iVar3 + 0x1a);
  sVar2 = *(short *)(iVar3 + 0x26);
  uVar14 = *(int *)(param_2 + 0x14) - (int)*(short *)(iVar3 + 0x24);
  hMem = *(HGLOBAL *)(iVar3 + 0x1c);
  iVar3 = *(int *)(param_2 + 0x18);
  if (hMem != (HGLOBAL)0x0) {
    pvVar9 = GlobalLock(hMem);
    if (*(int *)(param_1 + 0x10) == 0x20) {
      local_c = 4;
    }
    else if (*(int *)(param_1 + 0x10) == 0x10) {
      local_c = 2;
    }
    iVar4 = *(int *)(param_2 + 4);
    iVar5 = *(int *)(param_2 + 8);
    local_1c = (int)pvVar9 + (iVar3 - sVar2) * (int)sVar1 + ((int)uVar14 >> 3);
    iVar3 = *(int *)(param_2 + 0xc);
    local_20 = (undefined4 *)
               FUN_0043a270(CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                            *(undefined4 *)(param_2 + 0x1c));
    local_14 = FUN_0043a270(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                            *(undefined4 *)(param_1 + 0x1c));
    iVar6 = *(int *)(param_1 + 0xc);
    uVar7 = *(undefined4 *)(param_1 + 4);
    iVar8 = *(int *)(param_1 + 8);
    local_28 = iVar8 + -1 >> 1;
    SVar10 = iVar4 * local_c;
    puVar11 = (undefined4 *)FUN_00490210(SVar10);
    local_30 = iVar8;
    if (puVar11 != (undefined4 *)0x0) {
      do {
        local_28 = local_28 - iVar5;
        if (local_28 < 0) {
          iVar16 = local_14;
          if (param_8 != 0) {
            (*(code *)param_4)(local_14,param_8,param_7,uVar7);
            puVar13 = local_20;
            puVar15 = puVar11;
            for (uVar12 = SVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            }
            for (uVar12 = SVar10 & 3; iVar16 = param_8, uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
              puVar15 = (undefined4 *)((int)puVar15 + 1);
            }
          }
          (*(code *)param_5)(iVar16,puVar11,iVar4,param_3);
          (*(code *)param_6)(puVar11,local_20,iVar4,local_1c,uVar14 & 7,param_7);
          local_20 = (undefined4 *)((int)local_20 + iVar3);
          local_1c = local_1c + sVar1;
          local_28 = local_28 + iVar8;
        }
        local_14 = local_14 + iVar6;
        local_30 = local_30 + -1;
      } while (local_30 != 0);
      local_24 = 1;
    }
    GlobalUnlock(hMem);
    if (puVar11 != (undefined4 *)0x0) {
      FUN_0048e750(puVar11);
    }
    return local_24;
  }
  return 0xffffffff;
}


