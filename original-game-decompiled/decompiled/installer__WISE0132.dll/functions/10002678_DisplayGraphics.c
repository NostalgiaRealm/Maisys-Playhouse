
/* ==== DisplayGraphics @ 10002678 ==== 
 * signature: undefined __stdcall DisplayGraphics(undefined4 param_1, HDC param_2)
 * body: 10002678-10002e3d
 */

void DisplayGraphics(undefined4 param_1,HDC param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  sbyte sVar8;
  code *pcVar9;
  char *pcVar10;
  char *_Dst;
  HDC pHVar11;
  HBITMAP__ local_4a0 [256];
  ushort local_a0 [8];
  tagSIZE local_90;
  int local_88;
  HGDIOBJ local_84;
  HBITMAP local_80;
  uint local_7c;
  HGDIOBJ local_78;
  HBITMAP local_74;
  HGDIOBJ local_70;
  HBITMAP local_6c;
  void *local_68;
  HGDIOBJ local_64;
  int local_60;
  HBRUSH local_5c;
  uint local_58;
  uint local_54;
  char *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  HBITMAP local_28;
  int local_24;
  int local_20;
  int local_1c;
  HDC local_18;
  HDC local_14;
  int local_10;
  HDC local_c;
  byte local_5;
  
                    /* 0x2678  5  DisplayGraphics */
  if (DAT_10023ed4 != 0) {
    iVar3 = GetDeviceCaps(param_2,0xe);
    iVar4 = GetDeviceCaps(param_2,0xc);
    local_40 = (iVar3 * iVar4 + 7) / 8 + 1;
    iVar3 = local_40 * 6;
    local_40 = local_40 * 8;
    local_4c = iVar3;
    local_c = CreateCompatibleDC(param_2);
    local_18 = CreateCompatibleDC(param_2);
    local_44 = 0;
    do {
      piVar1 = (int *)(DAT_10023ed4 + local_44);
      if (*(int *)(DAT_10023ed4 + local_44) == 0) break;
      if ((piVar1[0xb] != 0) || ((*(byte *)(DAT_1002392c + 0x38) & 2) == 0)) {
        local_7c = (uint)*(ushort *)(piVar1 + 9);
        local_58 = local_7c & 2;
        local_54 = local_7c & 0x40;
        local_7c = local_7c & 0x400;
        if ((*(ushort *)(piVar1 + 9) & 0x400) == 0) {
          local_68 = (void *)(piVar1[6] + 10 + *piVar1);
          FUN_10011f09(*piVar1 + 10,local_c,(undefined4 *)(DAT_1002392c + 0x3c));
          FUN_10011f09(*piVar1 + 10,local_18,&DAT_10023f64);
          FUN_10011f09(*piVar1 + 10,param_2,&DAT_10023ec4);
          SetStretchBltMode(local_c,3);
          SetStretchBltMode(local_18,3);
        }
        local_14 = (HDC)0x0;
        local_5 = (byte)(*(ushort *)(piVar1 + 9) >> 7) & 7;
        local_2c = 0;
        local_20 = 0;
        local_24 = 0;
        local_1c = 0;
        local_48 = 1;
        pcVar9 = BitBlt_exref;
        if (1 < local_5) {
          local_48 = 0;
          local_14 = CreateCompatibleDC(param_2);
          local_60 = piVar1[7];
          local_88 = piVar1[8];
          if (local_5 < 4) {
            local_34 = piVar1[4] + local_60;
            local_3c = local_60;
          }
          else {
            local_30 = piVar1[5] + local_88;
            local_38 = local_88;
          }
          if (local_5 == 2) {
            local_38 = 0;
            local_30 = piVar1[5] + local_88;
            local_24 = iVar3 * 2;
            local_2c = iVar3 * -2;
            piVar1[8] = local_88 - ((iVar3 + -1 + local_30) / iVar3) * iVar3;
          }
          else if (local_5 == 3) {
            local_30 = DAT_10023f44;
            local_2c = 0;
            piVar1[8] = ((((DAT_10023f44 + iVar3) - local_88) + -1) / iVar3) * iVar3 + local_88;
            local_24 = iVar3 * 2;
            local_38 = local_88;
          }
          else if (local_5 == 4) {
            local_34 = local_60 + piVar1[4];
            local_3c = 0;
            local_1c = local_40 * 2;
            local_20 = local_40 * -2;
            piVar1[7] = local_60 - ((local_40 + -1 + local_34) / local_40) * local_40;
          }
          else if (local_5 == 5) {
            local_34 = DAT_10023f3c;
            local_20 = 0;
            piVar1[7] = ((((DAT_10023f3c + local_40) - local_60) + -1) / local_40) * local_40 +
                        local_60;
            local_1c = local_40 * 2;
            local_3c = local_60;
          }
          iVar3 = local_30 - local_38;
          local_28 = (HBITMAP)(local_34 - local_3c);
          local_74 = CreateCompatibleBitmap(param_2,(int)local_28,iVar3);
          local_70 = SelectObject(local_14,local_74);
          pcVar9 = BitBlt_exref;
          BitBlt(local_14,0,0,(int)local_28,iVar3,param_2,local_3c,local_38,0xcc0020);
        }
        if (local_54 != 0) {
          piVar1[8] = 0;
          piVar1[7] = 0;
        }
        do {
          local_6c = CreateCompatibleBitmap(param_2,local_1c + piVar1[4],local_24 + piVar1[5]);
          local_84 = SelectObject(local_c,local_6c);
          if (local_5 == 1) {
            local_80 = CreateCompatibleBitmap(param_2,local_1c + piVar1[4],local_24 + piVar1[5]);
            local_78 = SelectObject(local_18,local_80);
            (*pcVar9)(local_18,0,0,piVar1[4],piVar1[5],param_2,piVar1[7],piVar1[8],0xcc0020);
          }
          if (local_7c == 0) {
            if (local_14 != (HDC)0x0) {
              (*pcVar9)(local_c,0,0,local_1c + piVar1[4],local_24 + piVar1[5],local_14,
                        (piVar1[7] - local_3c) + local_20,(piVar1[8] - local_38) + local_2c,0xcc0020
                       );
            }
            if (local_58 != 0) {
              if (local_14 == (HDC)0x0) {
                (*pcVar9)(local_c,0,0,piVar1[4],piVar1[5],param_2,piVar1[7],piVar1[8],0xcc0020);
              }
              _Dst = (char *)(*(ushort *)(*piVar1 + 10) + 10 + *piVar1);
              local_50 = _Dst;
              FUN_10015e50(local_4a0,(undefined4 *)_Dst,piVar1[3] << 2);
              local_10 = 0;
              if (0 < piVar1[3]) {
                pcVar10 = _Dst + 1;
                do {
                  if (((pcVar10[-1] == -1) && (*pcVar10 == '\0')) && (pcVar10[1] == '\0')) {
                    pcVar10[1] = -1;
                    *pcVar10 = -1;
                  }
                  else {
                    _memset(pcVar10 + -1,0,3);
                  }
                  local_10 = local_10 + 1;
                  pcVar10 = pcVar10 + 4;
                  _Dst = local_50;
                } while (local_10 < piVar1[3]);
              }
              StretchDIBits(local_c,-local_20,-local_2c,piVar1[4],piVar1[5],0,0,piVar1[1],piVar1[2],
                            local_68,(BITMAPINFO *)(*piVar1 + 10),0,0x8800c6);
              local_10 = 0;
              if (0 < piVar1[3]) {
                local_28 = (HBITMAP)((int)local_4a0 - (int)local_50);
                do {
                  if (((*_Dst == -1) && (_Dst[1] == -1)) && (_Dst[2] == -1)) {
                    _memset(_Dst,0,3);
                  }
                  else {
                    FUN_10015e50((undefined4 *)_Dst,(undefined4 *)(_Dst + (int)&local_28->unused),3)
                    ;
                  }
                  local_10 = local_10 + 1;
                  _Dst = _Dst + 4;
                } while (local_10 < piVar1[3]);
              }
            }
            StretchDIBits(local_c,-local_20,-local_2c,piVar1[4],piVar1[5],0,0,piVar1[1],piVar1[2],
                          local_68,(BITMAPINFO *)(*piVar1 + 10),0,
                          (-(uint)(local_58 != 0) & 0x220066) + 0xcc0020);
          }
          else {
            if (local_14 == (HDC)0x0) {
              iVar3 = piVar1[8];
              iVar4 = piVar1[7];
              iVar5 = piVar1[5];
              iVar6 = piVar1[4];
              pHVar11 = param_2;
            }
            else {
              iVar3 = (piVar1[8] - local_38) + local_2c;
              iVar4 = (piVar1[7] - local_3c) + local_20;
              iVar5 = local_24 + piVar1[5];
              iVar6 = local_1c + piVar1[4];
              pHVar11 = local_14;
            }
            (*pcVar9)(local_c,0,0,iVar6,iVar5,pHVar11,iVar4,iVar3,0xcc0020);
            SetMapMode(local_c,8);
            GetViewportExtEx(local_c,&local_90);
            SetViewportExtEx(local_c,(piVar1[4] * 0x32) / piVar1[1],(piVar1[5] * 0x32) / piVar1[2],
                             (LPSIZE)0x0);
            SetViewportOrgEx(local_c,-local_20,-local_2c,(LPPOINT)0x0);
            PlayMetaFile(local_c,(HMETAFILE)piVar1[0xd]);
            SetViewportExtEx(local_c,local_90.cx,local_90.cy,(LPSIZE)0x0);
            SetViewportOrgEx(local_c,0,0,(LPPOINT)0x0);
          }
          local_a0[0] = 0xff;
          local_a0[1] = 0xff;
          local_a0[2] = 0xff;
          local_a0[3] = 0xff;
          local_a0[4] = 0xff;
          local_a0[5] = 0xff;
          local_a0[6] = 0xff;
          local_a0[7] = 0xff;
          local_10 = 0;
          do {
            if (local_5 == 1) {
LAB_10002c08:
              local_28 = (HBITMAP)0x0;
              do {
                uVar7 = FUN_10015e20();
                uVar7 = (int)uVar7 % 0x40 & 0xffff;
                uVar2 = (ulonglong)uVar7 % 8;
                local_64 = (HGDIOBJ)uVar2;
                uVar7 = uVar7 >> 3;
                local_5c = (HBRUSH)0x1;
                sVar8 = (sbyte)uVar2;
                if (((int)(short)local_a0[uVar7] & 1 << sVar8) != 0) {
                  local_28 = (HBITMAP)((int)local_28 + 1);
                  local_a0[uVar7] = ~(ushort)(1 << sVar8) & local_a0[uVar7];
                }
              } while ((int)local_28 < 2);
              local_28 = CreateBitmap(8,8,1,1,local_a0);
              local_5c = CreatePatternBrush(local_28);
              local_64 = SelectObject(local_18,local_5c);
              BitBlt(local_18,0,0,local_1c + piVar1[4],local_24 + piVar1[5],local_c,0,0,0xac0744);
              SelectObject(local_18,local_64);
              DeleteObject(local_5c);
              DeleteObject(local_28);
              pHVar11 = local_18;
            }
            else {
              if (local_10 != 0) break;
              pHVar11 = local_c;
              if (local_5 == 1) goto LAB_10002c08;
            }
            BitBlt(param_2,piVar1[7] + local_20,piVar1[8] + local_2c,local_1c + piVar1[4],
                   local_24 + piVar1[5],pHVar11,0,0,0xcc0020);
            local_10 = local_10 + 1;
          } while (local_10 < 0x20);
          SelectObject(local_c,local_84);
          DeleteObject(local_6c);
          if (local_5 == 1) {
            SelectObject(local_18,local_78);
            DeleteObject(local_80);
          }
          if (local_58 != 0) {
            FUN_10015e50((undefined4 *)local_50,local_4a0,piVar1[3] << 2);
          }
          if ((local_54 != 0) && (piVar1[7] = piVar1[7] + piVar1[1], DAT_10023f3c <= piVar1[7])) {
            piVar1[7] = 0;
            piVar1[8] = piVar1[8] + piVar1[2];
          }
          if (local_14 != (HDC)0x0) {
            if (piVar1[8] == local_88) {
              if (piVar1[7] == local_60) {
                local_48 = 1;
              }
              else {
                iVar3 = local_40;
                if (local_5 != 4) {
                  iVar3 = -local_40;
                }
                piVar1[7] = piVar1[7] + iVar3;
              }
            }
            else {
              iVar3 = local_4c;
              if (local_5 != 2) {
                iVar3 = -local_4c;
              }
              piVar1[8] = piVar1[8] + iVar3;
            }
          }
          pcVar9 = BitBlt_exref;
        } while (((local_54 != 0) && (piVar1[8] < DAT_10023f44)) || (local_48 == 0));
        if (local_14 != (HDC)0x0) {
          SelectObject(local_14,local_70);
          DeleteObject(local_74);
          DeleteDC(local_14);
        }
        *(ushort *)(piVar1 + 9) = *(ushort *)(piVar1 + 9) & 0xfc7f;
        iVar3 = local_4c;
      }
      local_44 = local_44 + 0x38;
    } while (local_44 < 0x700);
    DeleteDC(local_c);
    DeleteDC(local_18);
    *(byte *)(DAT_1002392c + 0x38) = *(byte *)(DAT_1002392c + 0x38) & 0xfd;
  }
  return;
}


