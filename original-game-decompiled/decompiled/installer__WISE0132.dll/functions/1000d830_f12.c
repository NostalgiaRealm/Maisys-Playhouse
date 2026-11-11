
/* ==== f12 @ 1000d830 ==== 
 * signature: int __stdcall f12(int param_1)
 * body: 1000d830-1000da64
 */

int f12(int param_1)

{
  int iVar1;
  HDC hdc;
  int iVar2;
  UINT UVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte local_234 [512];
  _MEMORYSTATUS local_34;
  char *local_14;
  uint local_10;
  int local_c;
  int local_8;
  
                    /* 0xd830  19  f12 */
  iVar1 = param_1;
  local_14 = FUN_10010950((char *)local_234,*(char **)(param_1 + 0x20));
  local_10 = FUN_10016230(local_234);
  uVar5 = local_10 & 0x1f;
  param_1 = 0;
  if (uVar5 < 0x1a) {
    if (uVar5 == 0x19) {
LAB_1000d9f9:
      bVar6 = DAT_10024168 == 0;
      goto LAB_1000d9ff;
    }
    if (uVar5 < 10) {
      if (uVar5 < 5) {
        if (uVar5 == 0) {
          bVar6 = DAT_100238b8 == 0;
          goto LAB_1000d9ff;
        }
        if (uVar5 == 1) {
          hdc = GetDC(*(HWND *)(iVar1 + 4));
          if (hdc == (HDC)0x0) goto LAB_1000da08;
          local_8 = GetDeviceCaps(hdc,0xc);
          iVar2 = GetDeviceCaps(hdc,0xe);
          bVar6 = SBORROW4(local_8 * iVar2,8);
          iVar2 = local_8 * iVar2 + -8;
LAB_1000d991:
          if (bVar6 == iVar2 < 0) {
            param_1 = 1;
          }
LAB_1000d99a:
          ReleaseDC(*(HWND *)(iVar1 + 4),hdc);
          goto LAB_1000da08;
        }
        if (uVar5 == 2) goto LAB_1000d92c;
        if (uVar5 != 3) goto LAB_1000da08;
      }
    }
    else if (uVar5 != 10) {
      if (uVar5 < 0xb) goto LAB_1000da08;
      if (uVar5 < 0xd) {
LAB_1000d92c:
        if (uVar5 == 2) {
          local_c = 0x280;
          local_8 = 0x1e0;
        }
        else if (uVar5 == 0xb) {
          local_c = 800;
          local_8 = 600;
        }
        else if (uVar5 == 0xc) {
          local_c = 0x400;
          local_8 = 0x300;
        }
        hdc = GetDC(*(HWND *)(iVar1 + 4));
        if (hdc == (HDC)0x0) goto LAB_1000da08;
        iVar2 = GetDeviceCaps(hdc,8);
        if (local_c <= iVar2) {
          iVar2 = GetDeviceCaps(hdc,10);
          bVar6 = SBORROW4(iVar2,local_8);
          iVar2 = iVar2 - local_8;
          goto LAB_1000d991;
        }
        goto LAB_1000d99a;
      }
      if (0x18 < uVar5) goto LAB_1000da08;
      local_34.dwLength = 0x20;
      GlobalMemoryStatus(&local_34);
      if (local_34.dwTotalPhys < (uVar5 + 0xff4) * 0x100000) goto LAB_1000da08;
    }
  }
  else {
    if (uVar5 == 0x1a) {
      if (DAT_100238b8 != 0) {
        param_1 = 1;
      }
      goto LAB_1000d9f9;
    }
    if (uVar5 != 0x1b) {
      if (uVar5 == 0x1c) {
        UVar3 = waveOutGetNumDevs();
      }
      else {
        if (uVar5 != 0x1d) {
          if (uVar5 != 0x1e) {
            if (uVar5 == 0x1f) {
              param_1 = FUN_1000da65();
            }
            goto LAB_1000da08;
          }
          UVar3 = waveOutGetNumDevs();
          if (UVar3 == 0) goto LAB_1000da08;
        }
        UVar3 = midiOutGetNumDevs();
      }
      if (UVar3 == 0) goto LAB_1000da08;
      goto LAB_1000da01;
    }
    bVar6 = DAT_10023930 == 0;
LAB_1000d9ff:
    if (bVar6) goto LAB_1000da08;
  }
LAB_1000da01:
  param_1 = 1;
LAB_1000da08:
  if ((local_10 & 0x20) == 0) {
    param_1 = 1 - param_1;
  }
  if (((param_1 != 0) && (*local_14 != '\0')) && (*local_14 != '\x7f')) {
    pcVar4 = FUN_10010950((char *)local_234,local_14);
    FUN_10010950(&DAT_10023bc0,pcVar4);
    FUN_1001277f((HWND)0x0,(char *)local_234,&DAT_10023bc0,2);
  }
  return param_1;
}


