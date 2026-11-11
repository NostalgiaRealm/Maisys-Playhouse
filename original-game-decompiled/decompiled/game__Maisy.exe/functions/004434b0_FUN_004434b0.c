
/* ==== FUN_004434b0 @ 004434b0 ==== 
 * signature: undefined1 __stdcall FUN_004434b0(void)
 * body: 004434b0-00443614
 */

undefined1 FUN_004434b0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int local_10;
  undefined1 uStack_9;
  short local_6;
  
  uStack_9 = 0;
  DVar6 = timeGetTime();
  local_6 = 0;
  uVar5 = 0;
  if (0 < DAT_004db792) {
    do {
      uStack_9 = uVar5;
      iVar4 = local_6 * 0x3e;
      if ((((&DAT_004db5a2)[iVar4] == '\0') && ((&DAT_004db5de)[iVar4] == '\0')) &&
         (iVar1 = *(int *)(&DAT_004db5b0 + iVar4), iVar1 < *(int *)(&DAT_004db5c0 + iVar4))) {
        uVar2 = *(uint *)((int)&DAT_004db5cc + iVar4);
        uVar3 = *(uint *)((int)&DAT_004db5d0 + iVar4);
        uVar9 = (uint)(char)(&DAT_004db5a3)[iVar4];
        uVar10 = uVar9;
        if ((int)uVar9 < 2) {
          uVar10 = 1;
        }
        uVar11 = uVar3;
        if ((int)uVar3 < 2) {
          uVar11 = 1;
        }
        uVar12 = uVar2;
        if ((int)uVar2 < 2) {
          uVar12 = 1;
        }
        if ((int)uVar2 < 1) {
          local_10 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
        }
        else {
          local_10 = 1;
        }
        if ((int)uVar3 < 1) {
          iVar13 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
        }
        else {
          iVar13 = 1;
        }
        iVar7 = 1;
        if ((int)uVar9 < 1) {
          iVar7 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
        }
        uStack_9 = 1;
        iVar7 = (((DAT_004db850 >> 3) * DAT_004db854 * DAT_004db84c * local_10 * iVar13 * iVar7) /
                (int)(uVar10 * uVar11 * uVar12 * 1000)) *
                (DVar6 - *(int *)((int)&DAT_004db5c8 + iVar4)) + *(int *)(&DAT_004db5c4 + iVar4);
        iVar13 = iVar7;
        if ((iVar7 < iVar1) && (iVar13 = iVar1, *(int *)((int)&DAT_004db5b8 + iVar4) != 0)) {
          do {
            iVar7 = iVar7 + (*(int *)(&DAT_004db5b4 + iVar4) - iVar1);
            iVar13 = iVar7;
          } while (iVar7 < iVar1);
        }
        iVar7 = *(int *)(&DAT_004db5b4 + iVar4);
        iVar8 = iVar13;
        if ((iVar7 < iVar13) && (iVar8 = iVar7, *(int *)((int)&DAT_004db5b8 + iVar4) != 0)) {
          iVar8 = iVar1 + (iVar13 - iVar1) % (iVar7 - iVar1);
        }
        *(int *)(&DAT_004db5c0 + iVar4) = iVar8;
      }
      local_6 = local_6 + 1;
      uVar5 = uStack_9;
    } while (local_6 < DAT_004db792);
  }
  return uStack_9;
}


