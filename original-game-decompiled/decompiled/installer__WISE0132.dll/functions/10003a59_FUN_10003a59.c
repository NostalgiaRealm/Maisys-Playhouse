
/* ==== FUN_10003a59 @ 10003a59 ==== 
 * signature: uint __stdcall FUN_10003a59(void)
 * body: 10003a59-10004505
 */

uint FUN_10003a59(void)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  HKEY__ *pHVar5;
  INT_PTR IVar6;
  undefined3 extraout_var;
  LPCSTR pCVar7;
  undefined4 uVar8;
  FARPROC pFVar9;
  HDDEDATA pData;
  byte *pbVar10;
  byte *pbVar11;
  BOOL BVar12;
  HSZ pHVar13;
  uint uVar14;
  int iVar15;
  HWND pHVar16;
  DWORD DVar17;
  UINT wFmt;
  UINT afCmd;
  HKEY__ local_d0c [128];
  char local_b0c [256];
  byte local_a0c [1024];
  byte local_60c [512];
  byte local_40c [1024];
  byte *local_c;
  HKEY__ *local_8;
  
  if (*(int *)(DAT_1002392c + 0x1c) == 0) {
    do {
      uVar14 = 1;
      if (*(char *)(DAT_1002392c + 0x20) != '\0') break;
      FUN_100148bf();
      DAT_10023f00 = 0;
      iVar15 = (int)*DAT_10023310;
      uVar2 = DAT_10023edc;
      if (0x10 < iVar15) {
        if (0x3f < iVar15) {
switchD_10003aac_caseD_1:
          FUN_1000b352(*(char **)(DAT_100240b8 + 0x1c));
          return 0xfffffffe;
        }
        if (iVar15 == 0x3f) {
          DAT_10023f00 = 0;
          return 0xffffffff;
        }
        switch(iVar15) {
        case 0x11:
          if (DAT_10023e9c != '\x01') {
            FUN_10009eff(local_40c,(byte *)(DAT_10023310 + 1));
            FUN_1000b5ca((LPCSTR)local_40c);
            uVar2 = DAT_10023edc;
          }
          break;
        case 0x12:
          goto switchD_10003aac_caseD_0;
        default:
          goto switchD_10003aac_caseD_1;
        case 0x14:
          iVar15 = FUN_10006e59();
          goto LAB_10003d6b;
        case 0x15:
          FUN_10004f08((DWORD)DAT_10023310);
          uVar2 = DAT_10023edc;
          break;
        case 0x16:
          FUN_100039fd((LPCSTR)local_40c,&DAT_1001f444);
          pCVar7 = FUN_1000b94f((LPCSTR)local_40c);
          FUN_100105d2(DAT_10023310 + 1,pCVar7);
          iVar15 = lstrlenA((LPCSTR)local_40c);
          uVar8 = FUN_10015d50(iVar15 + 1);
          *(undefined4 *)(DAT_10024050 + (uint)DAT_10023ef4 * 4) = uVar8;
          lstrcpyA(*(LPSTR *)(DAT_10024050 + (uint)DAT_10023ef4 * 4),(LPCSTR)local_40c);
          DAT_10023ef4 = DAT_10023ef4 + 1;
          uVar2 = DAT_10023edc;
          break;
        case 0x17:
          if (DAT_10023310[6] == '\0') {
            if ((DAT_10023310[1] & 2U) == 0) {
              sndPlaySoundA((LPCSTR)0x0,0);
              DAT_10023f1c = 0;
              uVar2 = DAT_10023edc;
            }
          }
          else {
            FUN_10009eff(local_40c,(byte *)(DAT_10023310 + 6));
            FUN_10012386((LPCSTR)local_40c,0);
            if ((DAT_10023310[1] & 2U) == 0) {
              sndPlaySoundA((LPCSTR)local_40c,((byte)DAT_10023310[1] & 1) << 3 | 3);
              uVar2 = DAT_10023edc;
              DAT_10023f1c = uVar14;
            }
            else if (((DAT_10023ea0 != (HMODULE)0x0) ||
                     (DAT_10023ea0 = LoadLibraryA(s_MSVFW32_DLL_1001f438), uVar2 = DAT_10023edc,
                     DAT_10023ea0 != (HMODULE)0x0)) &&
                    (pFVar9 = GetProcAddress(DAT_10023ea0,s_MCIWndCreateA_1001f428),
                    uVar2 = DAT_10023edc, pFVar9 != (FARPROC)0x0)) {
              pHVar16 = (HWND)(*pFVar9)(DAT_100238d8,DAT_1002403c,0x50000102,local_40c);
              SetWindowPos(pHVar16,(HWND)0x0,
                           (uint)(((longlong)(int)*(short *)(DAT_10023310 + 2) *
                                   (longlong)DAT_10023f3c & 0xffffffffU) / 0x280) & 0xffff,
                           (uint)(((longlong)(int)*(short *)(DAT_10023310 + 4) *
                                   (longlong)DAT_10023f44 & 0xffffffffU) / 0x1e0) & 0xffff,0,0,0x11)
              ;
              if ((DAT_10023310[1] & 1U) == 0) {
                *(byte *)(DAT_1002392c + 0x38) = *(byte *)(DAT_1002392c + 0x38) & 0xfb;
              }
              else {
                *(byte *)(DAT_1002392c + 0x38) = *(byte *)(DAT_1002392c + 0x38) | 4;
              }
              uVar2 = DAT_10023edc;
              if (pHVar16 != (HWND)0x0) {
                SendMessageA(pHVar16,0x806,0,0);
                uVar2 = DAT_10023edc;
              }
            }
          }
          break;
        case 0x18:
          goto switchD_10003ba9_caseD_18;
        case 0x19:
          FUN_10004a20();
          uVar2 = DAT_10023edc;
          break;
        case 0x1a:
          if (DAT_10023e9c != '\x01') {
            FUN_10004b9d();
            uVar2 = DAT_10023edc;
          }
          break;
        case 0x1b:
          for (; *DAT_10023310 == '\x1b'; DAT_10023310 = DAT_10023310 + 1) {
          }
          DAT_10023f00 = 0;
          return 0;
        case 0x1c:
          if (((DAT_10023e9c != '\x01') && (DAT_1001f030 != (HANDLE)0xffffffff)) &&
             (DAT_10023edc == 0)) {
            FUN_10009eff(local_40c,(byte *)(DAT_10023310 + 1));
            DVar17 = lstrlenA((LPCSTR)local_40c);
            FileWrite(DAT_1001f030,local_40c,DVar17);
            uVar2 = DAT_10023edc;
          }
          break;
        case 0x1d:
          if (DAT_10023e9c != '\x01') {
            FUN_10009eff(local_40c,(byte *)(DAT_10023310 + 1));
            local_8 = (HKEY__ *)FUN_1000bc0e(DAT_10023310 + 1);
            FUN_10009eff(local_a0c,(byte *)local_8);
            lstrcpyA((LPSTR)local_60c,(LPCSTR)local_40c);
            FUN_10010cf9((LPCSTR)local_60c);
            lstrcatA((LPSTR)local_60c,&DAT_1001f314);
            lstrcatA((LPSTR)local_60c,(LPCSTR)local_a0c);
            FUN_100162e0(local_b0c,0x100);
            FUN_10016240(&DAT_1001f314);
            MoveFileA((LPCSTR)local_40c,(LPCSTR)local_60c);
            FUN_10016240(local_b0c);
            uVar2 = DAT_10023edc;
          }
          break;
        case 0x1e:
          if (DAT_10023310[1] != '\0') {
            uVar2 = uVar14;
            if (DAT_10023310[1] == '\x01') break;
            FUN_100139c9();
            FUN_10009eff(DAT_10023eb0,(byte *)(DAT_10023310 + 2));
            FUN_100039fd(DAT_10023f20,&DAT_1001f448);
            FUN_1000b39e(DAT_10023f20);
          }
          DAT_10023edc = 0;
          uVar2 = DAT_10023edc;
        }
        goto switchD_10003aac_caseD_2;
      }
      if (iVar15 == 0x10) {
        if (DAT_10023e9c != '\x01') {
          if (DAT_10023e3c != (HCONV)0x0) {
            DdeDisconnect(DAT_10023e3c);
          }
          uVar2 = DAT_10023edc;
          if (((byte)DAT_100238dc & 4) != 0) {
            pHVar16 = (HWND)0xfffffffe;
LAB_10003b7d:
            SetWindowPos(DAT_100238d8,pHVar16,0,0,0,0,0x13);
            uVar2 = DAT_10023edc;
          }
        }
        goto switchD_10003aac_caseD_2;
      }
      switch(iVar15) {
      case 0:
switchD_10003aac_caseD_0:
        uVar14 = FUN_1000546d();
        goto LAB_10003bb5;
      default:
        goto switchD_10003aac_caseD_1;
      case 2:
        break;
      case 3:
        FUN_1000bb6a();
        local_8 = (HKEY__ *)(DAT_10023310 + 2);
        FUN_1000b97c((int *)&local_8,2);
        FUN_10009f15(local_a0c,(byte *)local_8,0x100);
        for (pHVar5 = local_8; (byte)pHVar5->unused != 0;
            pHVar5 = (HKEY__ *)((int)&pHVar5->unused + 1)) {
        }
        FUN_10009f15(local_40c,(byte *)((int)&pHVar5->unused + 1),0x400);
        IVar6 = FUN_1001277f((HWND)0x0,(char *)local_40c,local_a0c,(int)DAT_10023310[1]);
        if (IVar6 == 2) {
          return 0xfffffffe;
        }
        uVar2 = DAT_10023edc;
        if (IVar6 == 3) goto switchD_10003aac_caseD_d;
        break;
      case 4:
        if (DAT_10023e9c != '\x01') {
          local_8 = (HKEY__ *)(DAT_10023310 + 2);
          FUN_1000b97c((int *)&local_8,1);
          FUN_10009f15(local_40c,(byte *)local_8,0x400);
          if ((DAT_10023310[1] & 2U) != 0) {
            iVar15 = lstrlenA((LPCSTR)local_40c);
            if ((DAT_100241e8 == 0) || (DAT_10024168 != 0)) {
              lstrcpyA((LPSTR)(local_40c + iVar15),&DAT_1001f41c);
            }
            else {
              wsprintfA((LPSTR)(local_40c + iVar15),s___d___1001f420,(byte)DAT_10023310[1] & 1);
            }
          }
          afCmd = 0;
          wFmt = 0;
          pHVar13 = (HSZ)0x0;
          DVar17 = 0;
          iVar15 = lstrlenA((LPCSTR)local_40c);
          pData = DdeCreateDataHandle(DAT_1002391c,local_40c,iVar15 + 1,DVar17,pHVar13,wFmt,afCmd);
          DdeClientTransaction
                    ((LPBYTE)pData,0xffffffff,DAT_10023e3c,(HSZ)0x0,0,0x4050,1000,(LPDWORD)0x0);
          FUN_1000aef7((LPCSTR)local_40c,(LPCSTR)0x0,(char *)0x0,(char *)0x0,(char *)0x0);
          uVar2 = DAT_10023edc;
        }
        break;
      case 5:
        if (DAT_10023e9c != '\x01') {
          FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,&DAT_10023314);
          DAT_10023f60 = 1;
          local_8 = (HKEY__ *)FUN_1000bc0e(DAT_10023310 + 1);
          pbVar10 = (byte *)FUN_1000bc0e((char *)local_8);
          FUN_10009eff((byte *)local_d0c,(byte *)local_8);
          local_8 = local_d0c;
          pbVar11 = DAT_10024170;
          for (; *pbVar10 != 0; pbVar10 = pbVar10 + 1) {
            *pbVar11 = *pbVar10;
            pbVar11 = pbVar11 + 1;
          }
          *pbVar11 = 0;
          FUN_10009f15(DAT_10024170,DAT_10024170,0x7800);
          pbVar11 = DAT_10024170;
          lstrcpyA((LPSTR)local_a0c,DAT_10023310 + 1);
          if (local_a0c[0] != 0x25) {
            lstrcpyA((LPSTR)local_a0c,s__WIN___1001f414);
            lstrcatA((LPSTR)local_a0c,DAT_10023310 + 1);
          }
          FUN_10009eff(local_a0c,local_a0c);
          iVar15 = FUN_10012539((LPCSTR)local_a0c);
          if (((iVar15 != 0) && (DAT_10023e9c != '\x02')) && (DAT_10023edc == 0)) {
            FileWrite(DAT_1001f030,s_INI_New__Created_INI_1001f3fc,0x16);
          }
          bVar4 = *pbVar11;
          pbVar10 = pbVar11;
          if (bVar4 == 0) {
            BVar12 = WritePrivateProfileStringA
                               ((LPCSTR)local_8,(LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)local_a0c);
            uVar2 = DAT_10023edc;
            if (BVar12 == 0) {
              FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,&DAT_1001f3f8);
              uVar2 = DAT_10023edc;
            }
          }
          else {
            do {
              while (((local_c = pbVar10, bVar4 != 0 && (bVar4 != 0x3d)) && (bVar4 != 0xd))) {
                pbVar10 = pbVar11 + 1;
                pbVar11 = pbVar11 + 1;
                bVar4 = *pbVar10;
                pbVar10 = local_c;
              }
              if (*pbVar11 == 0x3d) {
                *pbVar11 = 0;
                pbVar10 = pbVar11 + 1;
                for (pbVar11 = pbVar10; (*pbVar11 != 0 && (*pbVar11 != 0xd)); pbVar11 = pbVar11 + 1)
                {
                }
LAB_10004209:
                if (*pbVar11 == 0xd) {
                  *pbVar11 = 0;
                  do {
                    do {
                      pbVar1 = pbVar11 + 1;
                      pbVar11 = pbVar11 + 1;
                    } while (*pbVar1 == 10);
                  } while (*pbVar1 == 0xd);
                }
              }
              else {
                if (*pbVar11 == 0xd) {
                  pbVar10 = &DAT_10023314;
                  goto LAB_10004209;
                }
                pbVar10 = &DAT_10023314;
              }
              GetPrivateProfileStringA
                        ((LPCSTR)local_8,(LPCSTR)local_c,&DAT_10023314,(LPSTR)local_60c,0x200,
                         (LPCSTR)local_a0c);
              BVar12 = WritePrivateProfileStringA
                                 ((LPCSTR)local_8,(LPCSTR)local_c,
                                  (LPCSTR)(-(uint)(*pbVar10 != 0) & (uint)pbVar10),(LPCSTR)local_a0c
                                 );
              if (BVar12 == 0) {
                FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,&DAT_1001f3f8);
              }
              FUN_1000aef7((LPCSTR)local_a0c,(LPCSTR)local_8,(char *)local_c,(char *)local_60c,
                           (char *)pbVar10);
              bVar4 = *pbVar11;
              uVar2 = DAT_10023edc;
              pbVar10 = pbVar11;
            } while (bVar4 != 0);
          }
        }
        break;
      case 6:
        FUN_1000457e();
        uVar2 = DAT_10023edc;
        break;
      case 7:
        uVar14 = FUN_100155a0((byte *)(DAT_10023310 + 1));
        goto LAB_10003bb5;
      case 8:
        if (DAT_10023310[1] != '\0') {
          DAT_10023f48 = DAT_10023f48 - 1;
          DAT_10023310 = *(char **)(DAT_10023ee8 + (uint)DAT_10023f48 * 4);
          DAT_10023f00 = 0;
          return 0;
        }
        break;
      case 9:
        if ((DAT_10023310[1] & 4U) != 0) {
          FUN_1000bb6a();
        }
        uVar14 = FUN_10014e23((int *)&DAT_10023310,DAT_10023ee8,(HMODULE)&DAT_10023f48,FUN_1000a082,
                              DAT_100238d8);
        goto LAB_10003bb5;
      case 10:
        iVar15 = FUN_1001435d(local_d0c,local_40c);
