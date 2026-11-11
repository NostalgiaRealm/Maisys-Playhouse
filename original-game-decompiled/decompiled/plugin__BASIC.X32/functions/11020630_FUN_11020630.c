
/* ==== FUN_11020630 @ 11020630 ==== 
 * signature: undefined4 __cdecl FUN_11020630(int param_1, int param_2, int param_3, undefined * param_4, undefined * param_5, undefined * param_6, undefined4 param_7, int param_8)
 * body: 11020630-1102084d
 */

undefined4 __cdecl
FUN_11020630(int param_1,int param_2,int param_3,undefined *param_4,undefined *param_5,
            undefined *param_6,undefined4 param_7,int param_8)

{
  short sVar1;
  short sVar2;
  HGLOBAL hMem;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  LPVOID pvVar9;
  int iVar10;
  SIZE_T SVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined2 extraout_var;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int local_3c;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  undefined4 local_14;
  int local_c;
  
  local_3c = 1;
  iVar15 = *(int *)(param_3 + 0x18);
  local_14 = 0xffffffff;
  sVar1 = *(short *)(iVar15 + 0x1a);
  iVar10 = *(int *)(param_2 + 0x18);
  uVar14 = *(int *)(param_2 + 0x14) - (int)*(short *)(iVar15 + 0x24);
  sVar2 = *(short *)(iVar15 + 0x26);
  hMem = *(HGLOBAL *)(iVar15 + 0x1c);
  if (hMem == (HGLOBAL)0x0) {
    return 0xffffffff;
  }
  pvVar9 = GlobalLock(hMem);
  if (*(int *)(param_1 + 0x10) == 0x20) {
    local_3c = 4;
  }
  else if (*(int *)(param_1 + 0x10) == 0x10) {
    local_3c = 2;
  }
  iVar3 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 8);
  local_2c = (int)pvVar9 + (int)sVar1 * (iVar10 - sVar2) + ((int)uVar14 >> 3);
  iVar5 = *(int *)(param_2 + 0xc);
  local_30 = (undefined4 *)
             FUN_1101f460(CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                          *(undefined4 *)(param_2 + 0x1c));
  iVar10 = FUN_1101f460(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                        *(undefined4 *)(param_1 + 0x1c));
  iVar6 = *(int *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 8);
  SVar11 = local_3c * iVar3;
  iVar15 = iVar8 + -1 >> 1;
  puVar12 = (undefined4 *)FUN_11029420(SVar11);
  if (puVar12 == (undefined4 *)0x0) {
LAB_11020823:
    GlobalUnlock(hMem);
    if (puVar12 != (undefined4 *)0x0) {
      FUN_11029180(puVar12);
    }
    return local_14;
  }
  local_34 = iVar10;
  local_c = iVar4;
  if (param_8 == 0) goto LAB_110207b2;
LAB_11020757:
  (*(code *)param_4)(local_34,param_8,param_7,uVar7);
  do {
    iVar10 = local_34;
    if (param_8 != 0) {
      puVar16 = local_30;
      puVar17 = puVar12;
      for (uVar13 = SVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
      }
      for (uVar13 = SVar11 & 3; iVar10 = param_8, uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar17 = *(undefined1 *)puVar16;
        puVar16 = (undefined4 *)((int)puVar16 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
    }
LAB_110207b2:
    while( true ) {
      (*(code *)param_5)(iVar10,puVar12,iVar3,param_3);
      (*(code *)param_6)(puVar12,local_30,iVar3,local_2c,uVar14 & 7,param_7);
      local_c = local_c + -1;
      if (local_c == 0) {
        local_14 = 1;
        goto LAB_11020823;
      }
      local_30 = (undefined4 *)((int)local_30 + iVar5);
      local_2c = local_2c + sVar1;
      iVar15 = (iVar15 - iVar8) + 1;
      if (-1 < iVar15) break;
      iVar10 = local_34 + iVar6;
      iVar15 = iVar4 + -1 + iVar15;
      local_34 = iVar10;
      if (param_8 != 0) goto LAB_11020757;
    }
  } while( true );
}


