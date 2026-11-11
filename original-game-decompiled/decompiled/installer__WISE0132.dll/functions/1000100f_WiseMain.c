
/* ==== WiseMain @ 1000100f ==== 
 * signature: undefined4 __stdcall WiseMain(undefined4 * param_1, LPCSTR param_2, int * param_3, byte * param_4, byte * param_5)
 * body: 1000100f-10002638
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 WiseMain(undefined4 *param_1,LPCSTR param_2,int *param_3,byte *param_4,byte *param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  BOOL BVar4;
  HBITMAP pHVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  LPCSTR lpString2;
  HANDLE pvVar7;
  HWND hWndParent;
  UINT UVar8;
  INT_PTR IVar9;
  int iVar10;
  int iVar11;
  LPCSTR pCVar12;
  char *pcVar13;
  BYTE *pBVar14;
  int iVar15;
  undefined4 *puVar16;
  char *pcVar17;
  LPCSTR pCVar18;
  code *pcVar19;
  LPARAM dwInitParam;
  char *pcStack_2a8;
  HSZ pHStack_2a4;
  uint uStack_2a0;
  WNDCLASSA local_29c;
  tagMSG tStack_274;
  LOGBRUSH LStack_258;
  tagOFNA atStack_24c [3];
  CHAR aCStack_100 [256];
  
                    /* 0x100f  14  WiseMain */
  *param_3 = 1;
  DAT_1002392c = param_1;
  DAT_100238d8 = (HWND)*param_1;
  iVar10 = 0;
  DAT_1002403c = (HINSTANCE)param_1[1];
  DAT_10023f3c = param_1[9];
  DAT_10023f44 = param_1[10];
  DAT_100238dc = param_1[0xd];
  DAT_10023fa8 = param_1[0x22];
  DAT_100240c0 = param_1[0x11];
  local_29c.style = 0;
  local_29c.lpfnWndProc = WizardDlg;
  local_29c.cbClsExtra = 0;
  local_29c.cbWndExtra = 0;
  local_29c.hInstance = DAT_10024178;
  BVar4 = IsWindowVisible(DAT_100238d8);
  if (BVar4 == 0) {
    local_29c.hIcon = LoadIconA(DAT_1002403c,&DAT_0000006c);
  }
  else {
    local_29c.hIcon = (HICON)0x0;
  }
  local_29c.hCursor = (HCURSOR)0x0;
  local_29c.hbrBackground = (HBRUSH)0x10;
  local_29c.lpszMenuName = (LPCSTR)0x0;
  local_29c.lpszClassName = s_GLBSWizard_1001f398;
  RegisterClassA(&local_29c);
  GetModuleFileNameA(DAT_1002403c,(LPSTR)&atStack_24c[0].pvReserved,0x100);
  if ((char)atStack_24c[0].pvReserved < 'C') {
    DAT_1001f038 = 0;
  }
  DAT_10024170 = (HSZ)FUN_10015d50(0x7800);
  DAT_10023e94 = (undefined *)FUN_10015d50(0x7800);
  DAT_10023e84 = (undefined *)FUN_10015d50(0x7800);
  DAT_10023efc = (LPSTR)FUN_10015d50(0x109a);
  DAT_100238f8 = (LPSTR)FUN_10015d50(64000);
  DAT_100238d4 = (char *)FUN_10015d50(0x100);
  *DAT_100238d4 = '\0';
  DAT_10024034 = (undefined1 *)FUN_10015d50(0x100);
  DAT_10023908 = (undefined1 *)FUN_10015d50(0x100);
  DAT_10023fb4 = (undefined1 *)FUN_10015d50(0x40);
  DAT_10023ef8 = (LPSTR)FUN_10015d50(0x200);
  DAT_10023f04 = (undefined *)FUN_10015d50(0x100);
  DAT_10023f20 = (LPCSTR)FUN_10015d50(0x100);
  DAT_10023eb0 = (undefined1 *)FUN_10015d50(0x100);
  *DAT_10023eb0 = 0;
  DAT_10023fa4 = (undefined *)FUN_10015d50(0x100);
  DAT_1002416c = (undefined *)FUN_10015d50(0x100);
  DAT_10023f08 = (undefined *)FUN_10015d50(0x100);
  DAT_10024050 = (int *)FUN_10015d50(0x200);
  _memset(DAT_10024050,0,0x200);
  DAT_10023ee8 = (undefined *)FUN_10015d50(0x80);
  *DAT_10023ef8 = '\0';
  *DAT_10023908 = 0;
  *DAT_10024034 = 0;
  DAT_10023ed4 = (undefined *)FUN_10015d50(0x700);
  _memset(DAT_10023ed4,0,0x700);
  DAT_100239a4 = (undefined *)FUN_10015d50(0x104);
  DAT_10023904 = (undefined *)FUN_10015d50(0x104);
  DAT_10023f54 = (undefined *)FUN_10015d50(0x104);
  DAT_1002417c = (undefined *)FUN_10015d50(0x1000);
  iVar11 = 0;
  puVar16 = &DAT_100238e0;
  do {
    pHVar5 = LoadBitmapA(DAT_10024178,(LPCSTR)(uint)(byte)(&DAT_1001f0b8)[iVar11]);
    *puVar16 = pHVar5;
    puVar16 = puVar16 + 1;
    iVar11 = iVar11 + 1;
  } while ((int)puVar16 < 0x100238f4);
  iVar11 = 0;
  puVar16 = &DAT_10023fc0;
  do {
    pHVar5 = LoadBitmapA(DAT_10024178,(LPCSTR)(uint)(byte)(&DAT_1001f0c0)[iVar11]);
    *puVar16 = pHVar5;
    puVar16 = puVar16 + 1;
    iVar11 = iVar11 + 1;
  } while ((int)puVar16 < 0x10023fcc);
  FUN_10011ff3();
  uVar6 = DAT_100238dc >> 9 & 3;
  if ((uVar6 == 2) || ((DAT_10023930 != 0 && (uVar6 == 1)))) {
    DAT_10023e90 = 1;
  }
  if ((DAT_100238dc & 0x10) != 0) {
    if (DAT_10024168 == 0) {
      _llseek(DAT_1002392c[6],DAT_1002392c[0x14],1);
    }
    else {
      bVar2 = FUN_1001404c(&DAT_10023e24,0,3);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        return 0;
      }
    }
  }
  if ((DAT_100238dc & 0x8000) != 0) {
    bVar2 = FUN_1001404c(&DAT_10024068,0x48,4);
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      return 0;
    }
    DAT_10023e38 = LoadLibraryA(DAT_10024068);
    if (DAT_10023e38 != (HMODULE)0x0) {
      DAT_10024054 = GetProcAddress(DAT_10023e38,&DAT_1001f394);
    }
    if (DAT_10024054 == (FARPROC)0x0) goto LAB_100013ed;
  }
  if (((DAT_100238dc & 0x20000) != 0) &&
     (bVar2 = FUN_1001404c(&DAT_10024190,0x4a,5), CONCAT31(extraout_var_01,bVar2) != 0)) {
    return 0;
  }
  if (DAT_1002392c[0x17] != 0) {
    bVar2 = false;
    bVar3 = FUN_1001404c(&DAT_10024058,0x4b,6);
    if (CONCAT31(extraout_var_02,bVar3) != 0) {
      return 0;
    }
    DAT_10024174 = LoadLibraryA(DAT_10024058);
    if ((DAT_10024174 != (HMODULE)0x0) &&
       (DAT_100238b4 = GetProcAddress(DAT_10024174,s_Update_1001f38c), DAT_100238b4 != (FARPROC)0x0)
       ) {
      bVar2 = true;
    }
    if (!bVar2) {
LAB_100013ed:
      FUN_1000b352(PTR_s_Internal_Error_1001f048);
      return 0;
    }
    _DAT_10024084 = DAT_100238d8;
    _DAT_100240ac = DAT_1002403c;
    DAT_10023f40 = (*DAT_100238b4)(0,0,&DAT_10024080,0,0,0);
  }
  if ((DAT_1002392c[0x18] != 0) &&
     (bVar2 = FUN_1001404c(&DAT_100238d0,0x4d,7), CONCAT31(extraout_var_03,bVar2) != 0)) {
    return 0;
  }
  if ((DAT_100238dc & 0x10) != 0) {
    if (DAT_100238b8 == 0) {
      _llseek(DAT_1002392c[6],DAT_1002392c[0x19],1);
    }
    else {
      bVar2 = FUN_1001404c(&DAT_10023e24,0,8);
      if (CONCAT31(extraout_var_04,bVar2) != 0) {
        return 0;
      }
    }
  }
  SetErrorMode(0x8000);
  pcVar17 = DAT_10023e24;
  if ((DAT_100238dc & 0x10) == 0) {
    pcVar17 = s_CTL3D32_DLL_1001f380;
  }
  DAT_10023928 = LoadLibraryA(pcVar17);
  if (DAT_10023928 != (HMODULE)0x0) {
    DAT_10023f24 = GetProcAddress(DAT_10023928,s_Ctl3dRegister_1001f370);
    DAT_10023ed0 = GetProcAddress(DAT_10023928,s_Ctl3dUnregister_1001f360);
    DAT_10023e28 = GetProcAddress(DAT_10023928,s_Ctl3dAutoSubclass_1001f34c);
    DAT_10023fcc = GetProcAddress(DAT_10023928,s_Ctl3dDlgFramePaint_1001f338);
    DAT_10024060 = GetProcAddress(DAT_10023928,s_Ctl3dSubclassDlgEx_1001f324);
  }
  if (DAT_10023f24 != (FARPROC)0x0) {
    iVar11 = (*DAT_10023f24)(DAT_1002403c);
    DAT_10023fb0 = (uint)(iVar11 == 0);
    if ((DAT_10024168 == 0) && (DAT_10023930 == 0)) {
      (*DAT_10023e28)(DAT_1002403c);
    }
    DAT_1001f034 = GetSysColor(0xf);
  }
  if ((DAT_10023f40 != 0) && (DAT_10024060 != (FARPROC)0x0)) {
    (*DAT_10024060)(DAT_10023f40,0x38);
  }
  if (((DAT_100238dc & 0x2000) != 0) &&
     (bVar2 = FUN_1001404c(&DAT_10023ec0,0,9), CONCAT31(extraout_var_05,bVar2) != 0)) {
    return 0;
  }
  bVar2 = FUN_1001404c(&DAT_10023f2c,0x5f,10);
  if (CONCAT31(extraout_var_06,bVar2) != 0) {
    return 0;
  }
  LStack_258.lbStyle = 1;
  DAT_10023934 = CreateBrushIndirect(&LStack_258);
  DAT_100241ec = LoadCursorA(DAT_10024178,&DAT_00000073);
  DAT_10023f0c = FUN_10013e57(DAT_1002392c[0x1d],&DAT_10024030);
  DAT_1002392c[0x23] = DAT_10023f0c;
  FUN_10013192(DAT_1002392c[6],(HANDLE)0x0,DAT_1002392c[0x1c],0);
  DAT_1002392c[0x23] = 0;
  lstrcpyA(DAT_10023efc,s__CMDLINE__1001f318);
  lstrcpyA(DAT_100238f8,param_2);
  pcVar17 = param_2;
  if (*param_2 != '/') goto LAB_100017ea;
  do {
    pcStack_2a8 = pcVar17 + 1;
    if (*pcStack_2a8 != '\0') {
      uVar6 = FUN_10015b60((int)*pcStack_2a8);
      pcVar13 = pcStack_2a8;
      if (uVar6 == 0x54) {
        DAT_10023e9c = 1;
      }
      else {
        uVar6 = FUN_10015b60((int)*pcStack_2a8);
        if (uVar6 == 0x58) {
          DAT_10023e9c = 3;
        }
        else {
          uVar6 = FUN_10015b60((int)*pcVar13);
          if (uVar6 == 0x5a) {
            DAT_10023e9c = 4;
          }
          else {
            uVar6 = FUN_10015b60((int)*pcVar13);
            if (uVar6 == 0x4d) {
              pcVar13 = pcVar17 + 2;
              if (pcVar17[2] == '=') {
                DAT_10024164 = (LPCSTR)FUN_10015d50(0x100);
                if (pcVar17[3] == '\"') {
                  lstrcpyA(DAT_10024164,pcVar17 + 4);
                  pCVar18 = FUN_100147fa(DAT_10024164,0x22);
                  if (pCVar18 != (LPCSTR)0x0) {
                    pcVar13 = pcVar17 + 3;
                    goto LAB_1000171e;
                  }
                }
                else {
                  lstrcpyA(DAT_10024164,pcVar17 + 3);
                  pCVar18 = FUN_100147fa(DAT_10024164,0x20);
                  pcVar13 = pcStack_2a8;
LAB_1000171e:
                  if (pCVar18 != (LPCSTR)0x0) {
                    *pCVar18 = '\0';
                    pcVar13 = pcVar13 + ((int)pCVar18 - (int)DAT_10024164);
                  }
                }
                pCVar18 = FUN_100147fa(DAT_10024164,0x5c);
                pcVar17 = pcVar13;
                if (pCVar18 == (LPCSTR)0x0) {
                  lstrcpyA((LPSTR)&atStack_24c[0].pvReserved,DAT_10024164);
                  GetModuleFileNameA(DAT_1002403c,DAT_10024164,0x100);
                  FUN_1000b94f(DAT_10024164);
                  lstrcpyA(DAT_10024164,(LPCSTR)&atStack_24c[0].pvReserved);
                }
              }
              else if (pcVar17[2] == '2') {
                DAT_100240c4 = (LPCSTR)FUN_10015d50(0x100);
                lstrcpyA(DAT_100240c4,pcVar17 + 4);
                pCVar18 = FUN_100147fa(DAT_100240c4,0x20);
                if (pCVar18 != (LPCSTR)0x0) {
                  *pCVar18 = '\0';
                  pcVar13 = pcVar13 + ((int)pCVar18 - (int)DAT_100240c4);
                }
                DAT_10024044 = 1;
                pcVar17 = pcVar13;
              }
              else {
                DAT_10023e9c = 2;
                pcVar17 = pcStack_2a8;
                if (*pcVar13 == '1') {
                  DAT_10023ea8 = 1;
                }
              }
            }
          }
        }
      }
      pcVar17 = pcVar17 + 2;
    }
LAB_100017ea:
    while( true ) {
      if (DAT_100200d4 < 2) {
        uVar6 = (byte)PTR_DAT_1001fec8[*pcVar17 * 2] & 8;
      }
      else {
        uVar6 = FUN_10015ac0((int)*pcVar17,8);
      }
      if (uVar6 == 0) break;
      pcVar17 = pcVar17 + 1;
    }
  } while (*pcVar17 == '/');
  *(undefined1 *)(DAT_10023fa8 + DAT_100240c0) = 0x3f;
  DAT_100238bc = _llseek(DAT_1002392c[6],0,1);
  if (DAT_10023e9c < 3) {
    pcVar17 = (char *)FUN_1000a7dc();
    if (pcVar17 == (char *)0x0) {
      if ((DAT_10023e9c != 1) && (DAT_10023e30 == 0)) {
        FUN_100039fd(DAT_10023f20,&DAT_1001f2f8);
        FUN_1000b39e(DAT_10023f20);
      }
      FUN_1001413e(1,-1);
      DAT_1002392c[5] = 0;
      UVar8 = DdeInitializeA(&DAT_1002391c,DDECallback,0x190000,0);
      if (UVar8 == 0) {
        pcVar13 = DAT_100240c4;
        if (DAT_100240c4 == (LPCSTR)0x0) {
          pcVar13 = s_WiseInst_1001f2ec;
        }
        pHStack_2a4 = DdeCreateStringHandleA(DAT_1002391c,pcVar13,0x3ec);
        DdeNameService(DAT_1002391c,pHStack_2a4,(HSZ)0x0,1);
      }
      else {
        DAT_1002391c = 0;
      }
      while (((DAT_1002392c[7] == 0 && (*(char *)(DAT_1002392c + 8) == '\0')) &&
             (pcVar17 == (char *)0x0))) {
        pcVar17 = (char *)FUN_10003a59();
        if (pcVar17 != (char *)0x0) {
          if (DAT_100238cc != (HWND)0x0) {
            DestroyWindow(DAT_100238cc);
            DAT_100238cc = (HWND)0x0;
          }
          if (DAT_10023ee0 == '\0') {
            if (pcVar17 == (char *)0xffffffff) {
              if (DAT_1002392c[0x1f] != 0) {
                pcVar17 = (char *)0x0;
                DAT_10023310 = DAT_10023fa8 + DAT_1002392c[0x1f];
                DAT_10023ee0 = '\x01';
              }
            }
            else if ((pcVar17 == (char *)0xfffffffe) && (DAT_1002392c[0x20] != 0)) {
              pcVar17 = (char *)0x0;
              uStack_2a0 = (uint)*(byte *)(DAT_1002392c + 8);
              DAT_1002392c[7] = 0;
              *(undefined1 *)(DAT_1002392c + 8) = 0;
              DAT_10023ee0 = '\x02';
              DAT_10023310 = DAT_1002392c[0x20] + DAT_10023fa8;
              pcStack_2a8 = (char *)0xfffffffe;
            }
          }
        }
      }
      if (DAT_10023ee0 == '\x02') {
        *(undefined1 *)(DAT_1002392c + 8) = (undefined1)uStack_2a0;
        pcVar17 = pcStack_2a8;
      }
    }
  }
  else {
    DAT_10023ee4 = (undefined *)FUN_10015d50(0xb000);
    pcStack_2a8 = (char *)(uint)DAT_10023e9c;
    DAT_10023e9c = 0;
    iVar11 = FUN_1000be50();
    if (iVar11 == 0) {
      DAT_10023e9c = (byte)pcStack_2a8;
      UpdateScreen(0);
      for (pCVar18 = param_2 + 2; *pCVar18 == ' '; pCVar18 = pCVar18 + 1) {
      }
      if (*pCVar18 == '\0') {
        *DAT_10023fb4 = 0;
        lstrcpyA(DAT_10023ef8,*(LPCSTR *)(DAT_100240b8 + 0x4c));
        dwInitParam = 0;
        pcVar19 = LanguageDlg;
        hWndParent = (HWND)FUN_100157cf();
        IVar9 = DialogBoxParamA(DAT_10024178,&DAT_0000006b,hWndParent,pcVar19,dwInitParam);
        pcVar17 = DAT_10023eec;
        if (IVar9 == 1) {
          DAT_10023eec = (char *)0x0;
          _memset(atStack_24c,0,0x4c);
          atStack_24c[0].hwndOwner = DAT_100238d8;
          atStack_24c[0].hInstance = DAT_1002403c;
          atStack_24c[0].lpstrFile = (LPSTR)&atStack_24c[0].pvReserved;
          atStack_24c[0].lStructSize = 0x4c;
          atStack_24c[0].nMaxFile = 0x100;
          atStack_24c[0].Flags = 0x806;
          atStack_24c[0].lpstrFilter = s_All_files_______1001f2fc;
          pHStack_2a4 = DAT_10024170;
          pcStack_2a8 = (char *)0x0;
          if (0 < (int)pcVar17) {
            do {
              pCVar18 = DAT_10023ee4 + pHStack_2a4[(int)pcStack_2a8].unused * 0x2c;
              iVar11 = FUN_1001254f(pCVar18[0x28]);
              if (iVar11 == 0) {
                lstrcpyA(atStack_24c[0].lpstrFile,pCVar18);
                BVar4 = GetSaveFileNameA(atStack_24c);
                if (BVar4 != 0) {
                  pvVar7 = (HANDLE)FUN_1001223a(atStack_24c[0].lpstrFile,1,1);
                  if (pvVar7 == (HANDLE)0xffffffff) {
                    FUN_10011024(atStack_24c[0].lpstrFile,1);
                  }
                  else {
                    DAT_1002392c[2] = *(int *)(pCVar18 + 0x14) + DAT_100238bc;
                    FUN_1000bde0();
                    FUN_10013192(DAT_1002392c[6],pvVar7,*(undefined4 *)(pCVar18 + 0x18),0);
                    FUN_10012318(pvVar7,(WORD)*(undefined4 *)(pCVar18 + 0x20),
                                 (WORD)*(undefined4 *)(pCVar18 + 0x24));
                    CloseHandle(pvVar7);
                  }
                }
              }
              else {
                pcStack_2a8 = pcVar17;
              }
              pcStack_2a8 = pcStack_2a8 + 1;
            } while ((int)pcStack_2a8 < (int)pcVar17);
          }
        }
      }
      else {
        pcStack_2a8 = (char *)0x0;
        if (0 < (int)DAT_10023eb8) {
          do {
            pCVar12 = DAT_10023ee4 + (int)pcStack_2a8 * 0x2c;
            iVar11 = FUN_1001254f(pCVar12[0x28]);
            if (iVar11 == 0) {
              lstrcpyA((LPSTR)&atStack_24c[0].pvReserved,pCVar18);
              lstrcatA((LPSTR)&atStack_24c[0].pvReserved,&DAT_1001f314);
              lpString2 = FUN_1000b94f(pCVar12);
              lstrcatA((LPSTR)&atStack_24c[0].pvReserved,lpString2);
              if (pcStack_2a8 == (char *)0x0) {
                FUN_1000b5ca((LPCSTR)&atStack_24c[0].pvReserved);
              }
              pvVar7 = (HANDLE)FUN_1001223a((LPCSTR)&atStack_24c[0].pvReserved,1,1);
              if (pvVar7 == (HANDLE)0xffffffff) {
                FUN_10011024((LPCSTR)&atStack_24c[0].pvReserved,1);
                DAT_1002392c[7] = 1;
              }
              else {
                DAT_1002392c[2] = *(int *)(pCVar12 + 0x14) + DAT_100238bc;
                FUN_1000bde0();
                FUN_10013192(DAT_1002392c[6],pvVar7,*(undefined4 *)(pCVar12 + 0x18),0);
                FUN_10012318(pvVar7,(WORD)*(undefined4 *)(pCVar12 + 0x20),
                             (WORD)*(undefined4 *)(pCVar12 + 0x24));
                CloseHandle(pvVar7);
              }
            }
            else {
              pcStack_2a8 = DAT_10023eb8;
            }
            pcStack_2a8 = pcStack_2a8 + 1;
          } while ((int)pcStack_2a8 < (int)DAT_10023eb8);
        }
      }
    }
    FUN_10015a50(DAT_10023ee4);
    pcVar17 = (char *)0xffffffff;
  }
  if ((DAT_100239a8 != 0) || (DAT_100241e0 != 0)) {
    wsprintfA((LPSTR)&atStack_24c[0].pvReserved,s__s__s_1001f2e4,
              PTR_s_Software_Wise_Solutions_WAMUser_1001f054,DAT_10023f30);
    for (pcVar13 = DAT_10023f30; *pcVar13 != '\0'; pcVar13 = pcVar13 + 1) {
    }
    pBVar14 = (BYTE *)(pcVar13 + 1);
    if (*pBVar14 != '\0') {
      iVar11 = lstrlenA((LPCSTR)pBVar14);
      FUN_10015897((HKEY)&atStack_24c[0].pvReserved,s_Display_1001f2dc,0,pBVar14,iVar11 + 1);
    }
    for (; *pBVar14 != '\0'; pBVar14 = pBVar14 + 1) {
    }
    pBVar14 = pBVar14 + 1;
    if (*pBVar14 != '\0') {
      iVar11 = lstrlenA((LPCSTR)pBVar14);
      FUN_10015897((HKEY)&atStack_24c[0].pvReserved,s_Local_1001f2d4,0,pBVar14,iVar11 + 1);
      for (; *pBVar14 != '\0'; pBVar14 = pBVar14 + 1) {
      }
    }
    pBVar14 = pBVar14 + 1;
    if (*pBVar14 != '\0') {
      iVar11 = lstrlenA((LPCSTR)pBVar14);
      FUN_10015897((HKEY)&atStack_24c[0].pvReserved,&DAT_1001f2cc,0,pBVar14,iVar11 + 1);
      for (; *pBVar14 != '\0'; pBVar14 = pBVar14 + 1) {
      }
    }
    pcStack_2a8 = (char *)(uint)pBVar14[1];
    FUN_10015897((HKEY)&atStack_24c[0].pvReserved,s_Version_1001f2c4,3,(BYTE *)&pcStack_2a8,4);
    pcStack_2a8 = (char *)(DAT_10024198 >> 3 & 3);
    FUN_10015897((HKEY)&atStack_24c[0].pvReserved,s_Prompt_1001f2bc,3,(BYTE *)&pcStack_2a8,4);
  }
  if (DAT_1002392c[7] != 0) {
    pcVar17 = (char *)0xfffffffe;
  }
  if (*(char *)(DAT_1002392c + 8) != '\0') {
    pcVar17 = PTR_s_Internal_Error_1001f048;
    if (DAT_100240b8 != (undefined *)0x0) {
      if (*(char *)(DAT_1002392c + 8) == '\x01') {
        pcVar17 = *(char **)(DAT_100240b8 + 8);
      }
      else {
        pcVar17 = *(char **)(DAT_100240b8 + 0x1c);
      }
    }
    FUN_1000b352(pcVar17);
    pcVar17 = (char *)0xfffffffe;
  }
  if (pcVar17 == (char *)0xffffffff) {
LAB_10001e58:
    FUN_10006a8b();
  }
  else {
    if (DAT_100240b8 != (undefined *)0x0) {
      pCVar18 = DAT_100238d4;
      if (*DAT_100238d4 == '\0') {
        if (*(char *)(DAT_1002392c + 8) == '\0') {
          pCVar18 = *(LPCSTR *)(DAT_100240b8 + 4);
        }
        else if (*(char *)(DAT_1002392c + 8) == '\x01') {
          pCVar18 = *(LPCSTR *)(DAT_100240b8 + 8);
        }
        else {
          pCVar18 = *(LPCSTR *)(DAT_100240b8 + 0x1c);
        }
      }
      FUN_10002639(pCVar18);
    }
    if (pcVar17 == (char *)0xffffffff) goto LAB_10001e58;
  }
  if ((DAT_10023fac != (HWND)0x0) && (EnableWindow(DAT_100238d8,1), DAT_100238b4 == (FARPROC)0x0)) {
    DestroyWindow(DAT_10023fac);
  }
  DAT_10023fac = (HWND)0x0;
  _lclose(DAT_1002392c[6]);
  FUN_100139c9();
  DeleteFileA(aCStack_100);
  if (DAT_10023f1c != 0) {
    sndPlaySoundA((LPCSTR)0x0,0);
  }
  FUN_1001413e(0,(int)pcVar17);
  if (DAT_10023f60 != 0) {
    SendMessageTimeoutA((HWND)&DAT_0000ffff,0x1a,0,0x1001f2b0,2,5000,&uStack_2a0);
    PostMessageA((HWND)&DAT_0000ffff,0x1a,0,0);
  }
  pcStack_2a8 = (char *)0x1;
  if (DAT_10023e9c != 1) {
    pcVar17 = FUN_1000ba71(s__RESTART__1001f2a4);
    if (*pcVar17 == 'I') {
      DAT_100238dc = DAT_100238dc & 0xffffdfff;
      DAT_10023900 = 0;
    }
    if (DAT_10023900 == 0) {
      cVar1 = *pcVar17;
      if ((cVar1 == 'S') || (cVar1 == 'W')) {
        if ((DAT_100238dc & 0x20000000) == 0) {
          DAT_1002392c[0xc] = 0;
        }
        IVar9 = FUN_1001277f((HWND)0x0,*(char **)(DAT_100240b8 + 0x5c),
                             *(undefined4 *)(DAT_100240b8 + 0x48),0x80);
        if (IVar9 == 1) {
          if ((DAT_100238b8 == 0) || (*pcVar17 != 'S')) {
            *param_3 = (*pcVar17 != 'W') + 0x42;
          }
          else {
            lstrcpyA((LPSTR)param_4,DAT_10023f2c);
            FUN_10009eff(param_4,param_4);
            FUN_10012386((LPCSTR)param_4,0);
            pcStack_2a8 = (char *)0x0;
          }
        }
      }
      else if (cVar1 == 'E') {
        do {
          pcVar17 = pcVar17 + 1;
          if (DAT_100200d4 < 2) {
            uVar6 = (byte)PTR_DAT_1001fec8[*pcVar17 * 2] & 8;
          }
          else {
            uVar6 = FUN_10015ac0((int)*pcVar17,8);
          }
        } while (uVar6 != 0);
        lstrcpyA((LPSTR)param_5,&DAT_1001f27c);
        lstrcatA((LPSTR)param_5,pcVar17);
        pCVar18 = (LPCSTR)FUN_10015990((byte *)s_COMSPEC_1001f280);
        if (pCVar18 != (LPCSTR)0x0) {
          lstrcpyA((LPSTR)param_4,pCVar18);
        }
      }
    }
    else {
      if ((DAT_100238dc & 0x20000000) == 0) {
        DAT_1002392c[0xc] = 0;
      }
      IVar9 = FUN_1001277f((HWND)0x0,*(char **)(DAT_100240b8 + 0x5c),
                           *(undefined4 *)(DAT_100240b8 + 0x48),-(uint)(DAT_100241e8 != 0) & 0x80);
      if (IVar9 == 1) {
        lstrcpyA((LPSTR)param_5,s__C__WIN___MSRSTRT_EXE_1001f28c);
        FUN_10009eff(param_5,param_5);
        if (*pcVar17 == 'E') {
          lstrcatA((LPSTR)param_5,&DAT_1001f288);
          lstrcatA((LPSTR)param_5,pcVar17 + 1);
        }
        pCVar18 = (LPCSTR)FUN_10015990((byte *)s_COMSPEC_1001f280);
        if (pCVar18 != (LPCSTR)0x0) {
          lstrcpyA((LPSTR)param_4,pCVar18);
        }
      }
      else {
        DAT_10023900 = 0;
      }
    }
  }
  pcVar19 = DeleteFileA_exref;
  if ((DAT_10023900 != 0) && ((DAT_100238dc & 0x2000) != 0)) {
    if (DAT_10023ec0 == (LPCSTR)0x0) goto LAB_1000215d;
    if ((DAT_10024168 == 0) && (DAT_100238b8 == 0)) {
      lstrcpyA((LPSTR)&atStack_24c[0].pvReserved,s__WIN___MSRSTRT_EXE_1001f268);
      FUN_10009eff((byte *)&atStack_24c[0].pvReserved,(byte *)&atStack_24c[0].pvReserved);
      pcVar19 = DeleteFileA_exref;
      DeleteFileA((LPCSTR)&atStack_24c[0].pvReserved);
      MoveFileA(DAT_10023ec0,(LPCSTR)&atStack_24c[0].pvReserved);
      goto LAB_1000215d;
    }
  }
  if (DAT_10023ec0 != (LPCSTR)0x0) {
    DeleteFileA(DAT_10023ec0);
  }
