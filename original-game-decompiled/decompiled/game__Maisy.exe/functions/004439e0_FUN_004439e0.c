
/* ==== FUN_004439e0 @ 004439e0 ==== 
 * signature: int __cdecl FUN_004439e0(int param_1, int param_2, char param_3, int param_4)
 * body: 004439e0-00443c86
 */

int __cdecl FUN_004439e0(int param_1,int param_2,char param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  short *psVar15;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  undefined4 uVar8;
  
  iVar3 = param_2 * 0x3e;
  uVar1 = *(uint *)((int)&DAT_004db5cc + iVar3);
  uVar2 = *(uint *)((int)&DAT_004db5d0 + iVar3);
  local_14 = (uint)(char)(&DAT_004db5a3)[iVar3];
  local_c = param_4;
  local_10 = DAT_004db7aa;
  if (DAT_004db870 != '\0') {
    local_10 = (int)DAT_004db7aa >> 1;
  }
  if ((*(int *)(&DAT_004db5b4 + iVar3) <= *(int *)(&DAT_004db5c0 + iVar3)) &&
     (*(int *)((int)&DAT_004db5b8 + iVar3) == 0)) {
    uVar14 = local_14;
    if ((int)local_14 < 2) {
      uVar14 = 1;
    }
    uVar9 = uVar1;
    if ((int)uVar1 < 2) {
      uVar9 = 1;
    }
    uVar10 = uVar2;
    if ((int)uVar2 < 2) {
      uVar10 = 1;
    }
    if ((int)uVar1 < 1) {
      iVar11 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    }
    else {
      iVar11 = 1;
    }
    if ((int)uVar2 < 1) {
      iVar12 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    }
    else {
      iVar12 = 1;
    }
    iVar5 = 1;
    if ((int)local_14 < 1) {
      iVar5 = (local_14 ^ (int)local_14 >> 0x1f) - ((int)local_14 >> 0x1f);
    }
    iVar6 = (DAT_004db850 >> 3) * DAT_004db854 * DAT_004db84c;
    DVar7 = timeGetTime();
    iVar12 = ((iVar6 * iVar11 * iVar12 * iVar5) / (int)(uVar14 * uVar9 * uVar10 * 1000)) *
             (DVar7 - *(int *)((int)&DAT_004db5c8 + iVar3));
    timeGetTime();
    iVar11 = (*(int *)(&DAT_004db5b4 + iVar3) - *(int *)(&DAT_004db5c4 + iVar3)) *
             *(int *)((int)&DAT_004db5bc + iVar3);
    (&DAT_004db5a2)[iVar3] = iVar11 - iVar12 == 0 || iVar11 < iVar12;
    return local_c;
  }
  if (param_4 < (int)local_10) {
    do {
      local_8 = *(int *)(&DAT_004db5b4 + iVar3) - *(int *)(&DAT_004db5c0 + iVar3);
      if (((int)local_8 < 1) && (*(int *)((int)&DAT_004db5b8 + iVar3) != 0)) {
        *(int *)((int)&DAT_004db5b8 + iVar3) = *(int *)((int)&DAT_004db5b8 + iVar3) + -1;
        *(int *)((int)&DAT_004db5bc + iVar3) = *(int *)((int)&DAT_004db5bc + iVar3) + 1;
        *(int *)(&DAT_004db5c0 + iVar3) = *(int *)(&DAT_004db5b0 + iVar3);
        local_8 = *(int *)(&DAT_004db5b4 + iVar3) - *(int *)(&DAT_004db5b0 + iVar3);
        iVar11 = (int)(short)((int)((int)*(short *)(&DAT_004db5d4 + iVar3) +
                                   ((int)*(short *)(&DAT_004db5d4 + iVar3) >> 0x1f & 7U)) >> 3);
        if (local_c % (*(short *)(&DAT_004db5d6 + iVar3) * iVar11) != 0) {
          local_c = local_c + iVar11;
        }
      }
      if ((int)local_10 < (int)local_8) {
        local_8 = local_10;
      }
      if ((int)local_8 < 1) {
        return local_c;
      }
      if (*(int *)(&DAT_004db5a8 + iVar3) == 0) {
        uVar8 = FUN_00443100(*(HMMIO *)(&DAT_004db5a4 + iVar3),(HPSTR)DAT_004db79e,
                             *(LONG *)(&DAT_004db5c0 + iVar3),local_8);
        cVar4 = (char)uVar8;
      }
      else {
        pcVar13 = (char *)(*(int *)(&DAT_004db5c0 + iVar3) + *(int *)(&DAT_004db5a8 + iVar3));
        psVar15 = DAT_004db79e;
        for (uVar14 = local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)psVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          psVar15 = psVar15 + 2;
        }
        for (uVar14 = local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(char *)psVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          psVar15 = (short *)((int)psVar15 + 1);
        }
        cVar4 = '\x01';
      }
      if (cVar4 != '\0') {
        if (((uVar1 == 1) && (uVar2 == 1)) && (local_14 == 1)) {
          if ((int)(local_10 - local_c) < (int)local_8) {
            local_8 = local_10 - local_c;
          }
          local_18 = local_8;
          FUN_00443c90(param_1,local_c,local_8,param_3,DAT_004db79e,
                       *(short *)(&DAT_004db5d8 + iVar3),*(short *)(&DAT_004db5da + iVar3),
                       *(short *)(&DAT_004db5dc + iVar3));
          local_c = local_c + local_8;
        }
        else {
          uVar14 = FUN_00444ca0(local_8,uVar1,uVar2,local_14,local_c,(int *)&local_18);
          FUN_00443c90(param_1,local_c,uVar14,param_3,DAT_004db7a6,*(short *)(&DAT_004db5d8 + iVar3)
                       ,*(short *)(&DAT_004db5da + iVar3),*(short *)(&DAT_004db5dc + iVar3));
          local_c = local_c + uVar14;
        }
        *(uint *)(&DAT_004db5c0 + iVar3) = *(int *)(&DAT_004db5c0 + iVar3) + local_18;
      }
    } while (local_c < (int)local_10);
  }
  return local_c;
}


