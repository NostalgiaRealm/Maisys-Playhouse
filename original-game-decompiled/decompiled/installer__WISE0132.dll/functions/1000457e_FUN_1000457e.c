
/* ==== FUN_1000457e @ 1000457e ==== 
 * signature: undefined __stdcall FUN_1000457e(void)
 * body: 1000457e-10004950
 */

void FUN_1000457e(void)

{
  ushort uVar1;
  UINT cbBuffer;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  ushort *lpData;
  uint uVar5;
  HMETAFILE pHVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_10;
  
  uVar1 = *(ushort *)(DAT_10023310 + 1);
  if ((uVar1 & 0x4000) != 0) {
    FUN_1000bb6a();
  }
  if ((uVar1 & 0x3805) != 0) {
    iVar8 = -1;
    piVar4 = DAT_10023ed4;
    do {
      if (*piVar4 == 0) break;
      iVar8 = iVar8 + 1;
      piVar4 = piVar4 + 0xe;
    } while (iVar8 < 0x1f);
    if ((uVar1 & 1) == 0) {
      uVar9 = (uVar1 >> 8 & 0x38 | uVar1 & 4) >> 2;
    }
    else {
      uVar9 = 0x20;
    }
    if (uVar9 != 0) {
      iVar10 = iVar8 * 0x38;
      do {
        if (iVar8 < 0) break;
        FUN_1000bd4b(iVar8,0);
        FUN_100139a5((undefined4 *)((int)DAT_10023ed4 + iVar10));
        if (*(int *)((int)DAT_10023ed4 + iVar10 + 0x28) != 0) {
          iVar7 = 0x6c8;
          do {
            if (*(int *)((int)DAT_10023ed4 + iVar7) == 0) break;
            FUN_100139a5((int *)((int)DAT_10023ed4 + iVar7));
            DAT_1001f158 = -1;
            iVar7 = iVar7 + -0x38;
          } while (-1 < iVar7);
        }
        iVar8 = iVar8 + -1;
        iVar10 = iVar10 + -0x38;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  *(byte *)(DAT_1002392c + 0x38) = *(byte *)(DAT_1002392c + 0x38) & 3;
  iVar8 = 0;
  do {
    if (*(int *)((int)DAT_10023ed4 + iVar8) == 0) break;
    if ((*(byte *)((int)DAT_10023ed4 + iVar8 + 0x24) & 0x42) == 0x40) {
      *(byte *)(DAT_1002392c + 0x38) = *(byte *)(DAT_1002392c + 0x38) | 1;
    }
    iVar8 = iVar8 + 0x38;
  } while (iVar8 < 0x700);
  if (((byte)uVar1 & 0x42) == 0x40) {
    *(byte *)(DAT_1002392c + 0x38) = *(byte *)(DAT_1002392c + 0x38) | 1;
  }
  if ((DAT_100238dc._1_1_ & 0x10) != 0) {
    *(byte *)(DAT_1002392c + 0x38) = *(byte *)(DAT_1002392c + 0x38) | 1;
  }
  bVar3 = false;
  bVar2 = false;
  local_10 = 0;
  piVar4 = DAT_10023ed4;
  do {
    if (*piVar4 == 0) break;
    if (piVar4[10] != 0) {
      bVar2 = true;
    }
    local_10 = local_10 + 1;
    piVar4 = piVar4 + 0xe;
  } while (local_10 < 0x20);
  if ((bVar2) && ((*(byte *)(DAT_10023310 + 4) & 0x80) != 0)) {
    local_10 = 0x1f;
    piVar4 = DAT_10023ed4 + 0x1b2;
    do {
      if (*piVar4 == 0) break;
      local_10 = local_10 + -1;
      piVar4 = piVar4 + -0xe;
    } while (-1 < local_10);
    bVar3 = true;
    DAT_1001f158 = (char)((int)(100 - (uint)DAT_1002393c) / (0x21 - local_10)) + DAT_1002393c;
  }
  if (local_10 < 0x20) {
    piVar4 = DAT_10023ed4 + local_10 * 0xe;
    piVar4[0xb] = 0;
    iVar8 = DAT_10023eec * 0xc;
    cbBuffer = *(UINT *)(iVar8 + 0xf + DAT_10023310);
    if (0 < (int)cbBuffer) {
      *(ushort *)(piVar4 + 9) = uVar1;
      lpData = FUN_1001397f((int)piVar4,cbBuffer);
      if (lpData != (ushort *)0x0) {
        iVar8 = DAT_10023310 + iVar8;
        iVar10 = *(int *)(iVar8 + 7);
        iVar8 = *(int *)(iVar8 + 0xb);
        *(int *)(DAT_1002392c + 8) = iVar10 + DAT_100238bc;
        FUN_1000bde0();
        *(ushort **)(DAT_1002392c + 0x8c) = lpData;
        DAT_10023f9c = 0;
        FUN_10013192(*(undefined4 *)(DAT_1002392c + 0x18),(HANDLE)0x0,iVar8 - iVar10,0);
        *(undefined4 *)(DAT_1002392c + 0x8c) = 0;
        if ((uVar1 & 0x400) == 0) {
          piVar4[1] = (uint)*lpData;
          piVar4[2] = (uint)lpData[1];
          piVar4[6] = *(int *)(lpData + 2);
          piVar4[3] = (int)(short)lpData[4];
        }
        else {
          piVar4[1] = (uint)*(ushort *)((int)lpData + (cbBuffer - 4));
          piVar4[2] = (uint)*(ushort *)((int)lpData + (cbBuffer - 2));
        }
        piVar4[10] = (uint)(*(ushort *)(DAT_10023310 + 3) >> 0xf);
        if ((uVar1 & 0x20) == 0) {
          piVar4[4] = piVar4[1];
          uVar9 = piVar4[2];
        }
        else {
          uVar9 = (uint)(DAT_10023f3c * 10000) / 0x280;
          uVar5 = (uint)(DAT_10023f44 * 10000) / 0x1e0;
          if (uVar5 < uVar9) {
            uVar9 = uVar5;
          }
          piVar4[4] = (uVar9 * piVar4[1]) / 10000 & 0xffff;
          uVar9 = (uVar9 * piVar4[2]) / 10000 & 0xffff;
        }
        piVar4[5] = uVar9;
        if ((uVar1 & 8) == 0) {
          if ((*(ushort *)(DAT_10023310 + 3) & 0x4000) == 0) {
            uVar9 = *(ushort *)(DAT_10023310 + 3) & 0x3fff;
            piVar4[7] = uVar9;
            uVar9 = (DAT_10023f3c * uVar9) / 0x280 & 0xffff;
          }
          else {
            uVar9 = DAT_10023f3c - piVar4[4];
          }
        }
        else {
          uVar9 = (DAT_10023f3c - piVar4[4]) / 2;
        }
        piVar4[7] = uVar9;
        if ((uVar1 & 0x10) == 0) {
          if ((*(ushort *)(DAT_10023310 + 5) & 0x4000) == 0) {
            uVar9 = *(ushort *)(DAT_10023310 + 5) & 0x3fff;
            piVar4[8] = uVar9;
            uVar9 = (DAT_10023f44 * uVar9) / 0x1e0 & 0xffff;
          }
          else {
            uVar9 = DAT_10023f44 - piVar4[5];
          }
        }
        else {
          uVar9 = (DAT_10023f44 - piVar4[5]) / 2;
        }
        piVar4[8] = uVar9;
        if ((*(byte *)((int)piVar4 + 0x25) & 4) != 0) {
          pHVar6 = SetMetaFileBitsEx(cbBuffer,(BYTE *)lpData);
          piVar4[0xd] = (int)pHVar6;
        }
        *piVar4 = (int)lpData;
        if (!bVar3) {
          if ((uVar1 & 0x3805) == 0) {
            piVar4[0xb] = 1;
            *(byte *)(DAT_1002392c + 0x38) = *(byte *)(DAT_1002392c + 0x38) | 2;
          }
          FUN_1000bd4b(local_10,1);
        }
      }
    }
  }
  return;
}