LAB_1000215d:
  if ((pcStack_2a8 != (char *)0x0) && (DAT_10023f2c != (LPCSTR)0x0)) {
    (*pcVar19)(DAT_10023f2c);
  }
  if (DAT_10023e9c == 4) {
    *param_3 = 0;
  }
  if (DAT_1002391c != 0) {
    DdeNameService(DAT_1002391c,pHStack_2a4,(HSZ)0x0,2);
    DdeFreeStringHandle(DAT_1002391c,pHStack_2a4);
  }
  FUN_1001054d(s_HELPFILE_1001f25c,(LPSTR)&atStack_24c[0].pvReserved);
  if ((char)atStack_24c[0].pvReserved != '\0') {
    WinHelpA(DAT_100238d8,(LPCSTR)&atStack_24c[0].pvReserved,2,0);
  }
  FUN_1000b578(0xfa,1);
  if (DAT_10024120 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_10024120);
  }
  if (DAT_10023940 != (HMODULE)0x0) {
    (*DAT_100238f4)(0,0,0,DAT_100238d8,0,0,0,0,0,0);
    FreeLibrary(DAT_10023940);
  }
  if (DAT_1002391c != 0) {
    DdeUninitialize(DAT_1002391c);
  }
  if (DAT_10024058 != (LPCSTR)0x0) {
    (*DAT_100238b4)(3,0,&DAT_10024080,0,0,0);
    FreeLibrary(DAT_10024174);
    (*pcVar19)(DAT_10024058);
    FUN_10015a50(DAT_10024058);
  }
  if ((DAT_10023ed0 != (FARPROC)0x0) && (DAT_10023fb0 == 0)) {
    (*DAT_10023ed0)(DAT_1002403c);
  }
  if (DAT_10023928 != (HMODULE)0x0) {
    FreeLibrary(DAT_10023928);
  }
  DestroyWindow(DAT_100238d8);
  while (BVar4 = GetMessageA(&tStack_274,(HWND)0x0,0,0), BVar4 != 0) {
    TranslateMessage(&tStack_274);
    DispatchMessageA(&tStack_274);
  }
  if (DAT_10023e24 != (LPCSTR)0x0) {
    (*pcVar19)(DAT_10023e24);
    FUN_10015a50(DAT_10023e24);
  }
  if (DAT_10023e38 != (HMODULE)0x0) {
    FreeLibrary(DAT_10023e38);
  }
  if (DAT_10024068 != (LPCSTR)0x0) {
    (*pcVar19)(DAT_10024068);
    FUN_10015a50(DAT_10024068);
  }
  if (DAT_10024190 != (undefined *)0x0) {
    (*pcVar19)(DAT_10024190);
    FUN_10015a50(DAT_10024190);
  }
  pcVar17 = FUN_1000ba71(s_BDEINS32PATH__1001f24c);
  if (*pcVar17 != '\0') {
    FUN_10009eff((byte *)&atStack_24c[0].pvReserved,(byte *)s__TEMP__IDAPINST_DLL_1001f238);
    (*pcVar19)(&atStack_24c[0].pvReserved);
  }
  iVar11 = 0;
  do {
    if (*(int *)(DAT_10023ed4 + iVar11) != 0) {
      FUN_100139a5((undefined4 *)(DAT_10023ed4 + iVar11));
    }
    iVar11 = iVar11 + 0x38;
  } while (iVar11 < 0x700);
  if ((HGDIOBJ)DAT_1002392c[0xf] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)DAT_1002392c[0xf]);
  }
  if (DAT_10023f28 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_10023f28);
  }
  if (DAT_10023ec4 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_10023ec4);
  }
  if (DAT_10023f64 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_10023f64);
  }
  if (DAT_10023ea0 != (HMODULE)0x0) {
    FreeLibrary(DAT_10023ea0);
  }
  if (DAT_10023938 != (HMODULE)0x0) {
    FreeLibrary(DAT_10023938);
  }
  if (DAT_100238d0 != (undefined *)0x0) {
    (*pcVar19)(DAT_100238d0);
    FUN_10015a50(DAT_100238d0);
  }
  if (DAT_10023ef0 != (undefined *)0x0) {
    (*pcVar19)(DAT_10023ef0);
    FUN_10015a50(DAT_10023ef0);
  }
  puVar16 = &DAT_100238e0;
  do {
    DeleteObject((HGDIOBJ)*puVar16);
    puVar16 = puVar16 + 1;
  } while ((int)puVar16 < 0x100238f4);
  puVar16 = &DAT_10023fc0;
  do {
    DeleteObject((HGDIOBJ)*puVar16);
    puVar16 = puVar16 + 1;
  } while ((int)puVar16 < 0x10023fcc);
  if (DAT_100238c8 != 0) {
    FUN_10013e71(DAT_10024064);
  }
  FUN_10013e71((HGLOBAL)DAT_1002392c[0x21]);
  if (-1 < DAT_1001f0b0) {
    (*pcVar19)(DAT_1002416c);
  }
  FUN_10015a50((undefined *)DAT_10024170);
  FUN_10015a50(DAT_10023e94);
  FUN_10015a50(DAT_10023e84);
  FUN_10015a50(DAT_10023efc);
  FUN_10015a50(DAT_100238f8);
  FUN_10015a50(DAT_100238d4);
  FUN_10015a50(DAT_10024034);
  FUN_10015a50(DAT_10023908);
  FUN_10015a50(DAT_10023fb4);
  FUN_10015a50(DAT_10023ef8);
  if (DAT_10023ed8 != (undefined *)0x0) {
    FUN_10015a50(DAT_10023ed8);
  }
  if (DAT_10024164 != (LPCSTR)0x0) {
    FUN_10015a50(DAT_10024164);
  }
  FUN_10015a50(DAT_10023eb0);
  FUN_10015a50(DAT_10023fa4);
  FUN_10015a50(DAT_1002416c);
  FUN_10015a50(DAT_10023f08);
  FUN_10015a50(DAT_10023f20);
  FUN_10015a50(DAT_10023f04);
  FUN_10015a50(DAT_10023ed4);
  FUN_10015a50(DAT_100239a4);
  FUN_10015a50(DAT_10023904);
  FUN_10015a50(DAT_10023f54);
  FUN_10015a50(DAT_10023ee8);
  FUN_10015a50(DAT_1002417c);
  FUN_10015a50(DAT_100240c4);
  if (DAT_10023e8c != 0) {
    FUN_10013e71(DAT_10024160);
  }
  FUN_10013e71(DAT_10024030);
  if (*DAT_10024050 != 0) {
    iVar11 = *DAT_10024050;
    iVar15 = 0;
    do {
      (*pcVar19)(iVar11);
      FUN_10015a50(*(undefined **)((int)DAT_10024050 + iVar15));
      iVar15 = iVar15 + 4;
      iVar11 = *(int *)((int)DAT_10024050 + iVar15);
    } while (iVar11 != 0);
  }
  FUN_10015a50((undefined *)DAT_10024050);
  if (DAT_100240b8 != (undefined *)0x0) {
    do {
      FUN_10015a50(*(undefined **)(DAT_100240b8 + iVar10));
      iVar10 = iVar10 + 4;
    } while (iVar10 < 0xd0);
    FUN_10015a50(DAT_100240b8);
  }
  DeleteObject(DAT_10023934);
  DestroyCursor(DAT_100241ec);
  return tStack_274.wParam;
}