LAB_10003d6b:
        uVar2 = DAT_10023edc;
        if (iVar15 != 0) {
          return 0xfffffffe;
        }
        break;
      case 0xb:
        if ((DAT_10023e9c != '\x01') || ((DAT_10023310[1] & 1U) != 0)) {
          FUN_10009eff(local_40c,(byte *)(DAT_10023310 + 2));
          if ((DAT_10023310[1] & 8U) != 0) {
            lstrcpyA((LPSTR)local_a0c,(LPCSTR)local_40c);
            local_8 = (HKEY__ *)FUN_1000b94f((LPCSTR)local_a0c);
            *(byte *)&local_8->unused = 0;
            FUN_1001054d(&DAT_1001f3ec,(LPSTR)local_60c);
            lstrcatA((LPSTR)local_60c,&DAT_1001f314);
            iVar15 = lstrlenA((LPCSTR)local_a0c);
            iVar15 = FUN_1001b090(local_60c,(char *)local_a0c,iVar15);
            uVar14 = (uint)(iVar15 != 0);
            FUN_1001054d(&DAT_1001f3e8,(LPSTR)local_60c);
            lstrcatA((LPSTR)local_60c,&DAT_1001f314);
            iVar15 = lstrlenA((LPCSTR)local_a0c);
            iVar15 = FUN_1001b090(local_60c,(char *)local_a0c,iVar15);
            if (iVar15 == 0) {
              uVar14 = 0;
            }
          }
          uVar2 = DAT_10023edc;
          if (uVar14 != 0) {
            FUN_1000bb0e();
            FUN_10010336((LPCSTR)local_40c,(int)DAT_10023310[1],1);
            uVar2 = DAT_10023edc;
            if ((DAT_10023310[1] & 4U) != 0) {
              local_8 = (HKEY__ *)FUN_1000b94f((LPCSTR)local_40c);
              *(byte *)((int)&local_8[-1].unused + 3) = 0;
              RemoveDirectoryA((LPCSTR)local_40c);
              uVar2 = DAT_10023edc;
            }
          }
        }
        break;
      case 0xc:
        uVar14 = FUN_1000a0df();
