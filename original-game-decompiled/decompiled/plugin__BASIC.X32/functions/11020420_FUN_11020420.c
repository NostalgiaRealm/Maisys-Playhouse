
/* ==== FUN_11020420 @ 11020420 ==== 
 * signature: undefined4 __cdecl FUN_11020420(int param_1, int param_2, int param_3, undefined * param_4, undefined * param_5, undefined * param_6, undefined4 param_7, int param_8)
 * body: 11020420-11020622
 */

undefined4 __cdecl
FUN_11020420(int param_1,int param_2,int param_3,undefined *param_4,undefined *param_5,
            undefined *param_6,undefined4 param_7,int param_8)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  HGLOBAL hMem;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  LPVOID pvVar9;
  SIZE_T SVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined2 extraout_var;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  int local_40;
  undefined4 *local_38;
  int local_34;
  int local_2c;
  int local_20;
  undefined4 local_1c;
  int local_4;
  
  local_40 = 1;
  iVar3 = *(int *)(param_3 + 0x18);
  local_1c = 0xffffffff;
  sVar1 = *(short *)(iVar3 + 0x1a);
  iVar4 = *(int *)(param_2 + 0x18);
  uVar13 = *(int *)(param_2 + 0x14) - (int)*(short *)(iVar3 + 0x24);
  sVar2 = *(short *)(iVar3 + 0x26);
  hMem = *(HGLOBAL *)(iVar3 + 0x1c);
  if (hMem != (HGLOBAL)0x0) {
    pvVar9 = GlobalLock(hMem);
    if (*(int *)(param_1 + 0x10) == 0x20) {
      local_40 = 4;
    }
    else if (*(int *)(param_1 + 0x10) == 0x10) {
      local_40 = 2;
    }
    iVar3 = *(int *)(param_2 + 4);
    iVar5 = *(int *)(param_2 + 8);
    iVar6 = *(int *)(param_2 + 0xc);
    local_34 = (int)pvVar9 + (iVar4 - sVar2) * (int)sVar1 + ((int)uVar13 >> 3);
    local_38 = (undefined4 *)
               FUN_1101f460(CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                            *(undefined4 *)(param_2 + 0x1c));
    local_2c = FUN_1101f460(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                            *(undefined4 *)(param_1 + 0x1c));
    iVar4 = *(int *)(param_1 + 0xc);
    uVar7 = *(undefined4 *)(param_1 + 4);
    iVar8 = *(int *)(param_1 + 8);
    local_20 = iVar8 + -1 >> 1;
    SVar10 = local_40 * iVar3;
    puVar11 = (undefined4 *)FUN_11029420(SVar10);
    local_4 = iVar8;
    if (puVar11 != (undefined4 *)0x0) {
      do {
        local_20 = local_20 - iVar5;
        if (local_20 < 0) {
          iVar16 = local_2c;
          if (param_8 != 0) {
            (*(code *)param_4)(local_2c,param_8,param_7,uVar7);
            puVar14 = local_38;
            puVar15 = puVar11;
            for (uVar12 = SVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar15 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            for (uVar12 = SVar10 & 3; iVar16 = param_8, uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
              puVar14 = (undefined4 *)((int)puVar14 + 1);
              puVar15 = (undefined4 *)((int)puVar15 + 1);
            }
          }
          (*(code *)param_5)(iVar16,puVar11,iVar3,param_3);
          (*(code *)param_6)(puVar11,local_38,iVar3,local_34,uVar13 & 7,param_7);
          local_38 = (undefined4 *)((int)local_38 + iVar6);
          local_34 = local_34 + sVar1;
          local_20 = local_20 + iVar8;
        }
        local_2c = local_2c + iVar4;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      local_1c = 1;
    }
    GlobalUnlock(hMem);
    if (puVar11 != (undefined4 *)0x0) {
      FUN_11029180(puVar11);
    }
    return local_1c;
  }
  return 0xffffffff;
}


