
/* ==== FUN_1100b740 @ 1100b740 ==== 
 * signature: undefined __cdecl FUN_1100b740(undefined4 param_1, int param_2, int param_3)
 * body: 1100b740-1100b96d
 */

void __cdecl FUN_1100b740(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  LPVOID pvVar5;
  HGLOBAL pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int local_14;
  
  psVar2 = *(short **)(param_3 + 0x1c);
  uVar1 = *(ushort *)(*(int *)(param_3 + 0x2e) + 0xe);
  uVar10 = (uint)uVar1;
  iVar9 = (int)psVar2[2] - (int)*psVar2;
  local_14 = (int)psVar2[3] - (int)psVar2[1];
  pvVar5 = *(LPVOID *)(param_2 + 0x48);
  if ((pvVar5 != (LPVOID)0x0) &&
     (((*(int *)((int)pvVar5 + 4) < iVar9 || (*(int *)((int)pvVar5 + 8) < local_14)) ||
      (*(ushort *)((int)pvVar5 + 0xe) != uVar10)))) {
    FUN_11029180(pvVar5);
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(HGLOBAL *)(param_2 + 0x4c) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(param_2 + 0x4c));
      *(undefined4 *)(param_2 + 0x4c) = 0;
      *(undefined4 *)(param_2 + 0x50) = 0;
    }
  }
  if (*(int *)(param_2 + 0x48) == 0) {
    pvVar5 = FUN_110291a0(0x434,1);
    *(LPVOID *)(param_2 + 0x48) = pvVar5;
    *(int *)((int)pvVar5 + 4) = iVar9;
    *(int *)(*(int *)(param_2 + 0x48) + 8) = local_14;
    *(undefined2 *)(*(int *)(param_2 + 0x48) + 0xc) = 1;
    *(ushort *)(*(int *)(param_2 + 0x48) + 0xe) = uVar1;
    *(uint *)(*(int *)(param_2 + 0x48) + 0x20) = -(uint)(uVar10 == 8) & 0x100;
    if (uVar10 == 8) {
      puVar11 = (undefined4 *)(*(int *)(param_3 + 0x2e) + 0x28);
      puVar12 = (undefined4 *)(*(int *)(param_2 + 0x48) + 0x28);
      for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    pvVar6 = GlobalAlloc(2,local_14 * (((int)uVar10 >> 3) * iVar9 + 3U & 0xfffffffc));
    *(HGLOBAL *)(param_2 + 0x4c) = pvVar6;
  }
  iVar7 = 0;
  if (*(int *)(param_2 + 0x4c) != 0) {
    iVar13 = 0;
    uVar3 = *(undefined4 *)(*(int *)(param_3 + 0x3a) + 0xc);
    *(undefined4 *)(*(int *)(param_3 + 0x3a) + 0xc) = 0;
    pvVar5 = GlobalLock(*(HGLOBAL *)(param_2 + 0x4c));
    *(LPVOID *)(param_2 + 0x50) = pvVar5;
    *(undefined4 *)(*(int *)(param_3 + 0x3a) + 0x18) = 0;
    psVar2 = *(short **)(param_3 + 0x1c);
    if (*psVar2 < 0) {
      iVar7 = -(int)*psVar2;
      iVar9 = iVar9 + iVar7;
    }
    if (psVar2[1] < 0) {
      iVar13 = -(int)psVar2[1];
      iVar9 = iVar9 + iVar13;
    }
    iVar4 = *(int *)(param_3 + 0x2e);
    iVar8 = *(int *)(iVar4 + 8);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (*(int *)(iVar4 + 4) < iVar7 + iVar9 + (int)*psVar2) {
      iVar9 = (*(int *)(iVar4 + 4) - (int)*psVar2) - iVar7;
    }
    if (iVar8 < local_14 + iVar13 + (int)psVar2[1]) {
      local_14 = (iVar8 - psVar2[1]) - iVar13;
    }
    FUN_1101ea40(*(int *)(param_2 + 0x48),*(int *)(param_2 + 0x50),(short)iVar7,(short)iVar13,
                 (short)iVar9,(short)local_14,iVar4,*(int *)(param_3 + 0x36),*psVar2 + (short)iVar7,
                 psVar2[1] + (short)iVar13,(short)iVar9,(short)local_14,*(byte **)(param_3 + 0x3a));
    *(undefined4 *)(*(int *)(param_3 + 0x3a) + 0xc) = uVar3;
    return;
  }
  FUN_11029180(*(LPVOID *)(param_2 + 0x48));
  *(undefined4 *)(param_2 + 0x48) = 0;
  return;
}