LAB_10003bb5:
        uVar2 = DAT_10023edc;
        if (uVar14 != 0) {
          return uVar14;
        }
        break;
      case 0xd:
switchD_10003aac_caseD_d:
        bVar3 = FUN_1000a082();
        uVar2 = DAT_10023edc;
        if (CONCAT31(extraout_var,bVar3) != 0) {
switchD_10003ba9_caseD_18:
          return 0xffffffff;
        }
        break;
      case 0xf:
        if (DAT_10023e9c != '\x01') {
          DAT_10023e3c = (HCONV)0x0;
          if (DAT_1002391c != 0) {
            pHVar13 = DdeCreateStringHandleA(DAT_1002391c,s_PROGMAN_1001f3f0,0x3ec);
            DAT_10023e3c = DdeConnect(DAT_1002391c,pHVar13,pHVar13,(PCONVCONTEXT)0x0);
            DdeFreeStringHandle(DAT_1002391c,pHVar13);
          }
          uVar2 = DAT_10023edc;
          if (((byte)DAT_100238dc & 4) != 0) {
            pHVar16 = (HWND)0xffffffff;
            goto LAB_10003b7d;
          }
        }
      }
switchD_10003aac_caseD_2:
      DAT_10023edc = uVar2;
      UpdateWindow(DAT_100238d8);
      UpdateScreen(0);
      FUN_10009ea4();
    } while (*(int *)(DAT_1002392c + 0x1c) == 0);
    if ((*(int *)(DAT_1002392c + 0x1c) == 0) && (*(char *)(DAT_1002392c + 0x20) == '\0')) {
      return 0;
    }
  }
  return 0xfffffffe;
}


