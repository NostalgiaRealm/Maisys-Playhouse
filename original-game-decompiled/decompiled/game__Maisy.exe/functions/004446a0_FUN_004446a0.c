
/* ==== FUN_004446a0 @ 004446a0 ==== 
 * signature: undefined1 __cdecl FUN_004446a0(int param_1)
 * body: 004446a0-00444808
 */

undefined1 __cdecl FUN_004446a0(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  if ((DAT_004db5a0 == '\0') || (param_1 == 0)) {
    return 1;
  }
  sVar1 = *(short *)(param_1 + 0x28);
  if (sVar1 == -2) {
    return 0;
  }
  if (sVar1 == -1) {
    return 1;
  }
  iVar4 = sVar1 * 0x3e;
  if (((&DAT_004db5a2)[iVar4] == '\0') && (*(int *)((int)&DAT_004db5b8 + iVar4) == 0)) {
    uVar2 = *(uint *)((int)&DAT_004db5cc + iVar4);
    uVar3 = *(uint *)((int)&DAT_004db5d0 + iVar4);
    uVar8 = (uint)(char)(&DAT_004db5a3)[iVar4];
    uVar12 = uVar8;
    if ((int)uVar8 < 2) {
      uVar12 = 1;
    }
    uVar9 = uVar3;
    if ((int)uVar3 < 2) {
      uVar9 = 1;
    }
    uVar10 = uVar2;
    if ((int)uVar2 < 2) {
      uVar10 = 1;
    }
    if ((int)uVar2 < 1) {
      iVar11 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    }
    else {
      iVar11 = 1;
    }
    if ((int)uVar3 < 1) {
      iVar13 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    }
    else {
      iVar13 = 1;
    }
    iVar5 = 1;
    if ((int)uVar8 < 1) {
      iVar5 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
    }
    iVar6 = (DAT_004db850 >> 3) * DAT_004db854 * DAT_004db84c;
    DVar7 = timeGetTime();
    iVar13 = ((iVar6 * iVar11 * iVar13 * iVar5) / (int)(uVar12 * uVar9 * uVar10 * 1000)) *
             (DVar7 - *(int *)((int)&DAT_004db5c8 + iVar4));
    iVar11 = (*(int *)(&DAT_004db5b4 + iVar4) - *(int *)(&DAT_004db5c4 + iVar4)) *
             *(int *)((int)&DAT_004db5bc + iVar4);
    (&DAT_004db5a2)[iVar4] = iVar11 - iVar13 == 0 || iVar11 < iVar13;
  }
  return (&DAT_004db5a2)[*(short *)(param_1 + 0x28) * 0x3e];
}


