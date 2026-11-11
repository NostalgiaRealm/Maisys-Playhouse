
/* ==== FUN_0043b380 @ 0043b380 ==== 
 * signature: undefined4 __cdecl FUN_0043b380(int param_1, int param_2, int param_3, undefined * param_4, undefined * param_5, undefined * param_6, undefined4 param_7, int param_8)
 * body: 0043b380-0043b563
 */

undefined4 __cdecl
FUN_0043b380(int param_1,int param_2,int param_3,undefined *param_4,undefined *param_5,
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
  int local_40;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  int local_c;
  int local_8;
  
  local_8 = 1;
  iVar15 = *(int *)(param_3 + 0x18);
  local_20 = 0xffffffff;
  sVar1 = *(short *)(iVar15 + 0x1a);
  sVar2 = *(short *)(iVar15 + 0x26);
  uVar14 = *(int *)(param_2 + 0x14) - (int)*(short *)(iVar15 + 0x24);
  hMem = *(HGLOBAL *)(iVar15 + 0x1c);
  iVar15 = *(int *)(param_2 + 0x18);
  if (hMem == (HGLOBAL)0x0) {
    return 0xffffffff;
  }
  pvVar9 = GlobalLock(hMem);
  if (*(int *)(param_1 + 0x10) == 0x20) {
    local_8 = 4;
  }
  else if (*(int *)(param_1 + 0x10) == 0x10) {
    local_8 = 2;
  }
  iVar3 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 8);
  local_18 = (int)pvVar9 + (iVar15 - sVar2) * (int)sVar1 + ((int)uVar14 >> 3);
  iVar5 = *(int *)(param_2 + 0xc);
  local_1c = (undefined4 *)
             FUN_0043a270(CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                          *(undefined4 *)(param_2 + 0x1c));
  iVar10 = FUN_0043a270(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                        *(undefined4 *)(param_1 + 0x1c));
  iVar6 = *(int *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 8);
  SVar11 = local_8 * iVar3;
  iVar15 = iVar8 + -1 >> 1;
  puVar12 = (undefined4 *)FUN_00490210(SVar11);
  if (puVar12 == (undefined4 *)0x0) {
LAB_0043b53e:
    GlobalUnlock(hMem);
    if (puVar12 != (undefined4 *)0x0) {
      FUN_0048e750(puVar12);
    }
    return local_20;
  }
  local_40 = iVar4;
  local_c = iVar10;
  if (param_8 == 0) goto LAB_0043b4e4;
LAB_0043b48f:
  (*(code *)param_4)(local_c,param_8,param_7,uVar7);
  do {
    iVar10 = local_c;
    if (param_8 != 0) {
      puVar16 = local_1c;
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
LAB_0043b4e4:
    while( true ) {
      (*(code *)param_5)(iVar10,puVar12,iVar3,param_3);
      (*(code *)param_6)(puVar12,local_1c,iVar3,local_18,uVar14 & 7,param_7);
      local_40 = local_40 + -1;
      if (local_40 == 0) {
        local_20 = 1;
        goto LAB_0043b53e;
      }
      local_1c = (undefined4 *)((int)local_1c + iVar5);
      local_18 = local_18 + sVar1;
      iVar15 = (iVar15 - iVar8) + 1;
      if (-1 < iVar15) break;
      iVar10 = local_c + iVar6;
      iVar15 = iVar4 + -1 + iVar15;
      local_c = iVar10;
      if (param_8 != 0) goto LAB_0043b48f;
    }
  } while( true );
}


