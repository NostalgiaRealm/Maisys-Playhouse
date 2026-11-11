/* Ghidra 12.1.4 generated C-like pseudocode for WiseScript.bin.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

/* ==== FUN_10001000 @ 10001000 ==== 
 * signature: undefined4 __stdcall FUN_10001000(undefined4 param_1)
 * body: 10001000-1000100e
 */

undefined4 FUN_10001000(undefined4 param_1)

{
  DAT_10024178 = param_1;
  return 1;
}



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



/* ==== FUN_10002639 @ 10002639 ==== 
 * signature: undefined __cdecl FUN_10002639(LPCSTR param_1)
 * body: 10002639-10002677
 */

void __cdecl FUN_10002639(LPCSTR param_1)

{
  DWORD DVar1;
  
  if ((DAT_1001f030 != (HANDLE)0xffffffff) && (DAT_10023edc == 0)) {
    DVar1 = lstrlenA(param_1);
    FileWrite(DAT_1001f030,param_1,DVar1);
    FileWrite(DAT_1001f030,&DAT_1001f3a4,2);
  }
  return;
}



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



/* ==== CopyDlg @ 10002e3e ==== 
 * signature: undefined4 __stdcall CopyDlg(HWND param_1, int param_2)
 * body: 10002e3e-100030dc
 */

undefined4 CopyDlg(HWND param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  HWND pHVar2;
  HDC hdc;
  HBRUSH hbr;
  uint uVar3;
  uint uVar4;
  LPCSTR lpString;
  tagPAINTSTRUCT local_84;
  RECT local_44;
  tagRECT local_34;
  tagSIZE local_24;
  CHAR local_1c [8];
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
                    /* 0x2e3e  1  CopyDlg */
  if (param_2 == 0xf) {
    hdc = BeginPaint(param_1,&local_84);
    uVar3 = DAT_100238c0 - DAT_10023f58;
    uVar4 = DAT_100238c4 - DAT_10023f5c;
    FUN_10013ca6(&local_c,&local_10);
    local_8 = uVar3 & 0xffff;
    local_34.left = DAT_10023f58;
    local_34.right = ((local_c * local_8) / local_10 & 0xffff) + DAT_10023f58;
    local_34.top = DAT_10023f5c;
    local_34.bottom = DAT_100238c4;
    wsprintfA(local_1c,s__3d___1001f3a8,(uint)DAT_1002393c);
    uVar3 = lstrlenA(local_1c);
    uVar3 = uVar3 & 0xffff;
    GetTextExtentPointA(hdc,local_1c,uVar3,&local_24);
    SetBkColor(hdc,0x7f0000);
    SetTextColor(hdc,DAT_1001f034);
    local_14 = uVar4 & 0xffff;
    ExtTextOutA(hdc,(int)(local_8 - local_24.cx) / 2 + DAT_10023f58,
                (int)(local_14 - local_24.cy) / 2 + DAT_10023f5c,6,&local_34,local_1c,uVar3,
                (INT *)0x0);
    SetBkColor(hdc,DAT_1001f034);
    SetTextColor(hdc,0x7f0000);
    local_44.top = local_34.top;
    local_44.left = local_34.right + 1;
    local_44.bottom = local_34.bottom;
    local_44.right = DAT_100238c0;
    ExtTextOutA(hdc,(int)(local_8 - local_24.cx) / 2 + DAT_10023f58,
                (int)(local_14 - local_24.cy) / 2 + DAT_10023f5c,6,&local_44,local_1c,uVar3,
                (INT *)0x0);
    hbr = GetStockObject(4);
    if (DAT_10023f24 == 0) {
      local_34.left = local_34.left + -1;
      local_34.right = local_44.right + 1;
      local_34.top = local_34.top + -1;
      local_34.bottom = local_34.bottom + 1;
      FrameRect(hdc,&local_34,hbr);
    }
    EndPaint(param_1,&local_84);
  }
  else {
    if (param_2 == 0x110) {
      FUN_10012e0d(param_1,(int *)0x0);
      SetWindowTextA(param_1,*(LPCSTR *)(DAT_100240b8 + 0x74));
      lpString = *(LPCSTR *)(DAT_100240b8 + 0x70);
      pHVar2 = GetDlgItem(param_1,2);
      SetWindowTextA(pHVar2,lpString);
      pHVar2 = GetDlgItem(param_1,0xef6);
      if (pHVar2 != (HWND)0x0) {
        GetWindowRect(pHVar2,&local_34);
        DAT_10023f58 = local_34.left + 1;
        DAT_10023f5c = local_34.top + 1;
        ScreenToClient(param_1,(LPPOINT)&DAT_10023f58);
        DAT_100238c0 = local_34.right + -1;
        DAT_100238c4 = local_34.bottom + -1;
        ScreenToClient(param_1,(LPPOINT)&DAT_100238c0);
      }
      if ((DAT_10023f24 == 0) && (pHVar2 != (HWND)0x0)) {
        ShowWindow(pHVar2,0);
      }
      return 1;
    }
    if (((param_2 == 0x111) && (param_1 == DAT_10023fac)) &&
       (bVar1 = FUN_1000be14(param_1), CONCAT31(extraout_var,bVar1) != 0)) {
      *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
    }
  }
  return 0;
}



/* ==== PathNameDlg @ 100030dd ==== 
 * signature: undefined4 __stdcall PathNameDlg(HWND param_1, int param_2, int param_3)
 * body: 100030dd-10003221
 */

undefined4 PathNameDlg(HWND param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined3 extraout_var;
  HWND pHVar3;
  LPCSTR pCVar4;
  int nCmdShow;
  
                    /* 0x30dd  11  PathNameDlg */
  if (param_2 == 0x110) {
    FUN_10012e0d(param_1,(int *)0x0);
    pCVar4 = *(LPCSTR *)(DAT_100240b8 + 0x6c);
    pHVar3 = GetDlgItem(param_1,1);
    SetWindowTextA(pHVar3,pCVar4);
    pCVar4 = *(LPCSTR *)(DAT_100240b8 + 0x70);
    pHVar3 = GetDlgItem(param_1,2);
    SetWindowTextA(pHVar3,pCVar4);
    SetWindowTextA(param_1,DAT_10023fb4);
    SetDlgItemTextA(param_1,1000,DAT_10024034);
    SetDlgItemTextA(param_1,0x3ea,DAT_10023908);
    SetDlgItemTextA(param_1,0x3e9,DAT_10023ef8);
    SetDlgItemTextA(param_1,0x3eb,*(LPCSTR *)(DAT_100240b8 + 0x40));
    nCmdShow = 0;
    pHVar3 = GetDlgItem(param_1,(-(uint)(*DAT_10023ef8 != '\0') & 0xfffffffc) + 0x3ec);
    ShowWindow(pHVar3,nCmdShow);
    FUN_10010d18(param_1,'\x01',0);
  }
  else {
    if ((param_2 != 0x111) || ((param_3 != 1 && (param_3 != 2)))) {
      return 0;
    }
    bVar1 = true;
    if ((param_3 == 2) && (bVar2 = FUN_1000be14(param_1), CONCAT31(extraout_var,bVar2) == 0)) {
      bVar1 = false;
    }
    if ((bVar1) &&
       ((GetDlgItemTextA(param_1,(-(uint)(*DAT_10023ef8 != '\0') & 4) + 1000,DAT_10024034,0x100),
        *DAT_10024034 != '\0' || (param_3 == 2)))) {
      EndDialog(param_1,param_3);
    }
  }
  return 1;
}



/* ==== WizardDlg @ 10003222 ==== 
 * signature: UINT __stdcall WizardDlg(HWND param_1, uint param_2, HMENU param_3, LPARAM param_4)
 * body: 10003222-1000342b
 */

UINT WizardDlg(HWND param_1,uint param_2,HMENU param_3,LPARAM param_4)

{
  bool bVar1;
  short sVar2;
  UINT UVar3;
  int iVar4;
  UINT UVar5;
  undefined3 extraout_var;
  tagRECT local_14;
  
                    /* 0x3222  15  WizardDlg */
  if (param_2 < 8) {
    if (param_2 == 7) {
      SetFocus((HWND)(&DAT_10023fe0)[DAT_10023924]);
      return 0;
    }
    if (param_2 == 1) {
      UVar3 = DefWindowProcA(param_1,1,(WPARAM)param_3,param_4);
      EnableWindow(DAT_100238d8,0);
      return UVar3;
    }
  }
  else {
    if (param_2 < 0x15) {
      if (param_2 == 0x14) {
        if (DAT_10024044 == 0) {
          return 1;
        }
        UVar3 = 0x14;
LAB_1000341e:
        UVar3 = DefWindowProcA(param_1,UVar3,(WPARAM)param_3,param_4);
        return UVar3;
      }
      if (param_2 != 0xc) goto LAB_100032d6;
    }
    else {
      if (param_2 < 0x85) goto LAB_100032d6;
      if (0x86 < param_2) {
        if (param_2 == 0x112) {
          if (((param_3 != (HMENU)0xf030) && (param_3 != (HMENU)0xf020)) &&
             (param_3 != (HMENU)0xf000)) {
            if (param_3 == (HMENU)0xf060) {
              bVar1 = FUN_1000be14(param_1);
              if (CONCAT31(extraout_var,bVar1) == 0) {
                return 0;
              }
              *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
            }
            UVar3 = 0x112;
            goto LAB_1000341e;
          }
        }
        else {
          if (param_2 != 0x117) {
            if ((param_2 == 0x30f) || (param_2 == 0x311)) {
              UVar3 = FUN_100157eb(param_2,param_1,(HWND)(&DAT_10023fe0)[DAT_10023924],(HWND)param_3
                                  );
              return UVar3;
            }
            goto LAB_100032d6;
          }
          if ((short)((uint)param_4 >> 0x10) == 0) {
            return 1;
          }
          iVar4 = GetMenuItemCount(param_3);
          UVar3 = 0;
          if (0 < iVar4) {
            do {
              UVar5 = GetMenuItemID(param_3,UVar3);
              sVar2 = (short)UVar5;
              if (((sVar2 == -0xee0) || (sVar2 == -0x1000)) ||
                 ((sVar2 == -0xfe0 || (sVar2 == -0xfd0)))) {
                EnableMenuItem(param_3,UVar3,0x401);
              }
              UVar3 = UVar3 + 1;
            } while ((int)UVar3 < iVar4);
          }
        }
        return 0;
      }
    }
    if ((DAT_10023fcc != (code *)0x0) && (DAT_10023fb0 == 0)) {
      if (param_2 != 0xc) {
        UVar3 = (*DAT_10023fcc)(param_1,param_2);
        return UVar3;
      }
      DefWindowProcA(param_1,0xc,(WPARAM)param_3,param_4);
      SetRect(&local_14,0,0,1,1);
      RedrawWindow(param_1,&local_14,(HRGN)0x0,0x401);
    }
  }
LAB_100032d6:
  UVar3 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,param_4);
  return UVar3;
}



/* ==== LanguageDlg @ 1000342c ==== 
 * signature: undefined4 __stdcall LanguageDlg(HWND param_1, WPARAM param_2, int param_3, undefined4 param_4)
 * body: 1000342c-10003735
 */

undefined4 LanguageDlg(HWND param_1,WPARAM param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  HWND pHVar4;
  int iVar5;
  CHAR local_170 [256];
  CHAR local_70 [80];
  tagRECT local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x342c  8  LanguageDlg */
  local_10 = 0x40;
  local_c = 0x62;
  local_8 = 0x8c;
  if (param_2 == 0x110) {
    FUN_10012e0d(param_1,(int *)0x0);
    SetWindowTextA(param_1,DAT_10023fb4);
    SetDlgItemTextA(param_1,0x3e9,DAT_10023ef8);
    if (DAT_10023e9c < 3) {
      bVar2 = false;
      pHVar4 = GetDlgItem(param_1,0x3ed);
      EnableWindow(pHVar4,0);
      ShowWindow(pHVar4,0);
      param_2 = 0;
      if (0 < DAT_10024020) {
        do {
          SendDlgItemMessageA(param_1,0x3ec,0x180,0,(LPARAM)DAT_10023310);
          lstrcpyA(local_170,DAT_10023310);
          FUN_1000b963();
          iVar5 = lstrcmpiA(DAT_10023310,DAT_10024034);
          if (iVar5 == 0) {
            SendDlgItemMessageA(param_1,0x3ec,0x186,param_2,0);
            bVar2 = true;
            DAT_10023eec = param_2;
            lstrcpyA((LPSTR)(DAT_100238f8 + 0x100),local_170);
          }
          FUN_1000b963();
          param_2 = param_2 + 1;
        } while ((int)param_2 < DAT_10024020);
      }
      if ((*(int *)(DAT_1002392c + 0x30) != 0) ||
         (((bVar2 && (DAT_10023e9c != 1)) && ((DAT_100238dc._2_1_ & 0x10) == 0)))) {
        EndDialog(param_1,1);
      }
    }
    else {
      pHVar4 = GetDlgItem(param_1,0x3ec);
      EnableWindow(pHVar4,0);
      ShowWindow(pHVar4,0);
      SendDlgItemMessageA(param_1,0x3ed,0x192,3,(LPARAM)&local_10);
      param_2 = 0;
      if (0 < DAT_10023eb8) {
        param_3 = 0;
        do {
          iVar5 = param_3 + DAT_10023ee4;
          uVar1 = *(uint *)(iVar5 + 0x20);
          wsprintfA(local_70,s__s__02d__02d__02d__02d__02d__ld_1001f3b0,iVar5,uVar1 >> 5 & 0xf,
                    uVar1 & 0x1f,((uVar1 >> 9 & 0x7f) + 0x50) % 100,
                    *(uint *)(iVar5 + 0x24) >> 0xb & 0x1f,*(uint *)(iVar5 + 0x24) >> 5 & 0x3f,
                    *(undefined4 *)(iVar5 + 0x1c));
          SendDlgItemMessageA(param_1,0x3ed,0x180,0,(LPARAM)local_70);
          param_2 = param_2 + 1;
          param_3 = param_3 + 0x2c;
        } while ((int)param_2 < DAT_10023eb8);
      }
    }
    GetWindowRect(param_1,&local_20);
    FUN_10010d18(param_1,'\0',0);
LAB_1000372c:
    uVar3 = 1;
  }
  else {
    if (param_2 == 0x111) {
      if (((param_3 == 0x3ec) || (param_3 == 0x3ed)) && ((short)((uint)param_4 >> 0x10) == 2)) {
        param_3 = 1;
      }
      if ((param_3 == 1) || (param_3 == 2)) {
        if (DAT_10023e9c < 3) {
          DAT_10023eec = SendDlgItemMessageA(param_1,0x3ec,0x188,0,0);
          if (DAT_10023eec != 0xffffffff) {
            SendDlgItemMessageA(param_1,0x3ec,0x189,DAT_10023eec,DAT_100238f8 + 0x100);
            goto LAB_100034fa;
          }
LAB_100034ff:
          if (param_3 != 2) goto LAB_1000372c;
        }
        else {
          DAT_10023eec = SendDlgItemMessageA(param_1,0x3ed,0x191,0x3c00,DAT_10024170);
LAB_100034fa:
          if (DAT_10023eec == 0xffffffff) goto LAB_100034ff;
        }
        EndDialog(param_1,param_3);
        goto LAB_1000372c;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* ==== DDECallback @ 10003736 ==== 
 * signature: HDDEDATA __stdcall DDECallback(uint param_1, int param_2, undefined4 param_3, HSZ param_4, HSZ param_5, HDDEDATA param_6)
 * body: 10003736-100039fc
 */

HDDEDATA DDECallback(uint param_1,int param_2,undefined4 param_3,HSZ param_4,HSZ param_5,
                    HDDEDATA param_6)

{
  int iVar1;
  int iVar2;
  DWORD cb;
  HDDEDATA pHVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  LPBYTE pSrc;
  DWORD cbOff;
  UINT wFmt;
  UINT afCmd;
  BYTE local_304 [256];
  char local_204;
  CHAR local_203 [255];
  BYTE local_104;
  byte local_103 [255];
  
                    /* 0x3736  3  DDECallback */
  if (param_1 == 0x1062) {
    return (HDDEDATA)0x1;
  }
  if ((param_1 != 0x20b0) || (param_2 != 1)) {
    if (param_1 == 0x4050) {
      DdeQueryStringA(DAT_1002391c,param_4,local_203,0x100,0x3ec);
      iVar2 = lstrcmpiA(local_203,s_CANCEL_1001f3d4);
      if (iVar2 == 0) {
        *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
      }
      else {
        DdeGetData(param_6,&local_104,0xff,0);
        FUN_100105d2(local_203,(LPCSTR)&local_104);
      }
      return (HDDEDATA)0x8000;
    }
    return (HDDEDATA)0x0;
  }
  DdeQueryStringA(DAT_1002391c,param_4,&local_204,0xff,0x3ec);
  if (local_204 == '*') {
    DdeQueryStringA(DAT_1002391c,param_5,(LPSTR)&local_104,0xff,0x3ec);
    local_304[0] = '\0';
    if (local_104 == '*') {
      wsprintfA((LPSTR)local_304,s__c_ld_1001f3dc,(-(uint)(DAT_10024044 != 0) & 0x33) + 0x20,
                DAT_10023310 - DAT_10023fa8);
      if (DAT_10023f18 != 0) {
        local_304[0] = 'E';
      }
    }
    else if (local_104 == 'E') {
      *(undefined4 *)(DAT_1002392c + 0x1c) = 4;
      DAT_10023f18 = 1;
      DAT_10024044 = 0;
      if (DAT_10024184 != (HWND)0x0) {
        PostMessageA(DAT_10024184,0x10,0,0);
      }
      param_1 = (uint)DAT_100238fc;
      if (-1 < (int)(param_1 - 1)) {
        puVar5 = &DAT_10023fe0 + (param_1 - 1);
        do {
          PostMessageA((HWND)*puVar5,0x10,0,0);
          puVar5 = puVar5 + -1;
          param_1 = param_1 - 1;
        } while (param_1 != 0);
      }
    }
    else if (local_104 == 'G') {
      DAT_10024044 = 0;
    }
    else if (local_104 == 'B') {
      if (DAT_10023fa0 != (undefined *)0x0) {
        FUN_10015a50(DAT_10023fa0);
      }
      DAT_10023fa0 = (undefined *)0x0;
      if (local_103[0] != 0) {
        DAT_10023fa0 = (undefined *)FUN_10015d50(0x400);
        iVar2 = 0;
        pbVar4 = local_103;
        while (local_103[0] != 0) {
          iVar1 = FUN_10016190(pbVar4);
          *(int *)(DAT_10023fa0 + iVar2 * 4) = iVar1;
          for (; *pbVar4 == 0x20; pbVar4 = pbVar4 + 1) {
          }
          for (; (*pbVar4 != 0 && (*pbVar4 != 0x20)); pbVar4 = pbVar4 + 1) {
          }
          iVar2 = iVar2 + 1;
          local_103[0] = *pbVar4;
        }
        *(undefined4 *)(DAT_10023fa0 + iVar2 * 4) = 0xffffffff;
      }
    }
    else {
      if (local_104 == 'N') {
        cb = (uint)DAT_1002402c * 0x11;
        afCmd = 0;
        wFmt = 1;
        cbOff = 0;
        pSrc = DAT_10023efc;
        goto LAB_10003966;
      }
      if (local_104 == 'V') {
        afCmd = 0;
        wFmt = 1;
        cb = (uint)DAT_1002402c << 8;
        cbOff = 0;
        pSrc = DAT_100238f8;
        goto LAB_10003966;
      }
    }
  }
  else {
    FUN_1001054d(&local_204,(LPSTR)local_304);
  }
  afCmd = 0;
  wFmt = 1;
  cbOff = 0;
  iVar2 = lstrlenA((LPCSTR)local_304);
  cb = iVar2 + 1;
  pSrc = local_304;
LAB_10003966:
  pHVar3 = DdeCreateDataHandle(DAT_1002391c,pSrc,cb,cbOff,param_5,wFmt,afCmd);
  return pHVar3;
}



/* ==== FUN_100039fd @ 100039fd ==== 
 * signature: undefined __cdecl FUN_100039fd(LPCSTR param_1, LPCSTR param_2)
 * body: 100039fd-10003a58
 */

void __cdecl FUN_100039fd(LPCSTR param_1,LPCSTR param_2)

{
  LPCSTR pCVar1;
  CHAR local_104 [256];
  
  GetTempPathA(0x100,local_104);
  pCVar1 = param_2;
  if (param_2 == (LPCSTR)0x0) {
    pCVar1 = &DAT_1001f3e4;
  }
  GetTempFileNameA(local_104,pCVar1,0,param_1);
  if (param_2 == (LPCSTR)0x0) {
    DeleteFileA(param_1);
    pCVar1 = FUN_10014834(param_1,0x5c);
    *pCVar1 = '\0';
  }
  return;
}



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



/* ==== FUN_10004951 @ 10004951 ==== 
 * signature: undefined __cdecl FUN_10004951(HKEY param_1, int param_2)
 * body: 10004951-10004a1f
 */

void __cdecl FUN_10004951(HKEY param_1,int param_2)

{
  HKEY lpString2;
  int iVar1;
  LSTATUS LVar2;
  HKEY__ local_18c [96];
  DWORD local_c;
  int local_8;
  
  lpString2 = param_1;
  local_8 = 0;
  do {
    lstrcpyA((LPSTR)local_18c,(LPCSTR)lpString2);
    lstrcatA((LPSTR)local_18c,&DAT_1001f314);
    iVar1 = lstrlenA((LPCSTR)lpString2);
    if (DAT_100241e8 != 0) {
      LVar2 = RegOpenKeyExA(*(HKEY *)(&DAT_1001f160 + param_2 * 4),(LPCSTR)lpString2,0,0x1f,&param_1
                           );
      if (LVar2 == 0) {
        local_c = 0x100;
        LVar2 = RegEnumKeyExA(param_1,0,(LPSTR)((int)&local_18c[0].unused + iVar1 + 1),&local_c,
                              (LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
        RegCloseKey(param_1);
        if (LVar2 == 0) {
          FUN_10004951(local_18c,param_2);
          goto LAB_100049fa;
        }
      }
      local_8 = 0x800;
    }
LAB_100049fa:
    local_8 = local_8 + 1;
    if (0x7ff < local_8) {
      RegDeleteKeyA(*(HKEY *)(&DAT_1001f160 + param_2 * 4),(LPCSTR)lpString2);
      return;
    }
  } while( true );
}



/* ==== FUN_10004a20 @ 10004a20 ==== 
 * signature: undefined __stdcall FUN_10004a20(void)
 * body: 10004a20-10004b9c
 */

void FUN_10004a20(void)

{
  undefined1 *puVar1;
  FARPROC pFVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  int local_24;
  char *local_20;
  int local_1c;
  char *local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  HMODULE local_c;
  uint local_8;
  
  local_8 = (uint)(*(char *)(DAT_10023310 + 1) != '\0');
  if ((local_8 != 0) && (DAT_100241e8 == 0)) {
    return;
  }
  local_20 = (char *)(DAT_10023310 + 2);
  local_18 = FUN_1000bc0e(local_20);
  piVar4 = &local_24;
  iVar5 = 2;
  do {
    if ((LPCSTR)piVar4[1] == (LPCSTR)0x0) {
      *piVar4 = 0;
    }
    else {
      puVar1 = FUN_1000ba71((LPCSTR)piVar4[1]);
      *piVar4 = (int)puVar1;
    }
    piVar4 = piVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (DAT_10023e9c == '\x01') {
    piVar4 = &local_24;
    iVar5 = 2;
    do {
      if ((LPSTR)*piVar4 != (LPSTR)0x0) {
        FUN_1001054d(&DAT_1001f3ec,(LPSTR)*piVar4);
      }
      piVar4 = piVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  if (local_8 == 0) {
    local_c = LoadLibraryA(s_ODBCINST_DLL_1001f478);
  }
  else {
    local_c = LoadLibraryExA(s_ODBCCP32_DLL_1001f488,(HANDLE)0x0,0);
  }
  if (local_c == (HMODULE)0x0) {
    return;
  }
  if (local_24 != 0) {
    if (local_8 == 0) {
      pFVar2 = GetProcAddress(local_c,s_SQLInstallDriverManager_1001f460);
      if (pFVar2 != (FARPROC)0x0) {
        puVar1 = local_10;
        goto LAB_10004b09;
      }
    }
    else {
      pFVar2 = GetProcAddress(local_c,s_SQLInstallDriverManager_1001f460);
      if (pFVar2 != (FARPROC)0x0) {
        puVar1 = local_14;
LAB_10004b09:
        (*pFVar2)(local_24,0x104,puVar1);
      }
    }
  }
  pbVar3 = (byte *)FUN_1000bc0e(local_18);
  FUN_10009f15(DAT_10024170,pbVar3,0x7800);
  for (pbVar3 = DAT_10024170; *pbVar3 != 0; pbVar3 = pbVar3 + 1) {
    if (*pbVar3 == 0x7f) {
      *pbVar3 = 0;
    }
  }
  pbVar3[1] = 0;
  if ((*DAT_10024170 != 0) && (local_1c != 0)) {
    if (local_8 == 0) {
      pFVar2 = GetProcAddress(local_c,s_SQLInstallDriver_1001f44c);
      if (pFVar2 == (FARPROC)0x0) goto LAB_10004b85;
      puVar1 = local_10;
    }
    else {
      pFVar2 = GetProcAddress(local_c,s_SQLInstallDriver_1001f44c);
      if (pFVar2 == (FARPROC)0x0) goto LAB_10004b85;
      puVar1 = local_14;
    }
    (*pFVar2)(0,DAT_10024170,local_1c,0x104,puVar1);
  }
LAB_10004b85:
  FreeLibrary(local_c);
  return;
}



/* ==== FUN_10004b9d @ 10004b9d ==== 
 * signature: undefined __stdcall FUN_10004b9d(void)
 * body: 10004b9d-10004cff
 */

void FUN_10004b9d(void)

{
  byte *pbVar1;
  byte *pbVar2;
  FARPROC pFVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte local_10c [256];
  uint local_c;
  HMODULE local_8;
  
  local_c = (*(byte *)(DAT_10023310 + 1) & 2) >> 1;
  if ((*(byte *)(DAT_10023310 + 1) & 1) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = DAT_100238d8;
    if (DAT_10023fac != 0) {
      iVar6 = DAT_10023fac;
    }
  }
  if (local_c == 0) {
    local_8 = LoadLibraryA(s_ODBCINST_DLL_1001f478);
  }
  else {
    local_8 = LoadLibraryExA(s_ODBCCP32_DLL_1001f488,(HANDLE)0x0,0);
  }
  if (local_8 != (HMODULE)0x0) {
    pbVar2 = (byte *)(DAT_10023310 + 2);
    pbVar1 = (byte *)FUN_1000bc0e((char *)pbVar2);
    FUN_10009f15(local_10c,pbVar2,0x100);
    FUN_10009f15(DAT_10024170,pbVar1,0x7800);
    for (pbVar2 = DAT_10024170; *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
      if (*pbVar2 == 0x7f) {
        *pbVar2 = 0;
      }
    }
    pbVar2[1] = 0;
    if (local_c == 0) {
      pFVar3 = GetProcAddress(local_8,s_SQLConfigDataSource_1001f498);
      if ((pFVar3 != (FARPROC)0x0) &&
         (iVar5 = (*pFVar3)(iVar6,1,local_10c,DAT_10024170), iVar5 == 0)) {
        (*pFVar3)(iVar6,2,local_10c,DAT_10024170);
      }
    }
    else {
      pFVar3 = GetProcAddress(local_8,s_SQLConfigDataSource_1001f498);
      if (pFVar3 != (FARPROC)0x0) {
        uVar4 = -(uint)((*(byte *)(DAT_10023310 + 1) & 4) != 0) & 3;
        iVar5 = (*pFVar3)(iVar6,uVar4 + 1,local_10c,DAT_10024170);
        if (iVar5 == 0) {
          (*pFVar3)(iVar6,uVar4 + 2,local_10c,DAT_10024170);
        }
      }
    }
    FreeLibrary(local_8);
  }
  return;
}



/* ==== FUN_10004d00 @ 10004d00 ==== 
 * signature: int __cdecl FUN_10004d00(DWORD param_1, HKEY param_2, LPCSTR param_3, int param_4, BYTE * param_5, DWORD param_6, int param_7)
 * body: 10004d00-10004d7f
 */

int __cdecl
FUN_10004d00(DWORD param_1,HKEY param_2,LPCSTR param_3,int param_4,BYTE *param_5,DWORD param_6,
            int param_7)

{
  LSTATUS LVar1;
  int iVar2;
  
  iVar2 = 1;
  LVar1 = RegCreateKeyExA(*(HKEY *)(&DAT_1001f160 + param_1 * 4),(LPCSTR)param_2,0,(LPSTR)0x0,0,6,
                          (LPSECURITY_ATTRIBUTES)0x0,&param_2,&param_1);
  if (LVar1 != 0) goto LAB_10004d60;
  if (param_3 == (LPCSTR)0x0) {
LAB_10004d55:
    iVar2 = 0;
  }
  else {
    LVar1 = RegSetValueExA(param_2,param_3,0,(&DAT_1001f178)[param_4],param_5,param_6);
    if (LVar1 == 0) goto LAB_10004d55;
  }
  RegCloseKey(param_2);
LAB_10004d60:
  if ((iVar2 != 0) && (param_7 != 0)) {
    FUN_1000b352(*(char **)(DAT_100240b8 + 0xb0));
  }
  return iVar2;
}



/* ==== FUN_10004d80 @ 10004d80 ==== 
 * signature: LSTATUS __cdecl FUN_10004d80(HKEY param_1, LPCSTR param_2, LPBYTE param_3, char * param_4, char * param_5, uint param_6, int param_7)
 * body: 10004d80-10004ef6
 */

LSTATUS __cdecl
FUN_10004d80(HKEY param_1,LPCSTR param_2,LPBYTE param_3,char *param_4,char *param_5,uint param_6,
            int param_7)

{
  LPBYTE lpString1;
  LSTATUS LVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  CHAR *pCVar5;
  CHAR local_10c [256];
  LSTATUS local_c;
  uint local_8;
  
  if (DAT_100241e8 == 0) {
    param_6 = param_6 & 0xffff;
    if ((param_1 == (HKEY)0x0) && (*param_4 == '\0')) {
      *param_5 = '0';
      LVar1 = RegQueryValueA((HKEY)0x80000000,param_2,(LPSTR)param_3,(PLONG)&param_6);
      return LVar1;
    }
    return 1;
  }
  local_8 = param_6 & 0xffff;
  local_c = 1;
  LVar1 = RegOpenKeyExA(*(HKEY *)(&DAT_1001f160 + (int)param_1 * 4),param_2,0,1,&param_1);
  lpString1 = param_3;
  if (LVar1 != 0) {
    return local_c;
  }
  LVar1 = RegQueryValueExA(param_1,param_4,(LPDWORD)0x0,(LPDWORD)&param_2,param_3,&local_8);
  if (LVar1 == 0) {
    param_6 = 0;
    piVar2 = &DAT_1001f178;
    do {
      if ((LPCSTR)*piVar2 == param_2) break;
      param_6 = param_6 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x1001f18c);
    if (((param_7 == 0) || (param_2 != (LPCSTR)0x3)) || (local_8 != 4)) {
      *param_5 = (char)param_6 + '0';
      if (param_6 == 3) {
        wsprintfA((LPSTR)lpString1,&DAT_1001f4ac,*(undefined4 *)lpString1);
      }
      if (param_6 == 4) {
        iVar4 = 0;
        if (0 < (int)local_8) {
          pCVar5 = local_10c + 1;
          do {
            if (0x7e < iVar4) break;
            iVar3 = FUN_10004ef7((uint)(lpString1[iVar4] >> 4));
            pCVar5[-1] = (CHAR)iVar3;
            iVar3 = FUN_10004ef7(lpString1[iVar4] & 0xf);
            *pCVar5 = (CHAR)iVar3;
            iVar4 = iVar4 + 1;
            pCVar5 = pCVar5 + 2;
          } while (iVar4 < (int)local_8);
        }
        local_10c[iVar4 * 2] = '\0';
        lstrcpyA((LPSTR)lpString1,local_10c);
      }
      if (4 < (int)param_6) goto LAB_10004eb0;
    }
    else {
      *param_5 = '3';
      wsprintfA((LPSTR)lpString1,&DAT_1001f4ac,*(undefined4 *)lpString1);
    }
    local_c = 0;
  }
LAB_10004eb0:
  RegCloseKey(param_1);
  return local_c;
}



/* ==== FUN_10004ef7 @ 10004ef7 ==== 
 * signature: int __cdecl FUN_10004ef7(int param_1)
 * body: 10004ef7-10004f07
 */

int __cdecl FUN_10004ef7(int param_1)

{
  if (param_1 < 10) {
    return param_1 + 0x30;
  }
  return param_1 + 0x37;
}



/* ==== FUN_10004f08 @ 10004f08 ==== 
 * signature: undefined __cdecl FUN_10004f08(DWORD param_1)
 * body: 10004f08-10005420
 */

void __cdecl FUN_10004f08(DWORD param_1)

{
  char cVar1;
  byte bVar2;
  LPBYTE lpString1;
  undefined *puVar3;
  DWORD DVar4;
  HANDLE pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  LPCSTR pCVar10;
  CHAR *lpString2;
  char *pcVar11;
  CHAR local_42c [8];
  char local_424;
  CHAR local_423 [575];
  char local_1e4 [32];
  byte local_1c4 [2];
  CHAR local_1c2 [254];
  _OSVERSIONINFOA local_c4;
  _MEMORYSTATUS local_30;
  CHAR local_10 [4];
  DWORD local_c;
  ushort local_8;
  ushort local_6;
  
  local_c = GetVersion();
  DVar4 = param_1;
  pCVar10 = (LPCSTR)(param_1 + 2);
  lpString1 = FUN_1000ba71(pCVar10);
  for (; *pCVar10 != '\0'; pCVar10 = pCVar10 + 1) {
  }
  FUN_10009eff(local_1c4,(byte *)(pCVar10 + 1));
  *lpString1 = '\0';
  cVar1 = *(char *)(DVar4 + 1);
  switch(cVar1) {
  case '\0':
    FUN_10013fb4((LPSTR)lpString1,1);
    break;
  case '\x01':
    if (DAT_100241e8 != 0) {
      local_c4.dwOSVersionInfoSize = 0x94;
      GetVersionExA(&local_c4);
      wsprintfA((LPSTR)lpString1,s__ld__ld__ld_1001f55c,local_c4.dwMajorVersion,
                local_c4.dwMinorVersion,local_c4.dwBuildNumber & 0xffff);
      return;
    }
    uVar8 = local_c >> 8;
    bVar2 = (byte)local_c;
    goto LAB_10004fd7;
  case '\x02':
    uVar8 = local_c >> 0x10;
    bVar2 = (byte)(local_c >> 0x18);
LAB_10004fd7:
    uVar8 = uVar8 & 0xff;
    uVar6 = (uint)bVar2;
    pcVar11 = s__d__d_1001f554;
LAB_100052f8:
    wsprintfA((LPSTR)lpString1,pcVar11,uVar6,uVar8);
    break;
  case '\x03':
    local_30.dwLength = 0x20;
    GlobalMemoryStatus(&local_30);
    uVar8 = local_30.dwTotalPhys >> 10;
    pCVar10 = &DAT_1001f550;
    goto LAB_100052c4;
  case '\x04':
    pvVar5 = (HANDLE)FUN_1001223a((LPCSTR)local_1c4,0,0);
    if (pvVar5 != (HANDLE)0xffffffff) {
      FUN_1001234f(pvVar5,&local_6,&local_8);
      CloseHandle(pvVar5);
      wsprintfA((LPSTR)lpString1,s__02d__02d__02d__d__02d__02d_1001f534,local_6 >> 5 & 0xf,
                local_6 & 0x1f,((local_6 >> 9) + 0x50) % 100,(uint)(local_8 >> 0xb),
                local_8 >> 5 & 0x3f,(local_8 & 0x1f) << 1);
    }
    break;
  case '\x05':
    FUN_10012386((LPCSTR)local_1c4,0);
    iVar7 = FUN_100137b1((LPCSTR)local_1c4,&local_30.dwMemoryLoad);
    if (iVar7 == 0) {
      wsprintfA((LPSTR)lpString1,s__d__d__d__d_1001f528,local_30.dwMemoryLoad >> 0x10,
                local_30.dwMemoryLoad & 0xffff,local_30.dwTotalPhys >> 0x10,
                local_30.dwTotalPhys & 0xffff);
    }
    break;
  case '\x06':
  case '\a':
    puVar3 = &DAT_10023314;
    if (DAT_10024168 == 0) {
      puVar3 = &DAT_1001f524;
    }
    wsprintfA((LPSTR)local_1c4,s_SOFTWARE_Microsoft_Windows_s_Cur_1001f4f8,puVar3);
    pcVar11 = s_RegisteredOwner_1001f4e8;
    if (*(char *)(DVar4 + 1) != '\x06') {
      pcVar11 = s_RegisteredOrganization_1001f4d0;
    }
    FUN_10004d80((HKEY)0x2,(LPCSTR)local_1c4,lpString1,pcVar11,local_1e4,0x100,0);
    break;
  case '\b':
    lpString1[1] = '\0';
    uVar8 = FUN_10015b60((int)(char)local_1c4[0]);
    iVar7 = FUN_10011fc8(uVar8 - 0x41);
    if (iVar7 == 2) {
      *lpString1 = 'F';
    }
    else if (iVar7 == 3) {
      *lpString1 = 'H';
    }
    else if (iVar7 == 4) {
      *lpString1 = 'N';
    }
    else if (iVar7 == 5) {
      *lpString1 = 'C';
    }
    else if (iVar7 == 6) {
      *lpString1 = 'R';
    }
    break;
  case '\t':
  case '\n':
    uVar9 = 0;
    do {
      iVar7 = FUN_10011fc8((uint)uVar9);
      if (iVar7 == (cVar1 != '\t') + 4) break;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0x1a);
    if (uVar9 < 0x1a) {
      lpString1[2] = '\0';
      *lpString1 = (char)uVar9 + 'A';
      lpString1[1] = ':';
    }
    break;
  case '\f':
    lstrcpyA((LPSTR)lpString1,(LPCSTR)local_1c4);
    if (DAT_100200d4 < 2) {
      uVar8 = *(ushort *)(PTR_DAT_1001fec8 + (char)*lpString1 * 2) & 0x103;
    }
    else {
      uVar8 = FUN_10015ac0((int)(char)*lpString1,0x103);
    }
    if ((uVar8 != 0) && (lpString1[1] == ':')) {
      wsprintfA(local_10,&DAT_1001f4cc,(int)(char)*lpString1);
      param_1 = 0x100;
      DVar4 = WNetGetConnectionA(local_10,(LPSTR)lpString1,&param_1);
      if (DVar4 == 0) {
        lstrcatA((LPSTR)lpString1,local_1c2);
      }
      else {
        lstrcpyA((LPSTR)lpString1,(LPCSTR)local_1c4);
      }
    }
    break;
  case '\r':
    GetModuleFileNameA(DAT_1002403c,(LPSTR)lpString1,0x100);
    break;
  case '\x0e':
    pvVar5 = (HANDLE)FUN_1001223a((LPCSTR)local_1c4,0,0);
    if (pvVar5 == (HANDLE)0xffffffff) {
      return;
    }
    uVar8 = FUN_10012303(pvVar5,0,2);
    CloseHandle(pvVar5);
    pCVar10 = &DAT_1001f4c8;
LAB_100052c4:
    wsprintfA((LPSTR)lpString1,pCVar10,uVar8);
    break;
  case '\x0f':
    uVar8 = FUN_10015b60((int)(char)local_1c4[0]);
    uVar6 = FUN_1000bbbb(uVar8 - 0x40);
    uVar8 = uVar6 & 0xffff;
    uVar6 = uVar6 >> 0x10;
    pcVar11 = s__04x__04x_1001f4bc;
    goto LAB_100052f8;
  case '\x10':
    wsprintfA((LPSTR)lpString1,s__c______1001f4b4,(int)(char)local_1c4[0]);
    iVar7 = FUN_100120c5((LPCSTR)lpString1,8,local_42c);
    cVar1 = local_424;
    if (iVar7 == 0) {
      local_424 = 0;
      lstrcpyA((LPSTR)lpString1,local_42c);
      if ((cVar1 == '.') && (iVar7 = lstrlenA(local_42c), iVar7 == 8)) {
        lstrcatA((LPSTR)lpString1,local_423);
      }
      FUN_1001221a((int)local_42c);
      return;
    }
    goto LAB_100053a4;
  case '\x11':
    uVar8 = FUN_10013a97(lpString1,(FARPROC)(-(uint)(local_1c4[0] != 0) & (uint)local_1c4));
    if (uVar8 != 0) {
      return;
    }
LAB_100053a4:
    *lpString1 = '\0';
    break;
  case '\x12':
    if (DAT_100241e8 != 0) {
      local_c4.dwOSVersionInfoSize = 0x94;
      GetVersionExA(&local_c4);
      lpString2 = local_c4.szCSDVersion;
      while (local_c4.szCSDVersion[0] != '\0') {
        if (DAT_100200d4 < 2) {
          uVar8 = (byte)PTR_DAT_1001fec8[*lpString2 * 2] & 4;
        }
        else {
          uVar8 = FUN_10015ac0((int)*lpString2,4);
        }
        if (uVar8 != 0) break;
        lpString2 = lpString2 + 1;
        local_c4.szCSDVersion[0] = *lpString2;
      }
      if (*lpString2 == '\0') {
        lpString2 = &DAT_1001f4b0;
      }
      lstrcpyA((LPSTR)lpString1,lpString2);
    }
  }
  return;
}



/* ==== FUN_1000546d @ 1000546d ==== 
 * signature: undefined __stdcall FUN_1000546d(void)
 * body: 1000546d-100054e8
 */

void FUN_1000546d(void)

{
  char *pcVar1;
  byte *pbVar2;
  LPCSTR pCVar3;
  int iVar4;
  byte local_104 [256];
  
  if ((*(byte *)(DAT_10023310 + 2) & 0x80) == 0) {
    FUN_100057bd();
  }
  else {
    pcVar1 = FUN_1000bc0e((char *)(DAT_10023310 + 0x2b));
    for (iVar4 = DAT_10024020; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar1 = FUN_1000bc0e(pcVar1);
    }
    pbVar2 = (byte *)FUN_1000bc0e(pcVar1);
    FUN_10009eff(local_104,pbVar2);
    pCVar3 = FUN_10014834((LPCSTR)local_104,0x5c);
    FUN_100054e9((LPCSTR)local_104,(int)pCVar3 - (int)local_104);
  }
  return;
}



/* ==== FUN_100054e9 @ 100054e9 ==== 
 * signature: int __cdecl FUN_100054e9(LPCSTR param_1, int param_2)
 * body: 100054e9-100057bc
 */

int __cdecl FUN_100054e9(LPCSTR param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LPSTR lpString1;
  char *lpString1_00;
  LPCSTR lpString1_01;
  undefined4 local_858 [10];
  CHAR local_82d [981];
  char local_458 [256];
  byte local_358;
  CHAR local_210 [256];
  byte local_110 [256];
  int local_10;
  char *local_c;
  uint local_8;
  
  iVar2 = FUN_100120c5(param_1,7,local_458);
  local_8 = (uint)(iVar2 == 0);
  do {
    if (((iVar2 != 0) || (*(char *)(DAT_1002392c + 0x20) != '\0')) ||
       (*(int *)(DAT_1002392c + 0x1c) != 0)) {
      FUN_1001221a((int)local_458);
      if ((*(byte *)((int)DAT_10023310 + 2) & 1) != 0) {
        lstrcpyA(local_210,param_1);
        FUN_10010cf9(local_210);
        lstrcatA(local_210,&DAT_1001f568);
        iVar2 = FUN_100120c5(local_210,0x17,local_458);
        while (((iVar2 == 0 && (*(char *)(DAT_1002392c + 0x20) == '\0')) &&
               (*(int *)(DAT_1002392c + 0x1c) == 0))) {
          lstrcpyA((LPSTR)local_110,param_1);
          lpString1_01 = FUN_10014834((LPCSTR)local_110,0x5c);
          if (*lpString1_01 == '\\') {
            lpString1_01 = lpString1_01 + 1;
          }
          lstrcpyA(lpString1_01,local_458);
          if (((local_358 & 0x10) != 0) && (local_458[0] != '.')) {
            local_8 = 0;
            lstrcatA((LPSTR)local_110,lpString1_01 + (int)param_1 + (-1 - (int)local_110));
            iVar2 = FUN_100054e9((LPCSTR)local_110,param_2);
            if (iVar2 != 0) {
              return iVar2;
            }
          }
          iVar2 = FUN_100121d4(local_458);
        }
        FUN_1001221a((int)local_458);
      }
      if (local_8 != 0) {
        lstrcpyA((LPSTR)local_110,(LPCSTR)((int)DAT_10023310 + 0x2b));
        lstrcatA((LPSTR)local_110,param_1 + param_2);
        FUN_10009eff(local_110,local_110);
        FUN_1000b5ca((LPCSTR)local_110);
      }
      return 0;
    }
    lstrcpyA((LPSTR)local_110,param_1);
    lpString1 = FUN_10014834((LPCSTR)local_110,0x5c);
    if (*lpString1 == '\\') {
      lpString1 = lpString1 + 1;
    }
    lstrcpyA(lpString1,local_458);
    if ((local_358 & 0x10) == 0) {
      local_8 = 0;
      FUN_10015e50(local_858,DAT_10023310,0x2b);
      lstrcpyA(local_210,(LPCSTR)((int)DAT_10023310 + 0x2b));
      lstrcatA(local_210,(LPCSTR)(local_110 + param_2));
      lstrcpyA(local_82d,local_210);
      lpString1_00 = FUN_1000bc0e(local_82d);
      local_c = FUN_1000bc0e((char *)((int)DAT_10023310 + 0x2b));
      if (DAT_10024020 != 0) {
        local_10 = DAT_10024020;
        do {
          lstrcpyA(lpString1_00,local_c);
          lpString1_00 = FUN_1000bc0e(lpString1_00);
          local_c = FUN_1000bc0e(local_c);
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      *lpString1_00 = '\0';
      lstrcpyA(lpString1_00 + 1,(LPCSTR)local_110);
      puVar1 = DAT_10023310;
      DAT_10023310 = local_858;
      iVar2 = FUN_100057bd();
      DAT_10023310 = puVar1;
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar2 = FUN_100121d4(local_458);
  } while( true );
}



/* ==== FUN_100057bd @ 100057bd ==== 
 * signature: int __stdcall FUN_100057bd(void)
 * body: 100057bd-10006a1e
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_100057bd(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  HANDLE pvVar4;
  PGENERIC_MAPPING pGVar5;
  DWORD DVar6;
  byte *pbVar7;
  byte *pbVar8;
  GENERIC_MAPPING *pGVar9;
  HWND pHVar10;
  BOOL BVar11;
  LPCSTR pCVar12;
  HFILE HVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  byte local_10c8 [256];
  CHAR local_fc8 [72];
  CHAR local_f80 [184];
  byte local_ec8;
  char local_e80 [256];
  CHAR local_d80 [256];
  GENERIC_MAPPING local_c80 [64];
  byte local_880 [1024];
  CHAR local_480 [256];
  GENERIC_MAPPING local_380 [16];
  GENERIC_MAPPING local_280 [16];
  GENERIC_MAPPING local_180;
  GENERIC_MAPPING local_170 [16];
  uint local_70;
  undefined4 local_6c;
  _PRIVILEGE_SET local_68;
  DWORD local_54;
  uint local_50;
  byte *local_4c;
  GENERIC_MAPPING local_48;
  ACCESS_MASK local_38;
  undefined1 *PrivilegeSetLength;
  byte bVar18;
  PGENERIC_MAPPING in_stack_ffffffd8;
  PGENERIC_MAPPING GenericMapping;
  PGENERIC_MAPPING pGVar19;
  HFILE hFile;
  undefined4 uVar20;
  HANDLE DesiredAccess;
  undefined1 *hObject;
  GENERIC_MAPPING *pGVar21;
  code *pcVar22;
  GENERIC_MAPPING *pGVar23;
  LPARAM dwInitParam;
  char *pcVar24;
  PHANDLE TokenHandle;
  byte bVar25;
  
  FUN_10016480();
  bVar1 = *(byte *)(DAT_10023310 + 1);
  bVar2 = *(byte *)(DAT_10023310 + 2);
  iVar3 = FUN_1001254f(0);
  if (iVar3 != 0) {
    return -2;
  }
  FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,&DAT_10023314);
  FUN_1000bb0e();
  FUN_10009eff((byte *)local_170,(byte *)(DAT_10023310 + 0x2b));
  local_38 = *(ACCESS_MASK *)(DAT_10023310 + 0x27);
  GenericMapping = *(PGENERIC_MAPPING *)(DAT_10023310 + 0xf);
  local_48.GenericExecute = 0;
  local_48.GenericWrite = 0;
  if ((((DAT_100238dc & 0x400000) != 0) && ((bVar2 & 0x48) == 0)) && ((bVar1 & 0x40) == 0)) {
    if ((local_38 != 0) &&
       (pvVar4 = (HANDLE)FUN_1001223a((LPCSTR)local_170,0,0), pvVar4 != (HANDLE)0xffffffff)) {
      pGVar5 = (PGENERIC_MAPPING)FUN_10012303(pvVar4,0,2);
      if (pGVar5 == GenericMapping) {
        (**(code **)(DAT_1002392c + 0x94))();
        FUN_10012303(pvVar4,0,0);
        while (DVar6 = FUN_100122b9(pvVar4,DAT_10024170,0x7800), 0 < (int)DVar6) {
          (**(code **)(DAT_1002392c + 0x94))();
        }
      }
      CloseHandle(pvVar4);
    }
    if (((bVar1 & 1) != 0) && (*(uint *)(DAT_10023310 + 0x13) != 0)) {
      local_6c = *(undefined4 *)(DAT_10023310 + 0x17);
      local_68.PrivilegeCount = *(DWORD *)(DAT_10023310 + 0x1b);
      local_68.Control = *(DWORD *)(DAT_10023310 + 0x1f);
      local_68.Privilege[0].Luid.LowPart = *(DWORD *)(DAT_10023310 + 0x23);
      local_70 = *(uint *)(DAT_10023310 + 0x13);
      FUN_1001373b((LPCSTR)0x0,(LPCSTR)local_170,&local_70);
    }
  }
  iVar3 = FUN_10012539((LPCSTR)local_170);
  pbVar7 = (byte *)(~-(uint)(iVar3 != 0) & (uint)local_170);
  if (((bVar1 & 0x18) == 0x18) && (pbVar7 != (byte *)0x0)) {
    FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,&DAT_1001f3f8);
  }
  pGVar9 = (GENERIC_MAPPING *)0x1;
  if (DAT_10023e9c != '\x01') {
    FUN_1000b5ca((LPCSTR)local_170);
  }
  pbVar8 = (byte *)FUN_1000bc0e((char *)(DAT_10023310 + 0x2b));
  for (iVar3 = DAT_10024020; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar8 = (byte *)FUN_1000bc0e((char *)pbVar8);
  }
  FUN_10009eff(local_10c8,pbVar8);
  if (((DAT_10023e9c == '\x01') && ((bVar1 & 4) == 0)) || ((bVar1 & 0x40) == 0)) {
    if (DAT_10023e9c == '\x01') {
      FUN_100039fd((LPCSTR)local_c80,&DAT_1001f5c4);
    }
    else {
      FUN_1001393a((LPSTR)local_c80,(LPCSTR)local_170);
    }
  }
  else {
    pbVar8 = (byte *)FUN_1000bc0e((char *)pbVar8);
    FUN_10009eff((byte *)local_c80,pbVar8);
    iVar3 = FUN_1001b090((byte *)local_c80,s_ftp____1001f5d0,6);
    if (iVar3 != 0) {
      FUN_1001b090((byte *)local_c80,s_http____1001f5c8,7);
    }
  }
  pGVar23 = local_c80;
  pGVar21 = (GENERIC_MAPPING *)0x10005a99;
  FUN_1000b94f((LPCSTR)pGVar23);
  if (((bVar1 & 0x18) != 0) && ((bVar1 & 0x18) != 0x18)) {
    if (((bVar1 & 2) == 0) || ((DAT_10023930 == 0 || (DAT_100241e8 == 0)))) {
      pGVar9 = (GENERIC_MAPPING *)0x0;
    }
    GenericMapping = (PGENERIC_MAPPING)0x10005adc;
    pGVar23 = pGVar9;
    iVar3 = FUN_1000bc1c((LPCSTR)local_170,(LPCSTR)local_c80,(int)pGVar9,(int)pGVar9);
    pGVar21 = pGVar9;
    if (iVar3 != 0) {
      pGVar23 = (GENERIC_MAPPING *)&DAT_1001f5c0;
      FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,&DAT_1001f5c0);
      pGVar21 = (GENERIC_MAPPING *)0x1;
    }
  }
  if (DAT_100238b4 == 0) {
    if (DAT_10023fac == (PGENERIC_MAPPING)0x0) {
      if (((bVar1 & 0x20) == 0) && (*(int *)(DAT_1002392c + 0x30) == 0)) {
        if (DAT_100238cc != (HWND)0x0) {
          DestroyWindow(DAT_100238cc);
          DAT_100238cc = (HWND)0x0;
        }
        dwInitParam = 0;
        pcVar22 = CopyDlg;
        pHVar10 = (HWND)FUN_100157cf();
        in_stack_ffffffd8 = (PGENERIC_MAPPING)0x10005b50;
        GenericMapping = DAT_10024178;
        DAT_10023fac = (PGENERIC_MAPPING)
                       CreateDialogParamA((HINSTANCE)DAT_10024178,(LPCSTR)0x602,pHVar10,pcVar22,
                                          dwInitParam);
        FUN_10010d18((HWND)DAT_10023fac,'\x02',0);
        ShowWindow((HWND)DAT_10023fac,5);
        pGVar23 = (GENERIC_MAPPING *)0x0;
        pGVar21 = DAT_100238d8;
        EnableWindow((HWND)DAT_100238d8,0);
      }
    }
    else {
      pGVar23 = (GENERIC_MAPPING *)0x0;
      pGVar21 = (GENERIC_MAPPING *)0x0;
      InvalidateRgn((HWND)DAT_10023fac,(HRGN)0x0,0);
    }
  }
  pcVar22 = lstrcpyA_exref;
  if (pGVar21 == (GENERIC_MAPPING *)0x0) {
    if (pGVar23 == (GENERIC_MAPPING *)0x0) {
      pCVar12 = *(LPCSTR *)(DAT_100240b8 + 0xc);
    }
    else {
      pCVar12 = *(LPCSTR *)(DAT_100240b8 + 0x34);
    }
  }
  else {
    pCVar12 = *(LPCSTR *)(DAT_100240b8 + 0x38);
  }
  lstrcpyA((LPSTR)local_880,pCVar12);
  iVar3 = lstrlenA((LPCSTR)local_880);
  local_4c = local_880 + iVar3;
  pbVar8 = (byte *)FUN_1000bc0e((char *)(DAT_10023310 + 0x2b));
  FUN_1000b97c((int *)&stack0xfffffff0,1);
  if (*pbVar8 == 0) {
    lstrcatA((LPSTR)local_880,*(LPCSTR *)(DAT_100240b8 + 0x10));
  }
  else {
    iVar3 = lstrlenA((LPCSTR)local_880);
    FUN_10009eff(local_880 + iVar3,pbVar8);
  }
  lstrcatA((LPSTR)local_880,&DAT_1001f5bc);
  lstrlenA((LPCSTR)local_880);
  lstrcpyA((LPSTR)local_280,(LPCSTR)local_170);
  if (DAT_100238b4 == 0) {
    pGVar9 = local_280;
    pHVar10 = GetDlgItem((HWND)DAT_10023fac,0xef5);
    FUN_10009801(pHVar10,(LPCSTR)pGVar9);
  }
  pcVar24 = (char *)local_280;
  pbVar8 = local_880;
  pvVar4 = (HANDLE)0x10005c8a;
  lstrcatA((LPSTR)pbVar8,pcVar24);
  bVar18 = bVar1 & 0x20;
  if (((bVar1 & 0x20) == 0) && (*(int *)(DAT_1002392c + 0x30) == 0)) {
    pbVar8 = (byte *)0x10005cac;
    FUN_10013bba((LPCSTR)local_880);
    pcVar24 = (char *)0x10005cb2;
    FUN_10012db9();
  }
  if (pbVar8 != (byte *)0x0) {
    if (pvVar4 != (HANDLE)0x0) {
      DeleteFileA((LPCSTR)local_c80);
    }
    if ((((bVar1 & 2) != 0) && (DAT_10023930 != 0)) && (DAT_100241e8 != 0)) {
      if ((bVar1 & 4) == 0) {
        GenericMapping = local_170;
        FUN_1000aef7((LPCSTR)GenericMapping,(LPCSTR)0x0,(char *)pbVar7,(char *)0x0,(char *)0x0);
      }
      FUN_10006d9f((LPCSTR)local_170,1,0);
    }
    if (((bVar2 & 0x10) != 0) && (DAT_10023e9c != '\x01')) {
      FUN_100158d2((LPCSTR)local_170);
    }
    if ((DAT_100238dc & 0x10000) == 0) {
      return 0;
    }
    *(int *)(DAT_1002392c + 0x14) =
         (int)((int)&GenericMapping->GenericRead + *(int *)(DAT_1002392c + 0x14));
    return 0;
  }
  if (DAT_100238b8 != 0) {
    pcVar24 = (char *)&local_48;
    GenericMapping = local_170;
    in_stack_ffffffd8 = (PGENERIC_MAPPING)0x10005d77;
    BVar11 = GetFileSecurityA((LPCSTR)GenericMapping,7,DAT_10024170,0x7800,(LPDWORD)pcVar24);
    if (BVar11 != 0) {
      pcVar24 = (char *)0x1;
      BVar11 = ImpersonateSelf(SecurityIdentification);
      if (BVar11 != 0) {
        TokenHandle = (PHANDLE)&stack0xffffffe4;
        BVar11 = 1;
        DesiredAccess = (HANDLE)0x8;
        pvVar4 = GetCurrentThread();
        GenericMapping = (PGENERIC_MAPPING)0x10005da0;
        BVar11 = OpenThreadToken(pvVar4,(DWORD)DesiredAccess,BVar11,TokenHandle);
        if (BVar11 != 0) {
          _memset(&local_180,0,0x10);
          PrivilegeSetLength = &stack0xffffffe0;
          GenericMapping = &local_180;
          in_stack_ffffffd8 = (PGENERIC_MAPPING)0x180;
          pbVar7 = DAT_10024170;
          hObject = PrivilegeSetLength;
          BVar11 = AccessCheck(DAT_10024170,PrivilegeSetLength,0x180,GenericMapping,&local_68,
                               (LPDWORD)PrivilegeSetLength,&local_54,(LPBOOL)&stack0xffffffd8);
          bVar18 = (byte)((uint)PrivilegeSetLength >> 0x18);
          if ((BVar11 != 0) && (in_stack_ffffffd8 == (PGENERIC_MAPPING)0x0)) goto LAB_10005e66;
          CloseHandle(hObject);
        }
        pcVar24 = (char *)0x10005e00;
        RevertToSelf();
      }
    }
  }
  if ((((*DAT_10023eb0 == '\0') && (DAT_10023e9c != '\x01')) && ((bVar1 & 4) == 0)) &&
     (DAT_10023e30 == 0)) {
    lstrcpyA(DAT_10023eb0,(LPCSTR)local_170);
    pCVar12 = FUN_1000b94f(DAT_10023eb0);
    pcVar24 = s_INSTALL_LOG_1001f5b0;
    lstrcpyA(pCVar12,s_INSTALL_LOG_1001f5b0);
  }
  bVar25 = bVar1 & 0x40;
  pGVar19 = GenericMapping;
  pGVar5 = GenericMapping;
  if ((bVar1 & 0x40) == 0) {
    pcVar24 = (char *)0x1;
    GenericMapping = local_c80;
    in_stack_ffffffd8 = (PGENERIC_MAPPING)FUN_1001223a((LPCSTR)local_c80,1,1);
    if ((int)in_stack_ffffffd8 < 0) {
LAB_10005e66:
      FUN_10011024((LPCSTR)local_170,1);
      return -2;
    }
    pGVar5 = GenericMapping;
    if ((GENERIC_MAPPING *)pcVar24 == (GENERIC_MAPPING *)0x0) {
      GenericMapping = (PGENERIC_MAPPING)(*(int *)(DAT_10023310 + 7) - *(int *)(DAT_10023310 + 3));
      *(int *)(DAT_1002392c + 8) = *(int *)(DAT_10023310 + 3) + DAT_100238bc;
      pcVar24 = (char *)0x10005ea3;
      pGVar5 = GenericMapping;
      FUN_1000bde0();
    }
  }
  DAT_10023f9c = pGVar19;
  DAT_10023ecc = *(int *)(DAT_1002392c + 0x14);
  pGVar19 = DAT_10023f9c;
  if (bVar25 == 0) {
    if ((GENERIC_MAPPING *)pcVar24 == (GENERIC_MAPPING *)0x0) {
      uVar20 = *(undefined4 *)(DAT_1002392c + 0x18);
      iVar3 = 0;
LAB_1000606d:
      uVar15 = DAT_100238dc;
      if (((bVar2 & 0x40) != 0) || (iVar3 != 0)) {
        *(byte *)(DAT_1002392c + 0x36) = *(byte *)(DAT_1002392c + 0x36) & 0xfe;
      }
      pGVar19 = (PGENERIC_MAPPING)0x10006098;
      FUN_10013192(uVar20,in_stack_ffffffd8,GenericMapping,&local_38);
      *(uint *)(DAT_1002392c + 0x34) = uVar15;
      uVar15 = (uint)*(ushort *)(DAT_10023310 + 0xd);
      HVar13 = 0x100060ba;
      pGVar5 = in_stack_ffffffd8;
      FUN_10012318(in_stack_ffffffd8,*(WORD *)(DAT_10023310 + 0xb),*(ushort *)(DAT_10023310 + 0xd));
      if (uVar15 != 0) {
        _lclose(HVar13);
      }
      CloseHandle(in_stack_ffffffd8);
      if ((*(char *)(DAT_1002392c + 0x20) == '\0') && (*(int *)(DAT_1002392c + 0x1c) == 0))
      goto LAB_100060ee;
    }
    else {
      uVar15 = *(uint *)(DAT_10023310 + 3);
      GenericMapping = *(PGENERIC_MAPPING *)(DAT_10023310 + 7);
      uVar16 = uVar15 & 0x3fff;
      FUN_10006a1f(uVar16 % 0x24);
      FUN_10006a1f((int)(((ulonglong)uVar16 / 0x24) % 0x24));
      FUN_10006a1f(uVar16 / 0x510);
      in_stack_ffffffd8 = local_380;
      pcVar24 = s__s_c_c_c_1001f5a4;
      bVar18 = 0x10;
      wsprintfA((LPSTR)in_stack_ffffffd8,s__s_c_c_c_1001f5a4);
      FUN_10009f15((byte *)local_380,(byte *)local_380,0x100);
      if ((int)DAT_1001f0b0 == uVar16) {
        iVar3 = 0;
        if ((DAT_100238dc & 0x10000) != 0) {
          *(int *)(DAT_1002392c + 0x14) = (int)(pcVar24 + *(int *)(DAT_1002392c + 0x14));
        }
LAB_10005fec:
        if (iVar3 != 0) {
LAB_10006039:
          CloseHandle(in_stack_ffffffd8);
          DeleteFileA((LPCSTR)local_c80);
          return -2;
        }
        FUN_10012386(DAT_1002416c,0);
        HVar13 = _lopen(DAT_1002416c,0);
        hFile = 0x1000601d;
        _lread(HVar13,&local_48,4);
        if (local_48.GenericRead != DAT_10023eac) {
          FUN_1000b352(*(char **)(DAT_100240b8 + 0xac));
          goto LAB_10006039;
        }
        iVar3 = 0;
        uVar20 = 0x1000605f;
        _llseek(hFile,uVar15 >> 0xe,0);
        pcVar22 = lstrcpyA_exref;
        goto LAB_1000606d;
      }
      if (DAT_1001f0b0 < 0) {
        FUN_100039fd(DAT_1002416c,&DAT_1001f5a0);
      }
      else {
        DeleteFileA(DAT_1002416c);
      }
      in_stack_ffffffd8 = local_380;
      bVar18 = 0x10;
      iVar3 = FUN_10013e86(in_stack_ffffffd8,DAT_1002416c,(int)GenericMapping,pcVar24,0,0);
      DAT_1001f0b0 = (short)uVar16;
      if ((*(char *)(DAT_1002392c + 0x20) == '\0') && (*(int *)(DAT_1002392c + 0x1c) == 0))
      goto LAB_10005fec;
      CloseHandle(in_stack_ffffffd8);
    }
LAB_1000686d:
    pGVar9 = local_c80;
    goto LAB_100069f4;
  }
LAB_100060ee:
  if ((bVar18 == 0) && (*(int *)(DAT_1002392c + 0x30) == 0)) {
    if (local_10c8[0] != 0) {
      (*pcVar22)();
      pGVar5 = (PGENERIC_MAPPING)0x10006130;
      lstrcatA(local_f80,(LPCSTR)local_4c);
      pCVar12 = local_f80;
      FUN_10013bba(pCVar12);
      if ((((DAT_100238dc & 0x10000) != 0) && ((bVar2 & 0x40) == 0)) && (pCVar12 == (LPCSTR)0x0)) {
        *(LPCSTR *)(DAT_1002392c + 0x14) = (LPCSTR)((int)&pGVar19->GenericRead + DAT_10023ecc);
      }
    }
    if (DAT_100238b4 == 0) {
      pGVar5 = DAT_10023fac;
      InvalidateRgn((HWND)DAT_10023fac,(HRGN)0x0,0);
    }
    UpdateScreen(1);
  }
  if (local_10c8[0] != 0) {
    (*pcVar22)();
    pGVar5 = local_c80;
    (*pcVar22)();
    pbVar7 = local_10c8;
    local_38 = 0x100061d7;
    iVar3 = (*DAT_10024054)();
    if (iVar3 != 0) {
      DeleteFileA(local_480);
      pcVar24 = local_e80;
      goto LAB_1000683e;
    }
  }
  local_280[0].GenericRead._0_1_ = '\0';
  if ((DAT_10023e9c == '\x01') || ((bVar1 & 1) == 0)) {
    FUN_10012539((LPCSTR)local_170);
    if ((DAT_10023e9c == '\x01') && ((bVar1 & 4) == 0)) goto LAB_10006724;
    if ((DAT_100239ac != '\0') && ((bVar1 & 4) == 0)) {
      (*pcVar22)();
      pbVar7 = (byte *)0x1000676e;
      iVar3 = FUN_1000b673((LPCSTR)local_280,(LPCSTR)0x0,1,0,0,&local_48.GenericExecute,
                           (int *)&local_48.GenericWrite);
      if (iVar3 != 0) {
        local_280[0].GenericRead._0_1_ = '\0';
      }
    }
    if (bVar25 != 0) {
      pGVar9 = local_170;
      FUN_1001393a((LPSTR)local_880,(LPCSTR)pGVar9);
      if (pGVar9 == (GENERIC_MAPPING *)0x0) {
        pbVar7 = (byte *)0x100067e7;
        iVar3 = FUN_1000b673((LPCSTR)local_c80,(LPCSTR)local_880,0,(int)GenericMapping,0,&local_38,
                             (int *)&stack0xffffffdc);
      }
      else {
        iVar3 = FUN_10013e86(local_c80,local_880,(int)GenericMapping,GenericMapping,
                             (uint)*(ushort *)(DAT_10023310 + 0xb),
                             (uint)*(ushort *)(DAT_10023310 + 0xd));
      }
      if (iVar3 != 0) {
        (*pcVar22)();
        FUN_10012386(local_480,1);
        wsprintfA(local_f80,*(LPCSTR *)(DAT_100240b8 + 0x68));
        pcVar24 = local_f80;
LAB_1000683e:
        FUN_1000b352(pcVar24);
        return -2;
      }
      (*pcVar22)();
      if ((*(char *)(DAT_1002392c + 0x20) != '\0') || (*(int *)(DAT_1002392c + 0x1c) != 0))
      goto LAB_1000686d;
    }
    do {
      SetFileAttributesA((LPCSTR)local_170,0);
      BVar11 = DeleteFileA((LPCSTR)local_170);
      if ((BVar11 == 0) && (iVar3 = FUN_10012539((LPCSTR)local_170), iVar3 == 0)) {
        pbVar7 = (byte *)0x100068c3;
        uVar15 = FUN_1000b673((LPCSTR)local_c80,(LPCSTR)local_170,0,0,0,(undefined4 *)0x0,(int *)0x0
                             );
        if (uVar15 == 0) {
          DeleteFileA((LPCSTR)local_c80);
        }
      }
      else {
        BVar11 = MoveFileA((LPCSTR)local_c80,(LPCSTR)local_170);
        uVar15 = (uint)(BVar11 == 0);
      }
      pcVar24 = (char *)local_170;
      pGVar5 = (PGENERIC_MAPPING)0x10006903;
      iVar3 = FUN_1000b9a2(pcVar24,uVar15);
    } while (iVar3 != 0);
    if (uVar15 != 0) {
      iVar3 = FUN_100134fe(0,0,(CHAR *)local_c80,(LPCSTR)local_170);
      if (iVar3 == 0) {
        DeleteFileA((LPCSTR)local_c80);
      }
      if (iVar3 < 0) {
        return iVar3;
      }
      pGVar5 = (PGENERIC_MAPPING)0x10006959;
      pcVar24 = PTR_s_INSTALL_RESULT_1001f03c;
      FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,&DAT_1001f59c);
    }
  }
  else {
    pCVar12 = FUN_1000b94f((LPCSTR)local_170);
    lstrcpyA(local_d80,pCVar12);
    lstrcpyA((LPSTR)local_880,(LPCSTR)local_170);
    pCVar12[-0x711] = '\0';
    local_48.GenericAll = 0x104;
    local_50 = 0x104;
    GetWindowsDirectoryA(local_480,0x100);
    GetSystemDirectoryA((LPSTR)local_380,0x100);
    iVar3 = lstrcmpiA((LPCSTR)local_880,local_480);
    bVar17 = iVar3 == 0;
    if (!bVar17) {
      iVar3 = lstrcmpiA((LPCSTR)local_880,(LPCSTR)local_380);
      bVar17 = iVar3 == 0;
    }
    pGVar9 = local_c80;
    local_38 = 0x100062f8;
    iVar3 = FUN_10012ffe((LPCSTR)pGVar9,(uint)bVar17,local_d80,(LPCSTR)local_880,(LPCSTR)local_880,
                         DAT_100239a4,&local_50,(LPSTR)DAT_10023904,&local_48.GenericAll);
    if (bVar17) {
      iVar14 = lstrcmpiA((LPCSTR)local_880,DAT_100239a4);
      if ((iVar14 == 0) && (bVar25 != 0)) {
        *DAT_100239a4 = '\0';
      }
      if (((DAT_100241e8 != 0) && (DAT_10024168 == 0)) && (iVar3 == 0)) {
        GetSystemDirectoryA(local_e80,0x100);
        iVar3 = lstrcmpiA((LPCSTR)DAT_10023904,(LPCSTR)local_380);
        if ((iVar3 == 0) && (iVar3 = lstrcmpiA(DAT_100239a4,local_e80), iVar3 == 0)) {
          *DAT_100239a4 = '\0';
        }
      }
      iVar3 = lstrcmpiA((LPCSTR)DAT_10023904,local_480);
      if (iVar3 == 0) {
        FUN_10010cf9((LPCSTR)local_380);
        iVar3 = lstrcmpiA(local_480,(LPCSTR)local_380);
        bVar17 = iVar3 == 0;
      }
    }
    else {
      lstrcpyA(DAT_100239a4,(LPCSTR)local_880);
      lstrcpyA((LPSTR)DAT_10023904,(LPCSTR)local_880);
    }
    if ((bVar2 & 0x20) != 0) {
      bVar17 = false;
    }
    wsprintfA((LPSTR)local_170,s__s__s_1001f2e4);
    wsprintfA((LPSTR)local_280,s__s__s_1001f2e4);
    if (*DAT_100239a4 == '\0') {
      lstrcpyA((LPSTR)local_280,(LPCSTR)local_170);
    }
    iVar3 = 1;
    SetFileAttributesA((LPCSTR)local_280,0);
    if ((DAT_100239ac != '\0') && ((bVar1 & 4) == 0)) {
      iVar3 = FUN_1000b673((LPCSTR)local_280,(LPCSTR)0x0,1,0,0,&local_48.GenericExecute,
                           (int *)&local_48.GenericWrite);
    }
    if (iVar3 != 0) {
      local_280[0].GenericRead._0_1_ = '\0';
    }
    lstrcpyA((LPSTR)local_880,(LPCSTR)local_c80);
    pbVar7 = (byte *)FUN_1000b94f((LPCSTR)local_880);
    if ((local_880 < pbVar7) && (pbVar7[-1] == 0x5c)) {
      pbVar7 = pbVar7 + -1;
    }
    *pbVar7 = 0;
    if (local_880[2] == '\0') {
      lstrcatA((LPSTR)local_880,&DAT_1001f314);
    }
    *DAT_10023f54 = '\0';
    local_48.GenericAll = 0x104;
    FUN_10012539((LPCSTR)local_170);
    pbVar8 = (byte *)((-(uint)bVar17 & 0xfffffffe) + 2);
    do {
      local_38 = 0x10006541;
      pGVar23 = DAT_10023904;
      pbVar7 = pbVar8;
      DVar6 = FUN_1001302f((int)DAT_10023904,(DWORD)pbVar8,(LPCSTR)pGVar9,local_d80,
                           (LPCSTR)local_880,(CHAR *)DAT_10023904,DAT_100239a4,DAT_10023f54,
                           &local_48.GenericAll);
      if ((DVar6 & 1) != 0) {
        FUN_10006a30((LPCSTR)DAT_10023904,DAT_10023f54);
      }
      pGVar9 = pGVar23;
      if (((DVar6 & 8) != 0) && ((DVar6 & 0x84) == 0)) {
        pbVar7 = (byte *)((uint)pbVar8 | 1);
        local_38 = 0x1000659c;
        pGVar9 = DAT_10023904;
        DVar6 = FUN_1001302f((int)DAT_10023904,(DWORD)pbVar7,(LPCSTR)pGVar23,local_d80,
                             (LPCSTR)local_880,(CHAR *)DAT_10023904,DAT_100239a4,DAT_10023f54,
                             &local_48.GenericAll);
        if ((DVar6 & 1) != 0) {
          FUN_10006a30((LPCSTR)DAT_10023904,DAT_10023f54);
        }
      }
      if ((((DVar6 & 0x200) != 0) && (iVar3 = FUN_10012539((LPCSTR)local_170), iVar3 == 0)) &&
         (iVar3 = FUN_100120c5((LPCSTR)local_170,7,local_fc8), iVar3 == 0)) {
        if ((local_ec8 & 0x10) == 0) {
          DVar6 = DVar6 | 0x80;
        }
        FUN_1001221a((int)local_fc8);
      }
      pcVar24 = (char *)local_170;
      pGVar5 = (PGENERIC_MAPPING)0x1000661a;
      iVar3 = FUN_1000b9a2(pcVar24,(uint)((DVar6 & 0x80) != 0));
    } while (iVar3 != 0);
    iVar3 = 1;
    if ((DVar6 & 0xfe) != 0) {
      if ((DVar6 & 0x80) == 0) {
        pCVar12 = &DAT_1001f598;
      }
      else {
        iVar14 = FUN_100134fe(1,bVar1 & 0x40,(CHAR *)local_c80,(LPCSTR)local_170);
        if (iVar14 == 1) {
          iVar3 = 0;
        }
        if (iVar14 < 0) {
          return iVar14;
        }
        pCVar12 = &DAT_1001f59c;
      }
      pGVar5 = (PGENERIC_MAPPING)0x1000667c;
      pcVar24 = PTR_s_INSTALL_RESULT_1001f03c;
      FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,pCVar12);
      if (((DAT_1001f030 != (PGENERIC_MAPPING)0xffffffff) && ((DVar6 & 0x80) == 0)) &&
         (DAT_10023edc == 0)) {
        pcVar24 = s_Version__Following_file_not_copi_1001f570;
        pGVar5 = DAT_1001f030;
        FileWrite(DAT_1001f030,s_Version__Following_file_not_copi_1001f570,0x25);
        if ((((bVar1 & 2) == 0) || (DAT_10023930 == 0)) || (DAT_100241e8 == 0)) {
          pcVar24 = &DAT_1001f288;
          pGVar5 = DAT_1001f030;
          FileWrite(DAT_1001f030,&DAT_1001f288,1);
        }
      }
      if ((char)local_280[0].GenericRead != '\0') {
        pcVar24 = (char *)0x100066e0;
        DeleteFileA((LPCSTR)local_280);
        local_280[0].GenericRead._0_1_ = '\0';
      }
    }
    if ((bVar25 == 0) && (iVar3 != 0)) {
LAB_10006724:
      pcVar24 = (char *)0x10006731;
      DeleteFileA((LPCSTR)local_c80);
    }
  }
  if ((bVar1 & 0x41) == 0x41) {
    *(int *)(DAT_1002392c + 0x14) = (int)((int)&pGVar5->GenericRead + *(int *)(DAT_1002392c + 0x14))
    ;
  }
  if ((DAT_10023930 != 0) && (DAT_100241e8 != 0)) {
    FUN_10006d9f((LPCSTR)local_170,(int)pcVar24,(byte)~bVar1 >> 1 & 1);
  }
  if (((bVar2 & 0x10) != 0) && (DAT_10023e9c != '\x01')) {
    FUN_100158d2((LPCSTR)local_170);
  }
  if ((bVar1 & 4) != 0) {
    return 0;
  }
  pGVar9 = local_170;
  FUN_1000aef7((LPCSTR)pGVar9,(LPCSTR)0x0,(char *)pbVar7,(char *)0x0,(char *)0x0);
  if ((char)local_280[0].GenericRead == '\0') {
    return 0;
  }
  if ((pGVar9 != (GENERIC_MAPPING *)local_48.GenericWrite) || (local_38 != local_48.GenericExecute))
  {
    FUN_1000aef7((LPCSTR)local_280,(LPCSTR)local_280,(char *)pbVar7,(char *)0x0,(char *)0x0);
    return 0;
  }
  pGVar9 = local_280;
LAB_100069f4:
  DeleteFileA((LPCSTR)pGVar9);
  return 0;
}



/* ==== FUN_10006a1f @ 10006a1f ==== 
 * signature: int __cdecl FUN_10006a1f(int param_1)
 * body: 10006a1f-10006a2f
 */

int __cdecl FUN_10006a1f(int param_1)

{
  if (9 < param_1) {
    return param_1 + 0x57;
  }
  return param_1 + 0x30;
}



/* ==== FUN_10006a30 @ 10006a30 ==== 
 * signature: undefined __cdecl FUN_10006a30(LPCSTR param_1, LPCSTR param_2)
 * body: 10006a30-10006a8a
 */

void __cdecl FUN_10006a30(LPCSTR param_1,LPCSTR param_2)

{
  CHAR CVar1;
  CHAR local_104 [256];
  
  lstrcpyA(local_104,param_1);
  CVar1 = FUN_10014819(local_104);
  if (CVar1 != '\\') {
    lstrcatA(local_104,&DAT_1001f314);
  }
  lstrcatA(local_104,param_2);
  DeleteFileA(local_104);
  return;
}



/* ==== FUN_10006a8b @ 10006a8b ==== 
 * signature: undefined __stdcall FUN_10006a8b(void)
 * body: 10006a8b-10006d9e
 */

void FUN_10006a8b(void)

{
  int iVar1;
  LPCSTR pCVar2;
  BOOL BVar3;
  FARPROC pFVar4;
  HMODULE hModule;
  DWORD DVar5;
  int iVar6;
  char *pcVar7;
  CHAR local_7c0 [512];
  CHAR local_5c0 [512];
  CHAR local_3c0 [512];
  CHAR local_1c0 [256];
  _STARTUPINFOA local_c0;
  _STARTUPINFOA local_7c;
  _PROCESS_INFORMATION local_38;
  _PROCESS_INFORMATION local_28;
  HMODULE local_18;
  HMODULE local_14;
  DWORD local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (0 < DAT_10024188) {
    do {
      iVar6 = local_c * 4;
      lstrcpyA(local_1c0,*(LPCSTR *)(DAT_1002417c + iVar6));
      FUN_10010cf9(local_1c0);
      FUN_10012386(local_1c0,0);
      FUN_10016240(local_1c0);
      UpdateScreen(0);
      if (DAT_10023ea8 != '\0') {
        FUN_1001277f((HWND)0x0,*(char **)(DAT_1002417c + iVar6),*(undefined4 *)(DAT_100240b8 + 0x48)
                     ,2);
      }
      pCVar2 = *(LPCSTR *)(DAT_1002417c + iVar6);
      iVar1 = lstrlenA(pCVar2);
      pCVar2 = pCVar2 + iVar1 + -3;
      if (pCVar2 < *(LPCSTR *)(DAT_1002417c + iVar6)) {
        pCVar2 = *(LPCSTR *)(DAT_1002417c + iVar6);
      }
      iVar1 = lstrcmpiA(pCVar2,&DAT_1001f670);
      if (iVar1 == 0) {
        _memset(&local_7c,0,0x44);
        local_7c.cb = 0x44;
        wsprintfA(local_5c0,s__s__REGSERVER_1001f660,*(undefined4 *)(DAT_1002417c + iVar6));
        BVar3 = CreateProcessA((LPCSTR)0x0,local_5c0,(LPSECURITY_ATTRIBUTES)0x0,
                               (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_7c,
                               &local_38);
        local_14 = (HMODULE)(uint)(BVar3 == 0);
        if (local_14 == (HMODULE)0x0) {
          local_8 = 0;
          FUN_1000ba4c(local_38.hProcess);
        }
        else {
          local_8 = 1;
        }
      }
      else {
        iVar1 = FUN_100138b1(*(LPCSTR *)(DAT_1002417c + iVar6));
        local_8 = 1;
        if (iVar1 == 0) {
LAB_10006c8a:
          local_14 = LoadLibraryA(s_OLE2_DLL_1001f64c);
          if (local_14 != (HMODULE)0x0) {
            pFVar4 = GetProcAddress(local_14,s_OleInitialize_1001f63c);
            if ((pFVar4 != (FARPROC)0x0) && (iVar1 = (*pFVar4)(0), iVar1 == 0)) {
              local_18 = LoadLibraryA(s_OC25_DLL_1001f630);
              hModule = LoadLibraryA(*(LPCSTR *)(DAT_1002417c + iVar6));
              if (hModule != (HMODULE)0x0) {
                pFVar4 = GetProcAddress(hModule,s_DllRegisterServer_1001f61c);
                if ((pFVar4 != (FARPROC)0x0) && (iVar1 = (*pFVar4)(), iVar1 == 0)) {
                  local_8 = 0;
                }
                FreeLibrary(hModule);
              }
              if (local_18 != (HMODULE)0x0) {
                FreeLibrary(local_18);
              }
            }
            pFVar4 = GetProcAddress(local_14,s_OleUninitialize_1001f60c);
            if (pFVar4 != (FARPROC)0x0) {
              (*pFVar4)();
            }
            FreeLibrary(local_14);
          }
        }
        else if (DAT_100241e8 != 0) {
          if (iVar1 == 0) goto LAB_10006c8a;
          _memset(&local_c0,0,0x44);
          local_c0.cb = 0x44;
          wsprintfA(local_7c0,s___s___s_1001f658,DAT_10024190,*(undefined4 *)(DAT_1002417c + iVar6))
          ;
          BVar3 = CreateProcessA((LPCSTR)0x0,local_7c0,(LPSECURITY_ATTRIBUTES)0x0,
                                 (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_c0,
                                 &local_28);
          if (BVar3 != 0) {
            do {
              UpdateScreen(0);
              BVar3 = GetExitCodeProcess(local_28.hProcess,&local_10);
              if (BVar3 == 0) {
                local_10 = 1;
              }
            } while (local_10 == 0x103);
            if (local_10 == 0) {
              local_8 = 0;
            }
          }
        }
      }
      if ((DAT_1001f030 != (HANDLE)0xffffffff) && (DAT_10023edc == 0)) {
        if (local_8 == 0) {
          pcVar7 = s_Self_Register___s_1001f5d8;
        }
        else {
          pcVar7 = s_Could_not_Self_Register___s_1001f5ec;
        }
        wsprintfA(local_3c0,pcVar7,*(undefined4 *)(DAT_1002417c + iVar6));
        DVar5 = lstrlenA(local_3c0);
        FileWrite(DAT_1001f030,local_3c0,DVar5);
      }
      FUN_10015a50(*(undefined **)(DAT_1002417c + iVar6));
      local_c = local_c + 1;
    } while (local_c < DAT_10024188);
  }
  DAT_10024188 = 0;
  return;
}



/* ==== FUN_10006d9f @ 10006d9f ==== 
 * signature: undefined __cdecl FUN_10006d9f(LPCSTR param_1, int param_2, int param_3)
 * body: 10006d9f-10006e58
 */

void __cdecl FUN_10006d9f(LPCSTR param_1,int param_2,int param_3)

{
  LSTATUS LVar1;
  int iVar2;
  CHAR local_20c [256];
  int local_10c [64];
  char local_c [8];
  
  iVar2 = 0;
  lstrcpyA(local_20c,param_1);
  FUN_10012386(local_20c,1);
  LVar1 = FUN_10004d80((HKEY)0x2,PTR_s_Software_Microsoft_Windows_Curre_1001f050,(LPBYTE)local_10c,
                       local_20c,local_c,0x100,1);
  if (LVar1 == 0) {
    iVar2 = FUN_10016230((byte *)local_10c);
  }
  if (param_3 == 0) {
    if ((param_2 != 0) && (iVar2 == 0)) {
      iVar2 = 1;
    }
    local_10c[0] = iVar2 + 1;
    FUN_10004d00(2,(HKEY)PTR_s_Software_Microsoft_Windows_Curre_1001f050,local_20c,3,
                 (BYTE *)local_10c,4,0);
  }
  else if (0 < iVar2) {
    FUN_10002639(s_Shared_DLL_counter_ignored__1001f674);
  }
  return;
}



/* ==== FUN_10006e59 @ 10006e59 ==== 
 * signature: undefined4 __stdcall FUN_10006e59(void)
 * body: 10006e59-10007015
 */

undefined4 FUN_10006e59(void)

{
  char cVar1;
  int iVar2;
  char *lpString2;
  int iVar3;
  int iVar4;
  CHAR local_108 [256];
  uint local_8;
  
  if (*(int *)(DAT_1002392c + 0x30) != 0) {
    return 0;
  }
  if (*(char *)(DAT_10023310 + 0xd) != '\0') {
    lpString2 = FUN_1000bc0e((char *)(DAT_10023310 + 0xd));
    FUN_1001054d((LPCSTR)(DAT_10023310 + 0xd),local_108);
    iVar3 = lstrcmpiA(local_108,lpString2);
    if (iVar3 != 0) {
      return 0;
    }
  }
  FUN_1000bb6a();
  iVar3 = *(int *)(DAT_10023310 + 1);
  iVar4 = *(int *)(DAT_10023310 + 5);
  *(int *)(DAT_1002392c + 8) = iVar3 + DAT_100238bc;
  if (DAT_10023e8c != 0) {
    if (DAT_10024028 == *(int *)(DAT_1002392c + 8)) goto LAB_10006f96;
    if (DAT_10023e8c != 0) {
      FUN_10013e71(DAT_10024160);
    }
  }
  DAT_10023e8c = FUN_10013e57(*(SIZE_T *)(DAT_10023310 + 9),&DAT_10024160);
  DAT_10024028 = *(int *)(DAT_1002392c + 8);
  if (DAT_10023e8c == 0) {
    return 1;
  }
  iVar2 = *(int *)(DAT_1002392c + 0x18);
  FUN_1000bde0();
  *(int *)(DAT_1002392c + 0x8c) = DAT_10023e8c;
  DAT_10023f9c = 0;
  FUN_10013192(*(undefined4 *)(DAT_1002392c + 0x18),(HANDLE)0x0,iVar4 - iVar3,0);
  *(undefined4 *)(DAT_1002392c + 0x8c) = 0;
  if (iVar2 == -1) {
    _lclose(*(HFILE *)(DAT_1002392c + 0x18));
    *(undefined4 *)(DAT_1002392c + 0x18) = 0xffffffff;
  }
LAB_10006f96:
  local_8 = 0;
  iVar3 = 0;
  DAT_10023924 = 0;
  while( true ) {
    iVar4 = FUN_10007016(local_8);
    if (iVar4 < 0) {
      FUN_1000b352(PTR_s_Internal_Error_1001f048);
      return 1;
    }
    if (iVar4 == 0x400) break;
    if (iVar4 == 0x800) {
      return 0;
    }
    iVar4 = *(int *)(DAT_100240e0 + 1 + iVar4 * 4) + DAT_100240e0;
    cVar1 = *(char *)(iVar4 + 4);
    if (cVar1 == '\0') {
      if (iVar3 == 0) {
        return 0;
      }
      local_8 = (uint)(byte)local_108[iVar3 + -1];
      iVar3 = iVar3 + -1;
    }
    else {
      if (cVar1 == '\x01') {
        return 0;
      }
      if (cVar1 == '\x02') {
        cVar1 = *(char *)(iVar4 + 3);
        local_108[iVar3] = (CHAR)local_8;
        iVar3 = iVar3 + 1;
        local_8 = (int)cVar1;
      }
      else if (cVar1 == '\x03') {
        return 1;
      }
    }
  }
  return 1;
}



/* ==== FUN_10007016 @ 10007016 ==== 
 * signature: int __cdecl FUN_10007016(int param_1)
 * body: 10007016-100072a4
 */

int __cdecl FUN_10007016(int param_1)

{
  BOOL BVar1;
  HFONT pHVar2;
  int iVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SIZE_T dwBytes;
  undefined4 *puVar8;
  char *pcVar9;
  LOGFONTA *lplf;
  LOGFONTA *pLVar10;
  int iVar11;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  undefined4 local_70 [16];
  tagMSG local_30;
  int local_14;
  int local_10;
  LPCDLGTEMPLATEA local_c;
  LPCDLGTEMPLATEA local_8;
  
  iVar11 = param_1 * 0xc;
  iVar6 = *(int *)(DAT_10023e8c + iVar11);
  dwBytes = ((int *)(DAT_10023e8c + iVar11))[1] - iVar6;
  local_c = GlobalAlloc(0x40,dwBytes);
  if (local_c == (LPCDLGTEMPLATEA)0x0) {
    iVar6 = -2;
  }
  else {
    local_8 = GlobalLock(local_c);
    if (DAT_10023e20 != 0) {
      if (DAT_100238cc == (HWND)0x0) {
        lpParam = (LPVOID)0x0;
        hMenu = (HMENU)0x0;
        hInstance = DAT_10024178;
        BVar1 = IsWindowVisible(DAT_100238d8);
        DAT_100238cc = CreateWindowExA(1,s_GLBSWizard_1001f398,&DAT_10023314,0x80c80080,0,0,1,1,
                                       (HWND)(-(uint)(BVar1 != 0) & (uint)DAT_100238d8),hMenu,
                                       hInstance,lpParam);
        DAT_100241f0 = 1;
      }
      if (DAT_10023924 == 0) {
        *(undefined4 *)(iVar6 + DAT_10023e8c) = 0x50000040;
      }
    }
    FUN_10015e50(&local_8->style,(undefined4 *)(DAT_10023e8c + iVar6),dwBytes);
    GlobalUnlock(local_c);
    iVar3 = DAT_10023e8c;
    iVar5 = DAT_10023924;
    local_8 = (LPCDLGTEMPLATEA)(iVar6 + DAT_10023e8c);
    pcVar9 = (char *)(*(int *)(DAT_10023e8c + 4 + iVar11) + DAT_10023e8c);
    local_14 = (int)*pcVar9;
    if (local_14 < 1) {
      lplf = (LOGFONTA *)(pcVar9 + 1);
    }
    else {
      lplf = (LOGFONTA *)(pcVar9 + 1);
      *(undefined4 **)(&DAT_10023e40 + DAT_10023924 * 4) = local_70;
      if (0 < local_14) {
        puVar8 = local_70;
        local_10 = local_14;
        do {
          pHVar2 = CreateFontIndirectA(lplf);
          *puVar8 = pHVar2;
          lplf = lplf + 1;
          puVar8 = puVar8 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        local_10 = 0;
        iVar3 = DAT_10023e8c;
        iVar5 = DAT_10023924;
      }
    }
    iVar6 = DAT_10023eec;
    if (0 < DAT_10023eec) {
      do {
        for (; (char)lplf->lfHeight != '\0'; lplf = (LOGFONTA *)((int)&lplf->lfHeight + 1)) {
        }
        lplf = (LOGFONTA *)((int)&lplf->lfHeight + 1);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = DAT_10024020 - DAT_10023eec;
    pLVar10 = lplf;
    if (0 < iVar6) {
      do {
        for (; (char)pLVar10->lfHeight != '\0'; pLVar10 = (LOGFONTA *)((int)&pLVar10->lfHeight + 1))
        {
        }
        pLVar10 = (LOGFONTA *)((int)&pLVar10->lfHeight + 1);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    DAT_100241e4 = lplf;
    *(short *)(&DAT_10024140 + iVar5 * 2) = (short)pLVar10->lfHeight;
    iVar7 = iVar5 * 4;
    (&DAT_100240e0)[iVar5] = (char *)((int)&pLVar10->lfHeight + 2);
    iVar6 = *(int *)(iVar3 + 8 + iVar11);
    if (iVar6 < 1) {
      *(undefined4 *)(&DAT_10023960 + iVar7) = 0;
    }
    else {
      *(int *)(&DAT_10023960 + iVar7) = iVar6 + iVar3;
    }
    DAT_1002405c = -1;
    DAT_100238fc = DAT_100238fc + '\x01';
    if ((DAT_10023e20 == 0) || (param_1 != 0)) {
      pHVar4 = DAT_100238d8;
      if (iVar5 != 0) {
        pHVar4 = *(HWND *)(&DAT_10023fdc + iVar7);
      }
      iVar6 = DialogBoxIndirectParamA(DAT_10024178,local_c,pHVar4,CustomDlg,0);
    }
    else {
      pHVar4 = CreateDialogIndirectParamA(DAT_10024178,local_8,DAT_100238cc,CustomDlg,0);
      while (DAT_1002405c < 0) {
        BVar1 = GetMessageA(&local_30,(HWND)0x0,0,0);
        if ((-1 < BVar1) && (BVar1 = IsDialogMessageA(pHVar4,&local_30), BVar1 == 0)) {
          TranslateMessage(&local_30);
          DispatchMessageA(&local_30);
        }
      }
      DestroyWindow(pHVar4);
      iVar6 = DAT_1002405c;
    }
    if ((DAT_10024120 != (HGDIOBJ)0x0) && (DAT_10023924 == 0)) {
      DeleteObject(DAT_10024120);
      DAT_10024120 = (HGDIOBJ)0x0;
    }
    GlobalFree(local_c);
    if (0 < local_14) {
      puVar8 = local_70;
      iVar11 = local_14;
      do {
        DeleteObject((HGDIOBJ)*puVar8);
        puVar8 = puVar8 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    DAT_100238fc = DAT_100238fc + -1;
  }
  return iVar6;
}



/* ==== CustomDlg @ 100072a5 ==== 
 * signature: UINT __stdcall CustomDlg(HWND param_1, UINT param_2, HDC param_3, HWND param_4)
 * body: 100072a5-1000898d
 */

/* WARNING: Type propagation algorithm not settling */

UINT CustomDlg(HWND param_1,UINT param_2,HDC param_3,HWND param_4)

{
  POINT pt;
  POINT pt_00;
  byte bVar1;
  bool bVar2;
  char cVar3;
  CHAR CVar4;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  HWND pHVar8;
  HGLOBAL hMem;
  BYTE *lpData;
  HMETAFILE hmf;
  uint uVar9;
  HWND pHVar10;
  BOOL BVar11;
  DWORD DVar12;
  HBRUSH hbr;
  HCURSOR pHVar13;
  HGDIOBJ h;
  HDC hdc;
  int iVar14;
  UINT UVar15;
  undefined3 extraout_var;
  LPCSTR pCVar16;
  LRESULT LVar17;
  byte *pbVar18;
  LPSTR lpString;
  undefined3 extraout_var_00;
  byte *pbVar19;
  INT_PTR IVar20;
  short sVar21;
  int *piVar22;
  LPCSTR pCVar23;
  uint uVar24;
  int iVar25;
  WPARAM WVar26;
  char *pcVar27;
  undefined4 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined2 uVar31;
  CHAR local_8b0 [256];
  byte local_7b0;
  CHAR local_668 [256];
  byte local_568 [1024];
  tagTEXTMETRICA local_168;
  char local_130 [128];
  tagPAINTSTRUCT local_b0;
  undefined1 local_70 [8];
  tagRECT local_68;
  char *local_58;
  uint local_54;
  RECT local_50;
  undefined1 local_40 [12];
  uint local_34;
  byte *local_30;
  char *local_2c;
  HWND local_28;
  WPARAM local_24;
  uint local_20;
  byte *local_1c;
  int local_18;
  char *local_14;
  byte *local_10;
  byte *local_c;
  char *local_8;
  
                    /* 0x72a5  2  CustomDlg */
  pHVar10 = param_1;
  if ((DAT_10023e20 == 0) || (DAT_10023924 != 0)) {
    local_28 = param_1;
  }
  else {
    local_28 = DAT_100238cc;
  }
  local_54 = (uint)param_3 >> 0x10;
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      if (DAT_1002390c == 0) {
        DAT_10023914 = 1;
      }
      DAT_1002390c = 0;
      BeginPaint(param_1,&local_b0);
      pcVar6 = (char *)FUN_100099b3((int)param_1);
      if (pcVar6 != (char *)0x0) {
        cVar3 = *pcVar6;
        local_2c = pcVar6;
        local_30 = (byte *)GetDialogBaseUnits();
        SetStretchBltMode(local_b0.hdc,3);
        if (0 < cVar3) {
          param_4 = (HWND)(pcVar6 + 1);
          local_14 = (char *)(int)cVar3;
          do {
            pcVar6 = pcVar6 + param_4->unused;
            if ((*pcVar6 == '\0') && (pcVar6[4] == '\x02')) {
              pcVar7 = local_2c + *(int *)(pcVar6 + DAT_10023eec * 4 + 0x13);
              cVar3 = *pcVar7;
              if (((int)cVar3 & 1U) == 0) {
                uVar29 = SUB41(&local_68,0);
                uVar30 = (undefined1)((uint)&local_68 >> 8);
                uVar31 = (undefined2)((uint)&local_68 >> 0x10);
                pHVar10 = GetDlgItem(param_1,(uint)(byte)pcVar6[1]);
                FUN_10012d5b(param_1,pHVar10,(LPRECT)CONCAT22(uVar31,CONCAT11(uVar30,uVar29)));
                FUN_10008ae1(local_b0.hdc,(short *)(pcVar7 + 1),(uint)*(ushort *)(pcVar6 + 0xb),
                             (uint)*(ushort *)(pcVar6 + 0xd),*(ushort *)(pcVar6 + 0xf),
                             *(ushort *)(pcVar6 + 0x11),(int)cVar3 & 2,0,0,0,(int *)0x0,
                             &local_68.left);
              }
              else {
                UVar15 = *(UINT *)(pcVar7 + 1);
                hMem = GlobalAlloc(0,UVar15);
                if (hMem != (HGLOBAL)0x0) {
                  lpData = GlobalLock(hMem);
                  pcVar7 = pcVar7 + 5;
                  if (0 < (int)UVar15) {
                    iVar25 = (int)lpData - (int)pcVar7;
                    param_2 = UVar15;
                    do {
                      pcVar7[iVar25] = *pcVar7;
                      pcVar7 = pcVar7 + 1;
                      param_2 = param_2 - 1;
                    } while (param_2 != 0);
                  }
                  hmf = SetMetaFileBitsEx(UVar15,lpData);
                  SetMapMode(local_b0.hdc,8);
                  GetViewportExtEx(local_b0.hdc,(LPSIZE)(local_40 + 8));
                  uVar9 = (uint)local_30 & 0xffff;
                  uVar24 = (uint)local_30 >> 0x10;
                  SetViewportExtEx(local_b0.hdc,(uVar9 * 0x32) / 8,(uVar24 * 0x32) / 0x10,
                                   (LPSIZE)0x0);
                  SetViewportOrgEx(local_b0.hdc,(int)(*(ushort *)(pcVar6 + 0xb) * uVar9) / 4,
                                   (int)(*(ushort *)(pcVar6 + 0xd) * uVar24) / 8,(LPPOINT)0x0);
                  PlayMetaFile(local_b0.hdc,hmf);
                  SetViewportExtEx(local_b0.hdc,local_40._8_4_,local_34,(LPSIZE)0x0);
                  SetViewportOrgEx(local_b0.hdc,0,0,(LPPOINT)0x0);
                  DeleteMetaFile(hmf);
                }
              }
            }
            param_4 = param_4 + 1;
            local_14 = local_14 + -1;
            pcVar6 = local_2c;
          } while (local_14 != (char *)0x0);
        }
        EndPaint(param_1,&local_b0);
        return 0;
      }
      return 0;
    }
    if (param_2 != 2) {
      return 0;
    }
    if ((DAT_10023924 == 0) && (DAT_1002405c < 0)) {
      DAT_1002405c = 0x400;
    }
    pcVar6 = (char *)FUN_100099b3((int)param_1);
    if ((pcVar6 != (char *)0x0) && (param_1 = (HWND)(int)*pcVar6, 0 < (int)param_1)) {
      piVar22 = (int *)(pcVar6 + 1);
      do {
        pcVar7 = pcVar6 + *piVar22;
        if ((*pcVar7 == '\x06') && ((pcVar7[9] & 3U) == 3)) {
          uVar29 = (undefined1)DAT_10023eb4;
          uVar30 = (undefined1)((uint)DAT_10023eb4 >> 8);
          uVar31 = (undefined2)((uint)DAT_10023eb4 >> 0x10);
          iVar25 = -4;
          pHVar8 = GetDlgItem(pHVar10,(uint)(byte)pcVar7[1]);
          SetWindowLongA(pHVar8,iVar25,CONCAT22(uVar31,CONCAT11(uVar30,uVar29)));
        }
        piVar22 = piVar22 + 1;
        param_1 = (HWND)((int)&param_1[-1].unused + 3);
      } while (param_1 != (HWND)0x0);
    }
    if (*(HGDIOBJ *)(&DAT_10023de0 + DAT_10023924 * 4) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(&DAT_10023de0 + DAT_10023924 * 4));
      return 0;
    }
    return 0;
  }
  if (param_2 < 0x21) {
    if (param_2 == 0x20) {
      pHVar13 = GetCursor();
      if (pHVar13 == DAT_100241ec) {
        return 1;
      }
    }
    else if (param_2 == 0x14) {
      if (DAT_10023914 == 0) {
        DAT_1002390c = 1;
      }
      SaveDC(param_3);
      pcVar6 = (char *)FUN_100099b3((int)param_1);
      if ((pcVar6 != (char *)0x0) && (param_4 = (HWND)(int)*pcVar6, 0 < (int)param_4)) {
        param_1 = (HWND)(pcVar6 + 1);
        do {
          pcVar7 = pcVar6 + param_1->unused;
          if ((*pcVar7 == '\0') && (pcVar7[4] == '\x02')) {
            bVar5 = pcVar6[*(int *)(pcVar7 + DAT_10023eec * 4 + 0x13)];
            uVar29 = SUB41(&local_50,0);
            uVar30 = (undefined1)((uint)&local_50 >> 8);
            uVar31 = (undefined2)((uint)&local_50 >> 0x10);
            pHVar8 = GetDlgItem(pHVar10,(uint)(byte)pcVar7[1]);
            FUN_10012d5b(pHVar10,pHVar8,(LPRECT)CONCAT22(uVar31,CONCAT11(uVar30,uVar29)));
            BVar11 = RectVisible(param_3,&local_50);
            if (BVar11 != 0) {
              if ((bVar5 & 1) == 0) {
                ExcludeClipRect(param_3,local_50.left,local_50.top,local_50.right,local_50.bottom);
              }
              if (DAT_10023914 == 0) {
                InvalidateRect(pHVar10,&local_50,0);
              }
            }
          }
          param_1 = param_1 + 1;
          param_4 = (HWND)((int)&param_4[-1].unused + 3);
        } while (param_4 != (HWND)0x0);
      }
      if (((DAT_10023e20 != 0) && (DAT_100238c8 != (ushort *)0x0)) && (pHVar10 == DAT_10023fe0)) {
        FUN_10008ae1(param_3,(short *)DAT_100238c8,(uint)DAT_1002404c,(uint)DAT_100239a0,
                     *DAT_100238c8,DAT_100238c8[1],DAT_10024024 & 1,DAT_10024024 & 2,1,DAT_100241f4,
                     &local_50.left,(int *)0x0);
        ExcludeClipRect(param_3,local_50.left,local_50.top,local_50.right,local_50.bottom);
        if (DAT_10023914 == 0) {
          InvalidateRect(pHVar10,&local_50,0);
        }
      }
      DVar12 = GetSysColor((-(uint)(DAT_10023f24 != 0) & 10) + 5);
      hbr = CreateSolidBrush(DVar12);
      GetClientRect(pHVar10,&local_50);
      FillRect(param_3,&local_50,hbr);
      DeleteObject(hbr);
      RestoreDC(param_3,-1);
      DAT_10023914 = 0;
      return 1;
    }
  }
  else if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      SetForegroundWindow(param_1);
      iVar25 = DAT_10023924 * 4;
      *(int *)(&DAT_10023de0 + iVar25) = 0;
      FUN_10012e0d(param_1,(int *)(&DAT_10023de0 + iVar25));
      DAT_10023ea4 = 1;
      FUN_10009eff(DAT_10024170,DAT_100241e4);
      if ((DAT_10023e20 == 0) || (DAT_10023924 != 0)) {
        SetWindowTextA(param_1,(LPCSTR)DAT_10024170);
        FUN_10010d18(param_1,'\x01',*(ushort *)(&DAT_10024140 + DAT_10023924 * 2));
      }
      else {
        SetWindowPos(param_1,(HWND)0x0,0,0,0,0,0x1d);
        GetWindowTextA(DAT_100238cc,(LPSTR)local_568,0x100);
        iVar25 = lstrcmpA((LPCSTR)local_568,(LPCSTR)DAT_10024170);
        if (iVar25 != 0) {
          SetWindowTextA(DAT_100238cc,(LPCSTR)DAT_10024170);
        }
        if (DAT_100241f0 != 0) {
          GetWindowRect(param_1,(LPRECT)local_40);
          uVar29 = 0;
          uVar30 = 0;
          uVar31 = 0;
          iVar25 = GetSystemMetrics(8);
          iVar14 = GetSystemMetrics(4);
          iVar14 = iVar25 + iVar14 + (local_34 - local_40._4_4_);
          iVar25 = GetSystemMetrics(7);
          MoveWindow(DAT_100238cc,local_40._0_4_,local_40._4_4_,
                     iVar25 + (local_40._8_4_ - local_40._0_4_),iVar14,
                     CONCAT22(uVar31,CONCAT11(uVar30,uVar29)));
          FUN_10010d18(DAT_100238cc,'\x01',*(ushort *)(&DAT_10024140 + DAT_10023924 * 2));
          DAT_100241f0 = 0;
          ShowWindow(DAT_100238cc,1);
        }
      }
      (&DAT_10023fe0)[DAT_10023924] = param_1;
      FUN_10008de7(param_1,1);
      FUN_10014931(&DAT_1001f6c8,param_1);
      DAT_10023ea4 = 0;
      PostMessageA(param_1,0x111,0xffff,-1);
      if (*(int *)(DAT_1002392c + 0x1c) == 0) {
        return 1;
      }
      FUN_1000898e(param_1,0x400);
      return 1;
    }
    if (param_2 == 0x2b) {
      pcVar6 = (char *)FUN_100099b3((int)param_1);
      if (pcVar6 != (char *)0x0) {
        local_18 = (int)*pcVar6;
        param_2 = 0;
        if (0 < local_18) {
          piVar22 = (int *)(pcVar6 + 1);
          do {
            pcVar7 = pcVar6 + *piVar22;
            if (*pcVar7 == '\x06') {
              if (((pcVar7[9] & 3U) == 2) && (((uint)param_3 & 0xffff) == (byte)pcVar7[1] + 1))
              break;
              if (((pcVar7[9] & 3U) == 3) && ((ushort)param_3 == (byte)pcVar7[1])) {
                FUN_100118c6((int)param_4);
                return 1;
              }
            }
            param_2 = param_2 + 1;
            piVar22 = piVar22 + 1;
          } while ((int)param_2 < local_18);
        }
        FUN_10011c39((uint)param_4,(uint)(local_18 <= (int)param_2));
        return 1;
      }
    }
    else if (param_2 == 0x2c) {
      if (DAT_1001f18c == -1) {
        h = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
        if (h == (HGDIOBJ)0x0) {
          h = GetStockObject(0xd);
        }
        hdc = GetDC(param_1);
        SelectObject(hdc,h);
        GetTextMetricsA(hdc,&local_168);
        GetObjectA(DAT_10023fc0,0x18,local_70);
        DAT_1001f18c = local_68.left;
        if (local_68.left <= local_168.tmHeight) {
          DAT_1001f18c = local_168.tmHeight;
        }
        ReleaseDC(param_1,hdc);
      }
      param_4[4].unused = DAT_1001f18c;
      return 1;
    }
  }
  else if (param_2 == 0x111) {
    if (DAT_10023ea4 == 0) {
      iVar25 = 1;
      DAT_10023ea4 = iVar25;
      if ((ushort)param_3 == 2) {
        if (*(int *)(DAT_1002392c + 0x1c) != 4) {
          bVar2 = FUN_1000be14(local_28);
          iVar25 = CONCAT31(extraout_var,bVar2);
        }
        if (iVar25 != 0) {
          FUN_1000898e(param_1,0x400);
        }
        SetFocus((&DAT_10023fe0)[DAT_10023924]);
      }
      local_20 = 0;
      local_1c = (byte *)0x0;
      local_30 = (byte *)0x0;
      local_2c = (char *)FUN_100099b3((int)param_1);
      if (local_2c != (char *)0x0) {
        local_18 = (int)*local_2c;
        param_2 = 0;
        if (0 < local_18) {
          do {
            pcVar6 = local_2c + *(int *)(local_2c + param_2 * 4 + 1);
            local_c = (byte *)CONCAT22(local_c._2_2_,
                                       *(undefined2 *)
                                        (local_2c + *(int *)(local_2c + param_2 * 4 + 1) + 9));
            local_10 = (byte *)(pcVar6 + 0xb);
            iVar25 = DAT_10024020;
            if (0 < DAT_10024020) {
              do {
                for (; *local_10 != '\0'; local_10 = local_10 + 1) {
                }
                local_10 = local_10 + 1;
                iVar25 = iVar25 + -1;
              } while (iVar25 != 0);
            }
            if ((((*pcVar6 == '\x04') && ((byte)pcVar6[1] <= (ushort)param_3)) &&
                ((ushort)param_3 < (byte)pcVar6[2])) && (*local_10 != '\0')) {
              pCVar16 = FUN_100147fa((LPCSTR)local_10,0x7f);
              if (pCVar16 != (LPCSTR)0x0) {
                *pCVar16 = '\0';
              }
              pcVar7 = FUN_1000ba71((LPCSTR)local_10);
              if (pCVar16 != (LPCSTR)0x0) {
                *pCVar16 = '\x7f';
              }
              local_8 = FUN_100099e5(pcVar7,(byte)local_c);
              for (iVar25 = (int)pcVar6[1]; iVar25 < pcVar6[2]; iVar25 = iVar25 + 1) {
                if ((((iVar25 - pcVar6[1]) % 2 == 0) || (((uint)local_c & 2) == 0)) &&
                   (LVar17 = SendDlgItemMessageA(param_1,iVar25,0xf0,0,0), LVar17 != 0)) {
                  if (((uint)local_c & 2) == 0) {
                    cVar3 = (char)iVar25 - pcVar6[1];
                  }
                  else {
                    cVar3 = (char)((iVar25 - pcVar6[1]) / 2);
                  }
                  *local_8 = cVar3 + 'A';
                  local_8 = local_8 + 1;
                }
              }
              *local_8 = '\0';
            }
            if ((*pcVar6 == '\x06') && (((byte)local_c & 3) == 2)) {
              local_14 = pcVar6 + 0xb;
              iVar25 = DAT_10023eec;
              if (0 < DAT_10023eec) {
                do {
                  for (; *local_14 != '\0'; local_14 = local_14 + 1) {
                  }
                  local_14 = local_14 + 1;
                  iVar25 = iVar25 + -1;
                } while (iVar25 != 0);
              }
              if (((uint)param_3 & 0xffff) == (byte)pcVar6[1] + 1) {
                if ((short)local_54 == 2) {
                  local_24 = SendMessageA(param_4,0x188,0,0);
                  LVar17 = SendMessageA(param_4,0x199,local_24,0);
                  sVar21 = (short)((uint)LVar17 >> 0x10);
                  if (sVar21 != 0xc) {
                    SendMessageA(param_4,0x189,local_24,(LPARAM)DAT_100239a4);
                    if (((sVar21 == 0xb) && (local_24 != 0)) &&
                       (local_8 = (char *)0x0, pCVar16 = DAT_100239a4, -1 < (int)local_24)) {
                      do {
                        SendMessageA(param_4,0x189,(WPARAM)local_8,(LPARAM)pCVar16);
                        iVar25 = lstrlenA(pCVar16);
                        pCVar23 = pCVar16 + iVar25 + -1;
                        if ((pCVar16[iVar25 + -1] != '\\') && ((int)local_8 < (int)local_24)) {
                          pCVar23 = pCVar23 + 1;
                          *pCVar23 = '\\';
                        }
                        pCVar16 = pCVar23 + 1;
                        local_8 = local_8 + 1;
                      } while ((int)local_8 <= (int)local_24);
                    }
                    iVar25 = FUN_10012070(DAT_100239a4);
                    if (iVar25 == 0) {
                      FUN_100113c3(param_1,(uint)param_3,local_14,local_c);
                    }
                  }
                }
              }
              else if ((((uint)param_3 & 0xffff) == (byte)pcVar6[1] + 2) && ((short)local_54 == 1))
              {
                WVar26 = SendMessageA(param_4,0x147,0,0);
                SendMessageA(param_4,0x148,WVar26,(LPARAM)local_130);
                iVar25 = FUN_100164b0();
                local_8 = (char *)0x1;
                iVar14 = FUN_10016500(local_130[0] + -0x60);
                if ((iVar14 == 0) && (DVar12 = GetCurrentDirectoryA(0x100,local_668), DVar12 != 0))
                {
                  iVar14 = FUN_10012070(local_668);
                  if (iVar14 != 0) {
                    wsprintfA(local_668,&DAT_1001f6c0,local_130[0]);
                    FUN_10012070(local_668);
                  }
                  FUN_100113c3(param_1,(uint)((int)&param_3[-1].unused + 3),local_14,local_c);
                  SendDlgItemMessageA(param_1,((uint)param_3 & 0xffff) - 1,0x197,0,0);
                  local_8 = (char *)0x0;
                }
                if (local_8 != (char *)0x0) {
                  FUN_10016500(iVar25);
                  wsprintfA(local_130,&DAT_1001f4cc,(char)iVar25 + '`');
                  SendMessageA(param_4,0x14d,0xffffffff,(LPARAM)local_130);
                }
              }
            }
            cVar3 = *pcVar6;
            if ((((cVar3 == '\x06') && (((byte)local_c & 3) == 2)) ||
                ((cVar3 == '\x01' || (cVar3 == '\x05')))) && (*local_10 != '\0')) {
              pbVar18 = FUN_1000ba71((LPCSTR)local_10);
              uVar29 = SUB41(pbVar18,0);
              uVar30 = (undefined1)((uint)pbVar18 >> 8);
              uVar31 = (undefined2)((uint)pbVar18 >> 0x10);
              WVar26 = 0x100;
              UVar15 = 0xd;
              pHVar10 = GetDlgItem(param_1,(uint)(byte)pcVar6[1]);
              SendMessageA(pHVar10,UVar15,WVar26,CONCAT22(uVar31,CONCAT11(uVar30,uVar29)));
              if ((*pcVar6 == '\x05') && (((uint)local_c & 2) != 0)) {
                pbVar18[2] = 0;
                uVar9 = FUN_10015b60(CONCAT22((char)*pbVar18 >> 7,(short)(char)*pbVar18));
                *pbVar18 = (byte)uVar9;
              }
              if (((*pcVar6 == '\x01') && (local_20 == 0)) &&
                 (iVar25 = lstrlenA((LPCSTR)pbVar18), iVar25 < (int)(uint)*(ushort *)(pcVar6 + 5)))
              {
                local_20 = (uint)(byte)pcVar6[1];
              }
              if (((*pcVar6 == '\x05') && (*pbVar18 == 0)) &&
                 ((((uint)local_c & 1) != 0 && (local_20 == 0)))) {
                local_20 = (uint)(byte)pcVar6[1];
              }
              if ((((uint)local_c & 0x400) != 0) && (FUN_10009d0d(pbVar18), local_1c == (byte *)0x0)
                 ) {
                local_1c = pbVar18;
              }
              if ((((uint)local_c & 0x800) != 0) && (local_30 == (byte *)0x0)) {
                local_30 = pbVar18;
              }
            }
            if (((*pcVar6 == '\x06') && (local_24 = (uint)local_c & 3, (short)local_24 != 2)) &&
               (*local_10 != '\0')) {
              local_14 = FUN_100147fa((LPCSTR)local_10,0x7f);
              if (local_14 != (LPCSTR)0x0) {
                *local_14 = '\0';
              }
              lpString = FUN_1000ba71((LPCSTR)local_10);
              if (local_14 != (char *)0x0) {
                *local_14 = '\x7f';
              }
              local_58 = lpString;
              if (((uint)local_c & 0x80) != 0) {
                LVar17 = SendDlgItemMessageA(param_1,(uint)(byte)pcVar6[1],0x188,0,0);
                wsprintfA(lpString,&DAT_1001f6b8,(char)LVar17 + '\x01');
                lpString = lpString + 2;
              }
              uVar29 = 0;
              uVar30 = 0;
              uVar31 = 0;
              WVar26 = 0;
              UVar15 = 0x18b;
              pHVar10 = GetDlgItem(param_1,(uint)(byte)pcVar6[1]);
              local_34 = SendMessageA(pHVar10,UVar15,WVar26,CONCAT22(uVar31,CONCAT11(uVar30,uVar29))
                                     );
              local_8 = (char *)0x0;
              if (0 < (int)local_34) {
                local_14 = (char *)((((short)local_24 != 3) - 1 & 0x12) + 0x187);
                do {
                  uVar29 = 0;
                  uVar30 = 0;
                  uVar31 = 0;
                  pcVar7 = local_14;
                  pcVar27 = local_8;
                  pHVar10 = GetDlgItem(param_1,(uint)(byte)pcVar6[1]);
                  LVar17 = SendMessageA(pHVar10,(UINT)pcVar7,(WPARAM)pcVar27,
                                        CONCAT22(uVar31,CONCAT11(uVar30,uVar29)));
                  if (LVar17 != 0) {
                    if (((uint)local_c & 4) == 0) {
                      if (lpString != local_58) {
                        *lpString = ' ';
                        lpString = lpString + 1;
                      }
                      uVar29 = SUB41(lpString,0);
                      uVar30 = (undefined1)((uint)lpString >> 8);
                      uVar31 = (undefined2)((uint)lpString >> 0x10);
                      UVar15 = 0x189;
                      pcVar7 = local_8;
                      pHVar10 = GetDlgItem(param_1,(uint)(byte)pcVar6[1]);
                      SendMessageA(pHVar10,UVar15,(WPARAM)pcVar7,
                                   CONCAT22(uVar31,CONCAT11(uVar30,uVar29)));
                      iVar25 = lstrlenA(lpString);
                      lpString = lpString + iVar25;
                    }
                    else {
                      *lpString = (char)local_8 + 'A';
                      lpString = lpString + 1;
                    }
                  }
                  local_8 = local_8 + 1;
                } while ((int)local_8 < (int)local_34);
              }
              *lpString = '\0';
            }
            if ((*pcVar6 == '\x03') && (*local_10 != '\0')) {
              pcVar7 = FUN_1000ba71((LPCSTR)local_10);
              local_8 = FUN_100099e5(pcVar7,(byte)local_c);
              for (uVar9 = (uint)(byte)pcVar6[1]; (int)uVar9 < (int)(uint)(byte)pcVar6[2];
                  uVar9 = uVar9 + 1) {
                uVar29 = 0;
                uVar30 = 0;
                uVar31 = 0;
                WVar26 = 0;
                UVar15 = 0xf0;
                pHVar10 = GetDlgItem(param_1,uVar9);
                LVar17 = SendMessageA(pHVar10,UVar15,WVar26,CONCAT22(uVar31,CONCAT11(uVar30,uVar29))
                                     );
                if (LVar17 == 1) break;
              }
              if ((int)uVar9 < (int)(uint)(byte)pcVar6[2]) {
                cVar3 = pcVar6[1];
                local_8[1] = '\0';
                *local_8 = ((char)uVar9 - cVar3) + 'A';
              }
            }
            param_2 = param_2 + 1;
          } while ((int)param_2 < local_18);
        }
        pcVar6 = local_2c;
        FUN_10014931(s_UPDATE_1001f6b0,param_1);
        if (*(int *)(DAT_1002392c + 0x1c) != 0) {
          FUN_1000898e(param_1,0x400);
        }
        param_2 = 0;
        if (0 < local_18) {
          piVar22 = (int *)(pcVar6 + 1);
          while( true ) {
            pbVar18 = local_1c;
            pcVar7 = pcVar6 + *piVar22;
            local_10 = (byte *)(pcVar7 + 0xb);
            iVar25 = DAT_10024020;
            if (0 < DAT_10024020) {
              do {
                for (; *local_10 != 0; local_10 = local_10 + 1) {
                }
                local_10 = local_10 + 1;
                iVar25 = iVar25 + -1;
              } while (iVar25 != 0);
            }
            if ((*pcVar7 == '\x02') && ((ushort)param_3 == (byte)pcVar7[1])) break;
            FUN_10009a39(param_1,pcVar7,local_10);
            param_2 = param_2 + 1;
            piVar22 = piVar22 + 1;
            if (local_18 <= (int)param_2) goto LAB_10008971;
          }
          cVar3 = pcVar7[4];
          if (cVar3 == '\x04') {
            FUN_1001054d(s_HELPFILE_1001f25c,(LPSTR)local_568);
            if (local_568[0] == 0) {
              DAT_10023ea4 = 0;
              return 1;
            }
            WinHelpA(DAT_100238d8,(LPCSTR)local_568,1,*(ULONG_PTR *)(pcVar7 + 5));
            DAT_10023ea4 = 0;
            return 1;
          }
          if ((cVar3 == '\x06') || (cVar3 == '\a')) {
            bVar5 = *local_10;
            pbVar18 = local_10;
            while (bVar5 != 0) {
              pbVar18 = pbVar18 + 1;
              bVar5 = *pbVar18;
            }
            do {
              pbVar19 = pbVar18;
              pbVar18 = pbVar19 + 1;
            } while (*pbVar18 != 0);
            pbVar19 = pbVar19 + 10;
            if (cVar3 != '\a') {
              local_568[0] = FUN_10016230(pbVar19);
              for (; (*pbVar19 != 0 && (*pbVar19 != 0x7f)); pbVar19 = pbVar19 + 1) {
              }
              if (*pbVar19 == 0x7f) {
                pbVar19 = pbVar19 + 1;
              }
              pbVar18 = local_568;
              while( true ) {
                pbVar18 = pbVar18 + 1;
                bVar5 = *pbVar19;
                if (bVar5 == 0) break;
                *pbVar18 = bVar5;
                if (bVar5 == 0x7f) {
                  *pbVar18 = 0;
                }
                pbVar19 = pbVar19 + 1;
              }
              *pbVar18 = 0;
              FUN_100155a0(local_568);
              DAT_10023ea4 = 0;
              return 1;
            }
            pbVar18 = local_568;
            for (; *pbVar19 != 0; pbVar19 = pbVar19 + 1) {
              *pbVar18 = *pbVar19;
              pbVar18 = pbVar18 + 1;
            }
            *pbVar18 = 0;
            FUN_10014931((LPCSTR)local_568,param_1);
            FUN_10008de7(param_1,0);
            FUN_10014931(s_UPDATE_1001f6b0,param_1);
            if (*(int *)(DAT_1002392c + 0x1c) == 0) {
              DAT_10023ea4 = 0;
              return 1;
            }
            uVar29 = 0;
            uVar30 = 4;
            uVar31 = 0;
            goto LAB_10008914;
          }
          if (cVar3 == '\x03') {
            bVar2 = FUN_1000be14(local_28);
            if (CONCAT31(extraout_var_00,bVar2) == 0) {
              DAT_10023ea4 = 0;
              return 1;
            }
            goto LAB_100087d7;
          }
          local_34 = *(ushort *)(pcVar7 + 9) & 1;
          if ((short)local_34 != 0) goto LAB_1000877e;
          if ((local_1c == (byte *)0x0) || (DAT_10023e9c == '\x01')) goto LAB_10008639;
          iVar25 = FUN_1001b090(local_1c,&DAT_1001f6ac,2);
          if (iVar25 == 0) {
            for (pbVar18 = pbVar18 + 2; (*pbVar18 != 0 && (*pbVar18 != 0x5c));
                pbVar18 = (byte *)CharNextA((LPCSTR)pbVar18)) {
            }
            if (*pbVar18 == 0x5c) {
              pbVar18 = pbVar18 + 1;
            }
          }
          for (; (*pbVar18 != 0 && (*pbVar18 != 0x5c)); pbVar18 = (byte *)CharNextA((LPCSTR)pbVar18)
              ) {
          }
          if (*pbVar18 == 0x5c) {
            pbVar18 = pbVar18 + 1;
          }
          local_8 = (char *)0x0;
          if ((*pbVar18 == 0) && (*local_1c != 0)) {
            lstrcpyA((LPSTR)local_568,(LPCSTR)local_1c);
            CVar4 = FUN_10014819((LPCSTR)local_568);
            if (CVar4 != '\\') {
              lstrcatA((LPSTR)local_568,&DAT_1001f314);
            }
            lstrcatA((LPSTR)local_568,&DAT_1001f6a8);
            iVar25 = FUN_100120c5((LPCSTR)local_568,0x17,local_8b0);
            if (iVar25 == 0) {
              FUN_1001221a((int)local_8b0);
            }
            else {
              FUN_1001277f(local_28,*(char **)(DAT_100240b8 + 0x54),
                           *(undefined4 *)(DAT_100240b8 + 0x48),2);
              local_8 = (char *)0x1;
            }
          }
          if (local_8 != (char *)0x0) {
            DAT_10023ea4 = 0;
            return 1;
          }
          do {
            bVar5 = *pbVar18;
            if (bVar5 == 0) break;
            do {
              if (bVar5 == 0x5c) break;
              pbVar18 = (byte *)CharNextA((LPCSTR)pbVar18);
              bVar5 = *pbVar18;
            } while (bVar5 != 0);
            bVar5 = *pbVar18;
            *pbVar18 = 0;
            iVar25 = FUN_100120c5((LPCSTR)local_1c,7,local_8b0);
            bVar1 = local_7b0;
            if (iVar25 == 0) {
              FUN_1001221a((int)local_8b0);
            }
            pbVar19 = local_1c;
            if (iVar25 == 0 && (bVar1 & 0x10) == 0) {
              uVar28 = *(undefined4 *)(DAT_100240b8 + 0x48);
              pcVar6 = *(char **)(DAT_100240b8 + 0x50);
LAB_100085ec:
              FUN_1001277f(local_28,pcVar6,uVar28,2);
              local_8 = (char *)0x1;
            }
            else if ((local_1c[1] != 0x3a) || (local_1c[2] != 0)) {
              BVar11 = CreateDirectoryA((LPCSTR)local_1c,(LPSECURITY_ATTRIBUTES)0x0);
              if (BVar11 == 0) {
                iVar25 = FUN_10012539((LPCSTR)pbVar19);
                if (iVar25 != 0) {
                  uVar28 = *(undefined4 *)(DAT_100240b8 + 0x48);
                  pcVar6 = *(char **)(DAT_100240b8 + 0x54);
                  goto LAB_100085ec;
                }
              }
              else if (bVar5 == 0) {
                RemoveDirectoryA((LPCSTR)pbVar19);
              }
              else {
                FUN_1000b61e(pbVar19);
              }
            }
            *pbVar18 = bVar5;
            if (bVar5 != 0) {
              pbVar18 = (byte *)CharNextA((LPCSTR)pbVar18);
            }
          } while (local_8 == (char *)0x0);
          if (local_8 != (char *)0x0) {
            DAT_10023ea4 = 0;
            return 1;
          }
LAB_10008639:
          pbVar18 = local_30;
          if (local_30 != (byte *)0x0) {
            bVar2 = false;
            if (DAT_100200d4 < 2) {
              uVar9 = *(ushort *)(PTR_DAT_1001fec8 + (char)*local_30 * 2) & 0x103;
            }
            else {
              uVar9 = FUN_10015ac0((int)(char)*local_30,0x103);
            }
            if (((uVar9 == 0) || (pbVar18[1] != 0x3a)) || (pbVar18[2] != 0)) {
              bVar2 = true;
            }
            iVar25 = FUN_1001b090(pbVar18,&DAT_1001f6ac,2);
            if (iVar25 == 0) {
              for (pbVar19 = pbVar18 + 2; (*pbVar19 != 0 && (*pbVar19 != 0x5c));
                  pbVar19 = (byte *)CharNextA((LPCSTR)pbVar19)) {
              }
              if (*pbVar19 == 0x5c) {
                pbVar19 = pbVar19 + 1;
              }
              for (; (*pbVar19 != 0 && (*pbVar19 != 0x5c));
                  pbVar19 = (byte *)CharNextA((LPCSTR)pbVar19)) {
              }
              if (*pbVar19 == 0x5c) {
                pbVar19 = pbVar19 + 1;
              }
              if (*pbVar19 == 0) {
                bVar2 = false;
              }
            }
            if ((bVar2) && (iVar25 = FUN_10012539((LPCSTR)pbVar18), iVar25 == 0)) {
              wsprintfA((LPSTR)local_568,*(LPCSTR *)(DAT_100240b8 + 0x30),(char)pbVar18);
              IVar20 = FUN_1001277f(local_28,(char *)local_568,*(undefined4 *)(DAT_100240b8 + 0x48),
                                    3);
              if (IVar20 == 3) {
                DAT_10023ea4 = 0;
                return 1;
              }
            }
          }
          if (local_20 == 0) {
            FUN_10014931(s_VERIFY_1001f6a0,param_1);
            if (*(int *)(DAT_1002392c + 0x1c) != 0) {
              FUN_1000898e(param_1,0x400);
            }
            FUN_1001054d(s_DLG_EVENT_TYPE_1001f690,(LPSTR)local_568);
            if (local_568[0] == 0) {
              DAT_10023ea4 = 0;
              return 1;
            }
          }
LAB_1000877e:
          if ((local_20 != 0) && ((short)local_34 == 0)) {
            pHVar10 = GetDlgItem(param_1,local_20);
            SetFocus(pHVar10);
            DAT_10023ea4 = 0;
            return 1;
          }
          pbVar18 = local_10;
          if (*local_10 != 0) {
            do {
              pbVar19 = pbVar18;
              pbVar18 = pbVar19 + 1;
            } while (*pbVar18 != 0);
            pbVar19 = pbVar19 + 2;
            uVar29 = SUB41(pbVar19,0);
            uVar30 = (undefined1)((uint)pbVar19 >> 8);
            uVar31 = (undefined2)((uint)pbVar19 >> 0x10);
            pbVar18 = FUN_1000ba71((LPCSTR)local_10);
            FUN_10009eff(pbVar18,(byte *)CONCAT22(uVar31,CONCAT11(uVar30,uVar29)));
          }
          if ((pcVar7[4] == '\x05') || ((pcVar7[4] == '\x02' && (DAT_10023e20 != 0)))) {
            DAT_10023924 = DAT_10023924 + 1;
            EnableWindow(param_1,0);
            iVar25 = FUN_10007016(CONCAT22(pcVar7[3] >> 7,(short)pcVar7[3]));
            DAT_10023ea4 = 1;
            EnableWindow(param_1,1);
            DAT_10023924 = DAT_10023924 + -1;
            SetFocus((&DAT_10023fe0)[DAT_10023924]);
            FUN_10008de7(param_1,0);
            FUN_10014931(&DAT_1001f6c8,param_1);
            if (*(int *)(DAT_1002392c + 0x1c) != 0) {
              FUN_1000898e(param_1,0x400);
            }
            DAT_10023ea4 = 0;
            if ((iVar25 < 0) || (0x3ff < iVar25)) {
              uVar29 = (undefined1)iVar25;
              uVar30 = (undefined1)((uint)iVar25 >> 8);
              uVar31 = (undefined2)((uint)iVar25 >> 0x10);
            }
            else {
              iVar25 = *(int *)((&DAT_100240e4)[DAT_10023924] + 1 + iVar25 * 4) +
                       (&DAT_100240e4)[DAT_10023924];
              if (*(char *)(iVar25 + 4) == '\x01') {
                FUN_1000898e(param_1,0x800);
              }
              if (*(char *)(iVar25 + 4) != '\x03') {
                DAT_10023ea4 = 0;
                return 1;
              }
              uVar29 = 0;
              uVar30 = 4;
              uVar31 = 0;
            }
          }
          else {
LAB_100087d7:
            uVar29 = (undefined1)param_2;
            uVar30 = (undefined1)(param_2 >> 8);
            uVar31 = (undefined2)(param_2 >> 0x10);
          }
LAB_10008914:
          FUN_1000898e(param_1,CONCAT22(uVar31,CONCAT11(uVar30,uVar29)));
          DAT_10023ea4 = 0;
          return 1;
        }
      }
LAB_10008971:
      DAT_10023ea4 = 0;
    }
  }
  else if (param_2 == 0x138) {
    pcVar6 = (char *)FUN_100099b3((int)param_1);
    if (pcVar6 != (char *)0x0) {
      local_18 = (int)*pcVar6;
      param_2 = 0;
      if (0 < local_18) {
        piVar22 = (int *)(pcVar6 + 1);
        do {
          pcVar7 = pcVar6 + *piVar22;
          if (((*pcVar7 == '\x02') && ((pcVar7[9] & 2U) == 2)) &&
             (pHVar10 = GetDlgItem(param_1,(uint)(byte)pcVar7[1]), param_4 == pHVar10)) {
            pcVar6 = pcVar7 + 0xb;
            iVar25 = DAT_10024020;
            if (0 < DAT_10024020) {
              do {
                for (; *pcVar6 != '\0'; pcVar6 = pcVar6 + 1) {
                }
                pcVar6 = pcVar6 + 1;
                iVar25 = iVar25 + -1;
              } while (iVar25 != 0);
            }
            for (; *pcVar6 != '\0'; pcVar6 = pcVar6 + 1) {
            }
            do {
              pcVar27 = pcVar6;
              pcVar6 = pcVar27 + 1;
            } while (pcVar27[1] != '\0');
            SetBkMode(param_3,1);
            if ((pcVar7[9] & 0x80U) == 0) {
              uVar28 = *(undefined4 *)(pcVar27 + 2);
              uVar29 = (undefined1)uVar28;
              uVar30 = (undefined1)((uint)uVar28 >> 8);
              uVar31 = (undefined2)((uint)uVar28 >> 0x10);
            }
            else {
              uVar28 = *(undefined4 *)(pcVar27 + 6);
              uVar29 = (undefined1)uVar28;
              uVar30 = (undefined1)((uint)uVar28 >> 8);
              uVar31 = (undefined2)((uint)uVar28 >> 0x10);
            }
            SetTextColor(param_3,CONCAT22(uVar31,CONCAT11(uVar30,uVar29)));
            return DAT_10023934;
          }
          param_2 = param_2 + 1;
          piVar22 = piVar22 + 1;
        } while ((int)param_2 < local_18);
      }
    }
  }
  else if (param_2 == 0x200) {
    local_2c = (char *)FUN_100099b3((int)param_1);
    if (local_2c != (char *)0x0) {
      param_2 = (UINT)*local_2c;
      local_8 = (char *)0x0;
      if (0 < (int)param_2) {
        param_3 = (HDC)(local_2c + 1);
        do {
          pcVar6 = local_2c + param_3->unused;
          if ((*pcVar6 == '\x02') && ((pcVar6[9] & 2U) == 2)) {
            local_40._8_4_ = (uint)param_4 & 0xffff;
            local_34 = (uint)param_4 >> 0x10;
            ClientToScreen(param_1,(LPPOINT)(local_40 + 8));
            pHVar10 = GetDlgItem(param_1,(uint)(byte)pcVar6[1]);
            GetWindowRect(pHVar10,&local_68);
            sVar21 = *(short *)(pcVar6 + 9);
            pt_00.y._0_1_ = (char)local_34;
            pt_00.x = local_40._8_4_;
            pt_00.y._1_1_ = (char)(local_34 >> 8);
            pt_00.y._2_2_ = (short)(local_34 >> 0x10);
            BVar11 = PtInRect(&local_68,pt_00);
            if (BVar11 == 0) {
              *(ushort *)(pcVar6 + 9) = *(ushort *)(pcVar6 + 9) & 0xff7f;
            }
            else {
              pcVar6[9] = pcVar6[9] | 0x80;
              local_8 = (char *)0x1;
            }
            if (sVar21 != *(short *)(pcVar6 + 9)) {
              GetClientRect(pHVar10,&local_68);
              InvalidateRect(pHVar10,&local_68,1);
            }
          }
          param_3 = param_3 + 1;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      if (local_8 == (char *)0x0) {
        pHVar13 = GetCursor();
        if (pHVar13 != DAT_100241ec) {
          return 0;
        }
        pHVar13 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        uVar29 = SUB41(pHVar13,0);
        uVar30 = (undefined1)((uint)pHVar13 >> 8);
        uVar31 = (undefined2)((uint)pHVar13 >> 0x10);
      }
      else {
        pHVar13 = GetCursor();
        if (pHVar13 == DAT_100241ec) {
          return 0;
        }
        uVar29 = SUB41(DAT_100241ec,0);
        uVar30 = (undefined1)((uint)DAT_100241ec >> 8);
        uVar31 = (undefined2)((uint)DAT_100241ec >> 0x10);
      }
      SetCursor((HCURSOR)CONCAT22(uVar31,CONCAT11(uVar30,uVar29)));
    }
  }
  else if (param_2 == 0x201) {
    pcVar6 = (char *)FUN_100099b3((int)param_1);
    if (pcVar6 != (char *)0x0) {
      local_18 = (int)*pcVar6;
      param_2 = 0;
      if (0 < local_18) {
        param_1 = (HWND)(pcVar6 + 1);
        do {
          pcVar7 = pcVar6 + param_1->unused;
          if ((*pcVar7 == '\x02') && ((pcVar7[9] & 2U) == 2)) {
            local_40._8_4_ = (uint)param_4 & 0xffff;
            local_34 = (uint)param_4 >> 0x10;
            ClientToScreen(pHVar10,(LPPOINT)(local_40 + 8));
            pHVar8 = GetDlgItem(pHVar10,(uint)(byte)pcVar7[1]);
            GetWindowRect(pHVar8,&local_68);
            pt.y._0_1_ = (char)local_34;
            pt.x = local_40._8_4_;
            pt.y._1_1_ = (char)(local_34 >> 8);
            pt.y._2_2_ = (short)(local_34 >> 0x10);
            BVar11 = PtInRect(&local_68,pt);
            if (BVar11 != 0) {
              PostMessageA(pHVar10,0x111,(uint)(byte)pcVar7[1],0);
              return 0;
            }
          }
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
        } while ((int)param_2 < local_18);
      }
    }
  }
  else if ((param_2 == 0x30f) || (param_2 == 0x311)) {
    UVar15 = FUN_100157eb(param_2,param_1,param_1,(HWND)param_3);
    return UVar15;
  }
  return 0;
}



/* ==== FUN_1000898e @ 1000898e ==== 
 * signature: undefined __cdecl FUN_1000898e(HWND param_1, INT_PTR param_2)
 * body: 1000898e-100089ab
 */

void __cdecl FUN_1000898e(HWND param_1,INT_PTR param_2)

{
  if (DAT_10023924 == 0) {
    DAT_1002405c = param_2;
  }
  EndDialog(param_1,param_2);
  return;
}



/* ==== _ListboxSubclassProc@16 @ 100089ac ==== 
 * signature: undefined __stdcall _ListboxSubclassProc@16(HWND param_1, UINT param_2, WPARAM param_3, uint param_4)
 * body: 100089ac-10008ae0
 */

void _ListboxSubclassProc_16(HWND param_1,UINT param_2,WPARAM param_3,uint param_4)

{
  LRESULT LVar1;
  LRESULT LVar2;
  HWND hWnd;
  uint uVar3;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  tagRECT local_1c;
  int local_c;
  WPARAM local_8;
  
                    /* 0x89ac  9  _ListboxSubclassProc@16 */
  local_c = 0;
  if ((param_2 == 0x201) || (param_2 == 0x102)) {
    LVar1 = SendMessageA(param_1,0x1a1,0,0);
    if (param_2 == 0x201) {
      uVar3 = param_4 >> 0x10;
      if ((int)(param_4 & 0xffff) < LVar1) {
        local_c = 1;
      }
      LVar2 = SendMessageA(param_1,0x18e,0,0);
      local_8 = LVar2 + (int)uVar3 / LVar1;
    }
    else {
      if (param_3 == 0x20) {
        local_c = 1;
      }
      local_8 = SendMessageA(param_1,0x188,0,0);
      LVar2 = SendMessageA(param_1,0x18e,0,0);
      uVar3 = (local_8 - LVar2) * LVar1;
    }
    if (local_c != 0) {
      LVar2 = SendMessageA(param_1,0x199,local_8,0);
      SendMessageA(param_1,0x19a,local_8,1 - LVar2);
      SetRect(&local_1c,0,LVar1 * ((int)uVar3 / LVar1),999,((int)uVar3 / LVar1 + 1) * LVar1);
      InvalidateRect(param_1,&local_1c,1);
      lParam = -1;
      wParam = 0xffff;
      Msg = 0x111;
      hWnd = GetParent(param_1);
      PostMessageA(hWnd,Msg,wParam,lParam);
    }
  }
  CallWindowProcA(DAT_10023eb4,param_1,param_2,param_3,param_4);
  return;
}



/* ==== FUN_10008ae1 @ 10008ae1 ==== 
 * signature: undefined __cdecl FUN_10008ae1(HDC param_1, short * param_2, uint param_3, uint param_4, ushort param_5, ushort param_6, int param_7, int param_8, uint param_9, COLORREF param_10, int * param_11, int * param_12)
 * body: 10008ae1-10008de6
 */

void __cdecl
FUN_10008ae1(HDC param_1,short *param_2,uint param_3,uint param_4,ushort param_5,ushort param_6,
            int param_7,int param_8,uint param_9,COLORREF param_10,int *param_11,int *param_12)

{
  short *psVar1;
  HBRUSH hbr;
  short *psVar2;
  uint uVar3;
  int iVar4;
  HPEN h;
  HPEN h_00;
  HGDIOBJ h_01;
  int iVar5;
  int iVar6;
  RECT local_1c;
  void *local_c;
  uint local_8;
  
  psVar1 = param_2;
  FUN_10011f09((int)(param_2 + 5),param_1,&DAT_10023f28);
  local_8 = GetDialogBaseUnits();
  iVar5 = 0;
  iVar6 = 0;
  local_c = (void *)(*(int *)(param_2 + 2) + 10 + (int)param_2);
  if (param_9 == 0) {
    if ((param_12 == (int *)0x0) || (param_7 != 0)) {
      psVar2 = (short *)((int)((local_8 & 0xffff) * (uint)param_5) / 4);
      uVar3 = (int)((local_8 >> 0x10) * (uint)param_6) / 8;
      param_2 = psVar2;
      param_9 = uVar3;
      if (param_7 != 0) {
        param_2 = (short *)(((ulonglong)param_5 << 3) / 4);
        param_9 = (uint)(((ulonglong)param_6 << 4) / 8);
        iVar5 = ((int)psVar2 - (int)param_2) / 2;
        iVar6 = (int)(uVar3 - param_9) / 2;
      }
    }
    else {
      iVar5 = *param_12;
      iVar6 = param_12[1];
      param_4 = 0;
      param_3 = 0;
      param_2 = (short *)(param_12[2] - iVar5);
      param_9 = param_12[3] - iVar6;
    }
  }
  else {
    param_2 = (short *)(uint)param_5;
    param_9 = (uint)param_6;
    if (param_7 != 0) {
      iVar5 = ((int)((local_8 & 0xffff) * (int)param_2) / 8 - (int)param_2) / 2;
      iVar6 = (int)((int)((local_8 >> 0x10) * param_9) / 0x10 - param_9) / 2;
    }
    local_1c.top = (int)((local_8 >> 0x10) * (param_4 & 0xffff)) / 8;
    local_1c.left = (int)((param_3 & 0xffff) * (local_8 & 0xffff)) / 4;
    local_1c.bottom = local_1c.top + iVar6 * 2 + param_9;
    local_1c.right = local_1c.left + iVar5 * 2 + (int)param_2;
    if (param_11 != (int *)0x0) {
      param_11[2] = local_1c.right;
      param_11[1] = local_1c.top;
      *param_11 = local_1c.left;
      param_11[3] = local_1c.bottom;
    }
    if ((iVar5 != 0) || (iVar6 != 0)) {
      hbr = CreateSolidBrush(param_10);
      FillRect(param_1,&local_1c,hbr);
      DeleteObject(hbr);
    }
  }
  if (param_12 == (int *)0x0) {
    _param_5 = (*psVar1 * 3) / 100;
    if (_param_5 < 3) {
      _param_5 = 3;
    }
    iVar4 = FUN_10016580((int)param_2 - (int)*psVar1);
    if (iVar4 <= _param_5) {
      param_2 = (short *)(int)*psVar1;
    }
    _param_5 = (psVar1[1] * 3) / 100;
    if (_param_5 < 3) {
      _param_5 = 3;
    }
    iVar4 = FUN_10016580(param_9 - (int)psVar1[1]);
    if (iVar4 <= _param_5) {
      param_9 = (uint)psVar1[1];
    }
  }
  StretchDIBits(param_1,(int)((param_3 & 0xffff) * (local_8 & 0xffff)) / 4 + iVar5,
                (int)((local_8 >> 0x10) * (param_4 & 0xffff)) / 8 + iVar6,(int)param_2,param_9,0,0,
                (int)*psVar1,(int)psVar1[1],local_c,(BITMAPINFO *)(psVar1 + 5),0,0xcc0020);
  if (param_8 != 0) {
    h = CreatePen(0,1,0xffffff);
    h_00 = CreatePen(0,1,0x808080);
    h_01 = SelectObject(param_1,h);
    MoveToEx(param_1,local_1c.right + -1,local_1c.top,(LPPOINT)0x0);
    LineTo(param_1,local_1c.right + -1,local_1c.bottom + -1);
    LineTo(param_1,local_1c.left,local_1c.bottom + -1);
    SelectObject(param_1,h_00);
    LineTo(param_1,local_1c.left,local_1c.top);
    LineTo(param_1,local_1c.right,local_1c.top);
    SelectObject(param_1,h_01);
    DeleteObject(h);
    DeleteObject(h_00);
  }
  return;
}



/* ==== FUN_10008de7 @ 10008de7 ==== 
 * signature: undefined __cdecl FUN_10008de7(HWND param_1, uint param_2)
 * body: 10008de7-10008e16
 */

void __cdecl FUN_10008de7(HWND param_1,uint param_2)

{
  char cVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)0x0;
  cVar1 = *(char *)(&DAT_100240e0)[DAT_10023924];
  if (0 < cVar1) {
    do {
      FUN_10008e17(param_1,param_2,pbVar2);
      pbVar2 = pbVar2 + 1;
    } while ((int)pbVar2 < (int)cVar1);
  }
  return;
}



/* ==== FUN_10008e17 @ 10008e17 ==== 
 * signature: undefined __cdecl FUN_10008e17(HWND param_1, uint param_2, byte * param_3)
 * body: 10008e17-10009800
 */

void __cdecl FUN_10008e17(HWND param_1,uint param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  HANDLE hObject;
  DWORD DVar7;
  uint uVar8;
  char *pcVar9;
  HWND pHVar10;
  HWND pHVar11;
  LPCSTR pCVar12;
  LRESULT LVar13;
  WPARAM WVar14;
  byte *pbVar15;
  code *pcVar16;
  char *pcVar17;
  byte *pbVar18;
  bool bVar19;
  UINT Msg;
  BOOL BVar20;
  code *dwNewLong;
  CHAR local_43c [256];
  CHAR local_33c [256];
  byte local_23c;
  char local_23b;
  byte local_13c [256];
  tagRECT local_3c;
  byte *local_2c;
  int local_28;
  int local_24;
  tagPOINT local_20;
  int local_18;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  HWND local_8;
  
  pcVar17 = (char *)(*(int *)((&DAT_100240e0)[DAT_10023924] + 1 + (int)param_3 * 4) +
                    (&DAT_100240e0)[DAT_10023924]);
  uVar3 = *(ushort *)(pcVar17 + 9);
  pbVar15 = (byte *)(pcVar17 + 0xb);
  param_3 = (byte *)CONCAT22(param_3._2_2_,uVar3);
  pbVar4 = param_3;
  iVar5 = DAT_10023eec;
  iVar6 = 0;
  if (0 < DAT_10023eec) {
    do {
      for (; *pbVar15 != 0; pbVar15 = pbVar15 + 1) {
      }
      pbVar15 = pbVar15 + 1;
      iVar5 = iVar5 + -1;
      iVar6 = DAT_10023eec;
    } while (iVar5 != 0);
  }
  pbVar18 = pbVar15;
  if (iVar6 < DAT_10024020) {
    iVar6 = DAT_10024020 - iVar6;
    do {
      for (; *pbVar18 != 0; pbVar18 = pbVar18 + 1) {
      }
      pbVar18 = pbVar18 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  cVar1 = *pcVar17;
  param_3._0_1_ = (byte)uVar3;
  local_2c = pbVar15;
  local_14 = pbVar18;
  local_c = pbVar15;
  if ((((cVar1 == '\x03') || (cVar1 == '\x04')) || (cVar1 == '\x05')) || (cVar1 == '\x06')) {
    pbVar15 = (byte *)FUN_100147fa((LPCSTR)pbVar18,0x7f);
    if (pbVar15 != (byte *)0x0) {
      *pbVar15 = 0;
    }
    local_10 = pbVar15;
    FUN_1001054d((LPCSTR)pbVar18,(LPSTR)&local_23c);
    if (pbVar15 != (byte *)0x0) {
      *pbVar15 = 0x7f;
    }
    cVar1 = *pcVar17;
    if ((cVar1 == '\x06') && (((byte)param_3 & 3) == 2)) {
      bVar19 = true;
      lstrcpyA((LPSTR)local_13c,(LPCSTR)local_c);
      FUN_10009eff(local_13c,local_13c);
      pbVar15 = local_13c;
      if (DAT_100200d4 < 2) {
        uVar8 = *(ushort *)(PTR_DAT_1001fec8 + (char)local_13c[0] * 2) & 0x103;
      }
      else {
        uVar8 = FUN_10015ac0((int)(char)local_13c[0],0x103);
      }
      if ((uVar8 != 0) && (local_13c[1] == ':')) {
        uVar8 = FUN_10015b60((int)(char)local_13c[0]);
        iVar5 = FUN_10016500(uVar8 - 0x40);
        bVar19 = iVar5 != 0;
        pbVar15 = local_13c + 2;
      }
      if (bVar19) {
        pcVar9 = FUN_1000ba71(s__WIN__1001f6e0);
        uVar8 = FUN_10015b60((int)*pcVar9 - 0x40);
        FUN_10016500(uVar8);
      }
      pcVar16 = GetDlgItem_exref;
      pHVar10 = GetDlgItem(param_1,(byte)pcVar17[1] + 3);
      pHVar11 = GetDlgItem(param_1,(byte)pcVar17[1] + 2);
      FUN_1001117c(pHVar11,pHVar10);
      FUN_10012070(&DAT_1001f314);
      pbVar18 = local_14;
      if (*pbVar15 != 0) {
        if ((uVar3 & 8) == 0) {
          pCVar12 = FUN_10014834((LPCSTR)pbVar15,0x5c);
          *pCVar12 = '\0';
        }
        pbVar18 = local_14;
        if (*pbVar15 == 0x5c) {
          FUN_10012070((LPCSTR)pbVar15);
          pbVar18 = local_14;
        }
      }
      for (; *pbVar18 != 0; pbVar18 = pbVar18 + 1) {
      }
      FUN_10009eff(pbVar18 + 1,local_c);
      pCVar12 = FUN_100147fa((LPCSTR)(pbVar18 + 1),0xd);
      if (pCVar12 != (LPCSTR)0x0) {
        *pCVar12 = '\0';
      }
      FUN_100113c3(param_1,CONCAT22((short)((uint)pCVar12 >> 0x10),(ushort)(byte)pcVar17[1]) + 1,
                   (LPCSTR)local_c,pbVar4);
      pHVar10 = GetDlgItem(param_1,(uint)(byte)pcVar17[1]);
      GetWindowRect(pHVar10,&local_3c);
      local_20.x = local_3c.left + 1;
      local_20.y = local_3c.top;
      ScreenToClient(param_1,&local_20);
      if (param_2 != 0) {
        MoveWindow(pHVar10,local_20.x,local_20.y,(local_3c.right - local_3c.left) + -1,
                   local_3c.bottom - local_3c.top,1);
      }
    }
    else if ((cVar1 == '\x05') && ((uVar3 & 2) != 0)) {
      if (DAT_100200d4 < 2) {
        uVar8 = *(ushort *)(PTR_DAT_1001fec8 + (char)local_23c * 2) & 0x103;
      }
      else {
        uVar8 = FUN_10015ac0((int)(char)local_23c,0x103);
      }
      if (uVar8 != 0) {
        uVar8 = FUN_10015b60((int)(char)local_23c);
        FUN_10016500(uVar8 - 0x40);
      }
      pcVar16 = GetDlgItem_exref;
      pHVar10 = GetDlgItem(param_1,(byte)pcVar17[1] + 1);
      pHVar11 = GetDlgItem(param_1,(uint)(byte)pcVar17[1]);
      FUN_1001117c(pHVar11,pHVar10);
    }
    else {
      if (((cVar1 == '\x06') && (((byte)param_3 & 3) == 1)) ||
         ((cVar1 == '\x05' && ((uVar3 & 1) != 0)))) {
        FUN_1000d242();
      }
      else {
        FUN_10009f15(DAT_10024170,local_c,0x7800);
      }
      pcVar16 = GetDlgItem_exref;
      if (((*pcVar17 == '\x06') && (((byte)param_3 & 3) == 3)) && (param_2 != 0)) {
        dwNewLong = _ListboxSubclassProc_16;
        iVar5 = -4;
        pHVar10 = GetDlgItem(param_1,(uint)(byte)pcVar17[1]);
        DAT_10023eb4 = SetWindowLongA(pHVar10,iVar5,(LONG)dwNewLong);
      }
      if ((*pcVar17 == '\x06') && (((byte)param_3 & 3) != 2)) {
        SendDlgItemMessageA(param_1,(uint)(byte)pcVar17[1],0x184,0,0);
      }
      param_2 = 0;
      pbVar15 = local_13c;
      bVar2 = *DAT_10024170;
      local_18 = 1;
      local_c = DAT_10024170;
      while (bVar2 != 0) {
        if (bVar2 == 0xd) {
          *pbVar15 = 0;
          for (; (*local_c == 0xd || (*local_c == 10)); local_c = local_c + 1) {
          }
          cVar1 = *pcVar17;
          uVar8 = param_2;
          if (cVar1 == '\x03') {
LAB_100095ac:
            local_8 = GetDlgItem(param_1,uVar8 + (byte)pcVar17[1]);
            SetWindowTextA(local_8,(LPCSTR)local_13c);
            pCVar12 = FUN_100147fa((LPCSTR)&local_23c,param_2 + 0x41);
            if (pCVar12 == (LPCSTR)0x0) {
              if (*pcVar17 != '\x03') {
                SendDlgItemMessageA(param_1,uVar8 + (byte)pcVar17[1],0xf1,0,0);
              }
            }
            else {
              if (*pcVar17 == '\x03') {
                CheckRadioButton(param_1,(uint)(byte)pcVar17[1],(byte)pcVar17[2] - 1,
                                 uVar8 + (byte)pcVar17[1]);
              }
              else {
                SendDlgItemMessageA(param_1,uVar8 + (byte)pcVar17[1],0xf1,1,0);
              }
              local_18 = 0;
            }
            pCVar12 = FUN_100147fa((LPCSTR)&local_23c,param_2 + 0x61);
            if (pCVar12 == (LPCSTR)0x0) {
              BVar20 = IsWindowEnabled(local_8);
              if (BVar20 != 0) goto LAB_10009678;
              BVar20 = 1;
            }
            else {
              BVar20 = 0;
            }
            EnableWindow(local_8,BVar20);
          }
          else {
            if (cVar1 == '\x04') {
              if ((uVar3 & 2) != 0) {
                pHVar10 = (HWND)(*pcVar16)(param_1,(byte)pcVar17[1] + 1 + param_2 * 2);
                if (*local_10 != 0) {
                  local_10 = local_10 + 1;
                }
                FUN_10009b1d(local_10,&local_24);
                for (; (*local_10 != 0 && (*local_10 != 0x7f)); local_10 = local_10 + 1) {
                }
                wsprintfA(local_43c,s__ld_k_1001f6d0,local_24);
                SetWindowTextA(pHVar10,local_43c);
                uVar8 = param_2 * 2;
              }
              goto LAB_100095ac;
            }
            if ((cVar1 == '\x06') && (((byte)param_3 & 0x43) == 0x43)) {
              if (*local_10 != 0) {
                local_10 = local_10 + 1;
              }
              pbVar15 = local_10;
              FUN_10009b1d(local_10,&local_28);
              while ((*pbVar15 != 0 && (*pbVar15 != 0x7f))) {
                pbVar15 = pbVar15 + 1;
                local_10 = pbVar15;
              }
              wsprintfA(local_33c,&DAT_1001f6d8,local_28);
              lstrcatA((LPSTR)local_13c,local_33c);
            }
            cVar1 = *pcVar17;
            bVar19 = true;
            if ((((cVar1 == '\x06') && (((byte)param_3 & 3) == 1)) ||
                ((cVar1 == '\x05' && ((uVar3 & 1) != 0)))) &&
               (LVar13 = SendDlgItemMessageA(param_1,(uint)(byte)pcVar17[1],
                                             ((cVar1 != '\x06') - 1 & 0x4a) + 0x158,0xffffffff,
                                             (LPARAM)local_13c), -1 < LVar13)) {
              bVar19 = false;
            }
            if (bVar19) {
              SendDlgItemMessageA(param_1,(uint)(byte)pcVar17[1],
                                  ((*pcVar17 != '\x06') - 1 & 0x3d) + 0x143,0,(LPARAM)local_13c);
            }
            if (*pcVar17 == '\x06') {
              bVar19 = false;
              if ((uVar3 & 4) == 0) {
                iVar5 = lstrcmpiA((LPCSTR)local_13c,(LPCSTR)&local_23c);
                if (iVar5 == 0) goto LAB_100094da;
              }
              else {
                pCVar12 = FUN_100147fa((LPCSTR)&local_23c,param_2 + 0x41);
                if (pCVar12 != (LPCSTR)0x0) {
LAB_100094da:
                  bVar19 = true;
                }
              }
              if (bVar19) {
                if ((uVar3 & 0x80) == 0) {
                  local_18 = 0;
                }
                if ((uVar3 & 0x10) == 0) {
                  WVar14 = param_2;
                  if (((byte)param_3 & 3) == 3) {
                    uVar8 = 1;
                    Msg = 0x19a;
                  }
                  else {
                    uVar8 = 0;
                    Msg = 0x186;
                  }
                }
                else {
                  uVar8 = param_2 & 0xffff;
                  Msg = 0x185;
                  WVar14 = 1;
                }
                SendDlgItemMessageA(param_1,(uint)(byte)pcVar17[1],Msg,WVar14,uVar8);
              }
            }
          }
LAB_10009678:
          param_2 = param_2 + 1;
          pbVar15 = local_13c;
        }
        else {
          if ((int)pbVar15 - (int)local_13c < 0xff) {
            *pbVar15 = bVar2;
            pbVar15 = pbVar15 + 1;
          }
          local_c = local_c + 1;
        }
        pcVar16 = GetDlgItem_exref;
        bVar2 = *local_c;
      }
      if (local_18 != 0) {
        if (*pcVar17 == '\x03') {
          SendDlgItemMessageA(param_1,(uint)(byte)pcVar17[1],0xf1,1,0);
        }
        if (((local_18 != 0) && (*pcVar17 == '\x06')) && ((uVar3 & 0x10) == 0)) {
          WVar14 = 0;
          if ((uVar3 & 0x80) != 0) {
            if (DAT_100200d4 < 2) {
              uVar8 = (byte)PTR_DAT_1001fec8[(char)local_23c * 2] & 4;
            }
            else {
              uVar8 = FUN_10015ac0((int)(char)local_23c,4);
            }
            if (uVar8 != 0) {
              iVar5 = FUN_10016230(&local_23c);
              WVar14 = iVar5 - 1;
            }
          }
          if ((int)WVar14 < 0) {
            WVar14 = 0;
          }
          SendDlgItemMessageA(param_1,(uint)(byte)pcVar17[1],0x186,WVar14,0);
        }
      }
    }
    if (*pcVar17 == '\x05') {
      pHVar10 = (HWND)(*pcVar16)(param_1,pcVar17[1]);
      if ((uVar3 & 1) == 0) {
        pbVar15 = &local_23c;
        if ((uVar3 & 4) != 0) {
          WVar14 = SendMessageA(pHVar10,0x158,0xffffffff,(LPARAM)&local_23c);
          if (WVar14 != 0xffffffff) {
            SendMessageA(pHVar10,0x14e,WVar14,0);
          }
          goto LAB_100097cc;
        }
      }
      else {
        FUN_10009f15(DAT_10024170,local_2c,0x7800);
        pCVar12 = FUN_100147fa((LPCSTR)DAT_10024170,0xd);
        pbVar15 = DAT_10024170;
        if (pCVar12 != (LPCSTR)0x0) {
          *pCVar12 = '\0';
          pbVar15 = DAT_10024170;
        }
      }
      SetWindowTextA(pHVar10,(LPCSTR)pbVar15);
    }
  }
  else {
    local_8 = GetDlgItem(param_1,(uint)(byte)pcVar17[1]);
    bVar2 = *pbVar18;
    while (bVar2 != 0) {
      pbVar18 = pbVar18 + 1;
      bVar2 = *pbVar18;
    }
    if ((*pcVar17 == '\x01') && (pbVar18[1] != 0)) {
      FUN_10009eff(local_13c,pbVar18 + 1);
      hObject = (HANDLE)FUN_1001223a((LPCSTR)local_13c,0,0);
      if (hObject != (HANDLE)0xffffffff) {
        DVar7 = FUN_100122b9(hObject,DAT_10024170,0x77ff);
        if (0 < (int)DVar7) {
          DAT_10024170[DVar7] = 0;
          SetWindowTextA(local_8,(LPCSTR)DAT_10024170);
        }
        CloseHandle(hObject);
      }
    }
    else if ((*pcVar17 != '\0') || (pcVar17[4] != '\x02')) {
      FUN_10009f15(DAT_10024170,pbVar15,0x7800);
      if (((*pcVar17 == '\0') && (pcVar17[4] == '\0')) && ((pcVar17[3] & 2U) != 0)) {
        FUN_10009801(local_8,(LPCSTR)DAT_10024170);
      }
      if ((param_2 != 0) || (iVar5 = FUN_10009995((char *)pbVar15), iVar5 != 0)) {
        SetWindowTextA(local_8,(LPCSTR)DAT_10024170);
      }
    }
    param_3._1_1_ = (char)(uVar3 >> 8);
    if ((*pcVar17 == '\0') && (param_3._1_1_ != '\0')) {
      SendMessageA(local_8,0x30,
                   *(WPARAM *)
                    (*(int *)(&DAT_10023e40 + DAT_10023924 * 4) + -4 + (uint)(uVar3 >> 8) * 4),0);
    }
    if (*pcVar17 == '\x02') {
      if (((uVar3 & 2) != 0) && (param_3._1_1_ != '\0')) {
        SendMessageA(local_8,0x30,
                     *(WPARAM *)
                      (*(int *)(&DAT_10023e40 + DAT_10023924 * 4) + -4 + (uint)(uVar3 >> 8) * 4),0);
      }
      if ((*pcVar17 == '\x02') && (*local_14 != 0)) {
        FUN_1001054d((LPCSTR)local_14,(LPSTR)&local_23c);
        if ((local_23c == 0x21) && (local_23b == '\0')) {
          BVar20 = 0;
        }
        else {
          BVar20 = IsWindowEnabled(local_8);
          if (BVar20 != 0) goto LAB_100097cc;
          BVar20 = 1;
        }
        EnableWindow(local_8,BVar20);
      }
    }
  }
LAB_100097cc:
  if (*pcVar17 == '\x01') {
    SendDlgItemMessageA(param_1,(uint)(byte)pcVar17[1],0xc5,*(uint *)(pcVar17 + 5) >> 0x10,0);
  }
  FUN_10009a39(param_1,pcVar17,local_14);
  return;
}



/* ==== FUN_10009801 @ 10009801 ==== 
 * signature: undefined __cdecl FUN_10009801(HWND param_1, LPCSTR param_2)
 * body: 10009801-10009994
 */

void __cdecl FUN_10009801(HWND param_1,LPCSTR param_2)

{
  char *pcVar1;
  int iVar2;
  LPSTR pCVar3;
  char cVar4;
  char *lpString1;
  tagSIZE *ptVar5;
  CHAR *lpString2;
  CHAR local_228 [252];
  CHAR aCStack_12c [4];
  char local_128 [255];
  undefined1 local_29;
  tagRECT local_28;
  HGDIOBJ local_18;
  tagSIZE local_14;
  HGDIOBJ local_c;
  HDC local_8;
  
  if (param_1 != (HWND)0x0) {
    GetWindowRect(param_1,&local_28);
    local_28.right = local_28.right - local_28.left;
    local_c = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
    local_8 = GetDC(param_1);
    if (local_c != (HGDIOBJ)0x0) {
      local_18 = SelectObject(local_8,local_c);
    }
    ptVar5 = &local_14;
    iVar2 = lstrlenA(param_2);
    GetTextExtentPointA(local_8,param_2,iVar2,ptVar5);
    if (local_28.right <= local_14.cx) {
      _strncpy(local_128,param_2,0x100);
      local_29 = 0;
      lpString1 = local_128;
      while ((local_128[0] != '\0' && (local_128[0] != '\\'))) {
        pcVar1 = lpString1 + 1;
        lpString1 = lpString1 + 1;
        local_128[0] = *pcVar1;
      }
      if (*lpString1 == '\\') {
        lpString1 = lpString1 + 1;
      }
      if (local_28.right <= local_14.cx) {
        do {
          pCVar3 = lpString1;
          if (*lpString1 != '.') goto LAB_100098e9;
          cVar4 = '.';
          do {
            if (cVar4 == '\\') break;
            cVar4 = pCVar3[1];
            pCVar3 = pCVar3 + 1;
          } while (cVar4 != '\0');
          if (*pCVar3 != '\\') goto LAB_100098e9;
          do {
            pCVar3 = pCVar3 + 1;
LAB_100098e9:
          } while ((*pCVar3 != '\0') && (*pCVar3 != '\\'));
          if ((*pCVar3 == '\0') || ((int)pCVar3 - (int)lpString1 < 4)) {
            lpString2 = &DAT_1001f6e8;
            iVar2 = lstrlenA(local_128);
            pCVar3 = aCStack_12c + iVar2;
          }
          else {
            lstrcpyA(local_228,pCVar3);
            lstrcpyA(lpString1,&DAT_1001f6e8);
            lpString2 = local_228;
            pCVar3 = lpString1 + 3;
          }
          lstrcpyA(pCVar3,lpString2);
          ptVar5 = &local_14;
          iVar2 = lstrlenA(local_128);
          GetTextExtentPointA(local_8,local_128,iVar2,ptVar5);
        } while (local_28.right <= local_14.cx);
      }
      lstrcpyA(param_2,local_128);
    }
    if (local_c != (HGDIOBJ)0x0) {
      SelectObject(local_8,local_18);
    }
    ReleaseDC(param_1,local_8);
  }
  return;
}



/* ==== FUN_10009995 @ 10009995 ==== 
 * signature: undefined4 __cdecl FUN_10009995(char * param_1)
 * body: 10009995-100099b2
 */

undefined4 __cdecl FUN_10009995(char *param_1)

{
  while( true ) {
    if (*param_1 == '\0') {
      return 0;
    }
    if ((*param_1 == '%') && (param_1 = param_1 + 1, *param_1 != '%')) break;
    param_1 = param_1 + 1;
  }
  return 1;
}



/* ==== FUN_100099b3 @ 100099b3 ==== 
 * signature: undefined4 __cdecl FUN_100099b3(int param_1)
 * body: 100099b3-100099e4
 */

undefined4 __cdecl FUN_100099b3(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (-1 < DAT_10023924) {
    piVar2 = &DAT_10023fe0;
    do {
      if (*piVar2 == param_1) break;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 <= DAT_10023924);
  }
  if (DAT_10023924 < iVar1) {
    return 0;
  }
  return (&DAT_100240e0)[iVar1];
}



/* ==== FUN_100099e5 @ 100099e5 ==== 
 * signature: char * __cdecl FUN_100099e5(char * param_1, byte param_2)
 * body: 100099e5-10009a38
 */

char * __cdecl FUN_100099e5(char *param_1,byte param_2)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if ((param_2 & 4) != 0) {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      if (DAT_100200d4 < 2) {
        uVar1 = (byte)PTR_DAT_1001fec8[*param_1 * 2] & 2;
      }
      else {
        uVar1 = FUN_10015ac0((int)*param_1,2);
      }
      if (uVar1 != 0) {
        *pcVar2 = *param_1;
        pcVar2 = pcVar2 + 1;
      }
    }
    *pcVar2 = '\0';
    return pcVar2;
  }
  return param_1;
}



/* ==== FUN_10009a39 @ 10009a39 ==== 
 * signature: undefined __cdecl FUN_10009a39(HWND param_1, char * param_2, byte * param_3)
 * body: 10009a39-10009b1c
 */

void __cdecl FUN_10009a39(HWND param_1,char *param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  HWND hWnd;
  int iVar5;
  CHAR local_204 [256];
  CHAR local_104 [256];
  
  pbVar3 = param_3;
  pcVar2 = param_2;
  if ((*param_2 == '\0') && (param_2[4] == '\0')) {
    param_2 = (char *)0x0;
    bVar1 = *param_3;
    if (bVar1 == 0) {
      pbVar3 = param_3 + 1;
    }
    else {
      param_3 = (byte *)FUN_10016190(param_3);
      pbVar3 = FUN_10009b1d(pbVar3,(int *)&param_2);
    }
    if (*pbVar3 == 0) {
      if (bVar1 == 0) {
        return;
      }
      param_2 = param_2 + -(int)param_3;
    }
    else {
      FUN_1001054d((LPCSTR)pbVar3,local_104);
      uVar4 = FUN_1001337f(local_104,0);
      param_2 = (char *)(uVar4 - (int)param_2);
    }
    wsprintfA(local_104,s__ld_k_1001f6d0,param_2);
    hWnd = GetDlgItem(param_1,(uint)(byte)pcVar2[1]);
    GetWindowTextA(hWnd,local_204,0x100);
    iVar5 = lstrcmpA(local_204,local_104);
    if (iVar5 != 0) {
      SetWindowTextA(hWnd,local_104);
    }
  }
  return;
}



/* ==== FUN_10009b1d @ 10009b1d ==== 
 * signature: byte * __cdecl FUN_10009b1d(byte * param_1, int * param_2)
 * body: 10009b1d-10009d0c
 */

byte * __cdecl FUN_10009b1d(byte *param_1,int *param_2)

{
  byte *pbVar1;
  LPCSTR pCVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  LPCSTR pCVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 local_124 [64];
  byte local_24 [32];
  
  iVar4 = FUN_10016190(param_1);
  *param_2 = iVar4;
  pbVar9 = param_1;
  while( true ) {
    if (DAT_100200d4 < 2) {
      uVar5 = (byte)PTR_DAT_1001fec8[(char)*pbVar9 * 2] & 4;
    }
    else {
      uVar5 = FUN_10015ac0((int)(char)*pbVar9,4);
    }
    if (uVar5 == 0) break;
    pbVar9 = pbVar9 + 1;
  }
  if (*pbVar9 == 0x20) {
    pbVar9 = pbVar9 + 1;
  }
  bVar3 = *pbVar9;
  if (bVar3 != 0) {
    puVar10 = local_124;
    do {
      if ((bVar3 == 9) || (bVar3 == 0x7f)) break;
      pbVar8 = local_24;
      while (((bVar3 != 0 && (bVar3 != 0x20)) && (bVar3 != 9))) {
        *pbVar8 = bVar3;
        pbVar1 = pbVar9 + 1;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
        bVar3 = *pbVar1;
      }
      *pbVar8 = 0;
      puVar6 = FUN_1000ba71((LPCSTR)local_24);
      bVar3 = *pbVar9;
      *puVar10 = puVar6;
      if (bVar3 == 0x20) {
        pbVar9 = pbVar9 + 1;
      }
      bVar3 = *pbVar9;
      puVar10 = puVar10 + 1;
    } while (bVar3 != 0);
  }
  if (*pbVar9 == 9) {
    pbVar9 = pbVar9 + 1;
  }
  if (*pbVar9 == 0x20) {
    pbVar9 = pbVar9 + 1;
  }
  param_1 = (byte *)0x0;
  do {
    while( true ) {
      bVar3 = *pbVar9;
      if ((bVar3 == 0) || (bVar3 == 0x7f)) {
        return pbVar9 + 1;
      }
      if (DAT_100200d4 < 2) {
        uVar5 = (byte)PTR_DAT_1001fec8[(char)bVar3 * 2] & 4;
      }
      else {
        uVar5 = FUN_10015ac0((int)(char)bVar3,4);
      }
      if (uVar5 == 0) break;
      if (param_1 == (byte *)0x0) {
        iVar4 = FUN_10016190(pbVar9);
        *param_2 = *param_2 + iVar4;
      }
      else {
        param_1 = param_1 + -1;
      }
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar5 = (byte)PTR_DAT_1001fec8[(char)*pbVar9 * 2] & 4;
        }
        else {
          uVar5 = FUN_10015ac0((int)(char)*pbVar9,4);
        }
        if (uVar5 == 0) break;
        pbVar9 = pbVar9 + 1;
      }
      if (*pbVar9 == 0x20) {
        pbVar9 = pbVar9 + 1;
      }
    }
    if ((*pbVar9 == 9) && (pbVar9 = pbVar9 + 1, 0 < (int)param_1)) {
      param_1 = param_1 + 1;
    }
    iVar4 = FUN_10016230(pbVar9);
    while( true ) {
      if (DAT_100200d4 < 2) {
        uVar5 = (byte)PTR_DAT_1001fec8[(char)*pbVar9 * 2] & 4;
      }
      else {
        uVar5 = FUN_10015ac0((int)(char)*pbVar9,4);
      }
      if (uVar5 == 0) break;
      pbVar9 = pbVar9 + 1;
    }
    if (*pbVar9 == 0x20) {
      pbVar9 = pbVar9 + 1;
    }
    pbVar8 = local_24;
    for (; (((bVar3 = *pbVar9, bVar3 != 0 && (bVar3 != 0x20)) && (bVar3 != 9)) && (bVar3 != 0x7f));
        pbVar9 = pbVar9 + 1) {
      *pbVar8 = bVar3;
      pbVar8 = pbVar8 + 1;
    }
    *pbVar8 = 0;
    pbVar8 = local_24;
    if (local_24[0] != 0) {
      pCVar2 = (LPCSTR)local_124[iVar4];
      do {
        pCVar7 = FUN_100147fa(pCVar2,(int)(char)*pbVar8);
        if (pCVar7 != (LPCSTR)0x0) break;
        pbVar8 = pbVar8 + 1;
      } while (*pbVar8 != 0);
    }
    if ((*pbVar8 == 0) && (param_1 == (byte *)0x0)) {
      param_1 = (byte *)0x1;
    }
    for (; *pbVar9 == 0x20; pbVar9 = pbVar9 + 1) {
    }
  } while( true );
}



/* ==== FUN_10009d0d @ 10009d0d ==== 
 * signature: undefined __cdecl FUN_10009d0d(byte * param_1)
 * body: 10009d0d-10009ea3
 */

void __cdecl FUN_10009d0d(byte *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_108 [256];
  undefined4 local_8;
  
  bVar2 = *param_1;
  pbVar6 = param_1;
  while (bVar2 == 0x20) {
    pbVar6 = pbVar6 + 1;
    bVar2 = *pbVar6;
  }
  FUN_1001488c((LPSTR)pbVar6,(uint *)&DAT_1001f6f4);
  lstrcpyA((LPSTR)local_108,(LPCSTR)pbVar6);
  lstrcpyA((LPSTR)param_1,(LPCSTR)local_108);
  if (DAT_100241e8 == 0) {
    bVar2 = *param_1;
    pbVar6 = param_1;
    while (bVar2 != 0) {
      if (*pbVar6 == 0x20) {
        *pbVar6 = 0x5f;
      }
      pbVar6 = (byte *)CharNextA((LPCSTR)pbVar6);
      bVar2 = *pbVar6;
    }
  }
  iVar3 = FUN_1001b090(param_1,&DAT_1001f6ac,2);
  if (iVar3 == 0) {
    return;
  }
  bVar1 = false;
  bVar2 = *param_1;
  pbVar6 = param_1;
  while (((bVar2 != 0 && (bVar2 != 0x3a)) && (bVar2 != 0x5c))) {
    pbVar6 = (byte *)CharNextA((LPCSTR)pbVar6);
    bVar2 = *pbVar6;
  }
  if (*pbVar6 != 0) {
    if (*pbVar6 == 0x3a) {
      bVar1 = true;
      pbVar6 = pbVar6 + 1;
      goto LAB_10009dc5;
    }
    if (pbVar6 == param_1) goto LAB_10009dc5;
  }
  pbVar6 = param_1;
LAB_10009dc5:
  if (*pbVar6 != 0x5c) {
    lstrcpyA((LPSTR)local_108,(LPCSTR)pbVar6);
    lstrcpyA((LPSTR)pbVar6,&DAT_1001f314);
    lstrcpyA((LPSTR)(pbVar6 + 1),(LPCSTR)local_108);
  }
  iVar3 = 0;
  if (!bVar1) {
    lstrcpyA((LPSTR)local_108,(LPCSTR)param_1);
    pbVar6 = local_108;
    iVar4 = FUN_100164b0();
    wsprintfA((LPSTR)param_1,s__c__s_1001f6ec,iVar4 + 0x40,pbVar6);
  }
  iVar4 = lstrlenA((LPCSTR)param_1);
  if (iVar4 < 4) {
    param_1[2] = 0;
  }
  else if (DAT_100241e8 == 0) {
    bVar1 = false;
    pbVar6 = local_108;
    bVar2 = *param_1;
    pbVar5 = param_1;
    while (bVar2 != 0) {
      if ((((iVar3 < 3) || ((iVar3 < 8 && (!bVar1)))) || (bVar2 = *pbVar5, bVar2 == 0x5c)) ||
         (bVar2 == 0x2e)) {
        bVar2 = *pbVar5;
        *pbVar6 = bVar2;
        pbVar6 = pbVar6 + 1;
        iVar3 = iVar3 + 1;
      }
      if (bVar2 == 0x5c) {
        local_8 = 0;
        bVar1 = false;
        iVar3 = 0;
      }
      if (bVar2 == 0x2e) {
        bVar1 = true;
        iVar3 = 0;
      }
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar5;
    }
    *pbVar6 = 0;
    lstrcpyA((LPSTR)param_1,(LPCSTR)local_108);
  }
  return;
}



/* ==== FUN_10009ea4 @ 10009ea4 ==== 
 * signature: undefined __stdcall FUN_10009ea4(void)
 * body: 10009ea4-10009efe
 */

void FUN_10009ea4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *DAT_10023310;
  if (cVar1 == '\x06') {
    iVar3 = DAT_10024020 * 0xc + -0xc;
  }
  else {
    iVar3 = 0;
  }
  DAT_10023310 = DAT_10023310 + (byte)(&DAT_1001f0c8)[cVar1];
  for (iVar2 = (uint)(byte)(&DAT_1001f108)[cVar1] * DAT_10024020 +
               (uint)(byte)(&DAT_1001f0e8)[cVar1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_1000b963();
  }
  DAT_10023310 = DAT_10023310 + iVar3;
  return;
}



/* ==== FUN_10009eff @ 10009eff ==== 
 * signature: undefined __cdecl FUN_10009eff(byte * param_1, byte * param_2)
 * body: 10009eff-10009f14
 */

void __cdecl FUN_10009eff(byte *param_1,byte *param_2)

{
  FUN_10009f15(param_1,param_2,0x100);
  return;
}



/* ==== FUN_10009f15 @ 10009f15 ==== 
 * signature: undefined __cdecl FUN_10009f15(byte * param_1, byte * param_2, size_t param_3)
 * body: 10009f15-1000a081
 */

void __cdecl FUN_10009f15(byte *param_1,byte *param_2,size_t param_3)

{
  byte *pbVar1;
  byte *_Dest;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  LPCSTR lpString;
  byte *pbVar7;
  byte *local_8;
  
  if (param_1 != param_2) {
    _strncpy((char *)param_1,(char *)param_2,param_3);
    param_1[param_3 - 1] = 0;
  }
  _Dest = (byte *)FUN_100147fa((LPCSTR)param_1,0x25);
  local_8 = param_1;
  do {
    if (_Dest == (byte *)0x0) {
      return;
    }
    uVar4 = 0;
    pbVar7 = _Dest;
    if (DAT_1002402c == 0) {
LAB_1000a042:
      do {
        pbVar1 = pbVar7;
        pbVar7 = pbVar1 + 1;
        if (*pbVar7 == 0) break;
      } while (*pbVar7 != 0x25);
      if (*pbVar7 == 0x25) {
        pbVar7 = pbVar1 + 2;
      }
      iVar2 = lstrlenA((LPCSTR)pbVar7);
      FUN_10016690((undefined4 *)_Dest,(undefined4 *)pbVar7,iVar2 + 1);
    }
    else {
      do {
        iVar5 = (uint)uVar4 * 0x11;
        iVar2 = lstrlenA((LPCSTR)(DAT_10023efc + iVar5));
        iVar2 = FUN_1001b090(_Dest,(char *)(DAT_10023efc + iVar5),iVar2);
        if ((iVar2 == 0) && (*(char *)(DAT_10023efc + iVar5) != '\0')) break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_1002402c);
      if (DAT_1002402c <= uVar4) goto LAB_1000a042;
      iVar2 = lstrlenA((LPCSTR)((uint)uVar4 * 0x11 + DAT_10023efc));
      iVar5 = lstrlenA((LPCSTR)(_Dest + iVar2));
      iVar6 = (uint)uVar4 * 0x100;
      iVar3 = lstrlenA((LPCSTR)(DAT_100238f8 + iVar6));
      pbVar7 = (byte *)(iVar5 + 1U);
      if ((int)(param_1 + (param_3 - (int)(_Dest + iVar3))) < (int)(iVar5 + 1U)) {
        pbVar7 = param_1 + (param_3 - (int)(_Dest + iVar3));
      }
      if (0 < (int)pbVar7) {
        FUN_10016690((undefined4 *)(_Dest + iVar3),(undefined4 *)(_Dest + iVar2),(uint)pbVar7);
      }
      lpString = (LPCSTR)(iVar6 + DAT_100238f8);
      local_8 = (byte *)lstrlenA(lpString);
      if ((int)(param_1 + (param_3 - (int)_Dest) + -1) < (int)local_8) {
        param_1[param_3 - 1] = 0;
        local_8 = param_1 + (param_3 - (int)_Dest) + -1;
      }
      if (0 < (int)local_8) {
        _strncpy((char *)_Dest,lpString,(size_t)local_8);
      }
      local_8 = _Dest + (int)local_8;
    }
    _Dest = (byte *)FUN_100147fa((LPCSTR)local_8,0x25);
  } while( true );
}



/* ==== FUN_1000a082 @ 1000a082 ==== 
 * signature: bool __stdcall FUN_1000a082(void)
 * body: 1000a082-1000a0de
 */

bool FUN_1000a082(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *DAT_10023310;
  iVar2 = 1;
  do {
    if (cVar1 == '?') break;
    FUN_10009ea4();
    cVar1 = *DAT_10023310;
    if ((cVar1 == '\b') || ((cVar1 == '\r' && (iVar2 == 1)))) {
      iVar2 = iVar2 + -1;
    }
    if ((((cVar1 == '\x03') && ((DAT_10023310[1] & 1U) != 0)) ||
        ((cVar1 == '\t' && (1 < (DAT_10023310[1] & 3U))))) || (cVar1 == '\f')) {
      iVar2 = iVar2 + 1;
    }
  } while (iVar2 != 0);
  return *DAT_10023310 == '?';
}



/* ==== FUN_1000a0df @ 1000a0df ==== 
 * signature: undefined4 __stdcall FUN_1000a0df(void)
 * body: 1000a0df-1000a18d
 */

undefined4 FUN_1000a0df(void)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  undefined3 extraout_var;
  
  if ((*(byte *)(DAT_10023310 + 1) & 0x10) != 0) {
    *(int *)(DAT_10023ee8 + (uint)DAT_10023f48 * 4) = DAT_10023310;
    DAT_10023f48 = DAT_10023f48 + 1;
  }
  bVar1 = *(byte *)(DAT_10023310 + 1);
  if (((bVar1 & 0x20) == 0) || ((bVar1 & 0x10) == 0)) {
    for (pcVar3 = (char *)(DAT_10023310 + 2); *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
    }
    FUN_10009f15(DAT_10023e84,(byte *)(pcVar3 + 1),0x7800);
    uVar4 = FUN_1000a18e((uint)(ushort)(short)(char)(*(byte *)(DAT_10023310 + 1) & 0xf),
                         (byte *)(DAT_10023310 + 2),DAT_10023e84);
    if (uVar4 == 0) {
      if ((*(byte *)(DAT_10023310 + 1) & 0x10) != 0) {
        DAT_10023f48 = DAT_10023f48 - 1;
      }
      if ((*(byte *)(DAT_10023310 + 1) & 0x40) != 0) {
        *(byte *)(DAT_10023310 + 1) = *(byte *)(DAT_10023310 + 1) ^ 0x60;
      }
      bVar2 = FUN_1000a082();
      if (CONCAT31(extraout_var,bVar2) != 0) {
        return 0xffffffff;
      }
    }
  }
  else {
    *(byte *)(DAT_10023310 + 1) = bVar1 ^ 0x60;
  }
  return 0;
}



/* ==== FUN_1000a18e @ 1000a18e ==== 
 * signature: uint __cdecl FUN_1000a18e(uint param_1, byte * param_2, byte * param_3)
 * body: 1000a18e-1000a7db
 */

uint __cdecl FUN_1000a18e(uint param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int iVar5;
  int iVar6;
  byte *lpString2;
  byte *lpString1;
  CHAR local_220 [256];
  byte local_120 [6];
  char local_11a [249];
  undefined1 local_21;
  char local_20 [16];
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 != 0xd) {
    FUN_1001054d((LPCSTR)param_2,(LPSTR)DAT_10023e94);
  }
  puVar2 = DAT_10023e94;
  uVar3 = param_1;
  if ((int)param_1 < 0xb) {
    if (param_1 == 10) {
      uVar3 = 0;
      bVar1 = *param_3;
      while ((bVar1 != 0 && (uVar3 == 0))) {
        pCVar4 = FUN_100147fa((LPCSTR)puVar2,(int)(char)*param_3);
        if (pCVar4 != (LPCSTR)0x0) {
          uVar3 = 1;
        }
        param_3 = param_3 + 1;
        bVar1 = *param_3;
      }
      goto LAB_1000a7ba;
    }
    if (5 < (int)param_1) {
      if (((int)param_1 < 6) || (9 < (int)param_1)) goto LAB_1000a7ba;
      param_2 = param_3;
      _strncpy((char *)local_120,(char *)DAT_10023e94,0x100);
      local_21 = 0;
      lpString1 = local_120;
      pCVar4 = FUN_100147fa((LPCSTR)param_3,0x2f);
      if ((pCVar4 != (LPCSTR)0x0) && (iVar5 = lstrlenA((LPCSTR)param_3), 7 < iVar5)) {
        _strncpy(local_20,(char *)param_3,5);
        _strncpy((char *)param_3,(char *)(param_3 + 6),2);
        _strncpy((char *)(param_3 + 3),local_20,5);
        if (DAT_100200d4 < 2) {
          uVar3 = (byte)PTR_DAT_1001fec8[(char)*param_3 * 2] & 4;
        }
        else {
          uVar3 = FUN_10015ac0((int)(char)*param_3,4);
        }
        if ((uVar3 != 0) && ((char)*param_3 < '6')) {
          lstrcpyA(local_220,(LPCSTR)param_3);
          *param_3 = 0x31;
          lstrcpyA((LPSTR)(param_3 + 1),local_220);
        }
      }
      pCVar4 = FUN_100147fa((LPCSTR)local_120,0x2f);
      if ((pCVar4 != (LPCSTR)0x0) && (iVar5 = lstrlenA((LPCSTR)local_120), 7 < iVar5)) {
        _strncpy(local_20,(char *)local_120,5);
        _strncpy((char *)local_120,local_11a,2);
        _strncpy((char *)(local_120 + 3),local_20,5);
        if (DAT_100200d4 < 2) {
          uVar3 = (byte)PTR_DAT_1001fec8[(char)local_120[0] * 2] & 4;
        }
        else {
          uVar3 = FUN_10015ac0((int)(char)local_120[0],4);
        }
        if ((uVar3 != 0) && ((char)local_120[0] < '6')) {
          lstrcpyA(local_220,(LPCSTR)local_120);
          local_120[0] = 0x31;
          lstrcpyA((LPSTR)(local_120 + 1),local_220);
        }
      }
      local_10 = 0;
      param_3 = (byte *)0x0;
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar3 = (byte)PTR_DAT_1001fec8[(char)*param_2 * 2] & 8;
        }
        else {
          uVar3 = FUN_10015ac0((int)(char)*param_2,8);
        }
        if (uVar3 == 0) break;
        param_2 = param_2 + 1;
      }
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString1 * 2] & 8;
        }
        else {
          uVar3 = FUN_10015ac0((int)(char)*lpString1,8);
        }
        lpString2 = param_2;
        if (uVar3 == 0) break;
        lpString1 = lpString1 + 1;
      }
LAB_1000a42d:
      bVar1 = *lpString1;
      if ((bVar1 != 0) && (*lpString2 != 0)) {
        if (param_3 != (byte *)0x0) goto LAB_1000a6d3;
        if (DAT_100200d4 < 2) {
          uVar3 = *(ushort *)(PTR_DAT_1001fec8 + (char)bVar1 * 2) & 0x103;
        }
        else {
          uVar3 = FUN_10015ac0((int)(char)bVar1,0x103);
        }
        if (uVar3 == 0) {
          if (DAT_100200d4 < 2) {
            uVar3 = *(ushort *)(PTR_DAT_1001fec8 + (char)*lpString1 * 2) & 0x157;
          }
          else {
            uVar3 = FUN_10015ac0((int)(char)*lpString1,0x157);
          }
          if (uVar3 != 0) {
            if (DAT_100200d4 < 2) {
              uVar3 = *(ushort *)(PTR_DAT_1001fec8 + (char)*lpString2 * 2) & 0x103;
            }
            else {
              uVar3 = FUN_10015ac0((int)(char)*lpString2,0x103);
            }
            if (uVar3 == 0) {
              if (DAT_100200d4 < 2) {
                uVar3 = *(ushort *)(PTR_DAT_1001fec8 + (char)*lpString2 * 2) & 0x157;
              }
              else {
                uVar3 = FUN_10015ac0((int)(char)*lpString2,0x157);
              }
              if (uVar3 != 0) {
                local_8 = FUN_10016190(lpString1);
                local_c = FUN_10016190(lpString2);
                iVar5 = 0;
                param_2 = (byte *)0x0;
                while( true ) {
                  if (DAT_100200d4 < 2) {
                    uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString2 * 2] & 4;
                  }
                  else {
                    uVar3 = FUN_10015ac0((int)(char)*lpString2,4);
                  }
                  if (uVar3 == 0) break;
                  lpString2 = lpString2 + 1;
                  param_2 = param_2 + 1;
                }
                do {
                  if (DAT_100200d4 < 2) {
                    uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString2 * 2] & 0x10;
                  }
                  else {
                    uVar3 = FUN_10015ac0((int)(char)*lpString2,0x10);
                  }
                  if (uVar3 == 0) {
                    if (DAT_100200d4 < 2) {
                      uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString2 * 2] & 8;
                    }
                    else {
                      uVar3 = FUN_10015ac0((int)(char)*lpString2,8);
                    }
                    if (uVar3 == 0) goto LAB_1000a5bd;
                  }
                  lpString2 = lpString2 + 1;
                } while( true );
              }
            }
          }
        }
        param_3 = (byte *)lstrcmpA((LPCSTR)lpString1,(LPCSTR)lpString2);
      }
      if (param_3 == (byte *)0x0) {
        if (*lpString1 == 0) {
LAB_1000a6ca:
          if (*lpString2 != 0) {
            param_3 = (byte *)0xffffffff;
          }
        }
        else if (*lpString2 == 0) {
          param_3 = (byte *)0x1;
        }
        else if (*lpString1 == 0) goto LAB_1000a6ca;
      }
LAB_1000a6d3:
      uVar3 = 0;
      if ((param_3 == (byte *)0x0) && ((param_1 == 7 || (param_1 == 9)))) {
        uVar3 = 1;
      }
      if (((int)param_3 < 0) && ((param_1 == 8 || (param_1 == 9)))) {
        uVar3 = 1;
      }
      if ((0 < (int)param_3) && ((param_1 == 6 || (param_1 == 7)))) {
        uVar3 = 1;
      }
      goto LAB_1000a7ba;
    }
    if (3 < (int)param_1) {
      uVar3 = lstrcmpiA((LPCSTR)DAT_10023e94,(LPCSTR)param_3);
      goto LAB_1000a7ba;
    }
    if ((int)param_1 < 0) goto LAB_1000a7ba;
    if ((int)param_1 < 2) {
      uVar3 = lstrcmpA((LPCSTR)DAT_10023e94,(LPCSTR)param_3);
      goto LAB_1000a7ba;
    }
    if (3 < (int)param_1) goto LAB_1000a7ba;
    puVar2 = FUN_100169d0(DAT_10023e94,(char *)param_3);
  }
  else {
    if (param_1 == 0xb) {
      uVar3 = 0;
      while (((char)*puVar2 != '\0' && (uVar3 == 0))) {
        pCVar4 = FUN_100147fa((LPCSTR)param_3,(int)(char)*puVar2);
        if (pCVar4 == (LPCSTR)0x0) {
          uVar3 = 1;
        }
        puVar2 = (uint *)((int)puVar2 + 1);
      }
      goto LAB_1000a7ba;
    }
    if (param_1 != 0xc) {
      if (param_1 == 0xd) {
        FUN_1000e0eb(param_3,(byte *)DAT_10023e94);
        uVar3 = FUN_10016230((byte *)DAT_10023e94);
      }
      goto LAB_1000a7ba;
    }
    iVar5 = lstrlenA((LPCSTR)DAT_10023e94);
    iVar6 = FUN_10016230(param_3);
    puVar2 = (uint *)(iVar5 - iVar6);
  }
  uVar3 = (uint)(puVar2 == (uint *)0x0);
LAB_1000a7ba:
  if (((param_1 == 0) || (param_1 == 2)) || (param_1 == 4)) {
    uVar3 = (uint)(uVar3 == 0);
  }
  return uVar3;
LAB_1000a5bd:
  while( true ) {
    if (DAT_100200d4 < 2) {
      uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString1 * 2] & 4;
    }
    else {
      uVar3 = FUN_10015ac0((int)(char)*lpString1,4);
    }
    if (uVar3 == 0) break;
    lpString1 = lpString1 + 1;
    iVar5 = iVar5 + 1;
  }
  do {
    if (DAT_100200d4 < 2) {
      uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString1 * 2] & 0x10;
    }
    else {
      uVar3 = FUN_10015ac0((int)(char)*lpString1,0x10);
    }
    if (uVar3 == 0) {
      if (DAT_100200d4 < 2) {
        uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString1 * 2] & 8;
      }
      else {
        uVar3 = FUN_10015ac0((int)(char)*lpString1,8);
      }
      if (uVar3 == 0) break;
    }
    lpString1 = lpString1 + 1;
  } while( true );
  if (local_10 != 0) {
    if (iVar5 < (int)param_2) {
      iVar6 = (int)param_2 - iVar5;
      do {
        param_2 = param_2 + -1;
        iVar6 = iVar6 + -1;
        local_8 = local_8 * 10;
      } while (iVar6 != 0);
    }
    if ((int)param_2 < iVar5) {
      iVar5 = iVar5 - (int)param_2;
      do {
        iVar5 = iVar5 + -1;
        local_c = local_c * 10;
      } while (iVar5 != 0);
    }
  }
  if (local_c < local_8) {
    param_3 = (byte *)0x1;
  }
  else if (local_8 < local_c) {
    param_3 = (byte *)0xffffffff;
  }
  local_10 = 1;
  goto LAB_1000a42d;
}



/* ==== FUN_1000a7dc @ 1000a7dc ==== 
 * signature: undefined4 __stdcall FUN_1000a7dc(void)
 * body: 1000a7dc-1000aef6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000a7dc(void)

{
  uint uVar1;
  LSTATUS LVar2;
  HWND pHVar3;
  INT_PTR IVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  HANDLE hObject;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  code *pcVar13;
  LPARAM LVar14;
  undefined4 local_124;
  BYTE local_120 [256];
  char local_20 [32];
  
  _DAT_10024080 = 0x38;
  _DAT_10024084 = DAT_100238d8;
  _DAT_10024088 = 0xfa;
  _DAT_1002408a = 0x11;
  _DAT_1002408c = 0x100;
  _DAT_10024090 = DAT_10023efc;
  _DAT_10024094 = DAT_100238f8;
  DAT_10024098 = DAT_10023e9c;
  if (DAT_100241e8 != 0) {
    _DAT_100241a4 = DAT_100238d8;
    _DAT_100241a0 = 0x44;
    _DAT_100241c0 = (uint)DAT_10023e9c;
    _DAT_100241a8 = 0xfa;
    _DAT_100241ac = 0x11;
    _DAT_100241b0 = 0x100;
    _DAT_100241b8 = DAT_10023efc;
    _DAT_100241bc = DAT_100238f8;
    _DAT_100241d4 = *(undefined4 *)(DAT_1002392c + 0x30);
  }
  DAT_10023310 = DAT_10023fa8 + 0x25;
  DAT_10023f38 = *(undefined4 *)(DAT_10023fa8 + 5);
  DAT_10023f50 = *(undefined4 *)(DAT_10023fa8 + 9);
  uVar7 = *(uint *)(DAT_10023fa8 + 0xd);
  if ((uVar7 == 0) || (uVar1 = FUN_1000bbbb(3), uVar7 == uVar1)) {
    DAT_10023eac = *(undefined4 *)(DAT_10023fa8 + 0x11);
    DAT_10024198 = *(undefined4 *)(DAT_10023fa8 + 0x15);
    DAT_100240bc = *(undefined4 *)(DAT_10023fa8 + 0x19);
    DAT_10023f34 = *(undefined4 *)(DAT_10023fa8 + 0x1d);
    DAT_10023f4c = *(undefined4 *)(DAT_10023fa8 + 0x21);
    DAT_10024180 = *DAT_10023fa8 & 0xf;
    if ((*DAT_10023fa8 & 0x20) == 0) {
      DAT_1001f038 = 0;
    }
    if ((*DAT_10023fa8 & 0x40) != 0) {
      DAT_10023e30 = 1;
    }
    if ((*DAT_10023fa8 & 0x80) != 0) {
      DAT_10024038 = 1;
    }
    DAT_10023ed8 = (LPSTR)FUN_10015d50(0x20);
    lstrcpyA(DAT_10023ed8,(LPCSTR)DAT_10023310);
    FUN_1000b963();
    DAT_10023f30 = DAT_10023310;
    _DAT_100241dc = DAT_10023310;
    FUN_1000b963();
    FUN_1000b963();
    FUN_1000b963();
    FUN_1000b963();
    DAT_10023310 = DAT_10023310 + 1;
    lstrcpyA(DAT_10023fa4,(LPCSTR)DAT_10023310);
    FUN_1000b963();
    lstrcpyA(DAT_10023eb0,(LPCSTR)DAT_10023310);
    FUN_1000b963();
    lstrcpyA(DAT_10023f08,(LPCSTR)DAT_10023310);
    FUN_1000b963();
    puVar11 = &DAT_10023f80;
    DAT_10023910 = *DAT_10023310;
    DAT_10023ea9 = DAT_10023310[1];
    DAT_100239b0 = *(undefined4 *)(DAT_10023310 + 2);
    DAT_10024020 = (int)(char)DAT_10023310[6];
    DAT_10023310 = DAT_10023310 + 7;
    do {
      *puVar11 = DAT_10023310;
      FUN_1000b963();
      puVar11 = puVar11 + 1;
    } while ((int)puVar11 < 0x10023f9c);
    lstrcpyA((LPSTR)(DAT_10023efc + 0x11),s__LANG__1001f79c);
    if (DAT_10024020 < 2) {
      lstrcpyA((LPSTR)(DAT_100238f8 + 0x100),(LPCSTR)DAT_10023310);
      FUN_1000b963();
    }
    else {
      lstrcpyA(DAT_10023fb4,(LPCSTR)DAT_10023310);
      FUN_1000b963();
      lstrcpyA(DAT_10023ef8,(LPCSTR)DAT_10023310);
      FUN_1000b963();
      GetProfileStringA(&DAT_1001f788,s_sLanguage_1001f790,&DAT_10023314,(LPSTR)DAT_10024034,0x100);
      if ((DAT_100238b8 != 0) && (DAT_100241e8 != 0)) {
        lstrcpyA((LPSTR)&local_124,&DAT_1001f4b0);
        LVar2 = FUN_10004d80((HKEY)0x1,s_Control_Panel_International_1001f76c,DAT_10024034,
                             s_sLanguage_1001f790,(char *)&local_124,0x100,0);
        if (LVar2 != 0) {
          *DAT_10024034 = '\0';
        }
      }
      LVar14 = 0;
      pcVar13 = LanguageDlg;
      pHVar3 = (HWND)FUN_100157cf();
      IVar4 = DialogBoxParamA(DAT_10024178,&DAT_0000006b,pHVar3,pcVar13,LVar14);
      if (IVar4 != 1) goto LAB_1000a8d6;
    }
    FUN_1000b97c((int *)&DAT_10023310,0x35);
    SetWindowTextA(DAT_100238d8,(LPCSTR)DAT_10023310);
    lstrcpyA(DAT_10023f04,(LPCSTR)DAT_10023310);
    FUN_1000b963();
    DAT_100240b8 = FUN_10015d50(0xd0);
    iVar10 = 0;
    *(int *)(DAT_1002392c + 0x98) = DAT_100240b8;
    _DAT_100240a4 = DAT_100240b8;
    do {
      iVar5 = lstrlenA((LPCSTR)DAT_10023310);
      uVar6 = FUN_10015d50(iVar5 + 1U);
      *(undefined4 *)(DAT_100240b8 + iVar10) = uVar6;
      lstrcpyA(*(LPSTR *)(DAT_100240b8 + iVar10),(LPCSTR)DAT_10023310);
      DAT_10023310 = DAT_10023310 + iVar5 + 1U;
      iVar10 = iVar10 + 4;
    } while (iVar10 < 0xd0);
    iVar10 = 0;
    if (0 < ((DAT_10024020 - DAT_10023eec) + -1) * 0x35) {
      do {
        FUN_1000b963();
        iVar10 = iVar10 + 1;
      } while (iVar10 < ((DAT_10024020 - DAT_10023eec) + -1) * 0x35);
    }
    if (DAT_100241e8 != 0) {
      _DAT_100241cc = *(undefined4 *)(DAT_100240b8 + 0x44);
      _DAT_100241d0 = *(undefined4 *)(DAT_100240b8 + 0xb0);
    }
    _DAT_10023e80 = (int)DAT_10023fa8 - (int)DAT_10023310;
    DAT_100240c0 = DAT_100240c0 + _DAT_10023e80;
    lstrcpyA((LPSTR)(DAT_10023efc + 0x22),&DAT_1001f768);
    lstrcpyA((LPSTR)(DAT_100238f8 + 0x200),&DAT_1001f764);
    DAT_1002402c = 3;
    do {
      uVar7 = (uint)DAT_1002402c;
      iVar10 = uVar7 * 0x100;
      lstrcpyA((LPSTR)(uVar7 * 0x11 + DAT_10023efc),
               (LPCSTR)(&PTR_s_GLBSINST____1001f040 + uVar7 * 2));
      if (DAT_1002402c == 3) {
        GetWindowsDirectoryA((LPSTR)(DAT_100238f8 + iVar10),0x100);
      }
      else if ((DAT_1002402c == 4) || (DAT_1002402c == 5)) {
        GetSystemDirectoryA((LPSTR)(DAT_100238f8 + iVar10),0x100);
      }
      else if (DAT_1002402c == 6) {
        FUN_100039fd((LPCSTR)(DAT_100238f8 + iVar10),(LPCSTR)0x0);
      }
      else if (DAT_1002402c == 7) {
        GetModuleFileNameA(DAT_1002403c,(LPSTR)(DAT_100238f8 + iVar10),0x100);
        pcVar9 = (char *)(iVar10 + DAT_100238f8);
        for (pcVar8 = pcVar9; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
        }
        while (pcVar9 < pcVar8) {
          if (*pcVar8 == '\\') goto LAB_1000acb1;
          *pcVar8 = '\0';
          pcVar8 = pcVar8 + -1;
          pcVar9 = (char *)(DAT_100238f8 + iVar10);
        }
        if (*pcVar8 == '\\') {
LAB_1000acb1:
          *pcVar8 = '\0';
        }
      }
      local_124 = (LPCSTR)(DAT_100238f8 + iVar10);
      iVar5 = lstrlenA(local_124);
      if (local_124[iVar5 + -1] == '\\') {
        local_124[iVar5 + -1] = '\0';
      }
      if (DAT_10023e9c == 2) {
        *DAT_10023ef8 = '\0';
        lstrcpyA(DAT_10023908,*(LPCSTR *)(DAT_100240b8 + 0x20));
        lstrcatA(DAT_10023908,s_Windows_1001f080 + (DAT_1002402c - 3) * 9);
        lstrcatA(DAT_10023908,*(LPCSTR *)(DAT_100240b8 + 0x24));
        lstrcpyA(DAT_10023fb4,*(LPCSTR *)(DAT_100240b8 + 0x28));
        lstrcpyA((LPSTR)DAT_10024034,(LPCSTR)(DAT_100238f8 + iVar10));
        LVar14 = 0;
        pcVar13 = PathNameDlg;
        pHVar3 = (HWND)FUN_100157cf();
        IVar4 = DialogBoxParamA(DAT_10024178,&DAT_00000603,pHVar3,pcVar13,LVar14);
        if (IVar4 != 1) goto LAB_1000a8d6;
        lstrcpyA((LPSTR)(iVar10 + DAT_100238f8),(LPCSTR)DAT_10024034);
        FUN_1000b5ca((LPCSTR)DAT_10024034);
      }
      DAT_1002402c = DAT_1002402c + 1;
    } while (DAT_1002402c < 8);
    FUN_1001054d(&DAT_1001f3ec,(LPSTR)local_120);
    bVar12 = false;
    if (DAT_10023930 != 0) {
      LVar2 = FUN_10004d80((HKEY)0x2,s_SOFTWARE_Microsoft_Windows_Curre_1001f728,local_120,
                           s_SharedDir_1001f758,local_20,0x100,0);
      if (LVar2 == 0) {
        lstrcatA((LPSTR)local_120,s__Fonts__1001f720);
        iVar10 = lstrlenA((LPCSTR)local_120);
        lstrcatA((LPSTR)local_120,PTR_s_GLBSINST____1001f040);
        lstrcatA((LPSTR)local_120,&DAT_1001f3f8);
        SetErrorMode(0x8001);
        hObject = (HANDLE)FUN_1001223a((LPCSTR)local_120,1,1);
        bVar12 = -1 < (int)hObject;
        if (bVar12) {
          CloseHandle(hObject);
          DeleteFileA((LPCSTR)local_120);
        }
        SetErrorMode(0x8000);
        local_120[iVar10 + -1] = '\0';
      }
      if (!bVar12) {
        FUN_1001054d(&DAT_1001f3e8,(LPSTR)local_120);
        lstrcatA((LPSTR)local_120,s__Fonts_1001f718);
      }
    }
    FUN_100105d2(s_FONTS_1001f710,(LPCSTR)local_120);
    FUN_100105d2(s_DISK_NUMBER_1001f700,&DAT_1001f70c);
    FUN_100105d2(&DAT_1001f6f8,&DAT_1001f3a4);
    uVar6 = 0;
  }
  else {
    MessageBoxA(DAT_100238d8,s_Demo_installations_only_run_on_t_1001f7a4,s_Install_1001f7e8,0);
LAB_1000a8d6:
    uVar6 = 0xfffffffe;
  }
  return uVar6;
}



/* ==== FUN_1000aef7 @ 1000aef7 ==== 
 * signature: undefined __cdecl FUN_1000aef7(LPCSTR param_1, LPCSTR param_2, char * param_3, char * param_4, char * param_5)
 * body: 1000aef7-1000b351
 */

void __cdecl FUN_1000aef7(LPCSTR param_1,LPCSTR param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  HANDLE hObject;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  LPCSTR pCVar7;
  char *pcVar8;
  CHAR *lpString2;
  CHAR local_520 [256];
  CHAR local_420 [1024];
  uint local_20;
  uint local_1c;
  
  if (DAT_1001f030 == (HANDLE)0xffffffff) {
    return;
  }
  if (DAT_10023edc != 0) {
    return;
  }
  cVar1 = *DAT_10023310;
  pCVar7 = param_1;
  if (cVar1 == '\0') {
LAB_1000b192:
    if (param_2 == (LPCSTR)0x0) {
      if (DAT_10023f00 == 0) {
        pcVar8 = s_Overwrite_1001f854;
        if (param_3 == (char *)0x0) {
          pcVar8 = &DAT_1001f84c;
        }
        wsprintfA(local_420,s_File__s___s_1001f840,pcVar8,param_1);
        if (((byte)DAT_10024198 & 0x20) == 0) goto LAB_1000b316;
        hObject = (HANDLE)FUN_1001223a(param_1,0,0);
        if (hObject == (HANDLE)0xffffffff) {
          pcVar8 = s_______1001f810;
        }
        else {
          FUN_1001234f(hObject,(LPWORD)((int)&param_5 + 2),(LPWORD)((int)&param_2 + 2));
          CloseHandle(hObject);
          uVar5 = ((param_5._2_2_ >> 9) + 0x50) % 100;
          if ((ushort)uVar5 < 0x3c) {
            iVar6 = uVar5 + 2000;
          }
          else {
            iVar6 = uVar5 + 0x76c;
          }
          wsprintfA(local_520,s____02d__02d__04d____02d__02d__02_1001f818,param_5._2_2_ >> 5 & 0xf,
                    param_5._2_2_ & 0x1f,iVar6,(uint)(param_2._2_2_ >> 0xb),
                    param_2._2_2_ >> 5 & 0x3f,(param_2._2_2_ & 0x1f) << 1);
          pcVar8 = local_520;
        }
        lstrcatA(local_420,pcVar8);
        lstrcpyA(local_520,param_1);
        FUN_10012386(local_520,0);
        iVar6 = FUN_100137b1(local_520,&local_20);
        if (iVar6 != 0) goto LAB_1000b316;
        wsprintfA(local_520,s__d__d__d__d_1001f800,local_20 >> 0x10,local_20 & 0xffff,
                  local_1c >> 0x10,local_1c & 0xffff);
        lpString2 = local_520;
LAB_1000b2f3:
        lstrcatA(local_420,lpString2);
        goto LAB_1000b316;
      }
      pcVar8 = s_In_Use___s_Not_Copied_1001f860;
    }
    else {
      pcVar8 = s_Backup_Copy___s_1001f7f0;
    }
  }
  else if (cVar1 == '\x04') {
    if (param_1[1] == 'A') {
      pCVar7 = FUN_100147fa(param_1,0x28);
      pCVar2 = FUN_100147fa(param_1,0x2c);
      *pCVar2 = '\0';
      pCVar3 = FUN_100147fa(pCVar2 + 1,0x2c);
      *pCVar3 = '\0';
      wsprintfA(local_420,s_Icon_Name___s_Icon_Cmd___s_1001f888,pCVar2 + 1,pCVar7 + 1);
      goto LAB_1000b316;
    }
    if (param_1[1] != 'C') {
      return;
    }
    pCVar7 = FUN_100147fa(param_1,0x28);
    pCVar7 = pCVar7 + 1;
    pCVar2 = FUN_100147fa(param_1,0x29);
    *pCVar2 = '\0';
    pCVar2 = FUN_100147fa(pCVar7,0x2c);
    if (pCVar2 != (LPCSTR)0x0) {
      *pCVar2 = '\0';
    }
    pcVar8 = s_Icon_Group___s_1001f878;
  }
  else {
    if (cVar1 == '\x05') {
      wsprintfA(local_420,s_INI_File___s_INI_Sect___s_INI_It_1001f8b0,param_1,param_2,param_3,
                param_5);
      lpString2 = param_4;
      if (*param_4 == '\0') goto LAB_1000b316;
      lstrcatA(local_420,s_INI_Old__1001f8a4);
      goto LAB_1000b2f3;
    }
    if (cVar1 != '\n') {
      if (cVar1 != '\x12') goto LAB_1000b316;
      goto LAB_1000b192;
    }
    if ((DAT_10023310[1] & 0x80U) == 0) {
      wsprintfA(local_420,s_RegDB_Key___s_RegDB_Val__1001f92c,param_1);
      DVar4 = lstrlenA(local_420);
      FileWrite(DAT_1001f030,local_420,DVar4);
      DVar4 = lstrlenA(param_2);
      FileWrite(DAT_1001f030,param_2,DVar4);
      local_420[0] = '\0';
      if (*param_4 != '\0') {
        lstrcatA(local_420,s_RegDB_Name__1001f91c);
        lstrcatA(local_420,param_4);
      }
      if (*param_5 != '0') {
        lstrcatA(local_420,s_RegDB_Type__1001f90c);
        lstrcatA(local_420,param_5);
      }
      if (DAT_10023310[1] != '\0') {
        lstrcatA(local_420,s_RegDB_Root__1001f8fc);
        uVar5 = (byte)DAT_10023310[1] & 0x1f;
        pCVar7 = &DAT_1001f8f8;
        iVar6 = lstrlenA(local_420);
        wsprintfA(local_420 + iVar6,pCVar7,uVar5);
      }
      lstrcatA(local_420,&DAT_1001f3a4);
      DVar4 = lstrlenA(local_420);
      FileWrite(DAT_1001f030,local_420,DVar4);
      pcVar8 = param_3;
      do {
        if (*pcVar8 == '\0') break;
        wsprintfA(local_420,s_RegDB_Old___s_1001f8e8,pcVar8);
        DVar4 = lstrlenA(local_420);
        FileWrite(DAT_1001f030,local_420,DVar4);
        for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
        }
        pcVar8 = pcVar8 + 1;
      } while (*param_5 == '2');
      local_420[0] = '\0';
      goto LAB_1000b316;
    }
    pcVar8 = s_Remove_Key___s_1001f948;
  }
  wsprintfA(local_420,pcVar8,pCVar7);
LAB_1000b316:
  if (local_420[0] != '\0') {
    lstrcatA(local_420,&DAT_1001f3a4);
    DVar4 = lstrlenA(local_420);
    FileWrite(DAT_1001f030,local_420,DVar4);
  }
  return;
}



/* ==== FUN_1000b352 @ 1000b352 ==== 
 * signature: undefined __cdecl FUN_1000b352(char * param_1)
 * body: 1000b352-1000b39d
 */

void __cdecl FUN_1000b352(char *param_1)

{
  undefined *puVar1;
  
  if (DAT_100238d4 != (char *)0x0) {
    _strncpy(DAT_100238d4,param_1,0x100);
    DAT_100238d4[0xff] = '\0';
  }
  puVar1 = PTR_s_Installation_Aborted__1001f04c;
  if (DAT_100240b8 != 0) {
    puVar1 = *(undefined **)(DAT_100240b8 + 0x44);
  }
  FUN_1001277f((HWND)0x0,param_1,puVar1,2);
  return;
}



/* ==== FUN_1000b39e @ 1000b39e ==== 
 * signature: undefined __cdecl FUN_1000b39e(LPCSTR param_1)
 * body: 1000b39e-1000b4e3
 */

void __cdecl FUN_1000b39e(LPCSTR param_1)

{
  DWORD DVar1;
  CHAR local_604 [256];
  CHAR local_504 [1024];
  byte local_104 [256];
  
  DAT_1001f030 = (HANDLE)FUN_1001223a(param_1,1,1);
  if (DAT_1001f030 != (HANDLE)0xffffffff) {
    GetModuleFileNameA(DAT_1002403c,(LPSTR)local_104,0x100);
    FUN_10013fb4(local_604,0);
    wsprintfA(local_504,s_____Installation_Started__s_____T_1001f9c8,local_604,DAT_10023f04,
              local_104);
    DVar1 = lstrlenA(local_504);
    FileWrite(DAT_1001f030,local_504,DVar1);
    if (DAT_10023f98 != (byte *)0x0) {
      FUN_10009eff(local_104,DAT_10023f98);
      if (local_104[0] != 0) {
        wsprintfA(local_504,s_Uninstall_MIF___s_Manufacturer____1001f96c,local_104,DAT_10023f88,
                  DAT_10023f8c,DAT_10023f90,DAT_10023f94);
        DVar1 = lstrlenA(local_504);
        FileWrite(DAT_1001f030,local_504,DVar1);
      }
    }
    if (*DAT_10023f30 != '\0') {
      wsprintfA(local_504,s_Per_User_ID___s_1001f958,DAT_10023f30);
      DVar1 = lstrlenA(local_504);
      FileWrite(DAT_1001f030,local_504,DVar1);
    }
  }
  return;
}



/* ==== HandleFtp @ 1000b4e4 ==== 
 * signature: undefined __stdcall HandleFtp(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 1000b4e4-1000b4fe
 */

void HandleFtp(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0xb4e4  7  HandleFtp */
  if (DAT_10023f14 != (code *)0x0) {
    (*DAT_10023f14)(param_1,param_2,param_3);
  }
  return;
}



/* ==== UpdateScreen @ 1000b4ff ==== 
 * signature: undefined __stdcall UpdateScreen(int param_1)
 * body: 1000b4ff-1000b577
 */

void UpdateScreen(int param_1)

{
  int iVar1;
  RECT local_14;
  
                    /* 0xb4ff  13  UpdateScreen */
  iVar1 = 0;
  if (DAT_100238b4 == 0) {
    if (DAT_10023fac != (HWND)0x0) {
      local_14.top = DAT_10023f5c + -1;
      local_14.bottom = DAT_100238c4 + 1;
      local_14.left = DAT_10023f58 + -1;
      local_14.right = DAT_100238c0 + 1;
      InvalidateRect(DAT_10023fac,&local_14,0);
    }
  }
  else {
    FUN_10013bba((LPCSTR)0x0);
  }
  if ((param_1 != 0) && (DAT_1001f038 != 0)) {
    iVar1 = 1;
  }
  FUN_1000b578(500,iVar1);
  return;
}



/* ==== FUN_1000b578 @ 1000b578 ==== 
 * signature: undefined __cdecl FUN_1000b578(UINT param_1, int param_2)
 * body: 1000b578-1000b5c9
 */

void __cdecl FUN_1000b578(UINT param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(DAT_1002392c + 0x2c) = 1;
    SetTimer(DAT_100238d8,0x2069,param_1,(TIMERPROC)0x0);
  }
  do {
    FUN_10012db9();
  } while (*(int *)(DAT_1002392c + 0x2c) != 0);
  if (param_2 != 0) {
    KillTimer(DAT_100238d8,0x2069);
  }
  return;
}



/* ==== FUN_1000b5ca @ 1000b5ca ==== 
 * signature: undefined __cdecl FUN_1000b5ca(LPCSTR param_1)
 * body: 1000b5ca-1000b61d
 */

void __cdecl FUN_1000b5ca(LPCSTR param_1)

{
  char cVar1;
  LPCSTR lpsz;
  BOOL BVar2;
  
  lpsz = FUN_100147fa(param_1,0x5c);
  if (lpsz != (LPCSTR)0x0) {
    while (cVar1 = *lpsz, cVar1 != '\0') {
      do {
        if (cVar1 == '\\') break;
        lpsz = CharNextA(lpsz);
        cVar1 = *lpsz;
      } while (cVar1 != '\0');
      if (*lpsz == '\\') {
        *lpsz = '\0';
        BVar2 = CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
        if (BVar2 != 0) {
          FUN_1000b61e(param_1);
        }
        *lpsz = '\\';
        lpsz = lpsz + 1;
      }
    }
  }
  return;
}



/* ==== FUN_1000b61e @ 1000b61e ==== 
 * signature: undefined __cdecl FUN_1000b61e(undefined4 param_1)
 * body: 1000b61e-1000b672
 */

void __cdecl FUN_1000b61e(undefined4 param_1)

{
  DWORD DVar1;
  CHAR local_104 [256];
  
  if ((DAT_1001f030 != (HANDLE)0xffffffff) && (DAT_10023edc == 0)) {
    wsprintfA(local_104,s_Made_Dir___s_1001fa04,param_1);
    DVar1 = lstrlenA(local_104);
    FileWrite(DAT_1001f030,local_104,DVar1);
  }
  return;
}



/* ==== FUN_1000b673 @ 1000b673 ==== 
 * signature: int __cdecl FUN_1000b673(LPCSTR param_1, LPCSTR param_2, int param_3, int param_4, int param_5, undefined4 * param_6, int * param_7)
 * body: 1000b673-1000b94e
 */

int __cdecl
FUN_1000b673(LPCSTR param_1,LPCSTR param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
            int *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  LPCSTR lpString2;
  int iVar3;
  char *pcVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  CHAR local_10c [256];
  WORD local_c;
  WORD local_a;
  HANDLE local_8;
  
  if (param_6 != (undefined4 *)0x0) {
    uVar2 = (**(code **)(DAT_1002392c + 0x94))(0,0);
    *param_6 = uVar2;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  local_8 = (HANDLE)FUN_1001223a(param_1,0,0);
  if (local_8 == (HANDLE)0xffffffff) {
    iVar7 = 1;
  }
  else {
    if (param_2 == (LPCSTR)0x0) {
      lpString2 = FUN_1000b94f(param_1);
      lstrcpyA(local_10c,(LPCSTR)((uint)DAT_100239ac * 0x100 + DAT_100238f8));
      lstrcatA(local_10c,&DAT_1001f314);
      lstrcatA(local_10c,lpString2);
      iVar7 = 0;
      do {
        if (iVar7 != 0) {
          iVar3 = lstrlenA(local_10c);
          pcVar1 = local_10c + iVar3;
          pcVar4 = pcVar1;
          if (local_10c < pcVar1) {
            do {
              if ((*pcVar4 == '\\') || (*pcVar4 == '.')) break;
              pcVar4 = pcVar4 + -1;
            } while (local_10c < pcVar4);
          }
          if (*pcVar4 != '.') {
            pcVar4 = pcVar1;
          }
          wsprintfA(pcVar4,s___03d_1001fa14,iVar7);
        }
        iVar7 = iVar7 + 1;
      } while ((iVar7 < 1000) && (iVar3 = FUN_10012539(local_10c), iVar3 == 0));
    }
    else {
      lstrcpyA(local_10c,param_2);
    }
    FUN_1000b5ca(local_10c);
    if (param_3 != 0) {
      lstrcpyA(param_1,local_10c);
    }
    SetFileAttributesA(local_10c,0);
    param_1 = (LPCSTR)0xffffffff;
    if ((param_5 != 0) &&
       (param_1 = (LPCSTR)FUN_1001223a(local_10c,1,0), param_1 != (LPCSTR)0xffffffff)) {
      FUN_10012303(param_1,0,2);
    }
    if ((param_1 == (LPCSTR)0xffffffff) &&
       (param_1 = (LPCSTR)FUN_1001223a(local_10c,1,1), param_1 == (LPCSTR)0xffffffff)) {
      CloseHandle(local_8);
      iVar7 = FUN_10012539(local_10c);
      iVar7 = 2 - (uint)(iVar7 != 0);
    }
    else {
      DVar5 = FUN_100122b9(local_8,DAT_10024170,0x7800);
      while (((0 < (int)DVar5 && (*(int *)(DAT_1002392c + 0x1c) == 0)) &&
             (*(char *)(DAT_1002392c + 0x20) == '\0'))) {
        if (param_7 != (int *)0x0) {
          *param_7 = *param_7 + DVar5;
        }
        if (param_6 != (undefined4 *)0x0) {
          uVar2 = (**(code **)(DAT_1002392c + 0x94))(DAT_10024170,DVar5);
          *param_6 = uVar2;
        }
        if (param_4 < (int)DVar5) {
          *(int *)(DAT_1002392c + 0x14) = *(int *)(DAT_1002392c + 0x14) + param_4;
          param_4 = 0;
        }
        else {
          *(int *)(DAT_1002392c + 0x14) = *(int *)(DAT_1002392c + 0x14) + DVar5;
          param_4 = param_4 - DVar5;
        }
        DVar6 = FileWrite(param_1,DAT_10024170,DVar5);
        if (DVar6 != DVar5) {
          *(undefined1 *)(DAT_1002392c + 0x20) = 1;
        }
        UpdateScreen((uint)(0 < param_4));
        DVar5 = FUN_100122b9(local_8,DAT_10024170,0x7800);
      }
      *(int *)(DAT_1002392c + 0x14) = *(int *)(DAT_1002392c + 0x14) + param_4;
      FUN_1001234f(local_8,&local_a,&local_c);
      FUN_10012318(param_1,local_a,local_c);
      CloseHandle(local_8);
      CloseHandle(param_1);
      if ((*(int *)(DAT_1002392c + 0x1c) != 0) || (*(char *)(DAT_1002392c + 0x20) != '\0')) {
        DeleteFileA(local_10c);
      }
      iVar7 = 0;
    }
  }
  return iVar7;
}



/* ==== FUN_1000b94f @ 1000b94f ==== 
 * signature: LPCSTR __cdecl FUN_1000b94f(LPCSTR param_1)
 * body: 1000b94f-1000b962
 */

LPCSTR __cdecl FUN_1000b94f(LPCSTR param_1)

{
  LPCSTR pCVar1;
  
  pCVar1 = FUN_10014834(param_1,0x5c);
  if (*pCVar1 == '\\') {
    pCVar1 = pCVar1 + 1;
  }
  return pCVar1;
}



/* ==== FUN_1000b963 @ 1000b963 ==== 
 * signature: undefined __stdcall FUN_1000b963(void)
 * body: 1000b963-1000b97b
 */

void FUN_1000b963(void)

{
  for (; *DAT_10023310 != '\0'; DAT_10023310 = DAT_10023310 + 1) {
  }
  DAT_10023310 = DAT_10023310 + 1;
  return;
}



/* ==== FUN_1000b97c @ 1000b97c ==== 
 * signature: undefined __cdecl FUN_1000b97c(int * param_1, int param_2)
 * body: 1000b97c-1000b9a1
 */

void __cdecl FUN_1000b97c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * DAT_10023eec;
  if (0 < iVar1) {
    do {
      while (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
      *param_1 = *param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



/* ==== FUN_1000b9a2 @ 1000b9a2 ==== 
 * signature: undefined4 __cdecl FUN_1000b9a2(undefined4 param_1, int param_2)
 * body: 1000b9a2-1000ba4b
 */

undefined4 __cdecl FUN_1000b9a2(undefined4 param_1,int param_2)

{
  INT_PTR IVar1;
  CHAR local_204 [512];
  
  if (((param_2 != 0) && (*(int *)(DAT_1002392c + 0x1c) == 0)) && ((DAT_100238dc._1_1_ & 0x20) == 0)
     ) {
    wsprintfA(local_204,*(LPCSTR *)(DAT_100240b8 + 0x58),param_1);
    IVar1 = FUN_1001277f((HWND)0x0,local_204,*(undefined4 *)(DAT_100240b8 + 0x44),0x41);
    if (IVar1 == 3) {
      return 1;
    }
    if (IVar1 == 1) {
      *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
      _strncpy(DAT_100238d4,local_204,0x100);
      DAT_100238d4[0xff] = '\0';
    }
    else {
      DAT_10023f00 = 1;
    }
  }
  return 0;
}



/* ==== FUN_1000ba4c @ 1000ba4c ==== 
 * signature: undefined __cdecl FUN_1000ba4c(HANDLE param_1)
 * body: 1000ba4c-1000ba70
 */

void __cdecl FUN_1000ba4c(HANDLE param_1)

{
  DWORD DVar1;
  
  do {
    FUN_10012db9();
    DVar1 = WaitForSingleObject(param_1,100);
  } while (DVar1 == 0x102);
  return;
}



/* ==== FUN_1000ba71 @ 1000ba71 ==== 
 * signature: undefined1 * __cdecl FUN_1000ba71(LPCSTR param_1)
 * body: 1000ba71-1000bb0d
 */

undefined1 * __cdecl FUN_1000ba71(LPCSTR param_1)

{
  int iVar1;
  ushort uVar2;
  undefined1 *puVar3;
  CHAR local_24;
  CHAR local_23 [31];
  
  if (*param_1 != '%') {
    local_24 = '%';
    lstrcpyA(local_23,param_1);
    lstrcatA(&local_24,&DAT_1001f764);
    param_1 = &local_24;
  }
  uVar2 = 0;
  if (DAT_1002402c != 0) {
    do {
      iVar1 = lstrcmpiA((LPCSTR)((uint)uVar2 * 0x11 + DAT_10023efc),param_1);
      if (iVar1 == 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_1002402c);
  }
  lstrcpyA((LPSTR)((uint)uVar2 * 0x11 + DAT_10023efc),param_1);
  puVar3 = (undefined1 *)((uint)uVar2 * 0x100 + DAT_100238f8);
  if (DAT_1002402c <= uVar2) {
    DAT_1002402c = DAT_1002402c + 1;
    *puVar3 = 0;
  }
  return puVar3;
}



/* ==== FUN_1000bb0e @ 1000bb0e ==== 
 * signature: undefined __stdcall FUN_1000bb0e(void)
 * body: 1000bb0e-1000bb69
 */

void FUN_1000bb0e(void)

{
  int iVar1;
  ushort uVar2;
  
  DAT_100239ac = 0;
  uVar2 = 0;
  if (DAT_1002402c != 0) {
    do {
      iVar1 = lstrcmpiA((LPCSTR)((uint)uVar2 * 0x11 + DAT_10023efc),s__BACKUPDIR__1001fa1c);
      if (iVar1 == 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_1002402c);
    if ((uVar2 < DAT_1002402c) && (*(char *)((uint)uVar2 * 0x100 + DAT_100238f8) != '\0')) {
      DAT_100239ac = (undefined1)uVar2;
    }
  }
  return;
}



/* ==== FUN_1000bb6a @ 1000bb6a ==== 
 * signature: undefined __stdcall FUN_1000bb6a(void)
 * body: 1000bb6a-1000bbba
 */

void FUN_1000bb6a(void)

{
  DAT_10023dc0 = 0;
  if (DAT_100238b4 == (code *)0x0) {
    if (DAT_10023fac == (HWND)0x0) {
      DAT_10023dc0 = 0;
      DAT_10023fac = (HWND)0x0;
      return;
    }
    EnableWindow(DAT_100238d8,1);
    DestroyWindow(DAT_10023fac);
  }
  else {
    (*DAT_100238b4)(2,0,&DAT_10024080,0,0,0);
  }
  UpdateScreen(0);
  DAT_10023fac = (HWND)0x0;
  return;
}



/* ==== FUN_1000bbbb @ 1000bbbb ==== 
 * signature: uint __cdecl FUN_1000bbbb(uint param_1)
 * body: 1000bbbb-1000bc0d
 */

uint __cdecl FUN_1000bbbb(uint param_1)

{
  CHAR local_21c [256];
  CHAR local_11c [256];
  CHAR local_1c [16];
  DWORD local_c;
  DWORD local_8;
  
  wsprintfA(local_1c,&DAT_1001f6c0,(param_1 & 0xffff) + 0x40);
  GetVolumeInformationA(local_1c,local_21c,0x100,&param_1,&local_c,&local_8,local_11c,0x100);
  return param_1;
}



/* ==== FUN_1000bc0e @ 1000bc0e ==== 
 * signature: char * __cdecl FUN_1000bc0e(char * param_1)
 * body: 1000bc0e-1000bc1b
 */

char * __cdecl FUN_1000bc0e(char *param_1)

{
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  return param_1 + 1;
}



/* ==== FUN_1000bc1c @ 1000bc1c ==== 
 * signature: undefined4 __cdecl FUN_1000bc1c(LPCSTR param_1, LPCSTR param_2, int param_3, int param_4)
 * body: 1000bc1c-1000bd4a
 */

undefined4 __cdecl FUN_1000bc1c(LPCSTR param_1,LPCSTR param_2,int param_3,int param_4)

{
  HANDLE pvVar1;
  DWORD DVar2;
  ushort uVar3;
  undefined2 extraout_var;
  CHAR local_214 [39];
  CHAR local_1ed [473];
  undefined4 local_14;
  ushort local_e;
  ushort local_c [3];
  ushort local_6;
  
  pvVar1 = (HANDLE)FUN_1001223a(param_1,0,0);
  if (pvVar1 != (HANDLE)0xffffffff) {
    FUN_1001234f(pvVar1,&local_6,&local_e);
    CloseHandle(pvVar1);
    if (((*(byte *)(DAT_10023310 + 1) & 0x40) == 0) || (param_3 != 0)) {
      local_14 = CONCAT22(extraout_var,*(short *)(DAT_10023310 + 0xb));
      local_c[0] = *(ushort *)(DAT_10023310 + 0xd);
      if ((param_3 != 0) && (*(short *)(DAT_10023310 + 0xb) == 0)) {
        return 0;
      }
    }
    else {
      pvVar1 = (HANDLE)FUN_1001223a(param_2,0,0);
      if (pvVar1 == (HANDLE)0xffffffff) {
        return 0;
      }
      FUN_1001234f(pvVar1,(LPWORD)&local_14,local_c);
      CloseHandle(pvVar1);
    }
    uVar3 = (ushort)local_14;
    if (((uVar3 < local_6) || ((local_6 == uVar3 && (local_c[0] <= local_e)))) &&
       ((local_6 != uVar3 || ((local_e != local_c[0] || ((*(byte *)(DAT_10023310 + 1) & 8) == 0)))))
       ) {
      if ((DAT_1001f030 != (HANDLE)0xffffffff) && (DAT_10023edc == 0)) {
        lstrcpyA(local_214,s_Date_Time__Following_file_not_co_1001fa3c);
        if (param_4 == 0) {
          wsprintfA(local_1ed,s_File_Copy___s_1001fa28,param_1);
        }
        DVar2 = lstrlenA(local_214);
        FileWrite(DAT_1001f030,local_214,DVar2);
      }
      return 1;
    }
  }
  return 0;
}



/* ==== FUN_1000bd4b @ 1000bd4b ==== 
 * signature: undefined __cdecl FUN_1000bd4b(int param_1, int param_2)
 * body: 1000bd4b-1000bddf
 */

void __cdecl FUN_1000bd4b(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  RECT local_14;
  
  iVar1 = param_1 * 0x38 + DAT_10023ed4;
  if ((*(byte *)(iVar1 + 0x24) & 0x40) != 0) {
    InvalidateRect(DAT_100238d8,(RECT *)0x0,0);
    return;
  }
  local_14.left = *(int *)(iVar1 + 0x1c);
  local_14.top = *(int *)(iVar1 + 0x20);
  local_14.right = *(int *)(iVar1 + 0x10) + local_14.left;
  local_14.bottom = *(int *)(iVar1 + 0x14) + local_14.top;
  if (param_2 != 0) {
    uVar2 = (*(ushort *)(iVar1 + 0x24) & 0x380) >> 7;
    if (uVar2 == 2) {
      local_14.top = 0;
    }
    else if (uVar2 == 3) {
      local_14.bottom = DAT_10023f44;
    }
    else if (uVar2 == 4) {
      local_14.left = 0;
    }
    else if (uVar2 == 5) {
      local_14.right = DAT_10023f3c;
    }
  }
  InvalidateRect(DAT_100238d8,&local_14,0);
  return;
}



/* ==== FUN_1000bde0 @ 1000bde0 ==== 
 * signature: undefined __stdcall FUN_1000bde0(void)
 * body: 1000bde0-1000be13
 */

void FUN_1000bde0(void)

{
  LONG LVar1;
  int lOffset;
  
  lOffset = *(int *)(DAT_1002392c + 8) - *(int *)(DAT_1002392c + 0xc);
  LVar1 = _llseek(*(HFILE *)(DAT_1002392c + 0x18),0,2);
  if ((lOffset < LVar1) && (-1 < lOffset)) {
    _llseek(*(HFILE *)(DAT_1002392c + 0x18),lOffset,0);
  }
  return;
}



/* ==== FUN_1000be14 @ 1000be14 ==== 
 * signature: bool __cdecl FUN_1000be14(HWND param_1)
 * body: 1000be14-1000be4f
 */

bool __cdecl FUN_1000be14(HWND param_1)

{
  char *pcVar1;
  INT_PTR IVar2;
  
  pcVar1 = *(char **)(DAT_100240b8 + 0x7c);
  if ((*pcVar1 != '\0') && ((*pcVar1 != ' ' || (pcVar1[1] != '\0')))) {
    IVar2 = FUN_1001277f(param_1,pcVar1,*(undefined4 *)(DAT_100240b8 + 0x48),399);
    return (bool)('\x01' - (IVar2 != 3));
  }
  return true;
}



/* ==== FUN_1000be50 @ 1000be50 ==== 
 * signature: undefined4 __stdcall FUN_1000be50(void)
 * body: 1000be50-1000bf61
 */

undefined4 FUN_1000be50(void)

{
  int iVar1;
  char *pcVar2;
  LPCSTR _Source;
  char *_Dest;
  size_t _Count;
  
  _Dest = DAT_10023ee4;
  iVar1 = FUN_1000a7dc();
  if (iVar1 != 0) {
    return 1;
  }
  while( true ) {
    if (*(int *)(DAT_1002392c + 0x1c) != 0) {
      return 0;
    }
    if (*(char *)(DAT_1002392c + 0x20) != '\0') break;
    if (*DAT_10023310 == '?') {
      return 0;
    }
    if (*DAT_10023310 == '\0') {
      pcVar2 = FUN_1000bc0e(DAT_10023310 + 0x2b);
      for (iVar1 = DAT_10024020; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2 = FUN_1000bc0e(pcVar2);
      }
      if ((((DAT_10023310[1] & 4U) == 0) && (*pcVar2 == '\0')) &&
         (((DAT_100238dc._2_1_ & 0x40) == 0 || ((DAT_10023310[2] & 8U) != 0)))) {
        _Count = 0x14;
        _Source = FUN_1000b94f(DAT_10023310 + 0x2b);
        _strncpy(_Dest,_Source,_Count);
        _Dest[0x13] = '\0';
        iVar1 = *(int *)(DAT_10023310 + 3);
        *(int *)(_Dest + 0x14) = iVar1;
        *(int *)(_Dest + 0x18) = *(int *)(DAT_10023310 + 7) - iVar1;
        *(undefined4 *)(_Dest + 0x20) = *(undefined4 *)(DAT_10023310 + 0xb);
        *(undefined4 *)(_Dest + 0x24) = *(undefined4 *)(DAT_10023310 + 0xd);
        *(undefined4 *)(_Dest + 0x1c) = *(undefined4 *)(DAT_10023310 + 0xf);
        _Dest[0x28] = DAT_10023310[1];
        DAT_10023eb8 = DAT_10023eb8 + 1;
        if (0x3ff < DAT_10023eb8) {
          return 0;
        }
        _Dest = _Dest + 0x2c;
      }
    }
    FUN_10009ea4();
  }
  return 0;
}



/* ==== DiskPrompt @ 1000bf62 ==== 
 * signature: undefined4 __stdcall DiskPrompt(int param_1, int param_2)
 * body: 1000bf62-1000c2a9
 */

undefined4 DiskPrompt(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CHAR CVar4;
  LPCSTR pCVar5;
  int iVar6;
  HFILE HVar7;
  HWND hWndParent;
  undefined4 uVar8;
  int iVar9;
  code *lpDialogFunc;
  LPARAM dwInitParam;
  CHAR local_314 [257];
  CHAR aCStack_213 [263];
  CHAR local_10c [260];
  int local_8;
  
                    /* 0xbf62  4  DiskPrompt */
  local_8 = 0;
  if (*(int *)(DAT_1002392c + 0x18) == -1) {
LAB_1000bfbc:
    if (DAT_10023f50 < 1) {
      iVar9 = 1;
    }
    else {
      iVar9 = (*(int *)(DAT_1002392c + 8) + DAT_100239b0) / DAT_10023f50 + 1;
    }
    wsprintfA(local_10c,&DAT_1001f4c8,iVar9);
    FUN_100105d2(s_DISK_NUMBER_1001f700,local_10c);
    GetModuleFileNameA(*(HMODULE *)(DAT_1002392c + 4),DAT_10024034,0x100);
    pCVar5 = FUN_10014834(DAT_10024034,0x5c);
    lstrcpyA(aCStack_213 + 3,pCVar5 + 1);
    iVar6 = lstrlenA(aCStack_213 + 3);
    *(int *)(DAT_1002392c + 0xc) = (iVar9 + -1) * DAT_10023f50;
    if (iVar9 < 2) {
      lstrcpyA(aCStack_213 + iVar6,&DAT_1001f670);
    }
    else {
      wsprintfA(aCStack_213 + iVar6,s_W_02d_1001fa6c,iVar9);
      *(int *)(DAT_1002392c + 0xc) = *(int *)(DAT_1002392c + 0xc) - DAT_100239b0;
    }
    do {
      FUN_1001054d(&DAT_1001fa64,DAT_10024034);
      if ((*DAT_10024034 != '\0') && (CVar4 = FUN_10014819(DAT_10024034), CVar4 != '\\')) {
        lstrcatA(DAT_10024034,&DAT_1001f314);
      }
      lstrcpyA(local_10c,DAT_10024034);
      lstrcatA(local_10c,aCStack_213 + 3);
      HVar7 = _lopen(local_10c,0);
      *(HFILE *)(DAT_1002392c + 0x18) = HVar7;
      if (*(int *)(DAT_1002392c + 0x18) != -1) break;
      if (*(int *)(DAT_1002392c + 0x30) != 0) {
        *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
        return 1;
      }
      if ((DAT_10023dc0 != 0) && (local_8 == 0)) {
        if (DAT_100238b4 == 0) {
          GetDlgItemTextA(DAT_10023fac,0xef5,local_314,0x104);
        }
        FUN_1000bb6a();
        DAT_10023dc0 = 1;
        local_8 = 1;
      }
      if ((DAT_100238dc._1_1_ & 8) != 0) {
        MessageBeep(0);
      }
      uVar3 = DAT_10024064;
      uVar2 = DAT_10023e8c;
      uVar1 = DAT_10023e20;
      uVar8 = DAT_100238c8;
      DAT_10023e8c = DAT_10023f0c;
      DAT_10023e20 = 0;
      DAT_100238c8 = 0;
      iVar9 = FUN_10007016(0);
      if (((-1 < iVar9) && (iVar9 < 0x400)) &&
         (*(char *)(*(int *)(DAT_100240e0 + 1 + iVar9 * 4) + 4 + DAT_100240e0) == '\x03')) {
        iVar9 = 0x400;
      }
      DAT_100238c8 = uVar8;
      DAT_10023e20 = uVar1;
      DAT_10023e8c = uVar2;
      DAT_10024064 = uVar3;
      if ((iVar9 == 0x400) || (iVar9 < 0)) {
        *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
        return 1;
      }
    } while (*(int *)(DAT_1002392c + 0x18) == -1);
    if (local_8 != 0) {
      if (DAT_100238b4 == 0) {
        dwInitParam = 0;
        lpDialogFunc = CopyDlg;
        hWndParent = (HWND)FUN_100157cf();
        DAT_10023fac = CreateDialogParamA(DAT_10024178,(LPCSTR)0x602,hWndParent,lpDialogFunc,
                                          dwInitParam);
        FUN_10010d18(DAT_10023fac,'\x02',0);
        SetDlgItemTextA(DAT_10023fac,0xef5,local_314);
        ShowWindow(DAT_10023fac,5);
        EnableWindow(DAT_100238d8,0);
      }
      else {
        FUN_10013bba(&DAT_10023314);
      }
    }
    UpdateScreen(0);
    uVar8 = 0;
  }
  else {
    if (param_1 == 0) {
      if (DAT_10023f50 != 0) goto LAB_1000bfab;
    }
    else if (DAT_10023f50 == 0) {
      *(undefined4 *)(DAT_1002392c + 0x1c) = 2;
      *(undefined1 *)(DAT_1002392c + 0x20) = 2;
    }
    else {
LAB_1000bfab:
      if (param_2 != 0) {
        _lclose(*(int *)(DAT_1002392c + 0x18));
        goto LAB_1000bfbc;
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}



/* ==== FUN_1000c2aa @ 1000c2aa ==== 
 * signature: undefined __cdecl FUN_1000c2aa(HANDLE param_1, LPCSTR param_2, int param_3)
 * body: 1000c2aa-1000c2f7
 */

void __cdecl FUN_1000c2aa(HANDLE param_1,LPCSTR param_2,int param_3)

{
  CHAR CVar1;
  DWORD DVar2;
  
  DVar2 = lstrlenA(param_2);
  if (param_3 == 0) {
    CVar1 = FUN_10014819(param_2);
    if (CVar1 == '\n') {
      DVar2 = DVar2 - 1;
    }
  }
  if ((int)DVar2 < 1) {
    DVar2 = 1;
  }
  else {
    DVar2 = FileWrite(param_1,param_2,DVar2);
  }
  if (0 < (int)DVar2) {
    FileWrite(param_1,&DAT_1001f3a4,2);
  }
  return;
}



/* ==== FUN_1000c2f8 @ 1000c2f8 ==== 
 * signature: undefined __cdecl FUN_1000c2f8(HANDLE param_1, char * param_2)
 * body: 1000c2f8-1000c338
 */

void __cdecl FUN_1000c2f8(HANDLE param_1,char *param_2)

{
  int iVar1;
  DWORD DVar2;
  char cVar3;
  
  DVar2 = 0;
  cVar3 = *param_2;
  while ((cVar3 != '\0' && (cVar3 != '\x7f'))) {
    iVar1 = DVar2 + 1;
    DVar2 = DVar2 + 1;
    cVar3 = param_2[iVar1];
  }
  if ((int)DVar2 < 1) {
    DVar2 = 1;
  }
  else {
    DVar2 = FileWrite(param_1,param_2,DVar2);
  }
  if (0 < (int)DVar2) {
    FileWrite(param_1,&DAT_1001f3a4,2);
  }
  return;
}



/* ==== FUN_1000c339 @ 1000c339 ==== 
 * signature: undefined __cdecl FUN_1000c339(LPCSTR param_1)
 * body: 1000c339-1000c358
 */

void __cdecl FUN_1000c339(LPCSTR param_1)

{
  int iVar1;
  
  iVar1 = lstrlenA(param_1);
  if ((0 < iVar1) && (param_1[iVar1 + -1] == '\n')) {
    param_1[iVar1 + -1] = '\0';
  }
  return;
}



/* ==== FUN_1000c359 @ 1000c359 ==== 
 * signature: undefined4 __cdecl FUN_1000c359(int param_1, char * param_2, ushort param_3)
 * body: 1000c359-1000c8be
 */

undefined4 __cdecl FUN_1000c359(int param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  char *pcVar4;
  uint uVar5;
  undefined3 extraout_var;
  LPSTR lpString1;
  int iVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint local_84c [255];
  undefined1 local_44d;
  char local_44c [256];
  char local_34c [256];
  char local_24c [256];
  CHAR local_14c [256];
  byte local_4c [32];
  int local_2c;
  int local_28;
  uint local_24;
  char *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  char *local_10;
  HANDLE local_c;
  HANDLE local_8;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
LAB_1000c8b8:
    uVar10 = 0;
  }
  else {
    pcVar4 = FUN_10010950((char *)local_4c,*(char **)(param_1 + 0x20));
    uVar5 = FUN_10016230(local_4c);
    local_18 = uVar5;
    local_20 = FUN_10010950(local_24c,pcVar4);
    pcVar4 = FUN_10010950(DAT_10023e94,local_20);
    pcVar4 = FUN_10010950(local_34c,pcVar4);
    pcVar4 = FUN_10010950(local_44c,pcVar4);
    FUN_10010950((char *)local_4c,pcVar4);
    local_28 = FUN_10016230(local_4c);
    local_24 = uVar5 & 1;
    local_10 = DAT_10023e94;
    if (local_24 == 0) {
      CharUpperA(local_34c);
    }
    bVar1 = false;
    if (param_2 == (char *)0x0) {
      lstrcpyA(local_14c,local_24c);
      local_8 = (HANDLE)FUN_1001223a(local_24c,0,0);
      if (-1 < (int)local_8) {
        lpString1 = FUN_10014834(local_14c,0x5c);
        if (*lpString1 == '\\') {
          lpString1 = lpString1 + 1;
        }
        lstrcpyA(lpString1,s__GLBS383_TMP_1001fa88);
      }
      local_c = (HANDLE)FUN_1001223a(local_14c,1,1);
      if (-1 < (int)local_c) goto LAB_1000c4a7;
LAB_1000c807:
      param_2 = local_24c;
    }
    else {
      bVar2 = FUN_1001077d(param_2,(int *)&local_8,local_24c,(int *)&local_c,local_14c);
      if (CONCAT31(extraout_var,bVar2) == 0) {
LAB_1000c4a7:
        local_14 = 0;
        if (-1 < (int)local_8) {
          FUN_10013278(local_8);
          if (param_2 != (char *)0x0) {
            while (iVar6 = FUN_10013297(local_10,0x7800,local_8), pcVar4 = local_10, iVar6 != 0) {
              if (bVar1) goto LAB_1000c53e;
              FUN_1001488c(local_10,(uint *)&DAT_1001fa80);
              while( true ) {
                if (DAT_100200d4 < 2) {
                  uVar5 = (byte)PTR_DAT_1001fec8[*pcVar4 * 2] & 8;
                }
                else {
                  uVar5 = FUN_10015ac0((int)*pcVar4,8);
                }
                if (uVar5 == 0) break;
                pcVar4 = pcVar4 + 1;
              }
              iVar6 = lstrcmpiA(pcVar4,local_20);
              if (iVar6 == 0) {
                bVar1 = true;
              }
            }
            if (bVar1) {
LAB_1000c53e:
              FUN_10010ffe(local_8,local_c,local_14c);
              goto LAB_1000c8b8;
            }
          }
          if (local_34c[0] != '\0') {
            FUN_10013278(local_8);
            do {
              do {
                iVar6 = FUN_10013297(local_10,0x7800,local_8);
                if (iVar6 == 0) goto LAB_1000c767;
                local_2c = 1;
                local_1c = 0;
                _strncpy((char *)local_84c,local_10,0x3ff);
                local_44d = 0;
                if (local_24 == 0) {
                  CharUpperA((LPSTR)local_84c);
                }
                uVar5 = local_18;
                if (local_14 == 0) {
                  puVar11 = local_84c;
                  if ((local_18 & 2) == 0) {
                    iVar6 = lstrlenA((LPCSTR)local_84c);
                    *(undefined1 *)((int)local_84c + iVar6 + -1) = 0;
                  }
                  else {
                    FUN_1001488c((LPSTR)local_84c,(uint *)&DAT_1001fa80);
                    puVar11 = local_84c;
                    while( true ) {
                      if (DAT_100200d4 < 2) {
                        uVar7 = (byte)PTR_DAT_1001fec8[(char)*puVar11 * 2] & 8;
                      }
                      else {
                        uVar7 = FUN_10015ac0((int)(char)*puVar11,8);
                      }
                      if (uVar7 == 0) break;
                      puVar11 = (uint *)((int)puVar11 + 1);
                    }
                  }
                  if ((uVar5 & 0x60) == 0x40) {
                    iVar6 = lstrlenA((LPCSTR)puVar11);
                    iVar8 = lstrlenA(local_34c);
                    if (0 < iVar6 - iVar8) {
                      puVar11 = (uint *)((int)puVar11 + (iVar6 - iVar8));
                    }
                  }
                  pcVar4 = local_34c;
                  if ((uVar5 & 0x60) == 0x20) {
                    puVar11 = FUN_100169d0(puVar11,pcVar4);
                    if (puVar11 != (uint *)0x0) {
LAB_1000c69a:
                      local_1c = 1;
                    }
                  }
                  else {
                    if ((char)*puVar11 != '\0') {
                      do {
                        if ((*pcVar4 == '\0') || (pcVar4[(int)puVar11 - (int)local_34c] != *pcVar4))
                        break;
                        pcVar4 = pcVar4 + 1;
                      } while (pcVar4[(int)puVar11 - (int)local_34c] != '\0');
                    }
                    if (*pcVar4 == '\0') goto LAB_1000c69a;
                  }
                  if (local_1c != 0) {
                    uVar5 = local_18 & 0x18;
                    if (uVar5 == 0x10) {
                      if (local_44c[0] != '\0') {
                        DVar9 = lstrlenA(local_44c);
                        FileWrite(local_c,local_44c,DVar9);
                      }
                      iVar6 = FUN_1000c2aa(local_c,local_10,0);
                      if (iVar6 < 0) goto LAB_1000c7f0;
                    }
                    if (uVar5 != 0) {
                      local_2c = 0;
                    }
                    iVar6 = FUN_1000c2f8(local_c,local_20);
                    if (iVar6 < 0) goto LAB_1000c7f0;
                    local_14 = 1;
                  }
                }
              } while (local_2c == 0);
              if ((local_44c[0] != '\0') && (local_1c != 0)) {
                DVar9 = lstrlenA(local_44c);
                FileWrite(local_c,local_44c,DVar9);
              }
              iVar6 = FUN_1000c2aa(local_c,local_10,0);
            } while (-1 < iVar6);
LAB_1000c7f0:
            FUN_10010ffe(local_8,local_c,local_14c);
            goto LAB_1000c807;
          }
LAB_1000c767:
          if (local_14 == 0) {
            FUN_10012303(local_c,0,0);
            iVar6 = 1;
            FUN_10013278(local_8);
            while (iVar8 = FUN_10013297(local_10,0x7800,local_8), iVar8 != 0) {
              bVar1 = true;
              if ((0 < local_28) && (local_28 == iVar6)) {
                iVar8 = FUN_1000c2f8(local_c,local_20);
                if (iVar8 < 0) goto LAB_1000c7f0;
                local_14 = 1;
                if ((local_34c[0] == '\0') && (((byte)local_18 & 0x18) == 8)) {
                  bVar1 = false;
                }
              }
              if ((bVar1) && (iVar8 = FUN_1000c2aa(local_c,local_10,0), iVar8 < 0))
              goto LAB_1000c7f0;
              iVar6 = iVar6 + 1;
            }
          }
          CloseHandle(local_8);
        }
        if ((local_14 == 0) || ((int)local_8 < 0)) {
          FUN_1000c2f8(local_c,local_20);
        }
        CloseHandle(local_c);
        if (param_2 == (char *)0x0) {
          if (-1 < (int)local_8) {
            FUN_10010ec8(local_24c,local_14c,(byte)~(byte)(local_18 >> 2) & 1);
          }
        }
        else {
          if (((*(ushort *)(param_1 + 0x28) & param_3) == 0) && ((local_18 & 4) != 0)) {
            sVar3 = 0;
          }
          else {
            sVar3 = 1;
          }
          FUN_10010ec8(local_24c,local_14c,sVar3);
          *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | param_3;
          FUN_100105d2(s_RESTART_1001fa74,&DAT_1001fa7c);
        }
        goto LAB_1000c8b8;
      }
    }
    uVar10 = FUN_10011024(param_2,0);
  }
  return uVar10;
}



/* ==== f0 @ 1000c8bf ==== 
 * signature: undefined4 __stdcall f0(int param_1)
 * body: 1000c8bf-1000cd76
 */

undefined4 f0(int param_1)

{
  bool bVar1;
  LSTATUS LVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  BYTE *lpString1;
  BYTE *pBVar6;
  byte *pbVar7;
  BYTE local_69c [1024];
  byte local_29c [4];
  byte abStack_298 [508];
  char local_9c [64];
  CHAR local_5c [64];
  DWORD local_1c;
  DWORD local_18;
  HANDLE local_14;
  HKEY local_10;
  HANDLE local_c;
  int local_8;
  
                    /* 0xc8bf  16  f0 */
  if (*(char *)(param_1 + 0x18) != '\x01') {
    if ((DAT_100241e8 == 0) || (DAT_10024168 != 0)) {
      bVar1 = FUN_1001077d(s_AUTOEXEC_BAT_1001fac0,(int *)&local_c,local_9c,(int *)&local_14,
                           local_5c);
      if (CONCAT31(extraout_var,bVar1) != 0) {
LAB_1000cd01:
        uVar5 = FUN_10011024(s_AUTOEXEC_BAT_1001fac0,0);
        return uVar5;
      }
      local_8 = 0;
      local_10 = (HKEY)0x0;
      if (-1 < (int)local_c) {
        FUN_10013278(local_c);
        iVar3 = FUN_10013297((char *)local_29c,0x200,local_c);
        while (iVar3 != 0) {
          FUN_1000c339((LPCSTR)local_29c);
          pbVar7 = local_29c;
          while( true ) {
            if (DAT_100200d4 < 2) {
              uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
            }
            else {
              uVar4 = FUN_10015ac0((int)(char)*pbVar7,8);
            }
            if ((uVar4 == 0) && (*pbVar7 != 0x40)) break;
            pbVar7 = pbVar7 + 1;
          }
          iVar3 = FUN_1001b090(pbVar7,&DAT_1001fab8,4);
          if (iVar3 == 0) {
            if (DAT_100200d4 < 2) {
              uVar4 = (byte)PTR_DAT_1001fec8[(char)pbVar7[4] * 2] & 8;
            }
            else {
              uVar4 = FUN_10015ac0((int)(char)pbVar7[4],8);
            }
            if ((uVar4 != 0) || (pbVar7[4] == 0x3d)) {
              pbVar7 = pbVar7 + 5;
              while( true ) {
                if (DAT_100200d4 < 2) {
                  uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
                }
                else {
                  uVar4 = FUN_10015ac0((int)(char)*pbVar7,8);
                }
                if (uVar4 == 0) break;
                pbVar7 = pbVar7 + 1;
              }
              iVar3 = FUN_100108e9(pbVar7,*(LPCSTR *)(param_1 + 0x20));
              if (iVar3 == 0) {
                local_8 = 1;
              }
              else {
                lstrcatA((LPSTR)local_29c,&DAT_1001fad0);
                lstrcatA((LPSTR)local_29c,*(LPCSTR *)(param_1 + 0x20));
                local_10 = (HKEY)0x1;
              }
            }
          }
          iVar3 = FUN_1001b090(pbVar7,&DAT_1001fab0,4);
          if (iVar3 == 0) {
            pbVar7 = pbVar7 + 4;
            while( true ) {
              if (DAT_100200d4 < 2) {
                uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
              }
              else {
                uVar4 = FUN_10015ac0((int)(char)*pbVar7,8);
              }
              if (uVar4 == 0) break;
              pbVar7 = pbVar7 + 1;
            }
            iVar3 = FUN_1001b090(pbVar7,&DAT_1001fab8,4);
            if (iVar3 == 0) {
              pbVar7 = pbVar7 + 4;
              while( true ) {
                if (DAT_100200d4 < 2) {
                  uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
                }
                else {
                  uVar4 = FUN_10015ac0((int)(char)*pbVar7,8);
                }
                if (uVar4 == 0) break;
                pbVar7 = pbVar7 + 1;
              }
              if (*pbVar7 == 0x3d) {
                do {
                  pbVar7 = pbVar7 + 1;
                  if (DAT_100200d4 < 2) {
                    uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
                  }
                  else {
                    uVar4 = FUN_10015ac0((int)(char)*pbVar7,8);
                  }
                } while (uVar4 != 0);
                iVar3 = FUN_100108e9(pbVar7,*(LPCSTR *)(param_1 + 0x20));
                if (iVar3 == 0) {
                  local_8 = 1;
                }
                else {
                  lstrcatA((LPSTR)local_29c,&DAT_1001fad0);
                  lstrcatA((LPSTR)local_29c,*(LPCSTR *)(param_1 + 0x20));
                  local_10 = (HKEY)0x1;
                }
              }
            }
          }
          iVar3 = FUN_1000c2aa(local_14,(LPCSTR)local_29c,1);
          if (iVar3 < 0) {
            FUN_10010ffe(local_c,local_14,local_5c);
            goto LAB_1000cd01;
          }
          iVar3 = FUN_10013297((char *)local_29c,0x200,local_c);
        }
        CloseHandle(local_c);
      }
      if ((local_10 == (HKEY)0x0) && (local_8 == 0)) {
        wsprintfA((LPSTR)local_29c,s_SET_PATH__s___PATH___1001fa98,*(undefined4 *)(param_1 + 0x20));
        iVar3 = FUN_1000c2aa(local_14,(LPCSTR)local_29c,1);
        if (iVar3 < 0) {
          FUN_10010ffe(local_c,local_14,local_5c);
          goto LAB_1000cd01;
        }
      }
      CloseHandle(local_14);
      if (local_8 == 0) {
        FUN_10010ec8(local_9c,local_5c,*(byte *)(param_1 + 0x28) & 1);
        *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
        FUN_100105d2(s_RESTART_1001fa74,&DAT_1001fa7c);
      }
      else {
        DeleteFileA(local_5c);
      }
    }
    else {
      lpString1 = local_69c;
      pBVar6 = local_69c;
      LVar2 = RegOpenKeyExA(DAT_1001f168,s_System_CurrentControlSet_Control_1001fadc,0,3,&local_10);
      if (LVar2 == 0) {
        local_18 = 0x400;
        LVar2 = RegQueryValueExA(local_10,&DAT_1001fad4,(LPDWORD)0x0,&local_1c,local_69c,&local_18);
        if (LVar2 == 0) {
          local_8 = 0;
          while (local_69c[0] != '\0') {
            if (*pBVar6 == ';') {
              *pBVar6 = '\0';
              iVar3 = lstrcmpiA((LPCSTR)lpString1,*(LPCSTR *)(param_1 + 0x20));
              if (iVar3 == 0) {
                local_8 = 1;
              }
              *pBVar6 = ';';
              lpString1 = pBVar6 + 1;
              pBVar6 = lpString1;
            }
            pBVar6 = pBVar6 + 1;
            local_69c[0] = *pBVar6;
          }
          iVar3 = lstrcmpiA((LPCSTR)lpString1,*(LPCSTR *)(param_1 + 0x20));
          if (iVar3 == 0) {
            local_8 = 1;
          }
          if (local_8 == 0) {
            lstrcatA((LPSTR)local_69c,&DAT_1001fad0);
            lstrcatA((LPSTR)local_69c,*(LPCSTR *)(param_1 + 0x20));
            iVar3 = lstrlenA((LPCSTR)local_69c);
            RegSetValueExA(local_10,&DAT_1001fad4,0,DAT_1001f17c,local_69c,iVar3 + 1);
            DAT_10023f60 = 1;
          }
        }
        RegCloseKey(local_10);
      }
    }
  }
  return 0;
}



/* ==== f1 @ 1000cd77 ==== 
 * signature: undefined __stdcall f1(int param_1)
 * body: 1000cd77-1000cd8c
 */

void f1(int param_1)

{
                    /* 0xcd77  25  f1 */
  FUN_1000c359(param_1,s_AUTOEXEC_BAT_1001fac0,1);
  return;
}



/* ==== f2 @ 1000cd8d ==== 
 * signature: undefined __stdcall f2(int param_1)
 * body: 1000cd8d-1000cda2
 */

void f2(int param_1)

{
                    /* 0xcd8d  34  f2 */
  FUN_1000c359(param_1,s_CONFIG_SYS_1001fb1c,2);
  return;
}



/* ==== f3 @ 1000cda3 ==== 
 * signature: undefined4 __stdcall f3(int param_1)
 * body: 1000cda3-1000d16a
 */

undefined4 f3(int param_1)

{
  int iVar1;
  CHAR CVar2;
  int iVar3;
  undefined4 uVar4;
  char *lpString2;
  char local_818 [256];
  CHAR local_718 [256];
  CHAR local_618 [256];
  CHAR local_518 [256];
  char local_418;
  CHAR local_417 [245];
  CHAR aCStack_322 [10];
  CHAR local_318 [256];
  CHAR local_218 [256];
  char local_118;
  CHAR local_117 [255];
  byte *local_18;
  int local_14;
  HANDLE local_10;
  int local_c;
  HANDLE local_8;
  
                    /* 0xcda3  39  f3 */
  iVar1 = param_1;
  if (*(char *)(param_1 + 0x18) == '\x01') {
LAB_1000d162:
    uVar4 = 0;
  }
  else {
    GetWindowsDirectoryA(local_218,0x100);
    CVar2 = FUN_10014819(local_218);
    if (CVar2 != '\\') {
      lstrcatA(local_218,&DAT_1001f314);
    }
    lstrcatA(local_218,s_SYSTEM_INI_1001fb60);
    lstrcpyA(local_318,local_218);
    lpString2 = s__GLBS382_TMP_1001fb50;
    iVar3 = lstrlenA(local_318);
    lstrcpyA(aCStack_322 + iVar3,lpString2);
    local_8 = (HANDLE)FUN_1001223a(local_218,0,0);
    if (-1 < (int)local_8) {
      local_10 = (HANDLE)FUN_1001223a(local_318,1,1);
      if ((int)local_10 < 0) {
        CloseHandle(local_8);
      }
      else {
        FUN_10013278(local_8);
        param_1 = 0;
        local_c = 0;
        FUN_1000d16b(&local_418,*(LPSTR *)(iVar1 + 0x20));
        do {
          iVar3 = FUN_10013297(&local_118,0x100,local_8);
          if (iVar3 == 0) {
            if ((param_1 == 1) && (**(LPCSTR *)(iVar1 + 0x20) != ';')) {
              FUN_1000c2aa(local_10,*(LPCSTR *)(iVar1 + 0x20),1);
              local_c = 1;
            }
            CloseHandle(local_8);
            CloseHandle(local_10);
            if (local_c == 0) {
              DeleteFileA(local_318);
            }
            else {
              iVar3 = FUN_1001b090(*(byte **)(iVar1 + 0x20),s_device__1001fb3c,7);
              if (iVar3 == 0) {
                lstrcpyA(local_518,s_Add_Device__1001fb2c);
                if ((*(char *)(*(int *)(iVar1 + 0x20) + 8) != ':') &&
                   (*(char *)(*(int *)(iVar1 + 0x20) + 7) != '\\')) {
                  GetSystemDirectoryA(local_718,0x100);
                  lstrcatA(local_518,local_718);
                  CVar2 = FUN_10014819(local_718);
                  if (CVar2 != '\\') {
                    lstrcatA(local_518,&DAT_1001f314);
                  }
                }
                lstrcatA(local_518,(LPCSTR)(*(int *)(iVar1 + 0x20) + 7));
                FUN_10002639(local_518);
              }
              FUN_10010ec8(local_218,local_318,*(byte *)(iVar1 + 0x28) & 4);
              *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 4;
              FUN_1001054d(s_RESTART_1001fa74,&local_118);
              if (local_118 != 'S') {
                FUN_100105d2(s_RESTART_1001fa74,&DAT_1001fb28);
              }
            }
            goto LAB_1000d162;
          }
          local_18 = (byte *)FUN_1000d16b(local_818,&local_118);
          if (param_1 == 1) {
            if ((local_418 != ';') && (iVar3 = lstrcmpiA((LPCSTR)local_18,&local_418), iVar3 == 0))
            {
              iVar3 = lstrcmpiA(&local_118,*(LPCSTR *)(iVar1 + 0x20));
              if (iVar3 == 0) {
                param_1 = 0;
              }
              else {
                lstrcpyA(local_618,&local_118);
                local_118 = ';';
                lstrcpyA(local_117,local_618);
                local_c = 1;
              }
            }
            if (((param_1 == 1) && (local_418 == ';')) &&
               (iVar3 = lstrcmpiA((LPCSTR)local_18,local_417), iVar3 == 0)) {
              lstrcpyA(local_618,&local_118);
              local_118 = ';';
              lstrcpyA(local_117,local_618);
              local_c = 1;
            }
          }
          local_14 = 0;
          if ((param_1 == 1) && (*local_18 == 0x5b)) {
            if (local_418 != ';') {
              local_14 = FUN_1000c2aa(local_10,*(LPCSTR *)(iVar1 + 0x20),1);
              local_c = 1;
            }
            param_1 = 2;
          }
          iVar3 = FUN_1001b090(local_18,s__386Enh__1001fb44,8);
          if (iVar3 == 0) {
            param_1 = 1;
          }
        } while ((-1 < local_14) && (local_14 = FUN_1000c2aa(local_10,&local_118,1), -1 < local_14))
        ;
        CloseHandle(local_8);
        CloseHandle(local_10);
        DeleteFileA(local_318);
      }
    }
    uVar4 = FUN_10011024(s_SYSTEM_INI_1001fb60,0);
  }
  return uVar4;
}



/* ==== FUN_1000d16b @ 1000d16b ==== 
 * signature: char * __cdecl FUN_1000d16b(char * param_1, LPSTR param_2)
 * body: 1000d16b-1000d241
 */

char * __cdecl FUN_1000d16b(char *param_1,LPSTR param_2)

{
  LPCSTR pCVar1;
  uint *puVar2;
  LPCSTR pCVar3;
  uint uVar4;
  CHAR local_104 [256];
  
  FUN_1001488c(param_2,(uint *)&DAT_1001fa80);
  lstrcpyA(param_1,param_2);
  if (*param_1 != ';') {
    pCVar1 = FUN_100147fa(param_1,0x3b);
    if (pCVar1 != (LPCSTR)0x0) {
      *pCVar1 = '\0';
    }
    pCVar1 = FUN_10014859(param_1,(uint *)&DAT_1001fa80);
    puVar2 = FUN_10016a60((uint *)&DAT_1001fa80,*pCVar1);
    if (puVar2 == (uint *)0x0) {
      pCVar1 = pCVar1 + 1;
    }
    *pCVar1 = '\0';
    for (; param_1 <= pCVar1; pCVar1 = pCVar1 + -1) {
      if (*pCVar1 == '\\') goto LAB_1000d1e1;
    }
    if (*pCVar1 == '\\') {
LAB_1000d1e1:
      pCVar3 = FUN_100147fa(param_1,0x3d);
      if (pCVar3 != (LPCSTR)0x0) {
        lstrcpyA(local_104,pCVar1 + 1);
        lstrcpyA(pCVar3 + 1,local_104);
      }
    }
    while( true ) {
      if (DAT_100200d4 < 2) {
        uVar4 = (byte)PTR_DAT_1001fec8[*param_1 * 2] & 8;
      }
      else {
        uVar4 = FUN_10015ac0((int)*param_1,8);
      }
      if (uVar4 == 0) break;
      param_1 = param_1 + 1;
    }
  }
  return param_1;
}



/* ==== FUN_1000d242 @ 1000d242 ==== 
 * signature: undefined __stdcall FUN_1000d242(void)
 * body: 1000d242-1000d3cb
 */

void FUN_1000d242(void)

{
  char *pcVar1;
  LSTATUS LVar2;
  int iVar3;
  HSZ pHVar4;
  HCONV hConv;
  HDDEDATA hData;
  LPBYTE lpString1;
  char local_374 [256];
  byte local_274;
  BYTE local_12c [256];
  char local_2c [32];
  int local_c;
  int local_8;
  
  *DAT_10024170 = '\0';
  if (DAT_10023930 != 0) {
    local_c = 0;
    local_8 = 0;
    lpString1 = DAT_10024170;
    do {
      if (local_8 == 0) {
        pcVar1 = s_Programs_1001fbb8;
      }
      else {
        if ((local_8 != 1) || (DAT_100238b8 == 0)) goto LAB_1000d351;
        pcVar1 = s_Common_Programs_1001fbc4;
      }
      LVar2 = FUN_10004d80((HKEY)((local_8 != 0) + 1),s_Software_Microsoft_Windows_Curre_1001fb74,
                           local_12c,pcVar1,local_2c,0x100,0);
      if (LVar2 == 0) {
        lstrcatA((LPSTR)local_12c,&DAT_1001f568);
        iVar3 = FUN_100120c5((LPCSTR)local_12c,0x11,local_374);
        while (iVar3 == 0) {
          if (((local_274 & 0x10) != 0) && (local_374[0] != '.')) {
            lstrcpyA((LPSTR)lpString1,local_374);
            lstrcatA((LPSTR)lpString1,&DAT_1001f3a4);
            iVar3 = lstrlenA((LPCSTR)lpString1);
            lpString1 = lpString1 + iVar3;
            local_c = 1;
          }
          iVar3 = FUN_100121d4(local_374);
        }
        FUN_1001221a((int)local_374);
      }
      local_8 = local_8 + 1;
    } while( true );
  }
LAB_1000d356:
  if (DAT_1002391c != 0) {
    pHVar4 = DdeCreateStringHandleA(DAT_1002391c,s_PROGMAN_1001f3f0,0x3ec);
    hConv = DdeConnect(DAT_1002391c,pHVar4,pHVar4,(PCONVCONTEXT)0x0);
    if (hConv != (HCONV)0x0) {
      pHVar4 = DdeCreateStringHandleA(DAT_1002391c,s_GROUPS_1001fb6c,0x3ec);
      hData = DdeClientTransaction((LPBYTE)0x0,0,hConv,pHVar4,1,0x20b0,5000,(LPDWORD)0x0);
      if (hData != (HDDEDATA)0x0) {
        DdeGetData(hData,DAT_10024170,0x7800,0);
      }
      DdeDisconnect(hConv);
    }
  }
  return;
LAB_1000d351:
  if (local_c != 0) {
    return;
  }
  goto LAB_1000d356;
}



/* ==== f8 @ 1000d3cc ==== 
 * signature: undefined4 __stdcall f8(int param_1)
 * body: 1000d3cc-1000d490
 */

undefined4 f8(int param_1)

{
  char *pcVar1;
  char local_144 [256];
  char local_44 [32];
  char local_24 [32];
  
                    /* 0xd3cc  40  f8 */
  pcVar1 = FUN_10010950(local_44,*(char **)(param_1 + 0x20));
  pcVar1 = FUN_10010950(local_24,pcVar1);
  pcVar1 = FUN_10010950(&DAT_10023bc0,pcVar1);
  pcVar1 = FUN_10010950(&DAT_10023cc0,pcVar1);
  pcVar1 = FUN_10010950(&DAT_100239c0,pcVar1);
  FUN_10010950(&DAT_10023ac0,pcVar1);
  GetPrivateProfileStringA(&DAT_10023cc0,&DAT_100239c0,&DAT_10023314,local_144,0x100,&DAT_10023bc0);
  if (local_144[0] == '\0') {
    lstrcpyA(local_144,&DAT_10023ac0);
  }
  else if (local_44[0] != '0') {
    FUN_10010cf9(local_144);
  }
  FUN_100105d2(local_24,local_144);
  return 0;
}



/* ==== f9 @ 1000d491 ==== 
 * signature: undefined4 __stdcall f9(int param_1)
 * body: 1000d491-1000d562
 */

undefined4 f9(int param_1)

{
  char *pcVar1;
  uint uVar2;
  LSTATUS LVar3;
  char local_344 [256];
  char local_244 [256];
  char local_144 [256];
  char local_44 [32];
  byte local_24 [32];
  
                    /* 0xd491  41  f9 */
  pcVar1 = FUN_10010950((char *)local_24,*(char **)(param_1 + 0x20));
  uVar2 = FUN_10016230(local_24);
  pcVar1 = FUN_10010950(local_44,pcVar1);
  pcVar1 = FUN_10010950(local_244,pcVar1);
  pcVar1 = FUN_10010950(local_344,pcVar1);
  FUN_10010950(local_144,pcVar1);
  LVar3 = FUN_10004d80((HKEY)((int)uVar2 >> 1),local_244,DAT_10023e84,local_144,(char *)&param_1,
                       0x7800,0);
  if (LVar3 == 0) {
    if ((uVar2 & 1) != 0) {
      FUN_10010cf9((LPCSTR)DAT_10023e84);
    }
  }
  else {
    lstrcpyA((LPSTR)DAT_10023e84,local_344);
  }
  FUN_100105d2(local_44,(LPCSTR)DAT_10023e84);
  return 0;
}



/* ==== f10 @ 1000d563 ==== 
 * signature: undefined4 __stdcall f10(int param_1)
 * body: 1000d563-1000d7eb
 */

undefined4 f10(int param_1)

{
  char *lpKeyName;
  int iVar1;
  LPCSTR pCVar2;
  int iVar3;
  char local_30c [252];
  CHAR aCStack_210 [4];
  HKEY__ local_20c [64];
  CHAR aCStack_10c [4];
  BYTE local_108 [260];
  
                    /* 0xd563  17  f10 */
  if (*(char *)(param_1 + 0x18) != '\x01') {
    lpKeyName = FUN_10010950(local_30c,*(char **)(param_1 + 0x20));
    lstrcpyA((LPSTR)local_108,local_30c);
    if (((DAT_100241e8 == 0) || ((DAT_10024168 == 0 && (DAT_10023930 == 0)))) &&
       (iVar1 = lstrlenA(local_30c), 4 < iVar1)) {
      pCVar2 = &DAT_1001fc24;
      iVar1 = lstrlenA(local_30c);
      iVar1 = lstrcmpiA(local_30c + iVar1 + -4,pCVar2);
      if (iVar1 == 0) {
        GetSystemDirectoryA((LPSTR)local_108,0x104);
        wsprintfA((LPSTR)local_20c,s__s__s_1001f2e4,local_108,local_30c);
        pCVar2 = &DAT_1001fc1c;
        iVar1 = lstrlenA((LPCSTR)local_20c);
        lstrcpyA(aCStack_210 + iVar1,pCVar2);
        CreateScalableFontResourceA(0,(LPCSTR)local_20c,local_30c,(LPCSTR)local_108);
        lstrcpyA((LPSTR)local_108,local_30c);
        pCVar2 = &DAT_1001fc1c;
        iVar1 = lstrlenA((LPCSTR)local_108);
        lstrcpyA(aCStack_10c + iVar1,pCVar2);
      }
    }
    if (DAT_10023930 != 0) {
      GetWindowsDirectoryA((LPSTR)local_108,0x104);
      wsprintfA((LPSTR)local_20c,s__s_Fonts__s_1001fc10,local_108,local_30c);
      iVar1 = FUN_10012539((LPCSTR)local_20c);
      if (iVar1 == 0) {
        lstrcpyA((LPSTR)local_108,local_30c);
      }
      else {
        GetSystemDirectoryA((LPSTR)local_20c,0x104);
        wsprintfA((LPSTR)local_108,s__s__s_1001f2e4,local_20c,local_30c);
      }
    }
    AddFontResourceA((LPCSTR)local_108);
    if (*lpKeyName != '\0') {
      if (DAT_100241e8 == 0) {
        WriteProfileStringA(s_Fonts_1001fbd4,lpKeyName,(LPCSTR)local_108);
      }
      else {
        lstrcpyA((LPSTR)local_20c,s_Software_Microsoft_Windows_1001fbf4);
        if (DAT_10024168 == 0) {
          lstrcatA((LPSTR)local_20c,&DAT_1001f524);
        }
        lstrcatA((LPSTR)local_20c,s__CurrentVersion_Fonts_1001fbdc);
        iVar3 = 0;
        iVar1 = lstrlenA((LPCSTR)local_108);
        FUN_10004d00(2,local_20c,lpKeyName,0,local_108,iVar1 + 1,iVar3);
      }
      SendMessageA((HWND)&DAT_0000ffff,0x1d,0,0);
    }
  }
  return 0;
}



/* ==== f11 @ 1000d7ec ==== 
 * signature: undefined4 __stdcall f11(int param_1)
 * body: 1000d7ec-1000d82f
 */

undefined4 f11(int param_1)

{
  CHAR local_124 [256];
  char local_24 [32];
  
                    /* 0xd7ec  18  f11 */
  FUN_10010950(local_24,*(char **)(param_1 + 0x20));
  GetSystemDirectoryA(local_124,0x100);
  FUN_100105d2(local_24,local_124);
  return 0;
}



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



/* ==== FUN_1000da65 @ 1000da65 ==== 
 * signature: undefined4 __stdcall FUN_1000da65(void)
 * body: 1000da65-1000dacc
 */

undefined4 FUN_1000da65(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined4 uVar3;
  byte local_104 [256];
  
  uVar3 = 0;
  if (DAT_100238b8 == 0) {
    uVar3 = 1;
  }
  else {
    FUN_10009eff(local_104,(byte *)s__TEMP___W32INST_PATH___1001fc34);
    hModule = LoadLibraryExA((LPCSTR)local_104,(HANDLE)0x0,0);
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,s_IsAdmin_1001fc2c);
      if (pFVar1 != (FARPROC)0x0) {
        iVar2 = (*pFVar1)();
        if (iVar2 != 0) {
          uVar3 = 1;
        }
      }
      FreeLibrary(hModule);
    }
  }
  return uVar3;
}



/* ==== f13 @ 1000dacd ==== 
 * signature: undefined4 __stdcall f13(int param_1)
 * body: 1000dacd-1000dc1e
 */

undefined4 f13(int param_1)

{
  char *pcVar1;
  int iVar2;
  char local_164 [256];
  CHAR local_64 [32];
  byte local_44 [32];
  char local_24 [32];
  
                    /* 0xdacd  20  f13 */
  pcVar1 = FUN_10010950((char *)local_44,*(char **)(param_1 + 0x20));
  DAT_10023918 = FUN_10016230(local_44);
  pcVar1 = FUN_10010950(local_24,pcVar1);
  pcVar1 = FUN_10010950(&DAT_100239c0,pcVar1);
  pcVar1 = FUN_10010950(local_164,pcVar1);
  FUN_10010950(&DAT_10023bc0,pcVar1);
  DAT_10023cc0 = '\0';
  DAT_10024194 = DAT_10023918 >> 3;
  if ((DAT_10023bc0 == '\0') || (*(int *)(DAT_1002392c + 0x30) != 0)) {
    param_1 = 0x41;
    do {
      if (DAT_10023cc0 != '\0') goto LAB_1000dbf5;
      iVar2 = FUN_10011fc8(param_1 + -0x41);
      if ((iVar2 == 3) && ((DAT_10023918 & 2) == 0)) {
LAB_1000dbb6:
        wsprintfA(local_64,s__c______1001f4b4,param_1);
        FUN_10010bdf(local_64,&DAT_100239c0,1,'\0');
      }
      else {
        iVar2 = FUN_10011fc8(param_1 + -0x41);
        if ((iVar2 == 4) && ((DAT_10023918 & 6) != 0)) goto LAB_1000dbb6;
      }
      param_1 = param_1 + 1;
    } while (param_1 < 0x5b);
  }
  else {
    DAT_10023e34 = 0;
    DialogBoxParamA(DAT_10024178,(LPCSTR)0x67,*(HWND *)(param_1 + 4),SearchDlg,0);
  }
  if (DAT_10023cc0 == '\0') {
    pcVar1 = local_164;
  }
  else {
LAB_1000dbf5:
    if ((DAT_10023918 & 1) != 0) {
      FUN_10010cf9(&DAT_10023cc0);
    }
    pcVar1 = &DAT_10023cc0;
  }
  FUN_100105d2(local_24,pcVar1);
  return 0;
}



/* ==== f15 @ 1000dc1f ==== 
 * signature: undefined4 __stdcall f15(int param_1)
 * body: 1000dc1f-1000ddaf
 */

undefined4 f15(int param_1)

{
  HANDLE hObject;
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  byte local_268 [512];
  byte local_68 [64];
  char local_28 [32];
  HANDLE local_8;
  
                    /* 0xdc1f  21  f15 */
  pcVar1 = FUN_10010950((char *)local_268,*(char **)(param_1 + 0x20));
  uVar2 = FUN_10016230(local_268);
  if ((*(char *)(param_1 + 0x18) != '\x01') || ((uVar2 & 1) != 0)) {
    pcVar1 = FUN_10010950((char *)local_268,pcVar1);
    local_8 = (HANDLE)FUN_1001223a((LPCSTR)local_268,~uVar2 & 1,0);
    if (local_8 == (HANDLE)0xffffffff) {
      uVar3 = FUN_10011024((LPCSTR)local_268,0);
      return uVar3;
    }
    pcVar1 = FUN_10010950(local_28,pcVar1);
    FUN_1001054d(local_28,(LPSTR)local_268);
    pcVar1 = FUN_10010950((char *)local_68,pcVar1);
    iVar4 = FUN_10016190(local_68);
    FUN_10010950((char *)local_68,pcVar1);
    DVar5 = FUN_10016230(local_68);
    hObject = local_8;
    FUN_10012303(local_8,iVar4,0);
    if ((uVar2 & 1) == 0) {
      if ((0 < (int)DVar5) && ((int)DVar5 < 0x200)) {
        local_268[DVar5] = 0;
      }
      DVar5 = lstrlenA((LPCSTR)local_268);
      if ((uVar2 & 2) != 0) {
        DVar5 = DVar5 + 1;
      }
      if (local_268[0] != 0) {
        FileWrite(hObject,local_268,DVar5);
      }
    }
    else {
      DVar6 = FUN_100122b9(hObject,local_268,DVar5);
      local_268[DVar5] = 0;
      if (((int)DVar6 < (int)DVar5) && (-1 < (int)DVar6)) {
        local_268[DVar6] = 0;
      }
      if (local_268[0] != 0) {
        FUN_1001488c((LPSTR)local_268,(uint *)&DAT_1001f288);
      }
      FUN_100105d2(local_28,(LPCSTR)local_268);
    }
    CloseHandle(hObject);
  }
  return 0;
}



/* ==== f16 @ 1000ddb0 ==== 
 * signature: undefined4 __stdcall f16(int param_1)
 * body: 1000ddb0-1000e0ca
 */

undefined4 f16(int param_1)

{
  byte *lpString2;
  byte bVar1;
  CHAR CVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  LPCSTR pCVar6;
  char cVar7;
  char *pcVar8;
  char local_210 [256];
  byte local_110 [256];
  char *local_10;
  int local_c;
  HANDLE local_8;
  
                    /* 0xddb0  22  f16 */
  pcVar3 = FUN_10010950((char *)local_110,*(char **)(param_1 + 0x20));
  bVar1 = FUN_10016230(local_110);
  local_10 = FUN_10010950((char *)local_110,pcVar3);
  if ((bVar1 & 1) == 0) {
    *DAT_10023e94 = 0;
  }
  else {
    FUN_1001054d((LPCSTR)local_110,(LPSTR)DAT_10023e94);
  }
  local_c = 0;
  if ((((bVar1 & 0x80) != 0) && (DAT_10024164 != (LPCSTR)0x0)) &&
     (local_8 = (HANDLE)FUN_1001223a(DAT_10024164,0,0), -1 < (int)local_8)) {
    FUN_10013278(local_8);
    while ((iVar4 = FUN_10013297(local_210,0x100,local_8), iVar4 != 0 && (local_c == 0))) {
      FUN_1001488c(local_210,(uint *)&DAT_1001fa80);
      pcVar3 = local_210;
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar5 = (byte)PTR_DAT_1001fec8[*pcVar3 * 2] & 8;
        }
        else {
          uVar5 = FUN_10015ac0((int)*pcVar3,8);
        }
        if (uVar5 == 0) break;
        pcVar3 = pcVar3 + 1;
      }
      if (DAT_100200d4 < 2) {
        uVar5 = *(ushort *)(PTR_DAT_1001fec8 + *pcVar3 * 2) & 0x103;
      }
      else {
        uVar5 = FUN_10015ac0((int)*pcVar3,0x103);
      }
      if (uVar5 != 0) {
        cVar7 = *pcVar3;
        pCVar6 = pcVar3;
        while ((cVar7 != '\0' && (cVar7 != '='))) {
          pcVar8 = pCVar6 + 1;
          pCVar6 = pCVar6 + 1;
          cVar7 = *pcVar8;
        }
        if (*pCVar6 == '=') {
          *pCVar6 = '\0';
          lpString2 = (byte *)(pCVar6 + 1);
          cVar7 = *pcVar3;
          pcVar8 = pcVar3;
          while (cVar7 != '\0') {
            if (DAT_100200d4 < 2) {
              uVar5 = (byte)PTR_DAT_1001fec8[*pcVar8 * 2] & 8;
            }
            else {
              uVar5 = FUN_10015ac0((int)*pcVar8,8);
            }
            if (uVar5 != 0) break;
            pcVar8 = pcVar8 + 1;
            cVar7 = *pcVar8;
          }
          *pcVar8 = '\0';
          iVar4 = lstrcmpiA(pcVar3,(LPCSTR)local_110);
          if (iVar4 == 0) {
            FUN_10009eff(lpString2,lpString2);
            lstrcatA((LPSTR)DAT_10023e94,(LPCSTR)lpString2);
            local_c = 1;
          }
        }
      }
    }
    CloseHandle(local_8);
  }
  if (local_c == 0) {
    pcVar3 = local_10;
    iVar4 = lstrlenA((LPCSTR)DAT_10023e94);
    FUN_10010950((char *)(DAT_10023e94 + iVar4),pcVar3);
  }
  if ((((bVar1 & 2) != 0) && (*DAT_10023e94 != 0)) &&
     (pCVar6 = FUN_10014834((LPCSTR)DAT_10023e94,0x5c), *pCVar6 == '\\')) {
    *pCVar6 = '\0';
  }
  switch(bVar1 >> 2 & 0xf) {
  case 1:
    iVar4 = FUN_10016190(DAT_10023e94);
    iVar4 = iVar4 + 1;
    goto LAB_1000e014;
  case 2:
    iVar4 = FUN_10016190(DAT_10023e94);
    iVar4 = iVar4 + -1;
LAB_1000e014:
    wsprintfA((LPSTR)DAT_10023e94,&DAT_1001f4c8,iVar4);
    break;
  case 3:
    while (CVar2 = FUN_10014819((LPCSTR)DAT_10023e94), CVar2 == '\\') {
      iVar4 = lstrlenA((LPCSTR)DAT_10023e94);
      DAT_10023e94[iVar4 + -1] = 0;
    }
    break;
  case 4:
    iVar4 = 1;
    goto LAB_1000e05e;
  case 5:
    iVar4 = 0;
LAB_1000e05e:
    FUN_10012386((LPCSTR)DAT_10023e94,iVar4);
    break;
  case 6:
    CharUpperA((LPSTR)DAT_10023e94);
    break;
  case 7:
    CharLowerA((LPSTR)DAT_10023e94);
    break;
  case 8:
    FUN_1000e0eb(DAT_10023e94,DAT_10024170);
    lstrcpyA((LPSTR)DAT_10023e94,(LPCSTR)DAT_10024170);
  }
  FUN_100105d2((LPCSTR)local_110,(LPCSTR)DAT_10023e94);
  return 0;
}



/* ==== FUN_1000e0eb @ 1000e0eb ==== 
 * signature: undefined __cdecl FUN_1000e0eb(byte * param_1, byte * param_2)
 * body: 1000e0eb-1000e776
 */

void __cdecl FUN_1000e0eb(byte *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  LPCSTR lpString2;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined4 auStack_22c [128];
  byte local_2c [32];
  char *local_c;
  int local_8;
  
  local_8 = 0;
  bVar2 = *param_1;
  pbVar4 = param_1;
  pbVar12 = param_2;
  iVar9 = local_8;
  while (bVar2 != 0) {
    local_8 = iVar9;
    auStack_22c[iVar9] = pbVar12;
    if (bVar2 < 0x80) {
      if (bVar2 == 0x22) {
        while( true ) {
          pbVar7 = param_1 + 1;
          bVar2 = *pbVar7;
          if ((bVar2 == 0) || ((bVar2 == 0x22 && (param_1[2] != 0x22)))) break;
          *pbVar12 = bVar2;
          if ((*pbVar7 == 0x22) && (param_1[2] == 0x22)) {
            pbVar7 = param_1 + 2;
          }
          pbVar12 = pbVar12 + 1;
          param_1 = pbVar7;
        }
        *pbVar12 = 0;
        param_1 = param_1 + 2;
        local_8 = iVar9 + 1;
        goto LAB_1000e66b;
      }
      if (DAT_100200d4 < 2) {
        uVar8 = (byte)PTR_DAT_1001fec8[(char)bVar2 * 2] & 4;
      }
      else {
        uVar8 = FUN_10015ac0((int)(char)bVar2,4);
      }
      if (uVar8 == 0) {
        if (DAT_100200d4 < 2) {
          uVar8 = *(ushort *)(PTR_DAT_1001fec8 + (char)*param_1 * 2) & 0x103;
        }
        else {
          uVar8 = FUN_10015ac0((int)(char)*param_1,0x103);
        }
        if (uVar8 == 0) goto switchD_1000e138_caseD_84;
        pbVar7 = local_2c;
        for (; (bVar2 = *param_1, bVar2 != 0 && (bVar2 != 0x20)); param_1 = param_1 + 1) {
          *pbVar7 = bVar2;
          pbVar7 = pbVar7 + 1;
        }
        *pbVar7 = 0;
        lpString2 = FUN_1000ba71((LPCSTR)local_2c);
        lstrcpyA((LPSTR)pbVar12,lpString2);
        iVar9 = lstrlenA((LPCSTR)pbVar12);
        pbVar12 = pbVar12 + iVar9 + 1;
      }
      else {
        while( true ) {
          if (DAT_100200d4 < 2) {
            uVar8 = (byte)PTR_DAT_1001fec8[(char)*param_1 * 2] & 4;
          }
          else {
            uVar8 = FUN_10015ac0((int)(char)*param_1,4);
          }
          if (uVar8 == 0) break;
          bVar2 = *param_1;
          param_1 = param_1 + 1;
          *pbVar12 = bVar2;
          pbVar12 = pbVar12 + 1;
        }
        *pbVar12 = 0;
        pbVar12 = pbVar12 + 1;
      }
      local_8 = local_8 + 1;
      goto LAB_1000e74e;
    }
    switch(bVar2) {
    case 0x80:
      pbVar4 = (byte *)lstrlenA((LPCSTR)auStack_22c[iVar9 + -1]);
      break;
    case 0x81:
      puVar3 = (uint *)auStack_22c[iVar9 + -1];
      cVar1 = (char)*puVar3;
      puVar6 = puVar3;
      while (cVar1 == ' ') {
        puVar6 = (uint *)((int)puVar6 + 1);
        cVar1 = *(char *)puVar6;
      }
      if (puVar6 != puVar3) {
        for (; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + 1)) {
          *(char *)puVar3 = (char)*puVar6;
          puVar3 = (uint *)((int)puVar3 + 1);
        }
LAB_1000e5be:
        *(char *)puVar3 = '\0';
      }
      break;
    case 0x82:
      iVar5 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      goto LAB_1000e2ad;
    case 0x83:
      pcVar11 = (char *)0x0;
      for (pcVar10 = (char *)auStack_22c[iVar9 + -1]; cVar1 = *pcVar10, cVar1 != '\0';
          pcVar10 = pcVar10 + 1) {
        if (DAT_100200d4 < 2) {
          uVar8 = (byte)PTR_DAT_1001fec8[cVar1 * 2] & 8;
        }
        else {
          uVar8 = FUN_10015ac0((int)cVar1,8);
        }
        if (uVar8 == 0) {
          pcVar11 = pcVar10;
        }
      }
      if (pcVar11 != (char *)0x0) {
        pcVar11[1] = '\0';
      }
      break;
    default:
      goto switchD_1000e138_caseD_84;
    case 0x85:
      CharUpperA((LPSTR)auStack_22c[iVar9 + -1]);
      break;
    case 0x87:
      CharLowerA((LPSTR)auStack_22c[iVar9 + -1]);
      break;
    case 0x9e:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      if (iVar5 != 0) {
LAB_1000e205:
        iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
        if (iVar9 != 0) goto LAB_1000e219;
      }
      pbVar4 = (byte *)0x0;
      break;
    case 0x9f:
      if ((*(char *)auStack_22c[iVar9 + -1] != '\0') &&
         (puVar3 = FUN_100169d0((uint *)auStack_22c[local_8 + -2],(char *)auStack_22c[iVar9 + -1]),
         puVar3 != (uint *)0x0)) goto LAB_1000e57e;
      break;
    case 0xa0:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      if (iVar5 == 0) goto LAB_1000e205;
LAB_1000e219:
      pbVar4 = (byte *)0x1;
      break;
    case 0xa1:
      local_c = (char *)auStack_22c[iVar9 + -1];
      if (*local_c != '\0') {
        puVar3 = (uint *)auStack_22c[local_8 + -2];
        puVar6 = FUN_100169d0(puVar3,local_c);
        if (puVar6 != (uint *)0x0) {
          iVar9 = lstrlenA(local_c);
          for (pcVar10 = (char *)((int)puVar6 + iVar9); *pcVar10 != '\0'; pcVar10 = pcVar10 + 1) {
            *(char *)puVar3 = *pcVar10;
            puVar3 = (uint *)((int)puVar3 + 1);
          }
        }
        goto LAB_1000e5be;
      }
      break;
    case 0xa2:
      if (DAT_100200d4 < 2) {
        pbVar12 = (byte *)auStack_22c[iVar9 + -2];
        uVar8 = (byte)PTR_DAT_1001fec8[(char)*pbVar12 * 2] & 4;
      }
      else {
        pbVar12 = (byte *)auStack_22c[local_8 + -2];
        uVar8 = FUN_10015ac0((int)(char)*pbVar12,4);
      }
      if (uVar8 != 0) {
        pbVar4 = (byte *)auStack_22c[iVar9 + -1];
        if (DAT_100200d4 < 2) {
          uVar8 = (byte)PTR_DAT_1001fec8[(char)*pbVar4 * 2] & 4;
        }
        else {
          uVar8 = FUN_10015ac0((int)(char)*pbVar4,4);
        }
        if (uVar8 != 0) {
          iVar9 = FUN_10016190(pbVar4);
          iVar5 = FUN_10016190(pbVar12);
          iVar5 = iVar5 - iVar9;
          goto LAB_1000e2ad;
        }
      }
      iVar5 = lstrcmpA((LPCSTR)pbVar12,(LPCSTR)auStack_22c[iVar9 + -1]);
LAB_1000e2ad:
      pbVar4 = (byte *)(uint)(iVar5 == 0);
      break;
    case 0xa3:
      pbVar4 = (byte *)FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      puVar3 = (uint *)auStack_22c[local_8 + -2];
      for (; ((char)*puVar3 != '\0' && (0 < (int)pbVar4)); pbVar4 = pbVar4 + -1) {
        puVar3 = (uint *)((int)puVar3 + 1);
      }
LAB_1000e57e:
      *(char *)puVar3 = '\0';
      break;
    case 0xa4:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(uint)(iVar5 < iVar9);
      break;
    case 0xa5:
      pbVar12 = (byte *)auStack_22c[iVar9 + -1];
      pbVar4 = (byte *)FUN_10016190(pbVar12);
      pbVar7 = (byte *)auStack_22c[local_8 + -2];
      if (((int)pbVar4 < (int)(pbVar12 + (-1 - (int)pbVar7))) && (-1 < (int)pbVar4)) {
        bVar2 = pbVar12[-1 - (int)pbVar4];
        if (bVar2 != 0) {
          iVar9 = -(int)pbVar7;
          do {
            *pbVar7 = bVar2;
            bVar2 = pbVar7[(int)(pbVar12 + (iVar9 - (int)pbVar4))];
            pbVar7 = pbVar7 + 1;
          } while (bVar2 != 0);
        }
        *pbVar7 = 0;
      }
      break;
    case 0xa6:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(uint)(iVar9 < iVar5);
      break;
    case 0xa7:
      for (pcVar10 = (char *)auStack_22c[iVar9 + -1]; *pcVar10 != '\0'; pcVar10 = pcVar10 + 1) {
        pcVar10[-1] = *pcVar10;
      }
      pcVar10[-1] = '\0';
      break;
    case 0xa8:
      if (DAT_100200d4 < 2) {
        pbVar12 = (byte *)auStack_22c[iVar9 + -2];
        uVar8 = (byte)PTR_DAT_1001fec8[(char)*pbVar12 * 2] & 4;
      }
      else {
        pbVar12 = (byte *)auStack_22c[local_8 + -2];
        uVar8 = FUN_10015ac0((int)(char)*pbVar12,4);
      }
      if (uVar8 != 0) {
        pbVar4 = (byte *)auStack_22c[iVar9 + -1];
        if (DAT_100200d4 < 2) {
          uVar8 = (byte)PTR_DAT_1001fec8[(char)*pbVar4 * 2] & 4;
        }
        else {
          uVar8 = FUN_10015ac0((int)(char)*pbVar4,4);
        }
        if (uVar8 != 0) {
          iVar9 = FUN_10016190(pbVar4);
          iVar5 = FUN_10016190(pbVar12);
          pbVar4 = (byte *)(uint)(iVar5 != iVar9);
          break;
        }
      }
      pbVar4 = (byte *)lstrcmpA((LPCSTR)pbVar12,(LPCSTR)auStack_22c[iVar9 + -1]);
      break;
    case 0xaa:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(uint)(iVar5 <= iVar9);
      break;
    case 0xac:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(uint)(iVar9 <= iVar5);
      break;
    case 0xae:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(iVar5 + iVar9);
      break;
    case 0xb0:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(iVar5 - iVar9);
      break;
    case 0xb2:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(iVar5 * iVar9);
      break;
    case 0xb4:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(iVar5 / iVar9);
      break;
    case 0xb6:
      pbVar4 = (byte *)0x0;
      puVar3 = (uint *)auStack_22c[local_8 + -2];
      puVar6 = FUN_100169d0(puVar3,(char *)auStack_22c[iVar9 + -1]);
      if (puVar6 != (uint *)0x0) {
        pbVar4 = (byte *)((int)puVar6 + (1 - (int)puVar3));
      }
      break;
    case 0xbd:
      pbVar4 = (byte *)FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      iVar9 = local_8;
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      pcVar10 = (char *)auStack_22c[iVar9 + -3];
      for (pcVar11 = pcVar10; (0 < iVar5 && (*pcVar11 != '\0')); pcVar11 = pcVar11 + 1) {
        iVar5 = iVar5 + -1;
      }
      for (; (*pcVar11 != '\0' && (0 < (int)pbVar4)); pbVar4 = pbVar4 + -1) {
        *pcVar10 = *pcVar11;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      *pcVar10 = '\0';
    }
    iVar9 = local_8 + (int)(*param_1 - 0x80) / -0x1e;
    local_8 = iVar9;
    if ((uint)*param_1 % 2 == 0) {
      wsprintfA((LPSTR)auStack_22c[iVar9 + -1],&DAT_1001f4c8,pbVar4);
    }
    for (pbVar12 = (byte *)auStack_22c[iVar9 + -1]; *pbVar12 != 0; pbVar12 = pbVar12 + 1) {
    }
    param_1 = param_1 + 1;
LAB_1000e66b:
    pbVar12 = pbVar12 + 1;
LAB_1000e74e:
    bVar2 = *param_1;
    while (bVar2 == 0x20) {
      param_1 = param_1 + 1;
      bVar2 = *param_1;
    }
    iVar9 = local_8;
    bVar2 = *param_1;
  }
  if (iVar9 != 1) {
switchD_1000e138_caseD_84:
    *param_2 = 0;
  }
  return;
}



/* ==== f17 @ 1000e81d ==== 
 * signature: undefined4 __stdcall f17(int param_1)
 * body: 1000e81d-1000e8c0
 */

undefined4 f17(int param_1)

{
  char *pcVar1;
  LPCSTR lpString2;
  char local_244 [256];
  byte local_144 [256];
  char local_44 [32];
  char local_24 [32];
  
                    /* 0xe81d  23  f17 */
  pcVar1 = FUN_10010950(local_44,*(char **)(param_1 + 0x20));
  pcVar1 = FUN_10010950(local_24,pcVar1);
  pcVar1 = FUN_10010950((char *)local_144,pcVar1);
  FUN_10010950(local_244,pcVar1);
  lpString2 = (LPCSTR)FUN_10015990(local_144);
  if (lpString2 == (LPCSTR)0x0) {
    lstrcpyA(&DAT_10023bc0,local_244);
  }
  else {
    lstrcpynA(&DAT_10023bc0,lpString2,0xff);
    DAT_10023cbf = 0;
    if (local_44[0] != '0') {
      FUN_10010cf9(&DAT_10023bc0);
    }
  }
  FUN_100105d2(local_24,&DAT_10023bc0);
  return 0;
}



/* ==== f19 @ 1000e8c1 ==== 
 * signature: undefined4 __stdcall f19(int param_1)
 * body: 1000e8c1-1000ea9a
 */

undefined4 f19(int param_1)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  HMODULE pHVar4;
  HANDLE hObject;
  int iVar5;
  INT_PTR IVar6;
  undefined4 uVar7;
  uint uVar8;
  CHAR local_44c [256];
  byte local_34c;
  byte local_204 [512];
  
                    /* 0xe8c1  24  f19 */
  pcVar3 = FUN_10010950((char *)local_204,*(char **)(param_1 + 0x20));
  bVar1 = FUN_10016230(local_204);
  pcVar3 = FUN_10010950((char *)local_204,pcVar3);
  uVar8 = 0;
  SetErrorMode(0x8001);
  bVar2 = bVar1 & 0xc1;
  if (bVar2 < 2) {
    uVar8 = FUN_10012539((LPCSTR)local_204);
    if ((bVar1 & 1) == 0) {
      uVar8 = (uint)(uVar8 == 0);
    }
  }
  else if (0x3f < bVar2) {
    if (bVar2 < 0x42) {
      iVar5 = FUN_100120c5((LPCSTR)local_204,0x17,local_44c);
      if (iVar5 == 0) {
        if (((bVar1 & 1) == 0) && ((local_34c & 0x10) == 0)) {
          uVar8 = 1;
        }
        if (((bVar1 & 1) != 0) && ((local_34c & 0x10) != 0)) {
          uVar8 = 1;
        }
      }
    }
    else if (bVar2 == 0x80) {
      lstrcatA((LPSTR)local_204,&DAT_1001f314);
      lstrcatA((LPSTR)local_204,PTR_s_GLBSINST____1001f040);
      lstrcatA((LPSTR)local_204,&DAT_1001f5c0);
      hObject = (HANDLE)FUN_1001223a((LPCSTR)local_204,1,1);
      if ((int)hObject < 0) {
        uVar8 = 1;
      }
      else {
        CloseHandle(hObject);
        DeleteFileA((LPCSTR)local_204);
      }
    }
    else if (bVar2 == 0x81) {
      pHVar4 = GetModuleHandleA((LPCSTR)local_204);
      uVar8 = (uint)(pHVar4 != (HMODULE)0x0);
    }
  }
  SetErrorMode(0x8000);
  if (uVar8 == 0) {
    uVar7 = 0;
  }
  else {
    pcVar3 = FUN_10010950((char *)local_204,pcVar3);
    if (local_204[0] != 0) {
      FUN_10010950(&DAT_10023bc0,pcVar3);
      IVar6 = FUN_1001277f((HWND)0x0,(char *)local_204,&DAT_10023bc0,-(uint)((bVar1 & 6) != 6) & 2);
      if (IVar6 == 2) {
        *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}



/* ==== f20 @ 1000ea9b ==== 
 * signature: undefined4 __stdcall f20(int param_1)
 * body: 1000ea9b-1000eafd
 */

undefined4 f20(int param_1)

{
  char *pcVar1;
  uint uVar2;
  byte local_104 [256];
  
                    /* 0xea9b  26  f20 */
  if (*(char *)(param_1 + 0x18) != '\x01') {
    pcVar1 = FUN_10010950((char *)local_104,*(char **)(param_1 + 0x20));
    uVar2 = FUN_10016230(local_104);
    FUN_10010950((char *)local_104,pcVar1);
    FUN_10010336((LPCSTR)local_104,uVar2,0);
  }
  return 0;
}



/* ==== f21 @ 1000eafe ==== 
 * signature: undefined4 __stdcall f21(int param_1)
 * body: 1000eafe-1000eed2
 */

undefined4 f21(int param_1)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  undefined3 extraout_var;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char local_1b8 [64];
  byte local_178 [256];
  CHAR local_78 [64];
  CHAR local_38 [32];
  HANDLE local_18;
  int local_14;
  int local_10;
  HANDLE local_c;
  byte local_6;
  char local_5;
  
                    /* 0xeafe  27  f21 */
  pcVar3 = FUN_10010950((char *)local_178,*(char **)(param_1 + 0x20));
  local_14 = FUN_10016230(local_178);
  FUN_10010950((char *)local_178,pcVar3);
  local_10 = FUN_10016230(local_178);
  if (*(char *)(param_1 + 0x18) == '\x01') {
LAB_1000eeca:
    uVar6 = 0;
  }
  else {
    bVar2 = FUN_1001077d(s_CONFIG_SYS_1001fb1c,(int *)&local_c,local_1b8,(int *)&local_18,local_78);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      local_5 = '\0';
      local_6 = 0;
      if ((int)local_c < 0) {
        if (0 < local_14) {
          wsprintfA(local_38,s_Files__d_1001fc58,local_14);
          FUN_1000c2aa(local_18,local_38,0);
        }
        if (0 < local_10) {
          wsprintfA(local_38,s_Buffers__d_1001fc4c,local_10);
          FUN_1000c2aa(local_18,local_38,0);
        }
        local_5 = '\x01';
LAB_1000ee80:
        CloseHandle(local_18);
        if (local_5 == '\0') {
          DeleteFileA(local_78);
        }
        else {
          FUN_10010ec8(local_1b8,local_78,*(byte *)(param_1 + 0x28) & 2);
          *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
          FUN_100105d2(s_RESTART_1001fa74,&DAT_1001fa7c);
        }
        goto LAB_1000eeca;
      }
      FUN_10013278(local_c);
      while (iVar4 = FUN_10013297((char *)local_178,0x100,local_c), iVar4 != 0) {
        pbVar7 = local_178;
        while( true ) {
          if (DAT_100200d4 < 2) {
            uVar5 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
          }
          else {
            uVar5 = FUN_10015ac0((int)(char)*pbVar7,8);
          }
          if (uVar5 == 0) break;
          pbVar7 = pbVar7 + 1;
        }
        iVar4 = FUN_1001b090(pbVar7,s_files_1001fc6c,5);
        if (iVar4 == 0) {
          local_6 = local_6 | 1;
        }
        iVar4 = FUN_1001b090(pbVar7,s_buffers_1001fc64,7);
        if (iVar4 == 0) {
          local_6 = local_6 | 2;
        }
      }
      FUN_10013278(local_c);
      if (((local_6 & 1) == 0) && (0 < local_14)) {
        wsprintfA(local_38,s_Files__d_1001fc58,local_14);
        FUN_1000c2aa(local_18,local_38,0);
        local_5 = '\x01';
      }
      if (((local_6 & 2) == 0) && (0 < local_10)) {
        wsprintfA(local_38,s_Buffers__d_1001fc4c,local_10);
        FUN_1000c2aa(local_18,local_38,0);
        local_5 = '\x01';
      }
      do {
        iVar4 = FUN_10013297((char *)local_178,0x100,local_c);
        if (iVar4 == 0) {
          CloseHandle(local_c);
          goto LAB_1000ee80;
        }
        FUN_1000c339((LPCSTR)local_178);
        pbVar7 = local_178;
        while( true ) {
          if (DAT_100200d4 < 2) {
            uVar5 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
          }
          else {
            uVar5 = FUN_10015ac0((int)(char)*pbVar7,8);
          }
          if (uVar5 == 0) break;
          pbVar7 = pbVar7 + 1;
        }
        iVar4 = FUN_1001b090(pbVar7,s_files_1001fc6c,5);
        if ((iVar4 == 0) && (0 < local_14)) {
          for (pbVar8 = pbVar7 + 5; bVar1 = *pbVar8, bVar1 != 0; pbVar8 = pbVar8 + 1) {
            if (DAT_100200d4 < 2) {
              uVar5 = (byte)PTR_DAT_1001fec8[(char)bVar1 * 2] & 4;
            }
            else {
              uVar5 = FUN_10015ac0((int)(char)bVar1,4);
            }
            if (uVar5 != 0) break;
          }
          if ((*pbVar8 != 0) && (iVar4 = FUN_10016230(pbVar8), iVar4 < local_14)) {
            wsprintfA((LPSTR)pbVar8,&DAT_1001f8f8,local_14);
            local_5 = '\x01';
          }
        }
        iVar4 = FUN_1001b090(pbVar7,s_buffers_1001fc64,7);
        if ((iVar4 == 0) && (0 < local_10)) {
          for (pbVar7 = pbVar7 + 7; bVar1 = *pbVar7, bVar1 != 0; pbVar7 = pbVar7 + 1) {
            if (DAT_100200d4 < 2) {
              uVar5 = (byte)PTR_DAT_1001fec8[(char)bVar1 * 2] & 4;
            }
            else {
              uVar5 = FUN_10015ac0((int)(char)bVar1,4);
            }
            if (uVar5 != 0) break;
          }
          if ((*pbVar7 != 0) && (iVar4 = FUN_10016230(pbVar7), iVar4 < local_10)) {
            wsprintfA((LPSTR)pbVar7,&DAT_1001f8f8,local_10);
            local_5 = '\x01';
          }
        }
        iVar4 = FUN_1000c2aa(local_18,(LPCSTR)local_178,1);
      } while (-1 < iVar4);
      FUN_10010ffe(local_c,local_18,local_78);
    }
    uVar6 = FUN_10011024(s_CONFIG_SYS_1001fb1c,0);
  }
  return uVar6;
}



/* ==== f22 @ 1000eed3 ==== 
 * signature: undefined4 __stdcall f22(int param_1)
 * body: 1000eed3-1000efa8
 */

undefined4 f22(int param_1)

{
  char *pcVar1;
  char local_144 [256];
  char local_44 [32];
  char local_24 [32];
  
                    /* 0xeed3  28  f22 */
  pcVar1 = FUN_10010950(local_44,*(char **)(param_1 + 0x20));
  pcVar1 = FUN_10010950(local_24,pcVar1);
  pcVar1 = FUN_10010950(&DAT_100239c0,pcVar1);
  pcVar1 = FUN_10010950(local_144,pcVar1);
  pcVar1 = FUN_10010950(&DAT_10023ac0,pcVar1);
  FUN_10010950(&DAT_10023bc0,pcVar1);
  DAT_10023cc0 = '\0';
  if (DAT_10023bc0 == '\0') {
    FUN_10011094(&DAT_100239c0,&DAT_10023cc0);
  }
  else {
    DAT_10023e34 = 1;
    DialogBoxParamA(DAT_10024178,(LPCSTR)0x67,*(HWND *)(param_1 + 4),SearchDlg,0);
  }
  if (DAT_10023cc0 == '\0') {
    pcVar1 = local_144;
  }
  else {
    if (local_44[0] != '0') {
      FUN_10010cf9(&DAT_10023cc0);
    }
    pcVar1 = &DAT_10023cc0;
  }
  FUN_100105d2(local_24,pcVar1);
  return 0;
}



/* ==== f23 @ 1000efa9 ==== 
 * signature: undefined4 __stdcall f23(DWORD param_1)
 * body: 1000efa9-1000f51d
 */

undefined4 f23(DWORD param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  LPCSTR pCVar8;
  undefined3 extraout_var;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  int *piVar12;
  LPCSTR pCVar13;
  int aiStack_624 [128];
  char local_424 [256];
  undefined4 auStack_324 [64];
  CHAR local_224 [256];
  undefined4 local_124 [26];
  int local_bc [26];
  byte local_54 [32];
  byte local_34 [32];
  uint local_14;
  byte *local_10;
  int local_c;
  byte *local_8;
  
                    /* 0xefa9  29  f23 */
  *(undefined4 *)(DAT_1002392c + 0x14) = 0;
  pcVar4 = FUN_10010950((char *)local_34,*(char **)(param_1 + 0x20));
  local_14 = FUN_10016230(local_34);
  pcVar4 = FUN_10010950((char *)local_34,pcVar4);
  if ((DAT_100238dc._2_1_ & 1) != 0) {
    iVar5 = FUN_10016190(local_34);
    DAT_10023f38 = -iVar5;
  }
  local_10 = (byte *)FUN_10010950((char *)local_34,pcVar4);
  if (local_34[0] != 0) {
    FUN_100105d2((LPCSTR)local_34,&DAT_10023314);
  }
  puVar11 = local_124;
  for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
LAB_1000f038:
  do {
    pbVar10 = local_10;
    local_c = 0;
    local_8 = local_10;
    bVar2 = *local_10;
    piVar12 = local_bc;
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar12 = 0;
      piVar12 = piVar12 + 1;
    }
    if (bVar2 != 0) {
      iVar5 = 0;
      do {
        bVar2 = *pbVar10;
        if ((bVar2 == 9) || (bVar2 == 0x7f)) break;
        pbVar9 = local_54;
        while (((bVar2 != 0 && (bVar2 != 0x20)) && (bVar2 != 9))) {
          *pbVar9 = bVar2;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
          local_8 = pbVar10;
          bVar2 = *pbVar10;
        }
        *pbVar9 = 0;
        pcVar4 = FUN_1000ba71((LPCSTR)local_54);
        *(char **)((int)auStack_324 + iVar5) = pcVar4;
        if (DAT_100200d4 < 2) {
          uVar6 = *(ushort *)(PTR_DAT_1001fec8 + *pcVar4 * 2) & 0x103;
        }
        else {
          uVar6 = FUN_10015ac0((int)*pcVar4,0x103);
        }
        if ((uVar6 == 0) || (pcVar4[1] != ':')) {
          FUN_1001054d(&DAT_1001f3e8,local_424);
          cVar1 = local_424[0];
        }
        else {
          cVar1 = *pcVar4;
        }
        uVar6 = FUN_10015b60((int)cVar1);
        pbVar10 = local_8;
        *(uint *)((int)aiStack_624 + iVar5) = uVar6 - 0x41;
        iVar5 = iVar5 + 4;
        if (*pbVar10 == 0x20) {
          pbVar10 = pbVar10 + 1;
          local_8 = pbVar10;
        }
      } while (*pbVar10 != 0);
    }
    if (*pbVar10 == 9) {
      pbVar10 = pbVar10 + 1;
      local_8 = pbVar10;
    }
    if (*pbVar10 == 0x20) {
      pbVar10 = pbVar10 + 1;
      local_8 = pbVar10;
    }
    bVar2 = *pbVar10;
    while ((bVar2 != 0 && (bVar2 != 10))) {
      iVar5 = FUN_10016230(pbVar10);
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar6 = (byte)PTR_DAT_1001fec8[(char)*local_8 * 2] & 4;
        }
        else {
          uVar6 = FUN_10015ac0((int)(char)*local_8,4);
        }
        if (uVar6 == 0) break;
        local_8 = local_8 + 1;
      }
      if (*local_8 == 0x20) {
        local_8 = local_8 + 1;
      }
      iVar5 = aiStack_624[iVar5];
      iVar7 = FUN_1000f51e(&local_8,(int)local_124,iVar5);
      pbVar10 = local_8;
      local_bc[iVar5] = local_bc[iVar5] + iVar7;
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar6 = (byte)PTR_DAT_1001fec8[(char)*pbVar10 * 2] & 4;
        }
        else {
          uVar6 = FUN_10015ac0((int)(char)*pbVar10,4);
          pbVar10 = local_8;
        }
        if ((uVar6 == 0) && (*pbVar10 != 0x2c)) break;
        pbVar10 = pbVar10 + 1;
        local_8 = pbVar10;
      }
      if (*pbVar10 == 0x20) {
        pbVar10 = pbVar10 + 1;
        local_8 = pbVar10;
      }
      bVar2 = *pbVar10;
    }
    if (*pbVar10 == 10) {
      pbVar10 = pbVar10 + 1;
      local_8 = pbVar10;
    }
    param_1 = 0;
    while (bVar2 = *pbVar10, bVar2 != 0) {
      if (DAT_100200d4 < 2) {
        uVar6 = (byte)PTR_DAT_1001fec8[(char)bVar2 * 2] & 4;
      }
      else {
        uVar6 = FUN_10015ac0((int)(char)bVar2,4);
        pbVar10 = local_8;
      }
      if (uVar6 == 0) {
        if ((*pbVar10 == 9) && (pbVar10 = pbVar10 + 1, local_8 = pbVar10, 0 < (int)param_1)) {
          param_1 = param_1 + 1;
        }
        iVar5 = FUN_10016230(pbVar10);
        while( true ) {
          if (DAT_100200d4 < 2) {
            uVar6 = (byte)PTR_DAT_1001fec8[(char)*local_8 * 2] & 4;
          }
          else {
            uVar6 = FUN_10015ac0((int)(char)*local_8,4);
          }
          if (uVar6 == 0) break;
          local_8 = local_8 + 1;
        }
        if (*local_8 == 0x20) {
          local_8 = local_8 + 1;
        }
        pbVar9 = local_54;
        for (; ((pbVar10 = local_8, bVar2 = *local_8, bVar2 != 0 && (bVar2 != 0x20)) && (bVar2 != 9)
               ); local_8 = local_8 + 1) {
          *pbVar9 = bVar2;
          pbVar9 = pbVar9 + 1;
        }
        *pbVar9 = 0;
        pbVar9 = local_54;
        if (local_54[0] != 0) {
          pCVar13 = (LPCSTR)auStack_324[iVar5];
          do {
            pCVar8 = FUN_100147fa(pCVar13,(int)(char)*pbVar9);
            pbVar10 = local_8;
            if (pCVar8 != (LPCSTR)0x0) break;
            pbVar9 = pbVar9 + 1;
          } while (*pbVar9 != 0);
        }
        if ((*pbVar9 == 0) && (param_1 == 0)) {
          param_1 = 1;
        }
        while (*pbVar10 == 0x20) {
          pbVar10 = pbVar10 + 1;
          local_8 = pbVar10;
        }
      }
      else {
        while ((*pbVar10 != 0 && (*pbVar10 != 10))) {
          iVar5 = FUN_10016230(pbVar10);
          while( true ) {
            if (DAT_100200d4 < 2) {
              uVar6 = (byte)PTR_DAT_1001fec8[(char)*local_8 * 2] & 4;
            }
            else {
              uVar6 = FUN_10015ac0((int)(char)*local_8,4);
            }
            if (uVar6 == 0) break;
            local_8 = local_8 + 1;
          }
          if (*local_8 == 0x20) {
            local_8 = local_8 + 1;
          }
          if (param_1 == 0) {
            iVar5 = aiStack_624[iVar5];
            iVar7 = FUN_1000f51e(&local_8,(int)local_124,iVar5);
            pbVar10 = local_8;
            local_bc[iVar5] = local_bc[iVar5] + iVar7;
            while( true ) {
              if (DAT_100200d4 < 2) {
                uVar6 = (byte)PTR_DAT_1001fec8[(char)*pbVar10 * 2] & 4;
              }
              else {
                uVar6 = FUN_10015ac0((int)(char)*pbVar10,4);
                pbVar10 = local_8;
              }
              if ((uVar6 == 0) && (*pbVar10 != 0x2c)) break;
              pbVar10 = pbVar10 + 1;
              local_8 = pbVar10;
            }
          }
          else {
            for (; (*local_8 != 0 && (*local_8 != 10)); local_8 = local_8 + 1) {
            }
            param_1 = param_1 - 1;
            pbVar10 = local_8;
          }
          if (*pbVar10 == 0x20) {
            pbVar10 = pbVar10 + 1;
            local_8 = pbVar10;
          }
        }
        if (*pbVar10 == 10) {
          pbVar10 = pbVar10 + 1;
          local_8 = pbVar10;
        }
        if (*pbVar10 == 0x20) {
          pbVar10 = pbVar10 + 1;
          local_8 = pbVar10;
        }
      }
    }
    param_1 = 0;
    piVar12 = local_bc;
    do {
      if (local_c != 0) goto LAB_1000f038;
      iVar5 = *piVar12;
      if (0 < iVar5) {
        uVar6 = FUN_1001337f((LPCSTR)0x0,param_1);
        iVar5 = uVar6 - iVar5;
        *piVar12 = iVar5;
        if (iVar5 < 0) {
          wsprintfA(local_224,*(LPCSTR *)(DAT_100240b8 + 0x2c),-iVar5,param_1 + 0x41);
          do {
            bVar3 = false;
            iVar5 = FUN_1001277f((HWND)0x0,local_224,*(undefined4 *)(DAT_100240b8 + 0x48),0x41);
            if ((*(int *)(DAT_1002392c + 0x30) != 0) && ((local_14 & 1) != 0)) {
              iVar5 = 2;
            }
            if (iVar5 == 1) {
              bVar3 = FUN_1000be14(DAT_100238d8);
              if (CONCAT31(extraout_var,bVar3) != 0) {
                _strncpy(DAT_100238d4,local_224,0x100);
                DAT_100238d4[0xff] = '\0';
                return 1;
              }
              bVar3 = true;
            }
          } while (bVar3);
          if (iVar5 != 3) {
            if (local_34[0] == 0) {
              return 0;
            }
            pCVar13 = &DAT_1001f59c;
LAB_1000f50a:
            FUN_100105d2((LPCSTR)local_34,pCVar13);
            return 0;
          }
          if (local_34[0] != 0) {
            pCVar13 = &DAT_1001fc74;
            goto LAB_1000f50a;
          }
          local_c = 1;
        }
      }
      param_1 = param_1 + 1;
      piVar12 = piVar12 + 1;
    } while ((int)param_1 < 0x1a);
    if (local_c == 0) {
      return 0;
    }
  } while( true );
}



/* ==== FUN_1000f51e @ 1000f51e ==== 
 * signature: undefined __cdecl FUN_1000f51e(undefined4 * param_1, int param_2, int param_3)
 * body: 1000f51e-1000f63f
 */

void __cdecl FUN_1000f51e(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  byte *pbVar5;
  DWORD local_14 [2];
  int local_c;
  int local_8;
  
  pbVar5 = (byte *)*param_1;
  if ((DAT_100238dc._2_1_ & 1) != 0) {
    iVar3 = FUN_10016190(pbVar5);
    DAT_10023f38 = DAT_10023f38 + iVar3;
  }
  piVar1 = (int *)(param_2 + param_3 * 4);
  if (*(int *)(param_2 + param_3 * 4) == 0) {
    bVar2 = FUN_10014010(param_3 + 1,local_14);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      local_c = local_c * local_8;
    }
    else {
      local_c = 0;
    }
    if (local_c < 0x401) {
      *piVar1 = 1;
    }
    else if (local_c < 0x801) {
      *piVar1 = 2;
    }
    else if (local_c < 0x1001) {
      *piVar1 = 3;
    }
    else if (local_c < 0x2001) {
      *piVar1 = 4;
    }
    else if (local_c < 0x4001) {
      *piVar1 = 5;
    }
    else {
      *piVar1 = (0x8000 < local_c) + 6;
    }
  }
  iVar3 = *piVar1;
  while( true ) {
    if (DAT_100200d4 < 2) {
      uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar5 * 2] & 4;
    }
    else {
      uVar4 = FUN_10015ac0((int)(char)*pbVar5,4);
    }
    if (((uVar4 == 0) && (*pbVar5 != 0x2c)) || (iVar3 < 1)) break;
    while( true ) {
      if (DAT_100200d4 < 2) {
        uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar5 * 2] & 4;
      }
      else {
        uVar4 = FUN_10015ac0((int)(char)*pbVar5,4);
      }
      if (uVar4 == 0) break;
      pbVar5 = pbVar5 + 1;
    }
    if (*pbVar5 == 0x2c) {
      pbVar5 = pbVar5 + 1;
    }
    iVar3 = iVar3 + -1;
  }
  *param_1 = pbVar5;
  FUN_10016190(pbVar5);
  return;
}



/* ==== f25 @ 1000f640 ==== 
 * signature: undefined __stdcall f25(int param_1)
 * body: 1000f640-1000f652
 */

void f25(int param_1)

{
                    /* 0xf640  30  f25 */
  FUN_1000c359(param_1,(char *)0x0,0);
  return;
}



/* ==== f27 @ 1000f653 ==== 
 * signature: undefined4 __stdcall f27(int param_1)
 * body: 1000f653-1000f895
 */

undefined4 f27(int param_1)

{
  CHAR CVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  LPSTR _Str1;
  int iVar5;
  byte bVar6;
  byte local_150 [256];
  char local_50 [32];
  byte local_30 [32];
  size_t local_10;
  int local_c;
  int local_8;
  
                    /* 0xf653  31  f27 */
  pcVar3 = FUN_10010950((char *)local_30,*(char **)(param_1 + 0x20));
  bVar2 = FUN_10016230(local_30);
  pcVar3 = FUN_10010950(DAT_10023e94,pcVar3);
  pcVar3 = FUN_10010950((char *)local_150,pcVar3);
  pcVar3 = FUN_10010950((char *)local_30,pcVar3);
  FUN_10010950(local_50,pcVar3);
  if (local_30[0] != 0) {
    FUN_100105d2((LPCSTR)local_30,&DAT_10023314);
  }
  if (local_50[0] != '\0') {
    FUN_100105d2(local_50,&DAT_10023314);
  }
  if (local_150[0] == 0) {
    return 0;
  }
  if (*DAT_10023e94 == '\0') {
    return 0;
  }
  lstrcpyA(DAT_10024170,DAT_10023e94);
  if ((bVar2 & 2) != 0) {
    CharUpperA((LPSTR)local_150);
    CharUpperA(DAT_10024170);
  }
  iVar4 = lstrlenA(DAT_10023e94);
  local_c = iVar4;
  local_10 = lstrlenA((LPCSTR)local_150);
  bVar6 = bVar2 & 0xc;
  if (bVar6 < 8) {
    local_8 = lstrlenA((LPCSTR)local_150);
    pcVar3 = DAT_10024170;
    if (bVar6 == 0) {
      while ((*pcVar3 != '\0' && (iVar4 = _strncmp(pcVar3,(char *)local_150,local_10), iVar4 != 0)))
      {
        pcVar3 = CharNextA(pcVar3);
      }
    }
    else {
      pcVar3 = (char *)0x0;
      for (_Str1 = DAT_10024170; *_Str1 != '\0'; _Str1 = CharNextA(_Str1)) {
        iVar4 = _strncmp(_Str1,(char *)local_150,local_10);
        if (iVar4 == 0) {
          pcVar3 = _Str1;
        }
      }
      if (pcVar3 == (char *)0x0) {
        local_8 = 0;
        iVar5 = 0;
        goto LAB_1000f7f3;
      }
    }
    iVar5 = (int)pcVar3 - (int)DAT_10024170;
  }
  else {
    local_8 = 0;
    iVar5 = FUN_10016230(local_150);
    if (bVar6 != 8) {
      iVar5 = iVar4 - iVar5;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
  }
LAB_1000f7f3:
  CVar1 = DAT_10023e94[iVar5];
  DAT_10023e94[iVar5] = '\0';
  if (local_30[0] != 0) {
    if ((bVar2 & 1) == 0) {
      lstrcpyA(DAT_10024170,DAT_10023e94);
    }
    else {
      FUN_100102fe(DAT_10024170,DAT_10023e94);
    }
    FUN_100105d2((LPCSTR)local_30,DAT_10024170);
  }
  DAT_10023e94[iVar5] = CVar1;
  iVar4 = iVar5 + local_8;
  if (local_c < iVar5 + local_8) {
    iVar4 = local_c;
  }
  if (local_50[0] != '\0') {
    if ((bVar2 & 1) == 0) {
      lstrcpyA(DAT_10024170,DAT_10023e94 + iVar4);
    }
    else {
      FUN_100102fe(DAT_10024170,DAT_10023e94 + iVar4);
    }
    FUN_100105d2(local_50,DAT_10024170);
  }
  return 0;
}



/* ==== f28 @ 1000f896 ==== 
 * signature: undefined4 __stdcall f28(void)
 * body: 1000f896-1000f8ba
 */

undefined4 f28(void)

{
                    /* 0xf896  32  f28 */
  if (DAT_10023e9c != '\x01') {
    _lclose(*(HFILE *)(DAT_1002392c + 0x18));
    *(undefined4 *)(DAT_1002392c + 0x18) = 0xffffffff;
  }
  return 0;
}



/* ==== f29 @ 1000f8bb ==== 
 * signature: undefined4 __stdcall f29(int param_1)
 * body: 1000f8bb-1000f94a
 */

undefined4 f29(int param_1)

{
  char *pcVar1;
  HWND hWndParent;
  code *lpDialogFunc;
  LPARAM dwInitParam;
  char local_104 [256];
  
                    /* 0xf8bb  33  f29 */
  pcVar1 = FUN_10010950(local_104,*(char **)(param_1 + 0x20));
  FUN_10010950(&DAT_10023bc0,pcVar1);
  if (local_104[0] == '1') {
    FUN_100158d2(&DAT_10023bc0);
  }
  else if (((DAT_10023bc0 == '\0') || (*(int *)(DAT_1002392c + 0x30) != 0)) || (DAT_10024188 == 0))
  {
    FUN_10006a8b();
  }
  else {
    FUN_1000bb6a();
    dwInitParam = 0;
    lpDialogFunc = SearchDlg;
    DAT_10023e34 = 2;
    hWndParent = (HWND)FUN_100157cf();
    DialogBoxParamA(DAT_10024178,(LPCSTR)0x67,hWndParent,lpDialogFunc,dwInitParam);
  }
  return 0;
}



/* ==== f30 @ 1000f94b ==== 
 * signature: undefined4 __stdcall f30(uint param_1)
 * body: 1000f94b-1000fb55
 */

undefined4 f30(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  int iVar4;
  CHAR local_608 [512];
  byte local_408 [256];
  CHAR local_308 [256];
  byte local_208 [256];
  byte local_108 [256];
  undefined4 local_8;
  
                    /* 0xf94b  35  f30 */
  uVar1 = param_1;
  local_8 = 0;
  pcVar2 = FUN_10010950((char *)local_108,*(char **)(param_1 + 0x20));
  param_1 = FUN_10016230(local_108);
  if ((param_1 & 0x40) != 0) {
    param_1 = param_1 & 0xffffffbf | 0x200;
  }
  pcVar2 = FUN_10010950((char *)local_408,pcVar2);
  pcVar2 = FUN_10010950((char *)local_108,pcVar2);
  FUN_10010950((char *)local_208,pcVar2);
  if ((local_208[0] != 0x30) && (local_208[0] != 0)) {
    param_1 = FUN_10016190(local_208);
  }
  if ((((param_1 & 0x3fffff7f) == 0) || (*(char *)(uVar1 + 0x18) == '\x01')) || (DAT_100241e8 == 0))
  {
    local_8 = 0;
  }
  else {
    FUN_10009eff(local_408,local_408);
    FUN_10009eff(local_108,local_108);
    lstrcpyA(local_308,(LPCSTR)local_108);
    FUN_10010cf9(local_308);
    FUN_100162e0((char *)local_208,0x100);
    FUN_10016240(local_308);
    hModule = LoadLibraryExA((LPCSTR)local_108,(HANDLE)0x0,0);
    if (hModule == (HMODULE)0x0) {
      wsprintfA(local_608,*(LPCSTR *)(DAT_100240b8 + 0x18),local_108);
      FUN_1000b352(local_608);
      local_8 = 1;
    }
    else {
      iVar4 = 0;
      pFVar3 = GetProcAddress(hModule,s_DirectXSetup_1001fcb0);
      if ((pFVar3 == (FARPROC)0x0) &&
         (pFVar3 = GetProcAddress(hModule,s_DirectXSetupA_1001fca0), pFVar3 == (FARPROC)0x0)) {
        iVar4 = -999;
      }
      if (iVar4 == 0) {
        iVar4 = (*pFVar3)(DAT_100238d8,local_408,param_1);
      }
      if (iVar4 < 0) {
        wsprintfA(local_308,s_DirectX__Could_not_install__erro_1001fc78,iVar4);
        FUN_10002639(local_308);
      }
      else if (iVar4 == 1) {
        FUN_100105d2(s_RESTART_1001fa74,&DAT_1001fa7c);
      }
      FreeLibrary(hModule);
    }
    FUN_10016240((LPCSTR)local_208);
  }
  return local_8;
}



/* ==== f31 @ 1000fb56 ==== 
 * signature: undefined4 __stdcall f31(char * param_1)
 * body: 1000fb56-1000fedf
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 f31(char *param_1)

{
  char *pcVar1;
  int iVar2;
  SIZE_T SVar3;
  LPCSTR pCVar4;
  LPCSTR pCVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte local_450 [256];
  byte local_350 [256];
  char local_250 [256];
  byte local_150 [256];
  byte local_50 [32];
  byte local_30 [32];
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0xfb56  36  f31 */
  if (*(int *)(DAT_1002392c + 0x30) == 0) {
    pcVar1 = FUN_10010950((char *)local_30,*(char **)(param_1 + 0x20));
    DAT_10024024 = FUN_10016230(local_30);
    pcVar1 = FUN_10010950((char *)local_30,pcVar1);
    FUN_1001054d((LPCSTR)local_30,local_250);
    local_10 = 0;
    if (local_250[0] == 'B') {
      local_c = 0;
    }
    else {
      if ((local_250[0] != 'N') && (DAT_10023e20 != 0)) {
        return 1;
      }
      local_c = 1;
    }
    pcVar1 = FUN_10010950((char *)local_30,pcVar1);
    FUN_1001054d((LPCSTR)local_30,local_250);
    pcVar1 = FUN_10010950((char *)local_150,pcVar1);
    DAT_1002404c = FUN_10016230(local_150);
    pcVar1 = FUN_10010950((char *)local_150,pcVar1);
    DAT_100239a0 = FUN_10016230(local_150);
    pcVar1 = FUN_10010950((char *)local_150,pcVar1);
    _DAT_100240b4 = FUN_10016190(local_150);
    DAT_100241f4 = _DAT_100240b4;
    pcVar1 = FUN_10010950((char *)local_150,pcVar1);
    iVar2 = FUN_10016190(local_150);
    pcVar1 = FUN_10010950((char *)local_150,pcVar1);
    local_8 = FUN_10016190(local_150);
    param_1 = FUN_10010950((char *)local_150,pcVar1);
    SVar3 = FUN_10016190(local_150);
    iVar7 = _DAT_100240b0;
    if ((SVar3 != 0) && (DAT_10023e20 == 0)) {
      _DAT_100240b0 = 0;
      if (DAT_100238c8 != 0) {
        FUN_10013e71(DAT_10024064);
      }
      DAT_100238c8 = FUN_10013e57(SVar3,&DAT_10024064);
      iVar7 = DAT_100238c8;
      if (DAT_100238c8 != 0) {
        *(int *)(DAT_1002392c + 8) = iVar2 + DAT_100238bc;
        FUN_1000bde0();
        *(int *)(DAT_1002392c + 0x8c) = DAT_100238c8;
        DAT_10023f9c = 0;
        FUN_10013192(*(undefined4 *)(DAT_1002392c + 0x18),(HANDLE)0x0,local_8,0);
        *(undefined4 *)(DAT_1002392c + 0x8c) = 0;
        iVar7 = DAT_100238c8;
      }
    }
    _DAT_100240b0 = iVar7;
    DAT_10023e20 = 1;
    local_150[0] = 0;
    while (*param_1 != '\0') {
      param_1 = FUN_10010950((char *)local_350,param_1);
      local_8 = 1;
      pCVar4 = FUN_100147fa((LPCSTR)local_350,9);
      if (pCVar4 != (LPCSTR)0x0) {
        *pCVar4 = '\0';
        pCVar5 = FUN_100147fa(pCVar4 + 1,9);
        if (pCVar5 != (LPCSTR)0x0) {
          *pCVar5 = '\0';
          lstrcpyA((LPSTR)local_50,pCVar4 + 1);
          pCVar4 = FUN_100147fa(pCVar5 + 1,9);
          if (pCVar4 != (LPCSTR)0x0) {
            *pCVar4 = '\0';
            lstrcpyA((LPSTR)local_450,pCVar5 + 1);
            pbVar9 = local_450;
            pbVar8 = local_50;
            uVar6 = FUN_10016230((byte *)(pCVar4 + 1));
            uVar6 = FUN_1000a18e(uVar6,pbVar8,pbVar9);
            if (uVar6 != 0) {
              local_8 = 0;
            }
          }
        }
      }
      if (local_8 != 0) {
        if ((local_250[0] == '\0') || ((local_c != 0 && (local_10 != 0)))) {
          pbVar8 = local_350;
LAB_1000fe88:
          FUN_100105d2((LPCSTR)local_30,(LPCSTR)pbVar8);
          return 1;
        }
        iVar7 = lstrcmpiA(local_250,(LPCSTR)local_350);
        if (iVar7 == 0) {
          if (local_c == 0) {
            if (local_150[0] == 0) {
              return 1;
            }
            pbVar8 = local_150;
            goto LAB_1000fe88;
          }
          local_10 = 1;
        }
        lstrcpyA((LPSTR)local_150,(LPCSTR)local_350);
      }
    }
    if (DAT_100238cc != (HWND)0x0) {
      EnableWindow(DAT_100238d8,1);
      DestroyWindow(DAT_100238cc);
      DAT_100238cc = (HWND)0x0;
    }
    DAT_10023e20 = 0;
    FUN_100105d2((LPCSTR)local_30,&DAT_10023314);
  }
  return 0;
}



/* ==== f33 @ 1000fee0 ==== 
 * signature: undefined4 __stdcall f33(uint param_1)
 * body: 1000fee0-10010257
 */

undefined4 f33(uint param_1)

{
  char cVar1;
  char *pcVar2;
  HANDLE hObject;
  size_t _Count;
  DWORD DVar3;
  DWORD DVar4;
  char *pcVar5;
  char *pcVar6;
  HANDLE hObject_00;
  CHAR local_550 [512];
  char local_350 [256];
  byte local_250 [256];
  CHAR local_150 [256];
  char local_50 [32];
  byte local_30 [32];
  HANDLE local_10;
  char *local_c;
  byte local_5;
  
                    /* 0xfee0  37  f33 */
  local_c = FUN_1000bc0e((char *)(DAT_10023310 + 2));
  local_c = FUN_1000bc0e(local_c);
  local_c = FUN_1000bc0e(local_c);
  local_c = FUN_1000bc0e(local_c);
  FUN_1000b97c((int *)&local_c,1);
  local_c = FUN_10010950((char *)local_250,local_c);
  local_c = FUN_10010950((char *)local_250,local_c);
  local_c = FUN_10010950((char *)local_250,local_c);
  pcVar2 = FUN_10010950((char *)local_250,*(char **)(param_1 + 0x20));
  local_5 = FUN_10016230(local_250);
  pcVar2 = FUN_10010950(local_50,pcVar2);
  pcVar2 = FUN_10010950(local_350,pcVar2);
  if (*local_c == ' ') {
    hObject_00 = (HANDLE)0x0;
    hObject = (HANDLE)FUN_1001223a(local_350,0,0);
    local_10 = hObject;
    if ((int)hObject < 0) {
      wsprintfA(local_550,*(LPCSTR *)(DAT_100240b8 + 0x68),local_350);
      FUN_1000b352(local_550);
      *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
      return 0;
    }
    local_150[0] = '\0';
    param_1 = CONCAT13(local_5,(undefined3)param_1) & 0x1ffffff;
    if ((local_5 & 1) != 0) {
      FUN_1001393a(local_150,local_350);
      hObject_00 = (HANDLE)FUN_1001223a(local_150,1,1);
      if ((int)hObject_00 < 0) {
        CloseHandle(hObject);
LAB_1001023c:
        FUN_1000b352(*(char **)(DAT_100240b8 + 8));
        *(undefined1 *)(DAT_1002392c + 0x20) = 1;
        return 0;
      }
    }
    wsprintfA(local_550,&DAT_1001fcc0,hObject,hObject_00,local_150);
    _Count = lstrlenA(local_550);
    _strncpy(local_c,local_550,_Count);
  }
  else {
    pcVar2 = FUN_10010950((char *)local_30,pcVar2);
    local_10 = (HANDLE)FUN_10016190(local_30);
    pcVar2 = FUN_10010950((char *)local_30,pcVar2);
    hObject_00 = (HANDLE)FUN_10016190(local_30);
    FUN_10010950(local_150,pcVar2);
    param_1 = CONCAT13(local_5,(undefined3)param_1) & 0x1ffffff;
    if ((local_5 & 1) != 0) {
      FUN_1001054d(local_50,DAT_10023e94);
      lstrcatA(DAT_10023e94,&DAT_1001f3a4);
      DVar3 = lstrlenA(DAT_10023e94);
      DVar4 = FileWrite(hObject_00,DAT_10023e94,DVar3);
      if (DVar4 != DVar3) {
        CloseHandle(local_10);
        CloseHandle(hObject_00);
        goto LAB_1001023c;
      }
    }
  }
  DVar3 = FUN_100122b9(local_10,DAT_10023e94,0x40);
  if ((int)DVar3 < 1) {
    CloseHandle(local_10);
    if (param_1._3_1_ != '\0') {
      CloseHandle(hObject_00);
    }
    *local_c = ' ';
    if (param_1._3_1_ != '\0') {
      FUN_10010ec8(local_350,local_150,(ushort)((byte)~local_5 >> 1 & 1));
    }
    return 0;
  }
  DAT_10023e94[DVar3] = '\0';
  pcVar2 = DAT_10023e94;
  while( true ) {
    cVar1 = *pcVar2;
    pcVar5 = pcVar2;
    while (((cVar1 != '\0' && (cVar1 != '\r')) && (cVar1 != '\n'))) {
      pcVar6 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar6;
    }
    if (*pcVar5 != '\0') break;
    pcVar2 = pcVar2 + DVar3;
    DVar3 = FUN_100122b9(local_10,pcVar2,0x40);
    pcVar2[DVar3] = '\0';
    pcVar6 = pcVar5;
    if ((int)DVar3 < 1) {
LAB_10010122:
      FUN_10012303(local_10,(LONG)(pcVar6 + (-DVar3 - (int)pcVar2)),1);
      FUN_100105d2(local_50,DAT_10023e94);
      return 1;
    }
  }
  *pcVar5 = '\0';
  cVar1 = pcVar5[1];
  pcVar6 = pcVar5 + 1;
  if (cVar1 == '\0') {
    DVar4 = FUN_100122b9(local_10,(LPVOID)((int)&param_1 + 2),1);
    if ((DVar4 == 1) && (param_1._2_1_ != '\n')) {
      pcVar6 = pcVar5;
    }
  }
  else if ((cVar1 == '\r') || (cVar1 == '\n')) {
    pcVar6 = pcVar5 + 2;
  }
  goto LAB_10010122;
}



/* ==== f34 @ 10010258 ==== 
 * signature: undefined4 __stdcall f34(int param_1)
 * body: 10010258-100102fd
 */

undefined4 f34(int param_1)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  byte local_104 [256];
  
                    /* 0x10258  38  f34 */
  if (DAT_10023e9c != '\x01') {
    pcVar1 = FUN_10010950((char *)local_104,*(char **)(param_1 + 0x20));
    iVar2 = FUN_10016230(local_104);
    pbVar3 = (byte *)FUN_10010950((char *)local_104,pcVar1);
    FUN_10009eff(local_104,local_104);
    FUN_10009f15(DAT_10024170,pbVar3,0x7800);
    iVar2 = FUN_10013e86(local_104,DAT_10024170,-1 - iVar2,0,0,0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ==== FUN_100102fe @ 100102fe ==== 
 * signature: undefined __cdecl FUN_100102fe(LPSTR param_1, LPCSTR param_2)
 * body: 100102fe-10010335
 */

void __cdecl FUN_100102fe(LPSTR param_1,LPCSTR param_2)

{
  char cVar1;
  
  *param_1 = '\0';
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    while (cVar1 == ' ') {
      param_2 = param_2 + 1;
      cVar1 = *param_2;
    }
    lstrcpyA(param_1,param_2);
    if (*param_1 != '\0') {
      FUN_1001488c(param_1,(uint *)&DAT_1001f288);
    }
  }
  return;
}



/* ==== FUN_10010336 @ 10010336 ==== 
 * signature: undefined __cdecl FUN_10010336(LPCSTR param_1, uint param_2, int param_3)
 * body: 10010336-1001054c
 */

void __cdecl FUN_10010336(LPCSTR param_1,uint param_2,int param_3)

{
  int iVar1;
  LPSTR lpString1;
  uint dwFileAttributes;
  LPCSTR pCVar2;
  char *lpString2;
  char local_44c [256];
  byte local_34c;
  CHAR aCStack_207 [259];
  CHAR local_104 [256];
  
  iVar1 = FUN_100120c5(param_1,7,local_44c);
  while (iVar1 == 0) {
    lstrcpyA(local_104,param_1);
    lpString1 = FUN_10014834(local_104,0x5c);
    if (*lpString1 == '\\') {
      lpString1 = lpString1 + 1;
    }
    lstrcpyA(lpString1,local_44c);
    if (param_3 == 0) {
      if (local_44c[0] != '.') {
        dwFileAttributes = 0x20;
        if ((param_2 & 1) != 0) {
          dwFileAttributes = 0x21;
        }
        if ((param_2 & 2) != 0) {
          dwFileAttributes = dwFileAttributes | 2;
        }
        if ((param_2 & 4) != 0) {
          dwFileAttributes = dwFileAttributes | 4;
        }
        if ((param_2 & 0x10) != 0) {
          dwFileAttributes = dwFileAttributes & 0xffffffdf;
        }
        SetFileAttributesA(local_104,dwFileAttributes);
      }
    }
    else if ((local_34c & 0x10) == 0) {
      SetFileAttributesA(local_104,0);
      if (DAT_100239ac != '\0') {
        FUN_1000b673(local_104,(LPCSTR)0x0,0,0,0,(undefined4 *)0x0,(int *)0x0);
      }
      DeleteFileA(local_104);
    }
    iVar1 = FUN_100121d4(local_44c);
  }
  FUN_1001221a((int)local_44c);
  if ((param_2 & 8) != 0) {
    lstrcpyA(local_104,param_1);
    pCVar2 = FUN_10014834(local_104,0x5c);
    lstrcpyA(pCVar2,&DAT_1001f568);
    iVar1 = FUN_100120c5(local_104,0x10,local_44c);
    while (iVar1 == 0) {
      if (((local_34c & 0x10) != 0) && (local_44c[0] != '.')) {
        pCVar2 = FUN_10014834(param_1,0x5c);
        lstrcpyA(aCStack_207 + 3,local_104);
        lpString2 = local_44c;
        iVar1 = lstrlenA(aCStack_207 + 3);
        lstrcpyA(aCStack_207 + iVar1,lpString2);
        lstrcatA(aCStack_207 + 3,pCVar2);
        pCVar2 = FUN_1000b94f(aCStack_207 + 3);
        FUN_10010336(aCStack_207 + 3,param_2,param_3);
        if ((param_3 != 0) && ((param_2 & 4) != 0)) {
          pCVar2[-1] = '\0';
          RemoveDirectoryA(aCStack_207 + 3);
        }
      }
      iVar1 = FUN_100121d4(local_44c);
    }
    FUN_1001221a((int)local_44c);
  }
  return;
}



/* ==== FUN_1001054d @ 1001054d ==== 
 * signature: undefined __cdecl FUN_1001054d(LPCSTR param_1, LPSTR param_2)
 * body: 1001054d-100105d1
 */

void __cdecl FUN_1001054d(LPCSTR param_1,LPSTR param_2)

{
  int iVar1;
  ushort uVar2;
  CHAR local_24;
  CHAR local_23 [31];
  
  *param_2 = '\0';
  if (*param_1 != '\0') {
    local_24 = '%';
    lstrcpyA(local_23,param_1);
    lstrcatA(&local_24,&DAT_1001f764);
    uVar2 = 0;
    if (DAT_1002402c != 0) {
      do {
        iVar1 = lstrcmpiA((LPCSTR)((uint)uVar2 * 0x11 + DAT_10023efc),&local_24);
        if (iVar1 == 0) break;
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_1002402c);
      if (uVar2 < DAT_1002402c) {
        lstrcpyA(param_2,(LPCSTR)((uint)uVar2 * 0x100 + DAT_100238f8));
      }
    }
  }
  return;
}



/* ==== FUN_100105d2 @ 100105d2 ==== 
 * signature: undefined __cdecl FUN_100105d2(LPCSTR param_1, LPCSTR param_2)
 * body: 100105d2-1001077c
 */

void __cdecl FUN_100105d2(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  CHAR local_30;
  CHAR local_2f [31];
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_30 = '%';
  lstrcpyA(local_2f,param_1);
  lstrcatA(&local_30,&DAT_1001f764);
  iVar1 = lstrlenA(param_2);
  param_1 = (LPCSTR)((iVar1 + 0x100) / 0x100);
  if ((short)param_1 == 0) {
    param_1 = (LPCSTR)0x1;
  }
  uVar3 = 0;
  local_c = 0;
  if (DAT_1002402c != 0) {
    do {
      uVar3 = local_c;
      iVar1 = lstrcmpiA((LPCSTR)((local_c & 0xffff) * 0x11 + DAT_10023efc),&local_30);
      if (iVar1 == 0) break;
      uVar3 = uVar3 + 1;
      local_c = uVar3;
    } while ((ushort)uVar3 < DAT_1002402c);
  }
  uVar2 = uVar3;
  if ((ushort)uVar3 < DAT_1002402c) {
    do {
      uVar2 = uVar2 + 1;
      if (DAT_1002402c <= (ushort)uVar2) break;
    } while (*(char *)((uVar2 & 0xffff) * 0x11 + DAT_10023efc) == '\0');
    local_10 = uVar2 & 0xffff;
    uVar4 = ((uint)param_1 & 0xffff) + (uVar3 & 0xffff);
    local_8 = uVar2;
    if (local_10 != uVar4) {
      if ((ushort)uVar2 < DAT_1002402c) {
        FUN_10016690((undefined4 *)(uVar4 * 0x100 + DAT_100238f8),
                     (undefined4 *)(local_10 * 0x100 + DAT_100238f8),
                     (local_10 * 0xffffff + (uint)DAT_1002402c) * 0x100);
        FUN_10016690((undefined4 *)(uVar4 * 0x11 + DAT_10023efc),
                     (undefined4 *)(local_10 * 0x11 + DAT_10023efc),
                     (uint)DAT_1002402c * 0x11 + local_10 * -0x11);
      }
      DAT_1002402c = DAT_1002402c + ((ushort)param_1 - (short)local_8) + (short)local_c;
    }
  }
  else {
    uVar4 = ((uint)param_1 & 0xffff) + (uVar3 & 0xffff);
    if (0xf9 < uVar4) {
      return;
    }
    lstrcpyA((LPSTR)((uVar3 & 0xffff) * 0x11 + DAT_10023efc),&local_30);
    DAT_1002402c = DAT_1002402c + (ushort)param_1;
  }
  if (1 < (ushort)param_1) {
    iVar5 = uVar4 * 0x11;
    iVar1 = ((uint)param_1 & 0xffff) - 1;
    do {
      iVar5 = iVar5 + -0x11;
      *(undefined1 *)(DAT_10023efc + iVar5) = 0;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  lstrcpyA((LPSTR)((uVar3 & 0xffff) * 0x100 + DAT_100238f8),param_2);
  return;
}



/* ==== FUN_1001077d @ 1001077d ==== 
 * signature: bool __cdecl FUN_1001077d(LPCSTR param_1, int * param_2, char * param_3, int * param_4, LPSTR param_5)
 * body: 1001077d-100108e8
 */

bool __cdecl FUN_1001077d(LPCSTR param_1,int *param_2,char *param_3,int *param_4,LPSTR param_5)

{
  char *_Source;
  uint uVar1;
  int iVar2;
  HANDLE hObject;
  
  *param_3 = '\0';
  _Source = (char *)FUN_10015990((byte *)s_COMSPEC_1001f280);
  if (_Source != (char *)0x0) {
    if (DAT_100200d4 < 2) {
      uVar1 = *(ushort *)(PTR_DAT_1001fec8 + *_Source * 2) & 0x103;
    }
    else {
      uVar1 = FUN_10015ac0((int)*_Source,0x103);
    }
    if (((uVar1 != 0) && (_Source[1] == ':')) && (_Source[2] == '\\')) {
      _strncpy(param_3,_Source,3);
      param_3[3] = '\0';
    }
  }
  if (*param_3 == '\0') {
    lstrcpyA(param_3,&DAT_1001fccc);
  }
  uVar1 = FUN_10015b60((int)*param_3);
  *param_3 = (char)uVar1;
  lstrcatA(param_3,param_1);
  iVar2 = FUN_1001223a(param_3,0,0);
  *param_2 = iVar2;
  if (iVar2 < 0) {
    *param_3 = 'C';
    iVar2 = FUN_1001223a(param_3,0,0);
    *param_2 = iVar2;
    if (iVar2 < 0) {
      lstrcpyA(param_3 + 3,s__GLBS382_TMP_1001fb50);
      hObject = (HANDLE)FUN_1001223a(param_3,1,1);
      *param_4 = (int)hObject;
      if ((int)hObject < 0) {
        *param_3 = 'A';
        lstrcpyA(param_3 + 3,param_1);
        iVar2 = FUN_1001223a(param_3,0,0);
        *param_2 = iVar2;
        if (-1 < iVar2) goto LAB_100108b0;
        lstrcpyA(param_3 + 3,s__GLBS382_TMP_1001fb50);
        hObject = (HANDLE)FUN_1001223a(param_3,1,1);
        *param_4 = (int)hObject;
        if ((int)hObject < 0) {
          return true;
        }
      }
      CloseHandle(hObject);
    }
  }
LAB_100108b0:
  lstrcpyA(param_5,param_3);
  lstrcpyA(param_5 + 3,s__GLBS382_TMP_1001fb50);
  lstrcpyA(param_3 + 3,param_1);
  iVar2 = FUN_1001223a(param_5,1,1);
  *param_4 = iVar2;
  return iVar2 < 0;
}



/* ==== FUN_100108e9 @ 100108e9 ==== 
 * signature: undefined4 __cdecl FUN_100108e9(byte * param_1, LPCSTR param_2)
 * body: 100108e9-1001094f
 */

undefined4 __cdecl FUN_100108e9(byte *param_1,LPCSTR param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar2 = lstrlenA(param_2);
  iVar4 = 0;
  bVar1 = *param_1;
  pbVar5 = param_1;
  while( true ) {
    if (bVar1 == 0) {
      return 1;
    }
    iVar3 = FUN_1001b090(pbVar5,param_2,iVar2);
    if (((iVar3 == 0) &&
        (((bVar1 = pbVar5[-1], bVar1 == 0x20 || (bVar1 == 0x3b)) || (bVar1 == 0x3d)))) &&
       (((bVar1 = param_1[iVar2 + iVar4], bVar1 == 0x20 || (bVar1 == 0x3b)) || (bVar1 == 0))))
    break;
    iVar4 = iVar4 + 1;
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  return 0;
}



/* ==== FUN_10010950 @ 10010950 ==== 
 * signature: char * __cdecl FUN_10010950(char * param_1, char * param_2)
 * body: 10010950-10010977
 */

char * __cdecl FUN_10010950(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_2;
  while ((cVar2 != '\0' && (cVar2 != '\x7f'))) {
    *param_1 = cVar2;
    pcVar1 = param_2 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  *param_1 = '\0';
  if (*param_2 == '\x7f') {
    param_2 = param_2 + 1;
  }
  return param_2;
}



/* ==== SearchDlg @ 10010978 ==== 
 * signature: undefined4 __stdcall SearchDlg(HWND param_1, int param_2)
 * body: 10010978-10010bde
 */

undefined4 SearchDlg(HWND param_1,int param_2)

{
  int iVar1;
  HDC pHVar2;
  HGDIOBJ h;
  HICON hIcon;
  undefined4 uVar3;
  int iVar4;
  tagSIZE *lpsz;
  tagPAINTSTRUCT local_9c;
  CHAR local_5c [32];
  tagSIZE local_3c;
  tagRECT local_34;
  tagRECT local_24;
  HGDIOBJ local_14;
  tagPOINT local_10;
  HWND local_8;
  
                    /* 0x10978  12  SearchDlg */
  if (param_2 == 0xf) {
    pHVar2 = BeginPaint(param_1,&local_9c);
    hIcon = LoadIconA(DAT_1002403c,&DAT_0000006c);
    if (hIcon != (HICON)0x0) {
      GetClientRect(param_1,&local_24);
      iVar4 = ((local_24.bottom - local_24.top) + -0x20) / 2;
      DrawIcon(pHVar2,iVar4,iVar4,hIcon);
      DestroyIcon(hIcon);
    }
    EndPaint(param_1,&local_9c);
LAB_10010bd6:
    uVar3 = 0;
  }
  else {
    if (param_2 == 0x110) {
      FUN_10012e0d(param_1,(int *)0x0);
      local_8 = GetDlgItem(param_1,0x3ed);
      pHVar2 = GetDC(param_1);
      h = (HGDIOBJ)SendMessageA(local_8,0x31,0,0);
      if (h != (HGDIOBJ)0x0) {
        local_14 = SelectObject(pHVar2,h);
        lpsz = &local_3c;
        iVar4 = lstrlenA(&DAT_10023bc0);
        GetTextExtentPointA(pHVar2,&DAT_10023bc0,iVar4,lpsz);
        GetClientRect(param_1,&local_24);
        GetWindowRect(local_8,&local_34);
        local_10.x = local_34.left;
        local_10.y = local_34.top;
        ScreenToClient(param_1,&local_10);
        local_24.right = (local_10.x - local_24.top) + local_3c.cx + -0x20 + local_24.bottom;
        SetWindowPos(param_1,(HWND)0x0,0,0,local_24.right,local_24.bottom,6);
        SetWindowPos(local_8,(HWND)0x0,0,0,local_24.right,local_34.bottom - local_34.top,6);
        SelectObject(pHVar2,local_14);
      }
      ReleaseDC(param_1,pHVar2);
      FUN_10010d18(param_1,'\0',0);
      SetDlgItemTextA(param_1,0x3ed,&DAT_10023bc0);
      SetTimer(param_1,0xef1,0xfa,(TIMERPROC)0x0);
    }
    else if (param_2 != 0x111) {
      if (param_2 == 0x113) {
        KillTimer(param_1,0xef1);
        DAT_10023cc0 = '\0';
        if (DAT_10023e34 == '\x02') {
          FUN_10006a8b();
        }
        else if (DAT_10023e34 == '\x01') {
          FUN_10011094(&DAT_100239c0,&DAT_10023cc0);
        }
        else {
          iVar4 = 0x41;
          do {
            if (DAT_10023cc0 != '\0') break;
            iVar1 = FUN_10011fc8(iVar4 + -0x41);
            if ((iVar1 == 3) && ((DAT_10023918 & 2) == 0)) {
LAB_10010a1f:
              wsprintfA(local_5c,s__c______1001f4b4,iVar4);
              FUN_10010bdf(local_5c,&DAT_100239c0,1,'\0');
            }
            else {
              iVar1 = FUN_10011fc8(iVar4 + -0x41);
              if ((iVar1 == 4) && ((DAT_10023918 & 6) != 0)) goto LAB_10010a1f;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x5b);
        }
        EndDialog(param_1,1);
      }
      goto LAB_10010bd6;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* ==== FUN_10010bdf @ 10010bdf ==== 
 * signature: undefined __cdecl FUN_10010bdf(LPCSTR param_1, LPCSTR param_2, int param_3, char param_4)
 * body: 10010bdf-10010cf8
 */

void __cdecl FUN_10010bdf(LPCSTR param_1,LPCSTR param_2,int param_3,char param_4)

{
  int iVar1;
  char *pcVar2;
  char local_350 [256];
  byte local_250;
  CHAR aCStack_10b [263];
  
  iVar1 = FUN_100120c5(param_1,0x17,local_350);
  while ((iVar1 == 0 && (DAT_10023cc0 == '\0'))) {
    if ((local_250 & 0x10) == 0) {
      iVar1 = lstrcmpiA(local_350,param_2);
      if (iVar1 == 0) {
        lstrcpyA(&DAT_10023cc0,param_1);
        pcVar2 = local_350;
        iVar1 = lstrlenA(&DAT_10023cc0);
        lstrcpyA((LPSTR)(iVar1 + 0x10023cbd),pcVar2);
        return;
      }
    }
    else if (((local_350[0] != '.') && (param_3 != 0)) &&
            ((DAT_10024194 == 0 || ((byte)(param_4 + 1U) < DAT_10024194)))) {
      lstrcpyA(aCStack_10b + 3,param_1);
      pcVar2 = local_350;
      iVar1 = lstrlenA(aCStack_10b + 3);
      lstrcpyA(aCStack_10b + iVar1,pcVar2);
      lstrcatA(aCStack_10b + 3,&DAT_1001f568);
      FUN_10010bdf(aCStack_10b + 3,param_2,param_3,param_4 + 1U);
    }
    iVar1 = FUN_100121d4(local_350);
  }
  FUN_1001221a((int)local_350);
  return;
}



/* ==== FUN_10010cf9 @ 10010cf9 ==== 
 * signature: undefined __cdecl FUN_10010cf9(LPCSTR param_1)
 * body: 10010cf9-10010d17
 */

void __cdecl FUN_10010cf9(LPCSTR param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  
  iVar1 = lstrlenA(param_1);
  if (iVar1 != 0) {
    pCVar2 = FUN_10014834(param_1,0x5c);
    *pCVar2 = '\0';
  }
  return;
}



/* ==== FUN_10010d18 @ 10010d18 ==== 
 * signature: undefined __cdecl FUN_10010d18(HWND param_1, char param_2, ushort param_3)
 * body: 10010d18-10010ec7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10010d18(HWND param_1,char param_2,ushort param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int X;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  GetWindowRect(param_1,&local_1c);
  local_c = local_1c.right - local_1c.left;
  local_8 = local_1c.bottom - local_1c.top;
  if (((param_2 == '\0') || (DAT_10024038 == 0)) && (param_2 != '\x02')) {
    X = (DAT_10023f3c - local_c) / 2;
    iVar2 = (DAT_10023f44 - local_8) / 2;
  }
  else {
    X = (int)(((_DAT_10024180 & 0xf) % 3 + 1) * DAT_10023f3c) / 4 - local_c / 2;
    iVar2 = (int)(((_DAT_10024180 & 0xf) / 3 + 1) * DAT_10023f44) / 4 - local_8 / 2;
    if (DAT_10023f3c < X + local_c) {
      X = DAT_10023f3c - local_c;
    }
    if (DAT_10023f44 < iVar2 + local_8) {
      iVar2 = DAT_10023f44 - local_8;
    }
    if (X < 0) {
      X = 0;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  uVar3 = param_3 & 0xf;
  if (uVar3 == 1) {
LAB_10010e4a:
    X = 0;
  }
  else if ((param_3 & 0xf) != 0) {
    if (uVar3 < 5) {
      X = (int)(((param_3 - 2 & 0xf) % 3 + 1) * DAT_10023f3c) / 4 - local_c / 2;
      if (DAT_10023f3c < X + local_c) {
        X = DAT_10023f3c - local_c;
      }
      if (X < 0) goto LAB_10010e4a;
    }
    else if (uVar3 == 5) {
      X = DAT_10023f3c - local_c;
    }
  }
  uVar1 = param_3 >> 4;
  uVar3 = (uint)uVar1;
  if (uVar3 != 1) {
    if (uVar1 < 2) goto LAB_10010eb0;
    if (4 < uVar1) {
      if (uVar3 == 5) {
        iVar2 = GetSystemMetrics(4);
        iVar2 = iVar2 + (DAT_10023f44 - local_8);
      }
      goto LAB_10010eb0;
    }
    iVar2 = (((int)((uVar3 & 0xf) - 2) % 3 + 1) * DAT_10023f44) / 4 - local_8 / 2;
    if (DAT_10023f44 < iVar2 + local_8) {
      iVar2 = DAT_10023f44 - local_8;
    }
    if (-1 < iVar2) goto LAB_10010eb0;
  }
  iVar2 = 0;
LAB_10010eb0:
  MoveWindow(param_1,X,iVar2,local_c,local_8,0);
  return;
}



/* ==== FUN_10010ec8 @ 10010ec8 ==== 
 * signature: undefined __cdecl FUN_10010ec8(LPCSTR param_1, LPCSTR param_2, short param_3)
 * body: 10010ec8-10010ffd
 */

void __cdecl FUN_10010ec8(LPCSTR param_1,LPCSTR param_2,short param_3)

{
  LPCSTR pCVar1;
  LPCSTR pCVar2;
  int iVar3;
  DWORD DVar4;
  CHAR *pCVar5;
  CHAR local_304 [512];
  CHAR local_104 [256];
  
  if (param_3 == 0) {
    lstrcpyA(local_104,param_1);
    pCVar1 = FUN_10014834(local_104,0x5c);
    pCVar2 = FUN_10014834(local_104,0x2e);
    if (pCVar1 < pCVar2) {
      pCVar1 = pCVar2;
    }
    if (*pCVar1 == '.') {
      pCVar5 = pCVar1 + 1;
    }
    else {
      lstrcatA(local_104,(LPCSTR)&DAT_1001fcfc);
      iVar3 = lstrlenA(local_104);
      pCVar5 = local_104 + iVar3;
    }
    _param_3 = 0;
    do {
      _param_3 = _param_3 + 1;
      wsprintfA(pCVar5,&DAT_1001fcf4,_param_3);
      iVar3 = FUN_10012539(local_104);
      if (iVar3 != 0) break;
    } while (_param_3 < 999);
    DeleteFileA(local_104);
    MoveFileA(param_1,local_104);
    MoveFileA(param_2,param_1);
    if (DAT_1001f030 != (HANDLE)0xffffffff) {
      wsprintfA(local_304,s_File_Edit___s_Backup_Copy___s_1001fcd0,param_1,local_104);
      DVar4 = lstrlenA(local_304);
      FileWrite(DAT_1001f030,local_304,DVar4);
    }
  }
  else {
    DeleteFileA(param_1);
    MoveFileA(param_2,param_1);
  }
  return;
}



/* ==== FUN_10010ffe @ 10010ffe ==== 
 * signature: undefined __cdecl FUN_10010ffe(HANDLE param_1, HANDLE param_2, LPCSTR param_3)
 * body: 10010ffe-10011023
 */

void __cdecl FUN_10010ffe(HANDLE param_1,HANDLE param_2,LPCSTR param_3)

{
  if (-1 < (int)param_1) {
    CloseHandle(param_1);
  }
  CloseHandle(param_2);
  DeleteFileA(param_3);
  return;
}



/* ==== FUN_10011024 @ 10011024 ==== 
 * signature: undefined4 __cdecl FUN_10011024(LPCSTR param_1, int param_2)
 * body: 10011024-10011093
 */

undefined4 __cdecl FUN_10011024(LPCSTR param_1,int param_2)

{
  LPCSTR pCVar1;
  CHAR local_304 [512];
  CHAR local_104 [256];
  
  lstrcpyA(local_104,param_1);
  if (param_2 == 0) {
    FUN_10012386(local_104,1);
    pCVar1 = (LPCSTR)DAT_100240b8[0x1a];
  }
  else {
    pCVar1 = (LPCSTR)*DAT_100240b8;
  }
  wsprintfA(local_304,pCVar1,local_104);
  FUN_1000b352(local_304);
  return 1;
}



/* ==== FUN_10011094 @ 10011094 ==== 
 * signature: undefined __cdecl FUN_10011094(LPCSTR param_1, LPSTR param_2)
 * body: 10011094-1001117b
 */

void __cdecl FUN_10011094(LPCSTR param_1,LPSTR param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  CHAR local_24c [584];
  
  *param_2 = '\0';
  if (DAT_10023ac0 == '\0') {
    pcVar5 = (char *)FUN_10015990(&DAT_1001fd00);
    if (pcVar5 == (char *)0x0) {
      return;
    }
  }
  else {
    pcVar5 = &DAT_10023ac0;
  }
  cVar1 = *pcVar5;
  do {
    if (cVar1 == '\0') {
      *param_2 = '\0';
      return;
    }
    while( true ) {
      if (DAT_100200d4 < 2) {
        uVar2 = (byte)PTR_DAT_1001fec8[*pcVar5 * 2] & 8;
      }
      else {
        uVar2 = FUN_10015ac0((int)*pcVar5,8);
      }
      if ((uVar2 == 0) && (pcVar4 = param_2, *pcVar5 != ';')) break;
      pcVar5 = pcVar5 + 1;
    }
    for (; (cVar1 = *pcVar5, cVar1 != '\0' && (cVar1 != ';')); pcVar5 = pcVar5 + 1) {
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    }
    if ((pcVar4 != param_2) && (pcVar4[-1] == '\\')) {
      pcVar4 = pcVar4 + -1;
    }
    *pcVar4 = '\0';
    if (pcVar4 != param_2) {
      lstrcatA(param_2,&DAT_1001f314);
      lstrcatA(param_2,param_1);
      iVar3 = FUN_100120c5(param_2,7,local_24c);
      FUN_1001221a((int)local_24c);
      if (iVar3 == 0) {
        return;
      }
    }
    cVar1 = *pcVar5;
  } while( true );
}



/* ==== FUN_1001117c @ 1001117c ==== 
 * signature: undefined __cdecl FUN_1001117c(HWND param_1, HWND param_2)
 * body: 1001117c-100113c2
 */

void __cdecl FUN_1001117c(HWND param_1,HWND param_2)

{
  int iVar1;
  uint uVar2;
  CHAR local_3e8 [8];
  char local_3e0;
  CHAR local_3df [575];
  CHAR local_1a0 [128];
  CHAR local_120 [128];
  CHAR local_a0 [2];
  char local_9e;
  uint local_20;
  uint local_1c;
  DWORD local_18;
  WPARAM local_14;
  WPARAM local_10;
  uint local_c;
  char local_5;
  
  if (param_1 != (HWND)0x0) {
    SendMessageA(param_1,0x14b,0,0);
    SendMessageA(param_2,0x184,0,0);
    SendMessageA(param_2,0x18d,0xc000,0x1001fd14);
    iVar1 = FUN_100164b0();
    local_1c = iVar1 - 1;
    local_20 = SendMessageA(param_2,0x18b,0,0);
    local_10 = 0;
    if (local_20 != 0) {
      do {
        SendMessageA(param_2,0x189,local_10,(LPARAM)local_a0);
        CharLowerA(local_a0);
        uVar2 = (int)local_9e - 0x61;
        local_c = FUN_10011fc8(uVar2);
        if (1 < local_c) {
          wsprintfA(local_120,&DAT_1001fd08,(int)local_9e,&DAT_1001fd10);
          if ((local_c == 3) || (local_c == 6)) {
            wsprintfA(local_a0,s__c______1001f4b4,(int)local_9e);
            iVar1 = FUN_100120c5(local_a0,8,local_3e8);
            if (iVar1 == 0) {
              CharLowerA(local_3e8);
              local_5 = local_3e0;
              local_3e0 = '\0';
              lstrcatA(local_120,local_3e8);
              if ((local_5 == '.') && (iVar1 = lstrlenA(local_3e8), iVar1 == 8)) {
                lstrcatA(local_120,local_3df);
              }
              FUN_1001221a((int)local_3e8);
            }
          }
          if (local_c == 4) {
            local_1a0[0] = '\0';
            local_18 = 0x80;
            wsprintfA(local_a0,&DAT_1001f4cc,(int)local_9e);
            CharUpperA(local_a0);
            WNetGetConnectionA(local_a0,local_1a0,&local_18);
            CharLowerA(local_1a0);
            lstrcatA(local_120,local_1a0);
          }
          local_14 = SendMessageA(param_1,0x143,0,(LPARAM)local_120);
          SendMessageA(param_1,0x151,local_14,local_c << 0x10 | uVar2 & 0xffff);
          if (uVar2 == local_1c) {
            SendMessageA(param_1,0x14e,local_14,0);
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < local_20);
    }
  }
  return;
}



/* ==== FUN_100113c3 @ 100113c3 ==== 
 * signature: undefined __cdecl FUN_100113c3(HWND param_1, uint param_2, LPCSTR param_3, byte * param_4)
 * body: 100113c3-100118c5
 */

void __cdecl FUN_100113c3(HWND param_1,uint param_2,LPCSTR param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  WPARAM wParam;
  CHAR CVar3;
  int iVar4;
  LPCSTR pCVar5;
  HWND pHVar6;
  uint uVar7;
  WPARAM wParam_00;
  uint uVar8;
  char *pcVar9;
  byte *lpString1;
  bool bVar10;
  CHAR *lpString;
  char local_560 [256];
  byte local_460;
  char local_318 [255];
  char acStack_219 [257];
  CHAR local_118 [256];
  int local_18;
  HWND local_14;
  WPARAM local_10;
  HWND local_c;
  uint local_8;
  
  local_18 = 1;
  GetCurrentDirectoryA(0x100,acStack_219 + 1);
  FUN_10012386(acStack_219 + 1,1);
  local_c = GetDlgItem(param_1,param_2 & 0xffff);
  local_14 = GetDlgItem(param_1,(param_2 & 0xffff) + 2);
  if (local_c == (HWND)0x0) {
    return;
  }
  if (&stack0x00000000 == (undefined1 *)0x218) {
    return;
  }
  lstrcpyA(local_118,acStack_219 + 1);
  local_8 = (DAT_10024020 - DAT_10023eec) + 1;
  uVar8 = local_8;
  if (local_8 == 0) {
    local_8 = 0;
  }
  else {
    do {
      for (; *param_3 != '\0'; param_3 = param_3 + 1) {
      }
      param_3 = param_3 + 1;
      local_8 = local_8 - 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (((((uint)param_4 & 8) != 0) && (iVar4 = lstrlenA(local_118), 3 < iVar4)) || (*param_3 == '\0')
     ) goto LAB_1001153a;
  iVar4 = lstrlenA(local_118);
  if (iVar4 < 4) {
    if (DAT_100200d4 < 2) {
      uVar8 = *(ushort *)(PTR_DAT_1001fec8 + *param_3 * 2) & 0x103;
    }
    else {
      uVar8 = FUN_10015ac0((int)*param_3,0x103);
    }
    if ((uVar8 == 0) || (pcVar9 = param_3 + 2, param_3[1] != ':')) {
      pcVar9 = param_3;
    }
    bVar10 = *pcVar9 == '\\';
LAB_10011506:
    if (bVar10) goto LAB_10011508;
  }
  else {
    pcVar9 = FUN_10014834(param_3,0x5c);
    pCVar5 = FUN_10014834(param_3,0x3a);
    if (pcVar9 < pCVar5) {
      pcVar9 = pCVar5;
    }
    if (*pcVar9 != '\\') {
      bVar10 = *pcVar9 == ':';
      goto LAB_10011506;
    }
LAB_10011508:
    pcVar9 = pcVar9 + 1;
  }
  CVar3 = FUN_10014819(local_118);
  if (CVar3 != '\\') {
    lstrcatA(local_118,&DAT_1001f314);
  }
  lstrcatA(local_118,pcVar9);
LAB_1001153a:
  lpString = local_118;
  pHVar6 = GetDlgItem(param_1,(param_2 & 0xffff) - 1);
  SetWindowTextA(pHVar6,lpString);
  iVar4 = lstrlenA(acStack_219 + 1);
  if (acStack_219[iVar4] == '\\') {
    acStack_219[iVar4] = '\0';
  }
  SendMessageA(local_c,0xb,0,0);
  SendMessageA(local_c,0x184,0,0);
  SendMessageA(local_14,0x184,0,0);
  lpString1 = (byte *)(acStack_219 + 1);
  SetWindowTextA(local_c,acStack_219 + 1);
  wsprintfA(local_118,s__s_____1001fd18,acStack_219 + 1);
  do {
    param_4 = (byte *)FUN_100147fa((LPCSTR)lpString1,0x5c);
    if (param_4 == (byte *)0x0) {
      if ((lpString1 == (byte *)(acStack_219 + 1)) && (local_18 != 0)) {
        lstrcatA((LPSTR)lpString1,&DAT_1001f314);
      }
    }
    else {
      if (local_18 != 0) {
        param_4 = param_4 + 1;
      }
      bVar1 = *param_4;
      *param_4 = 0;
      param_2 = (uint)bVar1 << 0x18;
    }
    lstrcpyA(local_318,(LPCSTR)lpString1);
    pcVar9 = local_318;
    cVar2 = local_318[0];
    while (cVar2 != '\0') {
      if (DAT_100200d4 < 2) {
        uVar8 = (byte)PTR_DAT_1001fec8[*pcVar9 * 2] & 1;
      }
      else {
        uVar8 = FUN_10015ac0((int)*pcVar9,1);
      }
      if (uVar8 == 0) {
        if (DAT_100200d4 < 2) {
          uVar8 = *(ushort *)(PTR_DAT_1001fec8 + *pcVar9 * 2) & 0x103;
        }
        else {
          uVar8 = FUN_10015ac0((int)*pcVar9,0x103);
        }
        if (uVar8 != 0) break;
      }
      pcVar9 = pcVar9 + 1;
      cVar2 = *pcVar9;
    }
    if (*pcVar9 == '\0') {
      CharLowerA(local_318);
    }
    pHVar6 = local_c;
    local_10 = SendMessageA(local_c,0x180,0,(LPARAM)local_318);
    local_8 = 0xc - (param_4 != (byte *)0x0);
    SendMessageA(pHVar6,0x19a,local_10,local_8 * 0x10000 | local_10 & 0xffff);
    wParam = local_10;
    if (param_4 == (byte *)0x0) {
      uVar8 = local_10 + 1;
      SendMessageA(local_14,0x184,0,0);
      local_8 = FUN_100120c5(local_118,0x10,local_560);
      do {
        if (local_8 != 0) {
          FUN_1001221a((int)local_560);
          uVar7 = SendMessageA(local_14,0x18b,0,0);
          local_8 = 0;
          if (uVar7 != 0) {
            do {
              SendMessageA(local_14,0x189,local_8,(LPARAM)local_118);
              local_10 = SendMessageA(pHVar6,0x180,0,(LPARAM)local_118);
              SendMessageA(pHVar6,0x19a,local_10,uVar8 & 0xffff | 0xa0000);
              local_8 = local_8 + 1;
            } while (local_8 < uVar7);
          }
          SendMessageA(pHVar6,0xb,1,0);
          InvalidateRect(pHVar6,(RECT *)0x0,1);
          GetScrollRange(pHVar6,1,(LPINT)&local_8,(LPINT)&local_10);
          if ((local_8 != 0) || (local_10 != 0)) {
            wParam_00 = wParam - 1;
            if ((int)wParam_00 < 1) {
              wParam_00 = 0;
            }
            SendMessageA(pHVar6,0x197,wParam_00,0);
          }
          SendMessageA(pHVar6,0x186,wParam,0);
          return;
        }
        local_8 = 0;
        if ((local_560[0] != '.') && ((local_460 & 0x10) != 0)) {
          pcVar9 = local_560;
          cVar2 = local_560[0];
          while (cVar2 != '\0') {
            if (DAT_100200d4 < 2) {
              uVar7 = (byte)PTR_DAT_1001fec8[*pcVar9 * 2] & 1;
            }
            else {
              uVar7 = FUN_10015ac0((int)*pcVar9,1);
            }
            if (uVar7 == 0) {
              if (DAT_100200d4 < 2) {
                uVar7 = *(ushort *)(PTR_DAT_1001fec8 + *pcVar9 * 2) & 0x103;
              }
              else {
                uVar7 = FUN_10015ac0((int)*pcVar9,0x103);
              }
              if (uVar7 != 0) break;
            }
            pcVar9 = pcVar9 + 1;
            cVar2 = *pcVar9;
          }
          if (*pcVar9 == '\0') {
            CharLowerA(local_560);
          }
          SendMessageA(local_14,0x180,0,(LPARAM)local_560);
          pHVar6 = local_c;
        }
        local_8 = FUN_100121d4(local_560);
      } while( true );
    }
    *param_4 = param_2._3_1_;
    bVar10 = local_18 == 0;
    local_18 = 0;
    lpString1 = param_4 + bVar10;
  } while( true );
}



/* ==== FUN_100118c6 @ 100118c6 ==== 
 * signature: undefined __cdecl FUN_100118c6(int param_1)
 * body: 100118c6-10011c38
 */

void __cdecl FUN_100118c6(int param_1)

{
  DWORD DVar1;
  int iVar2;
  UINT UVar3;
  int iVar4;
  INT *pIVar5;
  CHAR local_274 [512];
  tagTEXTMETRICA local_74;
  COLORREF local_3c;
  COLORREF local_38;
  HGDIOBJ local_34;
  HBRUSH local_30;
  HPEN local_2c;
  LPCSTR local_28;
  LPCSTR local_24;
  HPEN local_20;
  HPEN local_1c;
  tagRECT local_18;
  LPCSTR local_8;
  
  if (-1 < (int)*(WPARAM *)(param_1 + 8)) {
    local_24 = (LPCSTR)SendMessageA(*(HWND *)(param_1 + 0x14),0x199,*(WPARAM *)(param_1 + 8),0);
    SendMessageA(*(HWND *)(param_1 + 0x14),0x189,*(WPARAM *)(param_1 + 8),(LPARAM)local_274);
    if ((*(byte *)(param_1 + 0xc) & 3) != 0) {
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        DVar1 = GetSysColor(0xe);
        local_38 = SetTextColor(*(HDC *)(param_1 + 0x18),DVar1);
        DVar1 = GetSysColor(0xd);
        local_3c = SetBkColor(*(HDC *)(param_1 + 0x18),DVar1);
      }
      iVar4 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20);
      GetTextMetricsA(*(HDC *)(param_1 + 0x18),&local_74);
      iVar2 = ((*(int *)(param_1 + 0x28) - local_74.tmHeight) - *(int *)(param_1 + 0x20)) / 2;
      local_8 = FUN_100147fa(local_274,0x7f);
      if (local_8 != (LPCSTR)0x0) {
        *local_8 = '\0';
      }
      pIVar5 = (INT *)0x0;
      UVar3 = lstrlenA(local_274);
      ExtTextOutA(*(HDC *)(param_1 + 0x18),iVar4 + ((RECT *)(param_1 + 0x1c))->left,
                  iVar2 + *(int *)(param_1 + 0x20),6,(RECT *)(param_1 + 0x1c),local_274,UVar3,pIVar5
                 );
      if (local_8 != (LPCSTR)0x0) {
        local_20 = (HPEN)SetTextAlign(*(HDC *)(param_1 + 0x18),2);
        local_1c = (HPEN)(local_8 + 1);
        pIVar5 = (INT *)0x0;
        UVar3 = lstrlenA((LPCSTR)local_1c);
        ExtTextOutA(*(HDC *)(param_1 + 0x18),*(int *)(param_1 + 0x24) + -4,
                    iVar2 + *(int *)(param_1 + 0x20),4,(RECT *)(param_1 + 0x1c),(LPCSTR)local_1c,
                    UVar3,pIVar5);
        SetTextAlign(*(HDC *)(param_1 + 0x18),(UINT)local_20);
      }
      DVar1 = GetSysColor(5);
      local_30 = CreateSolidBrush(DVar1);
      local_2c = CreatePen(0,1,0x808080);
      local_20 = CreatePen(0,1,0xc0c0c0);
      local_1c = CreatePen(0,1,0);
      local_34 = SelectObject(*(HDC *)(param_1 + 0x18),local_2c);
      iVar2 = *(int *)(param_1 + 0x20) + iVar2;
      SetRect(&local_18,*(int *)(param_1 + 0x1c) + 2,iVar2 + 1,iVar4 + -3 + *(int *)(param_1 + 0x1c)
              ,iVar4 + -4 + iVar2);
      FillRect(*(HDC *)(param_1 + 0x18),&local_18,local_30);
      MoveToEx(*(HDC *)(param_1 + 0x18),local_18.left,local_18.bottom,(LPPOINT)0x0);
      LineTo(*(HDC *)(param_1 + 0x18),local_18.left,local_18.top);
      LineTo(*(HDC *)(param_1 + 0x18),local_18.right + 1,local_18.top);
      SelectObject(*(HDC *)(param_1 + 0x18),local_20);
      MoveToEx(*(HDC *)(param_1 + 0x18),local_18.right,local_18.top + 1,(LPPOINT)0x0);
      LineTo(*(HDC *)(param_1 + 0x18),local_18.right,local_18.bottom);
      LineTo(*(HDC *)(param_1 + 0x18),local_18.left,local_18.bottom);
      SelectObject(*(HDC *)(param_1 + 0x18),local_1c);
      MoveToEx(*(HDC *)(param_1 + 0x18),local_18.left + 1,local_18.bottom + -1,(LPPOINT)0x0);
      LineTo(*(HDC *)(param_1 + 0x18),local_18.left + 1,local_18.top + 1);
      LineTo(*(HDC *)(param_1 + 0x18),local_18.right,local_18.top + 1);
      if (local_24 != (LPCSTR)0x0) {
        local_8 = (LPCSTR)(local_18.left + 3);
        iVar2 = (local_18.bottom - local_18.top) / 2 + 2 + local_18.top;
        MoveToEx(*(HDC *)(param_1 + 0x18),(int)local_8,iVar2,(LPPOINT)0x0);
        local_28 = local_8 + 2;
        LineTo(*(HDC *)(param_1 + 0x18),(int)local_28,iVar2 + 2);
        local_24 = local_8 + 7;
        LineTo(*(HDC *)(param_1 + 0x18),(int)local_24,iVar2 + -3);
        MoveToEx(*(HDC *)(param_1 + 0x18),(int)local_8,iVar2 + -1,(LPPOINT)0x0);
        LineTo(*(HDC *)(param_1 + 0x18),(int)local_28,iVar2 + 1);
        LineTo(*(HDC *)(param_1 + 0x18),(int)local_24,iVar2 + -4);
        MoveToEx(*(HDC *)(param_1 + 0x18),(int)local_8,iVar2 + -2,(LPPOINT)0x0);
        LineTo(*(HDC *)(param_1 + 0x18),(int)local_28,iVar2);
        LineTo(*(HDC *)(param_1 + 0x18),(int)local_24,iVar2 + -5);
      }
      SelectObject(*(HDC *)(param_1 + 0x18),local_34);
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        SetTextColor(*(HDC *)(param_1 + 0x18),local_38);
        SetBkColor(*(HDC *)(param_1 + 0x18),local_3c);
      }
      if (((*(byte *)(param_1 + 0xc) & 4) != 0) || ((*(byte *)(param_1 + 0x10) & 0x10) != 0)) {
        DrawFocusRect(*(HDC *)(param_1 + 0x18),(RECT *)(param_1 + 0x1c));
      }
      DeleteObject(local_30);
      DeleteObject(local_2c);
      DeleteObject(local_20);
      DeleteObject(local_1c);
    }
  }
  return;
}



/* ==== FUN_10011c39 @ 10011c39 ==== 
 * signature: undefined __cdecl FUN_10011c39(uint param_1, int param_2)
 * body: 10011c39-10011d8d
 */

void __cdecl FUN_10011c39(uint param_1,int param_2)

{
  RECT *lprect;
  uint uVar1;
  DWORD DVar2;
  HANDLE h;
  UINT c;
  int iVar3;
  INT *lpDx;
  CHAR local_124 [256];
  undefined1 local_24 [4];
  int local_20;
  COLORREF local_c;
  COLORREF local_8;
  
  uVar1 = param_1;
  iVar3 = 0;
  if (-1 < (int)*(WPARAM *)(param_1 + 8)) {
    if (param_2 != 0) {
      param_1 = SendMessageA(*(HWND *)(param_1 + 0x14),0x150,*(WPARAM *)(param_1 + 8),0);
    }
    SendMessageA(*(HWND *)(uVar1 + 0x14),(-(uint)(param_2 != 0) & 0xffffffbf) + 0x189,
                 *(WPARAM *)(uVar1 + 8),(LPARAM)local_124);
    if ((*(byte *)(uVar1 + 0xc) & 3) != 0) {
      if ((*(byte *)(uVar1 + 0x10) & 1) != 0) {
        DVar2 = GetSysColor(0xe);
        local_c = SetTextColor(*(HDC *)(uVar1 + 0x18),DVar2);
        DVar2 = GetSysColor(0xd);
        local_8 = SetBkColor(*(HDC *)(uVar1 + 0x18),DVar2);
      }
      if (param_2 == 0) {
        iVar3 = (uint)*(ushort *)(uVar1 + 0x2c) * 4 + 4;
        h = (HANDLE)(&DAT_10023f98)[*(uint *)(uVar1 + 0x2c) >> 0x10];
      }
      else {
        h = (HANDLE)(&DAT_100238d8)[param_1 >> 0x10];
      }
      GetObjectA(h,0x18,local_24);
      lpDx = (INT *)0x0;
      lprect = (RECT *)(uVar1 + 0x1c);
      c = lstrlenA(local_124);
      ExtTextOutA(*(HDC *)(uVar1 + 0x18),local_20 + iVar3 + 4 + lprect->left,*(int *)(uVar1 + 0x20),
                  6,lprect,local_124,c,lpDx);
      FUN_10011d8e(*(HDC *)(uVar1 + 0x18),iVar3 + lprect->left,*(int *)(uVar1 + 0x20),h,0xff0000);
      if ((*(byte *)(uVar1 + 0x10) & 1) != 0) {
        SetTextColor(*(HDC *)(uVar1 + 0x18),local_c);
        SetBkColor(*(HDC *)(uVar1 + 0x18),local_8);
      }
    }
    if (((*(byte *)(uVar1 + 0xc) & 4) != 0) || ((*(byte *)(uVar1 + 0x10) & 0x10) != 0)) {
      DrawFocusRect(*(HDC *)(uVar1 + 0x18),(RECT *)(uVar1 + 0x1c));
    }
  }
  return;
}



/* ==== FUN_10011d8e @ 10011d8e ==== 
 * signature: undefined __cdecl FUN_10011d8e(HDC param_1, int param_2, int param_3, HANDLE param_4, COLORREF param_5)
 * body: 10011d8e-10011f08
 */

void __cdecl FUN_10011d8e(HDC param_1,int param_2,int param_3,HANDLE param_4,COLORREF param_5)

{
  HDC hdc;
  COLORREF CVar1;
  COLORREF color;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  HBITMAP local_20;
  HBITMAP local_1c;
  HBRUSH local_18;
  HGDIOBJ local_14;
  HDC local_10;
  HDC local_c;
  HDC local_8;
  
  if (param_4 != (HANDLE)0x0) {
    GetObjectA(param_4,0x18,local_38);
    local_c = CreateCompatibleDC(param_1);
    local_10 = CreateCompatibleDC(param_1);
    local_8 = CreateCompatibleDC(param_1);
    SelectObject(local_c,param_4);
    local_20 = CreateCompatibleBitmap(local_10,local_34,local_30);
    SelectObject(local_10,local_20);
    local_1c = CreateCompatibleBitmap(param_1,local_34,local_30);
    SelectObject(local_8,local_1c);
    CVar1 = SetBkColor(local_c,param_5);
    BitBlt(local_10,0,0,local_34,local_30,local_c,0,0,0xcc0020);
    SetBkColor(local_c,CVar1);
    BitBlt(local_8,0,0,local_34,local_30,local_c,0,0,0xcc0020);
    CVar1 = GetBkColor(param_1);
    local_18 = CreateSolidBrush(CVar1);
    local_14 = SelectObject(local_8,local_18);
    CVar1 = SetTextColor(local_8,0);
    color = SetBkColor(local_8,0xffffff);
    BitBlt(local_8,0,0,local_34,local_30,local_10,0,0,0xe20746);
    BitBlt(param_1,param_2,param_3,local_34,local_30,local_8,0,0,0xcc0020);
    hdc = local_8;
    SetTextColor(local_8,CVar1);
    SetBkColor(hdc,color);
    SelectObject(hdc,local_14);
    DeleteObject(local_18);
    DeleteDC(hdc);
    DeleteDC(local_c);
    DeleteDC(local_10);
    DeleteObject(local_1c);
    DeleteObject(local_20);
  }
  return;
}



/* ==== FUN_10011f09 @ 10011f09 ==== 
 * signature: undefined __cdecl FUN_10011f09(int param_1, HDC param_2, undefined4 * param_3)
 * body: 10011f09-10011fc7
 */

void __cdecl FUN_10011f09(int param_1,HDC param_2,undefined4 *param_3)

{
  HGDIOBJ ho;
  HGLOBAL hMem;
  LOGPALETTE *plpal;
  HPALETTE pHVar1;
  BYTE *pBVar2;
  BYTE *pBVar3;
  WORD WVar4;
  int iVar5;
  
  if (*(short *)(param_1 + 0xe) == 8) {
    if (*(int *)(param_1 + 0x20) == 0) {
      WVar4 = 0x100;
    }
    else {
      WVar4 = *(WORD *)(param_1 + 0x20);
    }
    if (WVar4 != 0) {
      iVar5 = (int)(short)WVar4;
      hMem = GlobalAlloc(0x42,iVar5 * 4 + 8);
      plpal = GlobalLock(hMem);
      plpal->palNumEntries = WVar4;
      plpal->palVersion = 0x300;
      if (0 < (short)WVar4) {
        pBVar2 = &plpal->palPalEntry[0].peGreen;
        pBVar3 = (BYTE *)(param_1 + 0x29);
        do {
          ((PALETTEENTRY *)(pBVar2 + -1))->peRed = pBVar3[1];
          *pBVar2 = *pBVar3;
          pBVar2[1] = pBVar3[-1];
          pBVar2[2] = '\0';
          pBVar3 = pBVar3 + 4;
          pBVar2 = pBVar2 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      ho = (HGDIOBJ)*param_3;
      pHVar1 = CreatePalette(plpal);
      *param_3 = pHVar1;
      FUN_10013e71(hMem);
      SelectPalette(param_2,(HPALETTE)*param_3,0);
      if (ho != (HGDIOBJ)0x0) {
        DeleteObject(ho);
      }
      RealizePalette(param_2);
    }
  }
  return;
}



/* ==== FUN_10011fc8 @ 10011fc8 ==== 
 * signature: undefined __cdecl FUN_10011fc8(int param_1)
 * body: 10011fc8-10011ff2
 */

void __cdecl FUN_10011fc8(int param_1)

{
  CHAR local_14 [16];
  
  wsprintfA(local_14,&DAT_1001f6c0,param_1 + 0x41);
  GetDriveTypeA(local_14);
  return;
}



/* ==== FUN_10011ff3 @ 10011ff3 ==== 
 * signature: undefined __stdcall FUN_10011ff3(void)
 * body: 10011ff3-1001206f
 */

void FUN_10011ff3(void)

{
  HMODULE hModule;
  _OSVERSIONINFOA local_98;
  
  DAT_100241e8 = 1;
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  if (3 < local_98.dwMajorVersion) {
    DAT_10023930 = 1;
  }
  if (local_98.dwPlatformId == 1) {
    DAT_10024168 = 1;
  }
  if (local_98.dwPlatformId == 2) {
    DAT_100238b8 = 1;
  }
  hModule = LoadLibraryExA(s_KERNEL32_DLL_1001fd34,(HANDLE)0x0,0);
  if (hModule != (HMODULE)0x0) {
    DAT_10023e98 = GetProcAddress(hModule,s_GetDiskFreeSpaceExA_1001fd20);
  }
  return;
}



/* ==== FUN_10012070 @ 10012070 ==== 
 * signature: undefined __cdecl FUN_10012070(LPCSTR param_1)
 * body: 10012070-100120c4
 */

void __cdecl FUN_10012070(LPCSTR param_1)

{
  CHAR local_204 [256];
  CHAR local_104 [256];
  
  lstrcpyA(local_104,param_1);
  if (DAT_100241e8 != 0) {
    FUN_10012386(local_104,0);
  }
  CharToOemA(local_104,local_204);
  FUN_10016240(local_204);
  return;
}



/* ==== FUN_100120c5 @ 100120c5 ==== 
 * signature: undefined __cdecl FUN_100120c5(LPCSTR param_1, int param_2, LPCSTR param_3)
 * body: 100120c5-100121d3
 */

void __cdecl FUN_100120c5(LPCSTR param_1,int param_2,LPCSTR param_3)

{
  char *pcVar1;
  char *pcVar2;
  BOOL BVar3;
  int iVar4;
  HANDLE pvVar5;
  char local_104;
  char local_103;
  char local_102 [254];
  
  if (DAT_100241e8 != 0) {
    if (param_2 == 8) {
      param_3[0x104] = -1;
      param_3[0x105] = -1;
      param_3[0x106] = -1;
      param_3[0x107] = -1;
      *param_3 = '\0';
      lstrcpyA(&local_104,param_1);
      pcVar2 = &local_104;
      if (local_104 != '\\') goto LAB_1001213f;
      if (local_103 != '\\') goto LAB_1001213f;
      pcVar2 = local_102;
      while ((local_102[0] != '\0' && (local_102[0] != '\\'))) {
        pcVar1 = pcVar2 + 1;
        pcVar2 = pcVar2 + 1;
        local_102[0] = *pcVar1;
      }
      if (*pcVar2 != '\\') goto LAB_1001213f;
      do {
        pcVar2 = pcVar2 + 1;
LAB_1001213f:
      } while ((*pcVar2 != '\0') && (*pcVar2 != '\\'));
      if (*pcVar2 == '\\') {
        pcVar2 = pcVar2 + 1;
      }
      *pcVar2 = '\0';
      BVar3 = GetVolumeInformationA
                        (&local_104,param_3,0x20,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPSTR)0x0,0
                        );
      if (BVar3 == 0) {
        *param_3 = '\0';
      }
      iVar4 = lstrlenA(param_3);
      if (8 < iVar4) {
        lstrcpyA(&local_104,param_3 + 8);
        param_3[8] = '.';
        lstrcpyA(param_3 + 9,&local_104);
      }
    }
    else {
      pvVar5 = FindFirstFileA(param_1,(LPWIN32_FIND_DATAA)(param_3 + 0x108));
      *(HANDLE *)(param_3 + 0x104) = pvVar5;
      if (pvVar5 != (HANDLE)0xffffffff) {
        lstrcpyA(param_3,param_3 + 0x134);
        *(DWORD *)(param_3 + 0x100) = ((LPWIN32_FIND_DATAA)(param_3 + 0x108))->dwFileAttributes;
      }
    }
  }
  return;
}



/* ==== FUN_100121d4 @ 100121d4 ==== 
 * signature: undefined __cdecl FUN_100121d4(LPSTR param_1)
 * body: 100121d4-10012219
 */

void __cdecl FUN_100121d4(LPSTR param_1)

{
  BOOL BVar1;
  
  if (DAT_100241e8 != 0) {
    BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 0x104),(LPWIN32_FIND_DATAA)(param_1 + 0x108));
    if (BVar1 != 0) {
      lstrcpyA(param_1,param_1 + 0x134);
      *(DWORD *)(param_1 + 0x100) = ((LPWIN32_FIND_DATAA)(param_1 + 0x108))->dwFileAttributes;
    }
  }
  return;
}



/* ==== FUN_1001221a @ 1001221a ==== 
 * signature: undefined __cdecl FUN_1001221a(int param_1)
 * body: 1001221a-10012239
 */

void __cdecl FUN_1001221a(int param_1)

{
  if ((DAT_100241e8 != 0) && (*(HANDLE *)(param_1 + 0x104) != (HANDLE)0xffffffff)) {
    FindClose(*(HANDLE *)(param_1 + 0x104));
  }
  return;
}



/* ==== FUN_1001223a @ 1001223a ==== 
 * signature: undefined __cdecl FUN_1001223a(LPCSTR param_1, int param_2, int param_3)
 * body: 1001223a-100122b8
 */

void __cdecl FUN_1001223a(LPCSTR param_1,int param_2,int param_3)

{
  HFILE hFile;
  DWORD dwDesiredAccess;
  
  if (DAT_100241e8 == 0) {
    if (param_3 != 0) {
      hFile = _lcreat(param_1,0);
      if (hFile != -1) {
        _lclose(hFile);
      }
    }
    _lopen(param_1,param_2);
  }
  else {
    if (param_2 == 0) {
      dwDesiredAccess = 0x80000000;
    }
    else {
      dwDesiredAccess = (-(uint)(param_2 != 1) & 0x80000000) + 0x40000000;
    }
    CreateFileA(param_1,dwDesiredAccess,(uint)(param_2 == 0),(LPSECURITY_ATTRIBUTES)0x0,
                3 - (param_3 != 0),0x80,(HANDLE)0x0);
  }
  return;
}



/* ==== FUN_100122b9 @ 100122b9 ==== 
 * signature: DWORD __cdecl FUN_100122b9(HANDLE param_1, LPVOID param_2, DWORD param_3)
 * body: 100122b9-100122dc
 */

DWORD __cdecl FUN_100122b9(HANDLE param_1,LPVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  
  BVar1 = ReadFile(param_1,param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    param_3 = 0;
  }
  return param_3;
}



/* ==== FileWrite @ 100122dd ==== 
 * signature: DWORD __stdcall FileWrite(HANDLE param_1, LPCVOID param_2, DWORD param_3)
 * body: 100122dd-10012302
 */

DWORD FileWrite(HANDLE param_1,LPCVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  
                    /* 0x122dd  6  FileWrite */
  BVar1 = WriteFile(param_1,param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    param_3 = 0;
  }
  return param_3;
}



/* ==== FUN_10012303 @ 10012303 ==== 
 * signature: undefined __cdecl FUN_10012303(HANDLE param_1, LONG param_2, DWORD param_3)
 * body: 10012303-10012317
 */

void __cdecl FUN_10012303(HANDLE param_1,LONG param_2,DWORD param_3)

{
  SetFilePointer(param_1,param_2,(PLONG)0x0,param_3);
  return;
}



/* ==== FUN_10012318 @ 10012318 ==== 
 * signature: undefined __cdecl FUN_10012318(HANDLE param_1, WORD param_2, WORD param_3)
 * body: 10012318-1001234e
 */

void __cdecl FUN_10012318(HANDLE param_1,WORD param_2,WORD param_3)

{
  _FILETIME local_14;
  _FILETIME local_c;
  
  DosDateTimeToFileTime(param_2,param_3,&local_c);
  LocalFileTimeToFileTime(&local_c,&local_14);
  SetFileTime(param_1,(FILETIME *)0x0,(FILETIME *)0x0,&local_14);
  return;
}



/* ==== FUN_1001234f @ 1001234f ==== 
 * signature: undefined __cdecl FUN_1001234f(HANDLE param_1, LPWORD param_2, LPWORD param_3)
 * body: 1001234f-10012385
 */

void __cdecl FUN_1001234f(HANDLE param_1,LPWORD param_2,LPWORD param_3)

{
  _FILETIME local_14;
  _FILETIME local_c;
  
  GetFileTime(param_1,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_c);
  FileTimeToLocalFileTime(&local_c,&local_14);
  FileTimeToDosDateTime(&local_14,param_2,param_3);
  return;
}



/* ==== FUN_10012386 @ 10012386 ==== 
 * signature: undefined __cdecl FUN_10012386(LPCSTR param_1, int param_2)
 * body: 10012386-10012538
 */

void __cdecl FUN_10012386(LPCSTR param_1,int param_2)

{
  CHAR CVar1;
  LPCSTR pCVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int iVar5;
  CHAR local_34c [568];
  char local_114 [16];
  CHAR local_104 [256];
  
  if (((*param_1 == '\0') || (param_1[1] != ':')) || (param_1[2] != '\0')) {
    pCVar2 = FUN_100147fa(param_1,0x5c);
    if (pCVar2 == (LPCSTR)0x0) {
      lstrcpyA(local_104,param_1);
      FUN_100162e0(param_1,0x100);
      OemToCharA(param_1,param_1);
      CVar1 = FUN_10014819(param_1);
      if (CVar1 != '\\') {
        lstrcatA(param_1,&DAT_1001f314);
      }
      lstrcatA(param_1,local_104);
    }
    if (DAT_100200d4 < 2) {
      uVar3 = *(ushort *)(PTR_DAT_1001fec8 + *param_1 * 2) & 0x103;
    }
    else {
      uVar3 = FUN_10015ac0((int)*param_1,0x103);
    }
    if ((uVar3 != 0) && (param_1[1] == ':')) {
      uVar3 = FUN_10015b60((int)*param_1);
      *param_1 = (CHAR)uVar3;
    }
    pCVar2 = param_1;
    if ((*param_1 == '\\') && (param_1[1] == '\\')) {
      pCVar2 = param_1 + 2;
      pCVar4 = FUN_100147fa(pCVar2,0x5c);
      if (pCVar4 == (LPCSTR)0x0) {
        iVar5 = lstrlenA(pCVar2);
        pCVar2 = pCVar2 + iVar5;
      }
      else {
        pCVar2 = pCVar4 + 1;
      }
    }
    pCVar4 = FUN_100147fa(pCVar2,0x5c);
    if (pCVar4 == (LPCSTR)0x0) {
      iVar5 = lstrlenA(pCVar2);
      pCVar2 = pCVar2 + iVar5;
    }
    else {
      pCVar2 = pCVar4 + 1;
    }
    while (*pCVar2 != '\0') {
      pCVar4 = FUN_100147fa(pCVar2,0x5c);
      if (pCVar4 == (LPCSTR)0x0) {
        iVar5 = lstrlenA(pCVar2);
        pCVar4 = pCVar2 + iVar5;
      }
      lstrcpyA(local_104,pCVar4);
      *pCVar4 = '\0';
      iVar5 = FUN_100120c5(param_1,0x17,local_34c);
      if (iVar5 == 0) {
        if (((param_2 != 0) || (DAT_100241e8 == 0)) || (pCVar4 = local_114, local_114[0] == '\0')) {
          pCVar4 = local_34c;
        }
        lstrcpyA(pCVar2,pCVar4);
      }
      FUN_1001221a((int)local_34c);
      iVar5 = lstrlenA(param_1);
      pCVar2 = param_1 + iVar5;
      lstrcatA(param_1,local_104);
      if (*pCVar2 == '\\') {
        pCVar2 = pCVar2 + 1;
      }
    }
  }
  return;
}



/* ==== FUN_10012539 @ 10012539 ==== 
 * signature: int __cdecl FUN_10012539(LPCSTR param_1)
 * body: 10012539-1001254e
 */

int __cdecl FUN_10012539(LPCSTR param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  return (DVar1 != 0xffffffff) - 1;
}



/* ==== FUN_1001254f @ 1001254f ==== 
 * signature: undefined4 __cdecl FUN_1001254f(byte param_1)
 * body: 1001254f-1001265e
 */

undefined4 __cdecl FUN_1001254f(byte param_1)

{
  int iVar1;
  HWND hWndParent;
  INT_PTR IVar2;
  code *lpDialogFunc;
  LPARAM dwInitParam;
  
  if (((param_1 & 0x80) != 0) && ((*DAT_10023ed8 != '\0' || ((DAT_10024198 & 1) != 0)))) {
    FUN_1001054d(s_PASSWORD_1001fd48,(LPSTR)DAT_10024034);
    iVar1 = FUN_1001265f(DAT_10024034);
    while (iVar1 != 0) {
      if (*DAT_10024034 != 0) {
        FUN_1001277f((HWND)0x0,*(char **)(DAT_100240b8 + 0x88),*(undefined4 *)(DAT_100240b8 + 0x44),
                     2);
      }
      lstrcpyA(DAT_10023fb4,*(LPCSTR *)(DAT_100240b8 + 0x80));
      lstrcpyA(DAT_10023908,DAT_10023fb4);
      lstrcatA(DAT_10023908,&DAT_1001fd44);
      lstrcpyA(DAT_10023ef8,*(LPCSTR *)(DAT_100240b8 + 0x84));
      dwInitParam = 0;
      lpDialogFunc = PathNameDlg;
      hWndParent = (HWND)FUN_100157cf();
      IVar2 = DialogBoxParamA(DAT_10024178,&DAT_00000603,hWndParent,lpDialogFunc,dwInitParam);
      if (IVar2 == 2) {
        return 1;
      }
      FUN_100105d2(s_PASSWORD_1001fd48,(LPCSTR)DAT_10024034);
      iVar1 = FUN_1001265f(DAT_10024034);
    }
    DAT_10024198 = DAT_10024198 & 0xfffffffe;
  }
  return 0;
}



/* ==== FUN_1001265f @ 1001265f ==== 
 * signature: undefined4 __cdecl FUN_1001265f(byte * param_1)
 * body: 1001265f-1001273b
 */

undefined4 __cdecl FUN_1001265f(byte *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (((byte)DAT_10024198 & 1) == 0) {
    iVar1 = 0;
    if (*DAT_10023ed8 != '\0') {
      while (param_1[iVar1] != 0) {
        uVar4 = FUN_10015b60((uint)(byte)~DAT_10023ed8[iVar1]);
        uVar5 = FUN_10015b60((int)(char)param_1[iVar1]);
        if ((uVar4 != uVar5) || (iVar1 = iVar1 + 1, DAT_10023ed8[iVar1] == '\0')) break;
      }
    }
    if ((DAT_10023ed8[iVar1] == '\0') && (param_1[iVar1] == 0)) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_10016190(param_1);
    if ((DAT_100240bc <= iVar1) && (iVar1 <= DAT_10023f34)) {
      iVar2 = (DAT_10023f34 - DAT_100240bc) + 1;
      if (((byte)DAT_10024198 & 2) != 0) {
        iVar2 = iVar2 * 2;
      }
      iVar2 = iVar2 / DAT_10023f4c;
      DAT_10024040 = iVar2 + DAT_100240bc;
      iVar3 = DAT_10023f34;
      iVar6 = DAT_100240bc;
      while (iVar6 <= iVar3) {
        if (iVar6 == iVar1) {
          return 0;
        }
        if (((byte)DAT_10024198 & 2) == 0) {
          iVar6 = iVar6 + iVar2;
        }
        else {
          iVar3 = FUN_1001273c(iVar2);
          iVar6 = iVar6 + iVar3;
          iVar3 = DAT_10023f34;
        }
      }
    }
  }
  return 1;
}



/* ==== FUN_1001273c @ 1001273c ==== 
 * signature: int __cdecl FUN_1001273c(int param_1)
 * body: 1001273c-1001277e
 */

int __cdecl FUN_1001273c(int param_1)

{
  DAT_10024040 = (DAT_10024040 % 0xadc8) * 0xbc8f + (DAT_10024040 / 0xadc8) * -0xd47;
  if (DAT_10024040 < 0) {
    DAT_10024040 = DAT_10024040 + 0x7fffffff;
  }
  return DAT_10024040 % param_1 + 1;
}



/* ==== FUN_1001277f @ 1001277f ==== 
 * signature: INT_PTR __cdecl FUN_1001277f(HWND param_1, char * param_2, undefined4 param_3, uint param_4)
 * body: 1001277f-10012884
 */

INT_PTR __cdecl FUN_1001277f(HWND param_1,char *param_2,undefined4 param_3,uint param_4)

{
  INT_PTR IVar1;
  INT_PTR IVar2;
  
  if (*(int *)(DAT_1002392c + 0x30) == 0) {
    if (((param_1 == (HWND)0x0) && (param_1 = DAT_100238cc, DAT_100238cc == (HWND)0x0)) &&
       (param_1 = DAT_10023fac, DAT_10023fac == (HWND)0x0)) {
      param_1 = DAT_100238d8;
    }
    while( true ) {
      DAT_1002418c = param_4;
      DAT_10023dc4 = param_3;
      DAT_10023e88 = param_2;
      IVar1 = DialogBoxParamA(DAT_10024178,(LPCSTR)0x72,param_1,MessageBoxDlg,0);
      DAT_10024184 = 0;
      if (*(int *)(DAT_1002392c + 0x1c) == 4) break;
      if (((IVar1 == 2) && ((param_4 & 0xc0) == 0)) && (**(char **)(DAT_100240b8 + 0x7c) != '\0')) {
        DAT_10023dc4 = *(undefined4 *)(DAT_100240b8 + 0x48);
        DAT_1002418c = 0x10f;
        DAT_10023e88 = *(char **)(DAT_100240b8 + 0x7c);
        IVar2 = DialogBoxParamA(DAT_10024178,(LPCSTR)0x72,param_1,MessageBoxDlg,0);
        if (IVar2 == 3) {
          return 2;
        }
      }
      if (IVar1 != 2) {
        return IVar1;
      }
      if ((param_4 & 0xc0) != 0) {
        return 2;
      }
    }
  }
  return 1;
}



/* ==== MessageBoxDlg @ 10012885 ==== 
 * signature: undefined4 __stdcall MessageBoxDlg(HWND param_1, int param_2, int param_3)
 * body: 10012885-10012d5a
 */

undefined4 MessageBoxDlg(HWND param_1,int param_2,int param_3)

{
  HWND hWnd;
  HWND pHVar1;
  LPCSTR lpString;
  uint uVar2;
  int iVar3;
  HANDLE h;
  HWND pHVar4;
  HMENU hMenu;
  UINT UVar5;
  UINT uIDEnableItem;
  LPCSTR pCVar6;
  int iVar7;
  tagRECT *ptVar8;
  tagPAINTSTRUCT local_b4;
  LOGFONTA local_74;
  tagRECT local_38;
  uint local_28;
  int local_24;
  tagRECT local_20;
  HWND local_10;
  HDC local_c;
  HWND local_8;
  
                    /* 0x12885  10  MessageBoxDlg */
  hWnd = param_1;
  if (param_2 == 2) {
    if (DAT_10023ebc != (HGDIOBJ)0x0) {
      DeleteObject(DAT_10023ebc);
    }
    return 0;
  }
  if (param_2 == 0xf) {
    BeginPaint(param_1,&local_b4);
    if (DAT_10023ec8 != (HICON)0x0) {
      DrawIcon(local_b4.hdc,8,0xc,DAT_10023ec8);
    }
    EndPaint(param_1,&local_b4);
    return 0;
  }
  if (param_2 != 0x110) {
    if (param_2 != 0x111) {
      return 0;
    }
    EndDialog(param_1,param_3);
    return 1;
  }
  SetForegroundWindow(param_1);
  DAT_10024184 = param_1;
  FUN_10012dfb(param_1);
  local_8 = GetDlgItem(param_1,1);
  local_10 = GetDlgItem(param_1,3);
  pHVar1 = GetDlgItem(param_1,2);
  param_2 = 0x7000000;
  param_1 = (HWND)0x4000000;
  if (((byte)DAT_1002418c & 3) < 2) {
    if ((DAT_1002418c & 0x40) == 0) {
      pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0x70);
    }
    else {
      pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0xa0);
    }
    SetWindowTextA(pHVar1,pCVar6);
  }
  else {
    ShowWindow(pHVar1,0);
    param_2 = 0x3000000;
    param_1 = (HWND)0x3000000;
  }
  if ((DAT_1002418c & 1) == 0) {
    if (DAT_100240b8 == 0) {
      pCVar6 = &DAT_1001fd54;
    }
    else {
      pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0x6c);
    }
    SetWindowTextA(local_8,pCVar6);
    ShowWindow(local_10,0);
    param_2 = param_2 & 0x5ffffff;
    param_1 = (HWND)((uint)(byte)(param_1._3_1_ - 1) << 0x18);
  }
  else {
    if ((DAT_1002418c & 0x100) == 0) {
      if ((DAT_1002418c & 0x40) == 0) {
        pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0x8c);
        lpString = *(LPCSTR *)(DAT_100240b8 + 0x90);
      }
      else {
        pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0x98);
        lpString = *(LPCSTR *)(DAT_100240b8 + 0x9c);
      }
    }
    else {
      pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0xb4);
      lpString = *(LPCSTR *)(DAT_100240b8 + 0xb8);
    }
    SetWindowTextA(local_8,pCVar6);
    SetWindowTextA(local_10,lpString);
  }
  uVar2 = DAT_1002418c & 0x1c;
  DAT_10023ec8 = (HICON)0x0;
  if (uVar2 == 4) {
    pCVar6 = (LPCSTR)0x7f04;
  }
  else if (uVar2 == 8) {
    pCVar6 = (LPCSTR)0x7f03;
  }
  else if (uVar2 == 0xc) {
    pCVar6 = (LPCSTR)0x7f02;
  }
  else {
    if (uVar2 != 0x10) goto LAB_10012a19;
    pCVar6 = (LPCSTR)0x7f01;
  }
  DAT_10023ec8 = LoadIconA((HINSTANCE)0x0,pCVar6);
LAB_10012a19:
  SetWindowTextA(hWnd,DAT_10023dc4);
  pHVar1 = GetDlgItem(hWnd,0x3ed);
  SetWindowTextA(pHVar1,DAT_10023e88);
  FUN_10012d5b(hWnd,pHVar1,&local_20);
  local_24 = local_20.right - local_20.left;
  local_10 = (HWND)(local_20.bottom - local_20.top);
  local_c = GetDC(pHVar1);
  iVar7 = 0x48;
  iVar3 = GetDeviceCaps(local_c,0x5a);
  iVar3 = MulDiv((uint)DAT_10023910,iVar3,iVar7);
  DAT_10023ebc = (HFONT)0x0;
  h = (HANDLE)SendMessageA(hWnd,0x31,0,0);
  if ((h != (HANDLE)0x0) && (iVar7 = GetObjectA(h,0x3c,&local_74), iVar7 != 0)) {
    local_74.lfWeight = (-(uint)(DAT_10023e90 != 0) & 0xfffffe70) + 700;
    local_74.lfHeight = -iVar3;
    lstrcpyA(local_74.lfFaceName,DAT_10023f08);
    local_74.lfCharSet = DAT_10023ea9;
    DAT_10023ebc = CreateFontIndirectA(&local_74);
    SendMessageA(pHVar1,0x30,(WPARAM)DAT_10023ebc,0);
  }
  local_8 = SelectObject(local_c,DAT_10023ebc);
  DrawTextA(local_c,DAT_10023e88,-1,&local_20,0xc50);
  SelectObject(local_c,local_8);
  ReleaseDC(pHVar1,local_c);
  ptVar8 = &local_38;
  pHVar4 = GetDlgItem(hWnd,1);
  FUN_10012d5b(hWnd,pHVar4,ptVar8);
  local_28 = (uint)param_1 >> 0x18;
  iVar3 = (local_28 - 1) * (local_38.right - local_38.left) + (local_38.right - local_38.left) / 2;
  if (local_20.right - local_20.left < iVar3) {
    local_20.right = iVar3 + local_20.left;
  }
  iVar3 = local_20.bottom - local_20.top;
  iVar7 = (local_20.right - local_20.left) - local_24;
  local_10 = (HWND)(iVar3 - (int)local_10);
  if ((DAT_1002418c & 0x1c) != 0) {
    local_20.left = local_20.left + 0x18;
    local_20.right = local_20.right + 0x18;
    iVar7 = iVar7 + 0x18;
  }
  local_24 = iVar3;
  MoveWindow(pHVar1,local_20.left,local_20.top,local_20.right - local_20.left,iVar3,0);
  GetWindowRect(hWnd,&local_20);
  local_24 = (iVar7 - local_20.left) + local_20.right;
  MoveWindow(hWnd,local_20.left,local_20.top,local_24,
             ((int)local_10 - local_20.top) + local_20.bottom,0);
  param_3 = 0;
  local_8 = (HWND)0x1;
  do {
    iVar3 = 1;
    if (((uint)param_2 >> 0x18 & 1 << ((byte)param_3 & 0x1f)) != 0) {
      if (param_3 != 0) {
        iVar3 = (param_3 != 2) + 2;
      }
      local_c = (HDC)GetDlgItem(hWnd,iVar3);
      SendMessageA((HWND)local_c,0x30,(WPARAM)DAT_10023ebc,0);
      FUN_10012d5b(hWnd,(HWND)local_c,&local_20);
      iVar3 = (local_24 / (int)local_28) * (int)local_8 - (local_20.right - local_20.left) / 2;
      if ((param_3 == 0) && (param_1._3_1_ == '\x04')) {
        iVar3 = iVar3 + -0x14;
      }
      if ((param_3 == 2) && (param_1._3_1_ == '\x04')) {
        iVar3 = iVar3 + 0x14;
      }
      MoveWindow((HWND)local_c,iVar3,(int)local_10 + local_20.top,local_20.right - local_20.left,
                 local_20.bottom - local_20.top,0);
      local_8 = (HWND)((int)local_8 + 1);
    }
    param_3 = param_3 + 1;
  } while (param_3 < 3);
  FUN_10010d18(hWnd,'\x01',0);
  hMenu = GetSystemMenu(hWnd,0);
  if (hMenu != (HMENU)0x0) {
    iVar3 = GetMenuItemCount(hMenu);
    uIDEnableItem = 0;
    if (0 < iVar3) {
      do {
        UVar5 = GetMenuItemID(hMenu,uIDEnableItem);
        if (UVar5 == 0xf060) {
          EnableMenuItem(hMenu,uIDEnableItem,((DAT_1002418c & 0x60) != 0) + 0x400);
        }
        uIDEnableItem = uIDEnableItem + 1;
      } while ((int)uIDEnableItem < iVar3);
      return 1;
    }
    return 1;
  }
  return 1;
}



/* ==== FUN_10012d5b @ 10012d5b ==== 
 * signature: undefined __cdecl FUN_10012d5b(HWND param_1, HWND param_2, LPRECT param_3)
 * body: 10012d5b-10012db8
 */

void __cdecl FUN_10012d5b(HWND param_1,HWND param_2,LPRECT param_3)

{
  tagPOINT local_c;
  
  GetWindowRect(param_2,param_3);
  local_c.x = param_3->left;
  local_c.y = param_3->top;
  ScreenToClient(param_1,&local_c);
  param_3->left = local_c.x;
  param_3->top = local_c.y;
  local_c.x = param_3->right;
  local_c.y = param_3->bottom;
  ScreenToClient(param_1,&local_c);
  param_3->right = local_c.x;
  param_3->bottom = local_c.y;
  return;
}



/* ==== FUN_10012db9 @ 10012db9 ==== 
 * signature: undefined __stdcall FUN_10012db9(void)
 * body: 10012db9-10012dfa
 */

void FUN_10012db9(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    if (BVar1 == 0) break;
    TranslateMessage(&local_20);
    DispatchMessageA(&local_20);
  }
  return;
}



/* ==== FUN_10012dfb @ 10012dfb ==== 
 * signature: undefined __cdecl FUN_10012dfb(undefined4 param_1)
 * body: 10012dfb-10012e0c
 */

void __cdecl FUN_10012dfb(undefined4 param_1)

{
  if (DAT_10024060 != (code *)0x0) {
    (*DAT_10024060)(param_1,0x38);
  }
  return;
}



/* ==== FUN_10012e0d @ 10012e0d ==== 
 * signature: undefined __cdecl FUN_10012e0d(HWND param_1, int * param_2)
 * body: 10012e0d-10012f5b
 */

void __cdecl FUN_10012e0d(HWND param_1,int *param_2)

{
  HWND hWnd;
  HANDLE h;
  int iVar1;
  HFONT pHVar2;
  int nDenominator;
  LOGFONTA local_54;
  tagRECT local_18;
  HDC local_8;
  
  hWnd = param_1;
  GetWindowRect(param_1,&local_18);
  local_18.left = local_18.left + local_18.left / 6;
  local_18.right = local_18.right + local_18.right / 6;
  MoveWindow(param_1,local_18.left,local_18.top,local_18.right - local_18.left,
             local_18.bottom - local_18.top,0);
  FUN_10012dfb(param_1);
  iVar1 = DAT_10024120;
  if (DAT_10023e90 != 0) {
    if (param_2 == (int *)0x0) {
      param_1 = (HWND)&DAT_10024120;
    }
    else {
      param_1 = (HWND)param_2;
    }
    if (param_1->unused == 0) {
      param_1->unused = 0;
      h = (HANDLE)SendMessageA(hWnd,0x31,0,0);
      if (h != (HANDLE)0x0) {
        iVar1 = GetObjectA(h,0x3c,&local_54);
        if (iVar1 != 0) {
          local_54.lfWeight = 300;
          local_54.lfCharSet = DAT_10023ea9;
          if (DAT_10023ea9 != '\0') {
            local_8 = GetDC(hWnd);
            nDenominator = 0x48;
            iVar1 = GetDeviceCaps(local_8,0x5a);
            iVar1 = MulDiv((uint)DAT_10023910,iVar1,nDenominator);
            ReleaseDC(hWnd,local_8);
            local_54.lfHeight = -iVar1;
            lstrcpyA(local_54.lfFaceName,DAT_10023f08);
          }
          pHVar2 = CreateFontIndirectA(&local_54);
          param_1->unused = (int)pHVar2;
        }
      }
    }
    iVar1 = DAT_10024120;
    if (param_2 == (int *)0x0) {
      if (DAT_10024120 != 0) {
        EnumChildWindows(hWnd,FUN_10012f5c,(LPARAM)hWnd);
        iVar1 = DAT_10024120;
      }
    }
    else {
      DAT_10024120 = *param_2;
      if (DAT_10024120 != 0) {
        EnumChildWindows(hWnd,FUN_10012f5c,(LPARAM)hWnd);
      }
    }
  }
  DAT_10024120 = iVar1;
  return;
}



/* ==== FUN_10012f5c @ 10012f5c ==== 
 * signature: undefined4 __stdcall FUN_10012f5c(HWND param_1, HWND param_2)
 * body: 10012f5c-10012ffd
 */

undefined4 FUN_10012f5c(HWND param_1,HWND param_2)

{
  HWND hWnd;
  tagRECT local_24;
  tagPOINT local_14;
  tagPOINT local_c;
  
  GetWindowRect(param_1,&local_24);
  hWnd = GetParent(param_1);
  local_c.x = local_24.left;
  local_c.y = local_24.top;
  ScreenToClient(hWnd,&local_c);
  local_14.x = local_24.right;
  local_14.y = local_24.bottom;
  ScreenToClient(hWnd,&local_14);
  local_c.x = local_c.x + local_c.x / 6;
  local_14.x = local_14.x + local_14.x / 6;
  if (hWnd == param_2) {
    MoveWindow(param_1,local_c.x,local_c.y,local_14.x - local_c.x,local_14.y - local_c.y,0);
  }
  SendMessageA(param_1,0x30,DAT_10024120,0);
  return 1;
}



/* ==== FUN_10012ffe @ 10012ffe ==== 
 * signature: undefined4 __cdecl FUN_10012ffe(LPCSTR param_1, DWORD param_2, LPCSTR param_3, LPCSTR param_4, LPCSTR param_5, LPSTR param_6, PUINT param_7, LPSTR param_8, PUINT param_9)
 * body: 10012ffe-1001302e
 */

undefined4 __cdecl
FUN_10012ffe(LPCSTR param_1,DWORD param_2,LPCSTR param_3,LPCSTR param_4,LPCSTR param_5,LPSTR param_6
            ,PUINT param_7,LPSTR param_8,PUINT param_9)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100138b1(param_1);
  VerFindFileA(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return uVar1;
}



/* ==== FUN_1001302f @ 1001302f ==== 
 * signature: DWORD __cdecl FUN_1001302f(int param_1, DWORD param_2, LPCSTR param_3, LPCSTR param_4, LPCSTR param_5, CHAR * param_6, LPCSTR param_7, LPSTR param_8, PUINT param_9)
 * body: 1001302f-10013191
 */

DWORD __cdecl
FUN_1001302f(int param_1,DWORD param_2,LPCSTR param_3,LPCSTR param_4,LPCSTR param_5,CHAR *param_6,
            LPCSTR param_7,LPSTR param_8,PUINT param_9)

{
  int iVar1;
  LPCSTR pCVar2;
  DWORD DVar3;
  BOOL BVar4;
  CHAR local_304 [256];
  CHAR local_204 [256];
  CHAR local_104 [256];
  
  if (param_1 == 0) {
    if (DAT_100241e8 != 0) {
      lstrcpyA(local_204,param_5);
      FUN_10012386(local_204,0);
      param_5 = local_204;
      lstrcpyA(local_104,param_6);
      FUN_10012386(local_104,0);
      param_6 = local_104;
      lstrcpyA(local_304,param_7);
      FUN_10012386(local_304,0);
      param_7 = local_304;
    }
    DVar3 = VerInstallFileA(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  else {
    param_9 = (PUINT)*param_9;
    wsprintfA(local_104,s__s__s_1001f2e4,param_6,param_4);
    iVar1 = FUN_10012539(local_104);
    if (iVar1 == 0) {
      FUN_10012386(local_104,0);
      pCVar2 = local_104;
    }
    else {
      FUN_1001393a(local_204,local_104);
      pCVar2 = local_204;
    }
    pCVar2 = FUN_1000b94f(pCVar2);
    DVar3 = VerInstallFileA(param_2,param_3,pCVar2,param_5,param_6,param_7,param_8,(PUINT)&param_9);
    if ((iVar1 != 0) && (BVar4 = MoveFileA(local_204,local_104), BVar4 == 0)) {
      DVar3 = DVar3 | 0x80;
    }
  }
  return DVar3;
}



/* ==== FUN_10013192 @ 10013192 ==== 
 * signature: undefined __cdecl FUN_10013192(undefined4 param_1, HANDLE param_2, undefined4 param_3, undefined4 param_4)
 * body: 10013192-10013277
 */

void __cdecl FUN_10013192(undefined4 param_1,HANDLE param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  INT_PTR IVar4;
  int iVar5;
  
  uVar2 = *(undefined4 *)(DAT_1002392c + 8);
  do {
    SetErrorMode(0);
    (**(code **)(DAT_1002392c + 0x90))(param_1,param_2,param_3,param_4);
    SetErrorMode(0x8000);
    bVar3 = false;
    if (*(char *)(DAT_1002392c + 0x20) == '\x02') {
      if (DAT_100240b8 == 0) {
        FUN_1000b352(PTR_s_Internal_Error_1001f048);
      }
      else {
        IVar4 = FUN_1001277f((HWND)0x0,*(char **)(DAT_100240b8 + 0x94),
                             *(undefined4 *)(DAT_100240b8 + 0x48),0x43);
        if (IVar4 == 3) {
          bVar3 = true;
          *(undefined4 *)(DAT_1002392c + 0x1c) = 0;
          *(undefined1 *)(DAT_1002392c + 0x20) = 0;
          *(undefined4 *)(DAT_1002392c + 8) = uVar2;
          FUN_1000bde0();
        }
      }
      if (param_2 != (HANDLE)0x0) {
        if ((DAT_100238dc._2_1_ & 1) != 0) {
          piVar1 = (int *)(DAT_1002392c + 0x14);
          iVar5 = FUN_10012303(param_2,0,2);
          *piVar1 = *piVar1 - iVar5;
        }
        FUN_10012303(param_2,0,0);
      }
    }
  } while (bVar3);
  return;
}



/* ==== FUN_10013278 @ 10013278 ==== 
 * signature: undefined __cdecl FUN_10013278(HANDLE param_1)
 * body: 10013278-10013296
 */

void __cdecl FUN_10013278(HANDLE param_1)

{
  FUN_10012303(param_1,0,0);
  DAT_10024048 = 0;
  DAT_10023f10 = 0;
  return;
}



/* ==== FUN_10013297 @ 10013297 ==== 
 * signature: undefined4 __cdecl FUN_10013297(char * param_1, int param_2, HANDLE param_3)
 * body: 10013297-100132c7
 */

undefined4 __cdecl FUN_10013297(char *param_1,int param_2,HANDLE param_3)

{
  FUN_100132c8(param_1,param_2,param_3);
  if ((*param_1 == '\0') && (DAT_10024048 <= DAT_10023f10)) {
    return 0;
  }
  return 1;
}



/* ==== FUN_100132c8 @ 100132c8 ==== 
 * signature: undefined __cdecl FUN_100132c8(char * param_1, int param_2, HANDLE param_3)
 * body: 100132c8-1001337e
 */

void __cdecl FUN_100132c8(char *param_1,int param_2,HANDLE param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if ((int)DAT_10024048 <= DAT_10023f10) {
    DAT_10023f10 = 0;
    DAT_10024048 = FUN_100122b9(param_3,DAT_10024170,0x7800);
    if ((int)DAT_10024048 < 1) {
      *param_1 = '\0';
      return;
    }
  }
  do {
    do {
      cVar1 = *(char *)(DAT_10023f10 + (int)DAT_10024170);
      if (cVar1 == '\r') {
        DAT_10023f10 = DAT_10023f10 + 1;
        *pcVar2 = '\n';
        pcVar2[1] = '\0';
        return;
      }
      if ((cVar1 != '\n') && (*pcVar2 = cVar1, (int)pcVar2 - (int)param_1 < param_2 + -2)) {
        pcVar2 = pcVar2 + 1;
      }
      DAT_10023f10 = DAT_10023f10 + 1;
    } while (DAT_10023f10 < (int)DAT_10024048);
    DAT_10023f10 = 0;
    DAT_10024048 = FUN_100122b9(param_3,DAT_10024170,0x7800);
  } while (0 < (int)DAT_10024048);
  *pcVar2 = '\0';
  return;
}



/* ==== FUN_1001337f @ 1001337f ==== 
 * signature: uint __cdecl FUN_1001337f(LPCSTR param_1, DWORD param_2)
 * body: 1001337f-100134fd
 */

uint __cdecl FUN_1001337f(LPCSTR param_1,DWORD param_2)

{
  char *pcVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  undefined3 extraout_var;
  CHAR *lpString;
  char *pcVar5;
  bool bVar6;
  byte local_13c [2];
  char local_13a [254];
  CHAR local_3c [16];
  undefined1 local_2c [8];
  DWORD local_24;
  DWORD local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  DWORD local_8;
  
  lpString = param_1;
  if (param_1 == (LPCSTR)0x0) {
    wsprintfA(local_3c,&DAT_1001f6c0,param_2 + 0x41);
    lpString = local_3c;
  }
  if (DAT_100241e8 == 0) {
    if (lpString[1] == ':') {
      uVar4 = FUN_10015b60((int)*lpString);
      iVar2 = uVar4 - 0x40;
    }
    else {
      iVar2 = 0;
    }
    bVar6 = FUN_10014010(iVar2,&local_20);
    if (CONCAT31(extraout_var,bVar6) == 0) {
      return (local_1c * local_18 * local_14) / 0x400;
    }
  }
  else {
    iVar2 = lstrlenA(lpString);
    if (1 < iVar2) {
      lstrcpyA((LPSTR)local_13c,lpString);
      if (iVar2 == 2) {
        lstrcatA((LPSTR)local_13c,&DAT_1001f314);
      }
      pcVar5 = local_13a;
      while ((local_13a[0] != '\0' && (local_13a[0] != '\\'))) {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        local_13a[0] = *pcVar1;
      }
      iVar2 = FUN_1001b090(local_13c,&DAT_1001f6ac,2);
      if (iVar2 == 0) {
        bVar6 = *pcVar5 == '\0';
        while (!bVar6) {
          pcVar1 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          if (*pcVar1 == '\0') break;
          bVar6 = *pcVar1 == '\\';
        }
      }
      if (*pcVar5 == '\\') {
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = '\0';
      if ((DAT_10023e98 != (code *)0x0) &&
         (iVar2 = (*DAT_10023e98)(local_13c,&local_10,&local_18,local_2c), iVar2 != 0)) {
        return local_c << 0x16 | local_10 >> 10;
      }
      BVar3 = GetDiskFreeSpaceA((LPCSTR)local_13c,&local_8,&param_2,(LPDWORD)&param_1,&local_24);
      if (BVar3 != 0) {
        uVar4 = param_2 * local_8;
        if ((0x1ff < uVar4) && ((uVar4 & 0x1ff) == 0)) {
          return (uVar4 >> 9) * (int)param_1 >> 1;
        }
        return uVar4 * (int)param_1 >> 10;
      }
    }
  }
  return 0;
}



/* ==== FUN_100134fe @ 100134fe ==== 
 * signature: undefined4 __cdecl FUN_100134fe(int param_1, int param_2, CHAR * param_3, LPCSTR param_4)
 * body: 100134fe-1001373a
 */

undefined4 __cdecl FUN_100134fe(int param_1,int param_2,CHAR *param_3,LPCSTR param_4)

{
  int iVar1;
  HANDLE hObject;
  DWORD DVar2;
  undefined4 uVar3;
  LPCSTR pCVar4;
  CHAR local_704 [512];
  CHAR local_504 [256];
  char local_404 [512];
  CHAR local_204 [256];
  byte local_104 [256];
  
  if ((DAT_100238dc._1_1_ & 0x20) == 0) {
LAB_10013734:
    uVar3 = 0;
  }
  else {
    if (param_1 != 0) {
      iVar1 = FUN_1001373b(param_3,param_4,(uint *)0x0);
      if (iVar1 == 0) goto LAB_10013734;
      if (param_2 != 0) {
        FUN_1001393a(local_504,param_4);
        iVar1 = FUN_1000b673(param_3,local_504,0,0,0,(undefined4 *)0x0,(int *)0x0);
        if (iVar1 != 0) {
          wsprintfA(local_704,*(LPCSTR *)(DAT_100240b8 + 0x68),param_3);
          FUN_1000b352(local_704);
          return 0xfffffffe;
        }
      }
    }
    if ((param_1 != 0) && (param_2 != 0)) {
      param_3 = local_504;
    }
    lstrcpyA(local_204,param_3);
    lstrcpyA((LPSTR)local_104,param_4);
    FUN_10012386(local_204,0);
    FUN_10012386((LPCSTR)local_104,0);
    uVar3 = 1;
    if (DAT_100238b8 == 0) {
      if (DAT_10024168 == 0) {
        DAT_10023900 = 1;
        pCVar4 = FUN_1000b94f((LPCSTR)local_104);
        wsprintfA(local_404,s_del__s_rename__s__s_1001fd6c,local_104,local_204,pCVar4);
        lstrcpyA((LPSTR)local_104,s__WIN___MSSETUP_BAT_1001fd58);
        FUN_10009eff(local_104,local_104);
        hObject = (HANDLE)FUN_1001223a((LPCSTR)local_104,1,0);
        if (hObject == (HANDLE)0xffffffff) {
          hObject = (HANDLE)FUN_1001223a((LPCSTR)local_104,1,1);
        }
        else {
          FUN_10012303(hObject,0,2);
        }
        if (hObject != (HANDLE)0xffffffff) {
          DVar2 = lstrlenA(local_404);
          FileWrite(hObject,local_404,DVar2);
          CloseHandle(hObject);
        }
      }
      else {
        WritePrivateProfileStringA
                  (s_rename_1001fd84,(LPCSTR)local_104,local_204,s_WININIT_INI_1001fd8c);
      }
      FUN_1001054d(s_RESTART_1001fa74,local_404);
      if (local_404[0] == 'S') {
        return 1;
      }
      if (local_404[0] == 'E') {
        return 1;
      }
      pCVar4 = &DAT_1001fb28;
    }
    else {
      if (DAT_100241e8 == 0) {
        return 1;
      }
      MoveFileExA(local_204,param_4,5);
      pCVar4 = &DAT_1001fa7c;
    }
    FUN_100105d2(s_RESTART_1001fa74,pCVar4);
  }
  return uVar3;
}



/* ==== FUN_1001373b @ 1001373b ==== 
 * signature: undefined4 __cdecl FUN_1001373b(LPCSTR param_1, LPCSTR param_2, uint * param_3)
 * body: 1001373b-100137b0
 */

undefined4 __cdecl FUN_1001373b(LPCSTR param_1,LPCSTR param_2,uint *param_3)

{
  int iVar1;
  uint local_3c [7];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_8;
  
  iVar1 = FUN_100137b1(param_2,&local_20);
  if (iVar1 == 0) {
    if (param_3 == (uint *)0x0) {
      iVar1 = FUN_100137b1(param_1,local_3c);
      if (iVar1 != 0) {
        return 1;
      }
      param_3 = local_3c;
    }
    else {
      param_3[6] = local_8;
    }
    if (((*param_3 < local_20) ||
        (((*param_3 == local_20 && (param_3[1] <= local_1c)) || (param_3[2] != local_18)))) ||
       (((param_3[3] != local_14 || (param_3[4] != local_10)) || (param_3[6] != local_8)))) {
      return 0;
    }
  }
  return 1;
}



/* ==== FUN_100137b1 @ 100137b1 ==== 
 * signature: undefined4 __cdecl FUN_100137b1(LPCSTR param_1, undefined4 * param_2)
 * body: 100137b1-100138b0
 */

undefined4 __cdecl FUN_100137b1(LPCSTR param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  BOOL BVar3;
  char *lpSubBlock;
  CHAR local_54 [64];
  LPVOID local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = FUN_100138b1(param_1);
  if (iVar2 == 0) {
    BVar3 = GetFileVersionInfoA(param_1,0,0x7800,DAT_10024170);
    if (BVar3 != 0) {
      lstrcpyA(local_54,&DAT_1001f314);
      BVar3 = VerQueryValueA(DAT_10024170,local_54,&local_14,&local_10);
      if (BVar3 != 0) {
        lstrcpyA(local_54,s__VarFileInfo_Translation_1001fd98);
        lpSubBlock = local_54;
        goto LAB_10013861;
      }
    }
  }
  else {
    BVar3 = GetFileVersionInfoA(param_1,0,0x7800,DAT_10024170);
    if ((BVar3 != 0) &&
       (BVar3 = VerQueryValueA(DAT_10024170,&DAT_1001f314,&local_14,&local_10), BVar3 != 0)) {
      lpSubBlock = s__VarFileInfo_Translation_1001fd98;
LAB_10013861:
      BVar3 = VerQueryValueA(DAT_10024170,lpSubBlock,&local_c,&local_10);
      if (BVar3 == 0) {
        local_c = &local_8;
      }
      *param_2 = *(undefined4 *)((int)local_14 + 8);
      param_2[1] = *(undefined4 *)((int)local_14 + 0xc);
      param_2[2] = *(undefined4 *)((int)local_14 + 0x20);
      param_2[3] = *(undefined4 *)((int)local_14 + 0x24);
      param_2[4] = *(undefined4 *)((int)local_14 + 0x28);
      uVar1 = *local_c;
      param_2[6] = iVar2;
      param_2[5] = uVar1;
      return 0;
    }
  }
  return 1;
}



/* ==== FUN_100138b1 @ 100138b1 ==== 
 * signature: undefined4 __cdecl FUN_100138b1(LPCSTR param_1)
 * body: 100138b1-10013939
 */

undefined4 __cdecl FUN_100138b1(LPCSTR param_1)

{
  HANDLE hObject;
  undefined4 uVar1;
  LONG local_8;
  
  uVar1 = 0;
  if (DAT_100241e8 != 0) {
    hObject = (HANDLE)FUN_1001223a(param_1,0,0);
    if (-1 < (int)hObject) {
      FUN_100122b9(hObject,(LPVOID)((int)&param_1 + 2),2);
      if (param_1._2_2_ == 0x5a4d) {
        FUN_10012303(hObject,0x3c,0);
        FUN_100122b9(hObject,&local_8,4);
        FUN_10012303(hObject,local_8,0);
        FUN_100122b9(hObject,(LPVOID)((int)&param_1 + 2),2);
        if (param_1._2_2_ == 0x4550) {
          uVar1 = 1;
        }
      }
      CloseHandle(hObject);
    }
  }
  return uVar1;
}



/* ==== FUN_1001393a @ 1001393a ==== 
 * signature: undefined __cdecl FUN_1001393a(LPSTR param_1, LPCSTR param_2)
 * body: 1001393a-1001397e
 */

void __cdecl FUN_1001393a(LPSTR param_1,LPCSTR param_2)

{
  LPCSTR pCVar1;
  int iVar2;
  
  do {
    lstrcpyA(param_1,param_2);
    pCVar1 = FUN_1000b94f(param_1);
    wsprintfA(pCVar1,s__GLH_04x_TMP_1001fdb4,(uint)(ushort)DAT_10023e2c);
    DAT_10023e2c = DAT_10023e2c + 1;
    iVar2 = FUN_10012539(param_1);
  } while (iVar2 == 0);
  return;
}



/* ==== FUN_1001397f @ 1001397f ==== 
 * signature: LPVOID __cdecl FUN_1001397f(int param_1, SIZE_T param_2)
 * body: 1001397f-100139a4
 */

LPVOID __cdecl FUN_1001397f(int param_1,SIZE_T param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  pvVar1 = (LPVOID)0x0;
  hMem = GlobalAlloc(0,param_2);
  *(HGLOBAL *)(param_1 + 0x30) = hMem;
  if (hMem != (HGLOBAL)0x0) {
    pvVar1 = GlobalLock(hMem);
  }
  return pvVar1;
}



/* ==== FUN_100139a5 @ 100139a5 ==== 
 * signature: undefined __cdecl FUN_100139a5(undefined4 * param_1)
 * body: 100139a5-100139c8
 */

void __cdecl FUN_100139a5(undefined4 *param_1)

{
  if ((*(byte *)((int)param_1 + 0x25) & 4) == 0) {
    FUN_10013e71((HGLOBAL)param_1[0xc]);
  }
  else {
    DeleteMetaFile((HMETAFILE)param_1[0xd]);
  }
  *param_1 = 0;
  return;
}



/* ==== FUN_100139c9 @ 100139c9 ==== 
 * signature: undefined __stdcall FUN_100139c9(void)
 * body: 100139c9-10013a96
 */

void FUN_100139c9(void)

{
  undefined4 uVar1;
  int iVar2;
  byte local_108 [256];
  uint local_8;
  
  if (DAT_1001f030 != (HANDLE)0xffffffff) {
    if (DAT_100238b8 != 0) {
      iVar2 = FUN_1000da65();
      if (iVar2 != 0) {
        FileWrite(DAT_1001f030,s_User_Rights__Admin_1001fdc4,0x14);
      }
    }
    CloseHandle(DAT_1001f030);
    FUN_10009eff(local_108,DAT_10023eb0);
    if (((local_108[0] != 0) && (DAT_10023e9c != '\x01')) && (DAT_10023edc == 0)) {
      uVar1 = *(undefined4 *)(DAT_1002392c + 0x1c);
      local_8 = (uint)*(byte *)(DAT_1002392c + 0x20);
      *(undefined1 *)(DAT_1002392c + 0x20) = 0;
      *(undefined4 *)(DAT_1002392c + 0x1c) = 0;
      FUN_1000b673(DAT_10023f20,(LPCSTR)local_108,0,0,1,(undefined4 *)0x0,(int *)0x0);
      *(undefined4 *)(DAT_1002392c + 0x1c) = uVar1;
      *(undefined1 *)(DAT_1002392c + 0x20) = (undefined1)local_8;
    }
    DeleteFileA(DAT_10023f20);
  }
  return;
}



/* ==== FUN_10013a97 @ 10013a97 ==== 
 * signature: uint __cdecl FUN_10013a97(undefined4 param_1, FARPROC param_2)
 * body: 10013a97-10013bb9
 */

uint __cdecl FUN_10013a97(undefined4 param_1,FARPROC param_2)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  int iVar3;
  uint uVar4;
  FARPROC pFVar5;
  undefined4 local_10;
  undefined4 local_c;
  FARPROC local_8;
  
  if (DAT_100241e8 != 0) {
    local_8 = (FARPROC)0x0;
    pHVar1 = LoadLibraryExA(s_MPR_DLL_1001fe34,(HANDLE)0x0,0);
    if (pHVar1 != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(pHVar1,s_WNetGetUserA_1001fe24);
      if (pFVar2 != (FARPROC)0x0) {
        local_10 = 0x100;
        iVar3 = (*pFVar2)(param_2,param_1,&local_10);
        if (iVar3 == 0) {
          local_8 = (FARPROC)0x1;
        }
      }
      FreeLibrary(pHVar1);
    }
    if (local_8 != (FARPROC)0x0) {
      return (uint)local_8;
    }
  }
  local_c = 0x100;
  pHVar1 = LoadLibraryA(s_USER_EXE_1001fe18);
  local_8 = GetProcAddress(pHVar1,s_WNETGETUSER_1001fe0c);
  param_2 = GetProcAddress(pHVar1,s_WNETGETCAPS_1001fe00);
  FreeLibrary(pHVar1);
  pFVar2 = param_2;
  if (local_8 == (FARPROC)0x0) {
LAB_10013b9d:
    uVar4 = 0;
  }
  else {
    if (param_2 == (FARPROC)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*param_2)(2);
    }
    if ((uVar4 & 0x8000) != 0) {
      pHVar1 = (HMODULE)0x0;
      if (pFVar2 != (FARPROC)0x0) {
        uVar4 = (*pFVar2)(0xffff);
        pHVar1 = (HMODULE)(uVar4 & 0xffff);
      }
      pFVar2 = GetProcAddress(pHVar1,s_MNETNETWORKENUM_1001fdf0);
      pFVar5 = GetProcAddress(pHVar1,s_MNETSETNEXTTARGET_1001fddc);
      if ((pFVar2 != (FARPROC)0x0) && (pFVar5 != (FARPROC)0x0)) {
        param_2 = (FARPROC)0x0;
        while (iVar3 = (*pFVar2)(&param_2), (short)iVar3 == 0) {
          (*pFVar5)(param_2);
          iVar3 = (*local_8)(param_1,&local_c);
          if ((short)iVar3 == 0) {
            return 1;
          }
        }
        goto LAB_10013b9d;
      }
    }
    iVar3 = (*local_8)(param_1,&local_c);
    uVar4 = (uint)((short)iVar3 == 0);
  }
  return uVar4;
}



/* ==== FUN_10013bba @ 10013bba ==== 
 * signature: undefined __cdecl FUN_10013bba(LPCSTR param_1)
 * body: 10013bba-10013ca5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10013bba(LPCSTR param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  HWND pHVar4;
  undefined3 extraout_var;
  uint uVar5;
  uint local_c;
  int local_8;
  
  uVar5 = 1;
  DAT_10023dc0 = 1;
  if (DAT_100238b4 == (code *)0x0) {
    SetDlgItemTextA(DAT_10023fac,0xef5,param_1);
  }
  else {
    DAT_1002408e = DAT_1002402c;
    _DAT_1002409c = DAT_1001f030;
    _DAT_100240a0 = &DAT_10023314;
    FUN_10013ca6(&local_8,&local_c);
    if (DAT_10023f9c == 0) {
      iVar2 = 0;
    }
    else {
      uVar3 = *(int *)(DAT_1002392c + 0x14) - DAT_10023ecc;
      if (2000000 < uVar3) {
        uVar5 = 10;
      }
      iVar2 = (((uVar3 / uVar5) * 1000) / DAT_10023f9c) * uVar5;
    }
    pHVar4 = (HWND)(*DAT_100238b4)(1,DAT_10024180 & 0xf,&DAT_10024080,param_1,
                                   (uint)(local_8 * 1000) / local_c,iVar2);
    if (pHVar4 != (HWND)0x0) {
      bVar1 = FUN_1000be14(pHVar4);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
      }
    }
    DAT_10023fac = DAT_10023f40;
  }
  return;
}



/* ==== FUN_10013ca6 @ 10013ca6 ==== 
 * signature: undefined __cdecl FUN_10013ca6(int * param_1, uint * param_2)
 * body: 10013ca6-10013e56
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10013ca6(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = DAT_10023f38;
  if ((DAT_100238dc & 0x10000) == 0) {
    if ((DAT_100238dc & 0x40) == 0) {
      iVar2 = (*(int *)(DAT_1002392c + 8) + *(int *)(DAT_1002392c + 0x14)) - DAT_100238bc;
    }
    else {
      iVar2 = (DAT_10023310 - DAT_10023fa8) + _DAT_10023e80;
      uVar4 = DAT_100240c0;
    }
  }
  else {
    iVar2 = *(int *)(DAT_1002392c + 0x14);
  }
  for (; 2000000 < iVar2; iVar2 = iVar2 / 10) {
    uVar4 = (int)uVar4 / 10;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *param_2 = uVar4;
  *param_1 = iVar2;
  uVar1 = (uint)(iVar2 * 100) / uVar4;
  DAT_1002393c = (byte)uVar1;
  if ((uVar4 / 200 <= iVar2 - (uVar4 * (uVar1 & 0xff)) / 100) && (DAT_1002393c < 100)) {
    DAT_1002393c = DAT_1002393c + 1;
  }
  if ((DAT_1001f158 <= DAT_1002393c) && (DAT_1001f158 = 0xff, DAT_10023ed4[0x1b2] != 0)) {
    iVar2 = 0;
    piVar3 = DAT_10023ed4;
    do {
      if ((*piVar3 == 0) || (piVar3[10] != 0)) break;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0xe;
    } while (iVar2 < 0x20);
    if (DAT_10023ed4[iVar2 * 0xe] != 0) {
      FUN_1000bd4b(iVar2,0);
      FUN_100139a5(DAT_10023ed4 + iVar2 * 0xe);
      FUN_10015e50(DAT_10023ed4 + iVar2 * 0xe,DAT_10023ed4 + 0x1b2,0x38);
      FUN_1000bd4b(iVar2,1);
      iVar5 = 0x690;
      iVar2 = 0x1e;
      do {
        if (*(int *)((int)DAT_10023ed4 + iVar5) == 0) break;
        FUN_10015e50((undefined4 *)((int)DAT_10023ed4 + iVar5 + 0x38),
                     (undefined4 *)((int)DAT_10023ed4 + iVar5),0x38);
        iVar2 = iVar2 + -1;
        iVar5 = iVar5 + -0x38;
      } while (-1 < iVar5);
      DAT_10023ed4[(iVar2 + 1) * 0xe] = 0;
      if (iVar2 == 0x1e) {
        DAT_1001f158 = 0xff;
      }
      else {
        DAT_1001f158 = (char)((int)(100 - (uint)DAT_1002393c) / (0x1f - iVar2)) + DAT_1002393c;
      }
    }
  }
  return;
}



/* ==== FUN_10013e57 @ 10013e57 ==== 
 * signature: undefined __cdecl FUN_10013e57(SIZE_T param_1, undefined4 * param_2)
 * body: 10013e57-10013e70
 */

void __cdecl FUN_10013e57(SIZE_T param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(2,param_1);
  *param_2 = hMem;
  GlobalLock(hMem);
  return;
}



/* ==== FUN_10013e71 @ 10013e71 ==== 
 * signature: undefined __cdecl FUN_10013e71(HGLOBAL param_1)
 * body: 10013e71-10013e85
 */

void __cdecl FUN_10013e71(HGLOBAL param_1)

{
  GlobalUnlock(param_1);
  GlobalFree(param_1);
  return;
}



/* ==== FUN_10013e86 @ 10013e86 ==== 
 * signature: undefined4 __cdecl FUN_10013e86(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * body: 10013e86-10013fb3
 */

undefined4 __cdecl
FUN_10013e86(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  CHAR local_304 [512];
  CHAR local_104 [256];
  
  iVar2 = 0;
  local_104[0] = '\0';
  if (DAT_10023940 == (HMODULE)0x0) {
    if ((DAT_100238d0 != (LPCSTR)0x0) && (DAT_100241e8 != 0)) {
      DAT_10023940 = LoadLibraryExA(DAT_100238d0,(HANDLE)0x0,0);
      if (DAT_10023940 == (HMODULE)0x0) {
        iVar2 = -10;
      }
      else {
        DAT_100238f4 = GetProcAddress(DAT_10023940,&DAT_1001fe40);
        DAT_10023f14 = GetProcAddress(DAT_10023940,&DAT_1001fe3c);
      }
    }
    if (DAT_10023940 == (HMODULE)0x0) {
      iVar2 = -0xb;
    }
  }
  if (iVar2 == 0) {
    SetTimer(DAT_100238d8,0x4d2,0xfa,(TIMERPROC)0x0);
    iVar2 = (*DAT_100238f4)(DAT_1002392c + 0x1c,param_1,param_2,DAT_100238d8,DAT_1002392c + 0x14,
                            param_3,param_4,param_5,param_6,local_104);
    KillTimer(DAT_100238d8,0x4d2);
  }
  if (iVar2 < 0) {
    if ((param_3 != -1) && (param_3 != -3)) {
      wsprintfA(local_304,*(LPCSTR *)(DAT_100240b8 + 0x3c),-iVar2);
      lstrcatA(local_304,local_104);
      FUN_1000b352(local_304);
    }
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ==== FUN_10013fb4 @ 10013fb4 ==== 
 * signature: undefined __cdecl FUN_10013fb4(LPSTR param_1, int param_2)
 * body: 10013fb4-1001400f
 */

void __cdecl FUN_10013fb4(LPSTR param_1,int param_2)

{
  int iVar1;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  wsprintfA(param_1,s__02d__02d__02d__d__02d__02d_1001f534,(uint)local_14.wMonth,(uint)local_14.wDay
            ,(uint)local_14.wYear % 100,(uint)local_14.wHour,(uint)local_14.wMinute,
            (uint)local_14.wSecond);
  if (param_2 == 0) {
    iVar1 = lstrlenA(param_1);
    param_1[iVar1 + -3] = '\0';
  }
  return;
}



/* ==== FUN_10014010 @ 10014010 ==== 
 * signature: bool __cdecl FUN_10014010(undefined4 param_1, LPDWORD param_2)
 * body: 10014010-1001404b
 */

bool __cdecl FUN_10014010(undefined4 param_1,LPDWORD param_2)

{
  BOOL BVar1;
  CHAR local_14 [16];
  
  wsprintfA(local_14,&DAT_1001f6c0,param_1);
  BVar1 = GetDiskFreeSpaceA(local_14,param_2 + 2,param_2 + 3,param_2 + 1,param_2);
  return (bool)('\x01' - (BVar1 != 0));
}



/* ==== FUN_1001404c @ 1001404c ==== 
 * signature: bool __cdecl FUN_1001404c(undefined4 * param_1, int param_2, int param_3)
 * body: 1001404c-1001413d
 */

bool __cdecl FUN_1001404c(undefined4 *param_1,int param_2,int param_3)

{
  CHAR CVar1;
  LPSTR lpFileName;
  int iVar2;
  HANDLE hObject;
  LPCSTR lpString2;
  CHAR local_108 [256];
  CHAR local_8 [3];
  undefined1 local_5;
  
  lpFileName = (LPSTR)FUN_10015d50(0x100);
  *param_1 = lpFileName;
  if (param_2 == 0) {
    GetWindowsDirectoryA(local_108,0x100);
    CVar1 = FUN_10014819(local_108);
    if (CVar1 != '\\') {
      lstrcatA(local_108,&DAT_1001f314);
    }
    FUN_1001393a(lpFileName,local_108);
  }
  else {
    local_5 = 0;
    local_8[0] = 'G';
    local_8[1] = 0x4c;
    local_8[2] = (CHAR)param_2;
    FUN_100039fd(lpFileName,local_8);
    if (param_2 == 0x5f) {
      DeleteFileA(lpFileName);
      lpString2 = &DAT_1001f670;
      iVar2 = lstrlenA(lpFileName);
      lstrcpyA(lpFileName + iVar2 + -3,lpString2);
    }
  }
  hObject = (HANDLE)FUN_1001223a(lpFileName,1,1);
  if (-1 < (int)hObject) {
    FUN_10013192(*(undefined4 *)(DAT_1002392c + 0x18),hObject,
                 *(undefined4 *)(DAT_1002392c + 0x44 + param_3 * 4),0);
    CloseHandle(hObject);
  }
  else {
    FUN_1000b352(PTR_s_Internal_Error_1001f048);
  }
  return -1 >= (int)hObject;
}



/* ==== FUN_1001413e @ 1001413e ==== 
 * signature: undefined __cdecl FUN_1001413e(int param_1, int param_2)
 * body: 1001413e-1001435c
 */

void __cdecl FUN_1001413e(int param_1,int param_2)

{
  CHAR CVar1;
  HANDLE hObject;
  DWORD DVar2;
  LPCSTR pCVar3;
  CHAR local_304 [512];
  byte local_104 [256];
  
  if ((DAT_10023f80 != (byte *)0x0) && (FUN_10009eff(local_104,DAT_10023f80), local_104[0] != 0)) {
    FUN_1001054d(&DAT_1001f3e8,local_304);
    CVar1 = FUN_10014819(local_304);
    if (CVar1 != '\\') {
      lstrcatA(local_304,&DAT_1001f314);
    }
    lstrcatA(local_304,(LPCSTR)local_104);
    hObject = (HANDLE)FUN_1001223a(local_304,1,1);
    if (-1 < (int)hObject) {
      FUN_10009eff(local_104,DAT_10023f88);
      FUN_100105d2(&DAT_1001f70c,(LPCSTR)local_104);
      FUN_10009eff(local_104,DAT_10023f8c);
      FUN_100105d2(&DAT_1001fe8c,(LPCSTR)local_104);
      FUN_10009eff(local_104,DAT_10023f90);
      FUN_100105d2(&DAT_1001fe88,(LPCSTR)local_104);
      FUN_10009eff(local_104,DAT_10023f94);
      FUN_100105d2(&DAT_1001fe84,(LPCSTR)local_104);
      FUN_10013fb4((LPSTR)local_104,1);
      FUN_100105d2(&DAT_1001fe80,(LPCSTR)local_104);
      if ((param_2 == -1) && (param_1 == 0)) {
        FUN_100105d2(&DAT_1001fe74,s_Success_1001fe78);
        pCVar3 = &DAT_10023314;
      }
      else {
        FUN_100105d2(&DAT_1001fe74,s_Failed_1001fe6c);
        pCVar3 = DAT_100238d4;
        if (*DAT_100238d4 == '\0') {
          if (*(char *)(DAT_1002392c + 0x20) == '\0') {
            pCVar3 = *(LPCSTR *)(DAT_100240b8 + 4);
          }
          else if (*(char *)(DAT_1002392c + 0x20) == '\x01') {
            pCVar3 = *(LPCSTR *)(DAT_100240b8 + 8);
          }
          else {
            pCVar3 = *(LPCSTR *)(DAT_100240b8 + 0x1c);
          }
        }
      }
      FUN_100105d2(&DAT_1001fe68,pCVar3);
      if (param_1 != 0) {
        FUN_100105d2(&DAT_1001fe68,s_Installation_terminated_abnormal_1001fe44);
      }
      FUN_10009f15(DAT_10024170,DAT_10023f84,0x7800);
      DVar2 = lstrlenA((LPCSTR)DAT_10024170);
      FileWrite(hObject,DAT_10024170,DVar2);
      CloseHandle(hObject);
    }
  }
  return;
}



/* ==== FUN_1001435d @ 1001435d ==== 
 * signature: undefined4 __cdecl FUN_1001435d(HKEY param_1, LPBYTE param_2)
 * body: 1001435d-10014711
 */

undefined4 __cdecl FUN_1001435d(HKEY param_1,LPBYTE param_2)

{
  byte bVar1;
  byte *pbVar2;
  LSTATUS LVar3;
  int iVar4;
  HKEY pHVar5;
  CHAR *lpString2;
  byte local_914 [1024];
  HKEY__ local_514 [128];
  CHAR local_314 [256];
  byte local_214 [256];
  char local_114 [256];
  char *local_14;
  DWORD local_10;
  CHAR local_c [4];
  HKEY local_8;
  
  if (DAT_10023e9c == '\x01') {
    return 0;
  }
  bVar1 = *(byte *)(DAT_10023310 + 1);
  pHVar5 = (HKEY)(bVar1 & 0x1f);
  FUN_10009f15((byte *)param_1,(byte *)(DAT_10023310 + 3),0x200);
  pbVar2 = (byte *)FUN_1000bc0e((char *)(DAT_10023310 + 3));
  FUN_10009f15(DAT_10024170,pbVar2,0x7800);
  pbVar2 = (byte *)FUN_1000bc0e((char *)pbVar2);
  FUN_10009eff(local_214,pbVar2);
  if ((*(byte *)(DAT_10023310 + 1) & 0x80) != 0) {
    if (((bVar1 & 0x1f) == 0) || (DAT_100241e8 != 0)) {
      if ((*(byte *)(DAT_10023310 + 1) & 0x40) == 0) {
        FUN_10004951(param_1,(int)pHVar5);
      }
      else {
        LVar3 = RegOpenKeyExA(*(HKEY *)(&DAT_1001f160 + (int)pHVar5 * 4),(LPCSTR)param_1,0,0x1f,
                              &local_8);
        if (LVar3 == 0) {
          RegDeleteValueA(local_8,(LPCSTR)local_214);
          RegCloseKey(local_8);
        }
      }
    }
    goto LAB_100146bd;
  }
  lstrcpyA(local_c,&DAT_1001f4b0);
  local_14 = (char *)FUN_10004d80(pHVar5,(LPCSTR)param_1,param_2,(char *)local_214,local_c,0x400,0);
  if (local_14 == (char *)0x0) {
    if ((*(byte *)(DAT_10023310 + 1) & 0x20) != 0) {
      return 0;
    }
  }
  else {
    local_c[0] = '0';
    *param_2 = '\0';
  }
  if (DAT_100241e8 == 0) {
    if (((bVar1 & 0x1f) == 0) && (*(char *)(DAT_10023310 + 2) == '\0')) {
      RegSetValueA((HKEY)0x80000000,(LPCSTR)param_1,1,(LPCSTR)DAT_10024170,0);
    }
    goto LAB_100146bd;
  }
  DAT_10023f60 = 1;
  FUN_10014712((int)*(char *)(DAT_10023310 + 2),DAT_10024170,(int *)&local_10);
  lpString2 = (CHAR *)(~-(uint)((*(byte *)(DAT_10023310 + 1) & 0x40) != 0) & (uint)local_214);
  iVar4 = FUN_10004d00((DWORD)pHVar5,param_1,lpString2,(int)*(char *)(DAT_10023310 + 2),DAT_10024170
                       ,local_10,1);
  if (iVar4 != 0) {
    return 1;
  }
  if ((*DAT_10023f30 != '\0') && (pHVar5 == (HKEY)0x1)) {
    iVar4 = (int)local_c[0];
    wsprintfA((LPSTR)local_514,s__s__s_Registry__s_1001fe9c,
              PTR_s_Software_Wise_Solutions_WAMUser_1001f054,DAT_10023f30,param_1);
    FUN_10004d00(2,local_514,lpString2,(int)*(char *)(DAT_10023310 + 2),DAT_10024170,local_10,0);
    if (lpString2 == (LPCSTR)0x0) {
LAB_10014625:
      local_8 = (HKEY)0x1;
    }
    else {
      wsprintfA(local_314,&DAT_1001fe94,lpString2);
      lstrcpyA(local_114,lpString2);
      if (local_114[0] == '*') {
        wsprintfA(local_114,&DAT_1001fe90,lpString2);
      }
      if (local_14 == (char *)0x0) {
        if (*lpString2 == '*') {
          lpString2 = local_114;
          local_14 = local_314;
        }
      }
      else {
        lpString2 = local_314;
        local_14 = local_114;
      }
      local_8 = (HKEY)0x0;
      LVar3 = FUN_10004d80((HKEY)0x1,(LPCSTR)local_514,local_914,lpString2,local_c,0x400,0);
      if ((LVar3 != 0) &&
         (LVar3 = FUN_10004d80((HKEY)0x1,(LPCSTR)local_514,local_914,local_14,local_c,0x400,0),
         LVar3 != 0)) goto LAB_10014625;
    }
    if (local_8 != (HKEY)0x0) {
      lstrcpyA((LPSTR)local_914,(LPCSTR)param_2);
      FUN_10014712(iVar4 + -0x30,local_914,(int *)&local_10);
      FUN_10004d00(1,local_514,lpString2,iVar4 + -0x30,local_914,local_10,0);
    }
    DAT_100239a8 = 1;
  }
  if (*(char *)(DAT_10023310 + 2) == '\x03') {
    wsprintfA((LPSTR)DAT_10024170,&DAT_1001f4ac,*(undefined4 *)DAT_10024170);
  }
LAB_100146bd:
  if ((*(byte *)(DAT_10023310 + 1) & 0x80) == 0) {
    if (*(char *)(DAT_10023310 + 2) == '\x04') {
      pbVar2 = (byte *)FUN_1000bc0e((char *)(DAT_10023310 + 3));
      FUN_10009f15(DAT_10024170,pbVar2,0x7800);
    }
    FUN_1000aef7((LPCSTR)param_1,(LPCSTR)DAT_10024170,(char *)param_2,(char *)local_214,local_c);
  }
  return 0;
}



/* ==== FUN_10014712 @ 10014712 ==== 
 * signature: undefined __cdecl FUN_10014712(int param_1, byte * param_2, int * param_3)
 * body: 10014712-100147f9
 */

void __cdecl FUN_10014712(int param_1,byte *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar4 = lstrlenA((LPCSTR)param_2);
  *param_3 = iVar4 + 1;
  if (param_1 == 3) {
    iVar4 = FUN_10016190(param_2);
    *(int *)param_2 = iVar4;
    *param_3 = 4;
  }
  else if (param_1 == 2) {
    bVar3 = *param_2;
    while (bVar3 != 0) {
      if (*param_2 == 0x7f) {
        *param_2 = 0;
      }
      param_2 = param_2 + 1;
      bVar3 = *param_2;
    }
    param_2[1] = 0;
  }
  else if (param_1 == 4) {
    bVar2 = false;
    param_1 = 0;
    *param_3 = 0;
    for (pbVar6 = param_2; *pbVar6 != 0; pbVar6 = pbVar6 + 1) {
      uVar5 = FUN_10015b60((int)(char)*pbVar6);
      bVar3 = (byte)uVar5;
      *pbVar6 = bVar3;
      if (DAT_100200d4 < 2) {
        uVar5 = (byte)PTR_DAT_1001fec8[(char)bVar3 * 2] & 4;
      }
      else {
        uVar5 = FUN_10015ac0((int)(char)bVar3,4);
      }
      if ((uVar5 != 0) || (('@' < (char)*pbVar6 && ((char)*pbVar6 < 'G')))) {
        bVar3 = *pbVar6;
        if (bVar2) {
          if ((char)bVar3 < ':') {
            cVar1 = -0x30;
          }
          else {
            cVar1 = -0x37;
          }
          *param_2 = param_1._3_1_ << 4 | bVar3 + cVar1;
          *param_3 = *param_3 + 1;
          bVar2 = false;
          param_2 = param_2 + 1;
        }
        else {
          if ((char)bVar3 < ':') {
            bVar3 = bVar3 - 0x30;
          }
          else {
            bVar3 = bVar3 - 0x37;
          }
          param_1 = (uint)bVar3 << 0x18;
          bVar2 = true;
        }
      }
    }
  }
  return;
}



/* ==== FUN_100147fa @ 100147fa ==== 
 * signature: LPCSTR __cdecl FUN_100147fa(LPCSTR param_1, int param_2)
 * body: 100147fa-10014818
 */

LPCSTR __cdecl FUN_100147fa(LPCSTR param_1,int param_2)

{
  while( true ) {
    if (*param_1 == '\0') {
      return (LPCSTR)0x0;
    }
    if (*param_1 == param_2) break;
    param_1 = CharNextA(param_1);
  }
  return param_1;
}



/* ==== FUN_10014819 @ 10014819 ==== 
 * signature: CHAR __cdecl FUN_10014819(LPCSTR param_1)
 * body: 10014819-10014833
 */

CHAR __cdecl FUN_10014819(LPCSTR param_1)

{
  LPCSTR lpsz;
  LPCSTR pCVar1;
  
  pCVar1 = param_1;
  while (lpsz = param_1, *lpsz != '\0') {
    param_1 = CharNextA(lpsz);
    pCVar1 = lpsz;
  }
  return *pCVar1;
}



/* ==== FUN_10014834 @ 10014834 ==== 
 * signature: LPCSTR __cdecl FUN_10014834(LPCSTR param_1, int param_2)
 * body: 10014834-10014858
 */

LPCSTR __cdecl FUN_10014834(LPCSTR param_1,int param_2)

{
  LPCSTR pCVar1;
  
  pCVar1 = param_1;
  for (; *param_1 != '\0'; param_1 = CharNextA(param_1)) {
    if (*param_1 == param_2) {
      pCVar1 = param_1;
    }
  }
  return pCVar1;
}



/* ==== FUN_10014859 @ 10014859 ==== 
 * signature: LPCSTR __cdecl FUN_10014859(LPSTR param_1, uint * param_2)
 * body: 10014859-1001488b
 */

LPCSTR __cdecl FUN_10014859(LPSTR param_1,uint *param_2)

{
  uint *puVar1;
  LPCSTR pCVar2;
  
  pCVar2 = param_1;
  for (; *param_1 != '\0'; param_1 = CharNextA(param_1)) {
    puVar1 = FUN_10016a60(param_2,*param_1);
    if (puVar1 == (uint *)0x0) {
      pCVar2 = param_1;
    }
  }
  return pCVar2;
}



/* ==== FUN_1001488c @ 1001488c ==== 
 * signature: undefined __cdecl FUN_1001488c(LPSTR param_1, uint * param_2)
 * body: 1001488c-100148be
 */

void __cdecl FUN_1001488c(LPSTR param_1,uint *param_2)

{
  LPCSTR lpsz;
  uint *puVar1;
  
  lpsz = FUN_10014859(param_1,param_2);
  puVar1 = FUN_10016a60(param_2,*lpsz);
  if (puVar1 == (uint *)0x0) {
    lpsz = CharNextA(lpsz);
  }
  *lpsz = '\0';
  return;
}



/* ==== FUN_100148bf @ 100148bf ==== 
 * signature: undefined __stdcall FUN_100148bf(void)
 * body: 100148bf-10014930
 */

void FUN_100148bf(void)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_100240c4 != 0) {
    if ((DAT_10023fa0 != (int *)0x0) && (DAT_10023f18 == 0)) {
      iVar1 = *DAT_10023fa0;
      piVar2 = DAT_10023fa0;
      while ((-1 < iVar1 && (DAT_10024044 == 0))) {
        if (DAT_10023310 - DAT_10023fa8 == *piVar2) {
          DAT_10024044 = 1;
        }
        piVar2 = piVar2 + 1;
        iVar1 = *piVar2;
      }
      if (*DAT_10023fa0 == -1) {
        DAT_10024044 = 1;
      }
    }
    while ((*(int *)(DAT_1002392c + 0x1c) == 0 && (DAT_10024044 != 0))) {
      FUN_10012db9();
    }
  }
  return;
}



/* ==== FUN_10014931 @ 10014931 ==== 
 * signature: undefined __cdecl FUN_10014931(LPCSTR param_1, HWND param_2)
 * body: 10014931-10014d3f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10014931(LPCSTR param_1,HWND param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  INT_PTR IVar5;
  undefined3 extraout_var;
  HWND pHVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  uint nIDDlgItem;
  tagRECT *ptVar10;
  byte local_5a0 [256];
  byte local_4a0 [1024];
  byte local_a0 [128];
  tagRECT local_20;
  int local_10;
  int local_c;
  byte *local_8;
  
  FUN_100105d2(s_DLG_EVENT_TYPE_1001f690,param_1);
  if (*(int *)(&DAT_10023960 + DAT_10023924 * 4) != 0) {
    local_10 = FUN_100099b3((int)param_2);
    param_1 = (LPCSTR)((uint)param_1 & 0xffffff);
    DAT_10023920 = *(char **)(&DAT_10023960 + DAT_10023924 * 4);
    pcVar7 = DAT_10023920;
    while (cVar1 = *pcVar7, cVar1 != '\r') {
      local_c = 1;
      switch(cVar1) {
      case '\0':
        local_8 = (byte *)(pcVar7 + 2);
        FUN_1000b97c((int *)&local_8,1);
        wsprintfA((LPSTR)local_4a0,&DAT_1001feb0,(uint)(byte)DAT_10023920[1],local_8);
        _DAT_100240a0 = local_4a0;
        f12(0x10024080);
        pcVar7 = DAT_10023920;
        break;
      case '\x01':
        FUN_10004f08((DWORD)pcVar7);
        pcVar7 = DAT_10023920;
        break;
      case '\x02':
        if ((pcVar7[1] & 0x10U) != 0) {
          uVar8 = (uint)param_1._3_1_;
          param_1 = (LPCSTR)CONCAT13(param_1._3_1_ + 1,param_1._0_3_);
          *(char **)(local_a0 + uVar8 * 4) = pcVar7;
        }
        bVar2 = pcVar7[1];
        if (((bVar2 & 0x20) == 0) || ((bVar2 & 0x10) == 0)) {
          for (pcVar7 = pcVar7 + 2; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
          }
          local_8 = (byte *)(pcVar7 + 1);
          FUN_10009f15(DAT_10023e84,local_8,0x7800);
          uVar8 = FUN_1000a18e((uint)(ushort)(short)(char)(DAT_10023920[1] & 0xf),
                               (byte *)(DAT_10023920 + 2),DAT_10023e84);
          pcVar7 = DAT_10023920;
          if (uVar8 == 0) {
            if ((DAT_10023920[1] & 0x10U) != 0) {
              param_1 = (LPCSTR)CONCAT13(param_1._3_1_ + -1,param_1._0_3_);
            }
            if ((DAT_10023920[1] & 0x40U) != 0) {
              DAT_10023920[1] = DAT_10023920[1] ^ 0x60;
            }
            goto switchD_1001499e_caseD_4;
          }
        }
        else {
          local_c = 0;
          pcVar7[1] = bVar2 ^ 0x60;
          pcVar7 = DAT_10023920;
        }
        break;
      case '\x03':
        if (pcVar7[1] != '\0') {
          bVar2 = param_1._3_1_ - 1;
          param_1 = (LPCSTR)CONCAT13(bVar2,param_1._0_3_);
          local_c = 0;
          DAT_10023920 = *(char **)(local_a0 + (uint)bVar2 * 4);
          pcVar7 = DAT_10023920;
        }
        break;
      case '\x04':
switchD_1001499e_caseD_4:
        bVar3 = FUN_10014dc6();
        pcVar7 = DAT_10023920;
        if (CONCAT31(extraout_var,bVar3) != 0) {
          return;
        }
        break;
      case '\x05':
        wsprintfA((LPSTR)local_4a0,&DAT_1001feb0,(uint)(byte)pcVar7[1],pcVar7 + 2);
        FUN_10009f15(local_4a0,local_4a0,0x400);
        _DAT_100240a0 = local_4a0;
        f16(0x10024080);
        for (pcVar7 = DAT_10023920 + 2; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
        }
        local_8 = (byte *)(pcVar7 + 1);
        bVar2 = pcVar7[1];
        while (pcVar7 = DAT_10023920, bVar2 != 0) {
          FUN_10008e17(param_2,0,(byte *)(bVar2 - 1));
          local_8 = local_8 + 1;
          bVar2 = *local_8;
        }
        break;
      case '\x06':
        local_8 = (byte *)(pcVar7 + 2);
        FUN_1000b97c((int *)&local_8,2);
        FUN_10009f15(local_5a0,local_8,0x100);
        for (pbVar4 = local_8; *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
        }
        FUN_10009f15(local_4a0,pbVar4 + 1,0x400);
        IVar5 = FUN_1001277f(param_2,(char *)local_4a0,local_5a0,(int)DAT_10023920[1]);
        if (IVar5 == 2) {
          *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
          return;
        }
        pcVar7 = DAT_10023920;
        if (IVar5 == 3) goto switchD_1001499e_caseD_4;
        break;
      case '\a':
        FUN_10014e23((int *)&DAT_10023920,local_a0,(HMODULE)((int)&param_1 + 3),FUN_10014dc6,param_2
                    );
        pcVar7 = DAT_10023920;
        break;
      case '\t':
      case '\n':
      case '\v':
        pcVar9 = (char *)(*(int *)(local_10 + 1 + pcVar7[2] * 4) + local_10);
        if (cVar1 == '\t') {
          uVar8 = (uint)(byte)pcVar9[2];
          if ((*pcVar9 == '\x06') && (uVar8 - (byte)pcVar9[1] == 4)) {
            uVar8 = uVar8 - 1;
          }
          for (nIDDlgItem = (uint)(byte)pcVar9[1]; (int)nIDDlgItem < (int)uVar8;
              nIDDlgItem = nIDDlgItem + 1) {
            pHVar6 = GetDlgItem(param_2,nIDDlgItem);
            EnableWindow(pHVar6,(uint)(DAT_10023920[1] == '\0'));
            ShowWindow(pHVar6,-(uint)(DAT_10023920[1] != '\x02') & 5);
            pcVar7 = DAT_10023920;
          }
        }
        else if (cVar1 == '\n') {
          pHVar6 = GetDlgItem(param_2,(int)pcVar9[1]);
          SetFocus(pHVar6);
          pcVar7 = DAT_10023920;
        }
        else {
          FUN_10009f15(local_4a0,(byte *)(pcVar7 + 3),0x400);
          pbVar4 = local_4a0;
          pHVar6 = GetDlgItem(param_2,(int)pcVar9[1]);
          SetWindowTextA(pHVar6,(LPCSTR)pbVar4);
          pcVar7 = DAT_10023920;
          if ((*pcVar9 == '\x02') && ((pcVar9[9] & 2U) == 2)) {
            ptVar10 = &local_20;
            pHVar6 = GetDlgItem(param_2,(uint)(byte)pcVar9[1]);
            FUN_10012d5b(param_2,pHVar6,ptVar10);
            InvalidateRect(param_2,&local_20,1);
            pcVar7 = DAT_10023920;
          }
        }
      }
      if (local_c != 0) {
        FUN_10014d70();
        pcVar7 = DAT_10023920;
      }
    }
  }
  return;
}



/* ==== FUN_10014d70 @ 10014d70 ==== 
 * signature: undefined __stdcall FUN_10014d70(void)
 * body: 10014d70-10014dac
 */

void FUN_10014d70(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *DAT_10023920;
  DAT_10023920 = DAT_10023920 + (byte)(&DAT_1001f128)[cVar1];
  for (iVar2 = (uint)(byte)(&DAT_1001f148)[cVar1] * DAT_10024020 +
               (uint)(byte)(&DAT_1001f138)[cVar1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_10014dad();
  }
  return;
}



/* ==== FUN_10014dad @ 10014dad ==== 
 * signature: undefined __stdcall FUN_10014dad(void)
 * body: 10014dad-10014dc5
 */

void FUN_10014dad(void)

{
  for (; *DAT_10023920 != '\0'; DAT_10023920 = DAT_10023920 + 1) {
  }
  DAT_10023920 = DAT_10023920 + 1;
  return;
}



/* ==== FUN_10014dc6 @ 10014dc6 ==== 
 * signature: bool __stdcall FUN_10014dc6(void)
 * body: 10014dc6-10014e22
 */

bool FUN_10014dc6(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *DAT_10023920;
  iVar2 = 1;
  do {
    if (cVar1 == '\r') break;
    FUN_10014d70();
    cVar1 = *DAT_10023920;
    if ((cVar1 == '\x03') || ((cVar1 == '\x04' && (iVar2 == 1)))) {
      iVar2 = iVar2 + -1;
    }
    if ((((cVar1 == '\x06') && ((DAT_10023920[1] & 1U) != 0)) ||
        ((cVar1 == '\a' && (1 < (DAT_10023920[1] & 3U))))) || (cVar1 == '\x02')) {
      iVar2 = iVar2 + 1;
    }
  } while (iVar2 != 0);
  return *DAT_10023920 == '\r';
}



/* ==== FUN_10014e23 @ 10014e23 ==== 
 * signature: undefined4 __cdecl FUN_10014e23(int * param_1, byte * param_2, HMODULE param_3, undefined * param_4, undefined4 param_5)
 * body: 10014e23-100150f1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_10014e23(int *param_1,byte *param_2,HMODULE param_3,undefined *param_4,undefined4 param_5)

{
  int *piVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  int iVar4;
  HMODULE hLibModule;
  HMODULE pHVar5;
  undefined *puVar6;
  byte local_b0c [1024];
  CHAR local_70c [512];
  byte local_50c [1024];
  CHAR local_10c [256];
  char *local_c;
  char *local_8;
  
  piVar1 = param_1;
  iVar4 = *param_1;
  if ((*(byte *)(iVar4 + 1) & 3) == 3) {
    *(int *)(param_2 + (uint)(byte)param_3->unused * 4) = iVar4;
    *(char *)&param_3->unused = (char)param_3->unused + '\x01';
    iVar4 = *param_1;
    if ((*(byte *)(iVar4 + 1) & 0x10) != 0) {
      *(byte *)(iVar4 + 1) = *(byte *)(iVar4 + 1) ^ 0x30;
      return 0;
    }
  }
  FUN_10009eff(local_50c,(byte *)(iVar4 + 2));
  param_2 = (byte *)FUN_1000bc0e((char *)(*param_1 + 2));
  FUN_10009eff(local_b0c,param_2);
  local_c = FUN_1000bc0e((char *)param_2);
  local_8 = FUN_1000bc0e(local_c);
  iVar4 = *param_1;
  hLibModule = (HMODULE)0x0;
  param_1 = (int *)0x1;
  if ((*(byte *)(iVar4 + 1) & 8) == 0) {
    if (((DAT_100241e8 != 0) && ((*(byte *)(iVar4 + 1) & 0x20) == 0)) &&
       (hLibModule = LoadLibraryExA((LPCSTR)local_50c,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)) {
      param_1 = (int *)0x2;
    }
    hModule = param_3;
    if ((param_1 != (int *)0x2) &&
       (hModule = LoadLibraryA((LPCSTR)local_50c), hModule != (HMODULE)0x0)) {
      param_1 = (int *)0x2;
    }
  }
  else {
    param_1 = (int *)0x2;
    hModule = DAT_10024178;
  }
  pHVar5 = param_3;
  if (param_1 != (int *)0x2) goto LAB_10014f7e;
  if (hLibModule != (HMODULE)0x0) {
    hModule = hLibModule;
  }
  pFVar3 = GetProcAddress(hModule,(LPCSTR)local_b0c);
  if (pFVar3 == (FARPROC)0x0) {
LAB_10014f64:
    pHVar5 = (HMODULE)0x0;
  }
  else {
    param_1 = (int *)0x0;
    if (((*(byte *)(*piVar1 + 1) & 0x20) != 0) && ((*(byte *)(*piVar1 + 1) & 8) == 0)) {
      FUN_100150f2((uint)(hLibModule != (HMODULE)0x0),pFVar3,local_c,local_8,param_5);
      goto LAB_10014f64;
    }
    param_2 = (byte *)FUN_1000bc0e(local_8);
    FUN_1000b97c((int *)&param_2,1);
    FUN_10009f15(DAT_10023e84,param_2,0x7800);
    if (hLibModule == (HMODULE)0x0) {
      puVar6 = &DAT_10024080;
      DAT_1002408e = DAT_1002402c;
      _DAT_100240a0 = DAT_10023e84;
      _DAT_1002409c = DAT_1001f030;
    }
    else {
      _DAT_100241b4 = (uint)DAT_1002402c;
      _DAT_100241c4 = DAT_1001f030;
      _DAT_100241d8 = DAT_10023edc;
      _DAT_100241c8 = DAT_10023e84;
      puVar6 = &DAT_100241a0;
    }
    pHVar5 = (HMODULE)(*pFVar3)(puVar6);
    if (((*(byte *)(*piVar1 + 1) & 8) == 0) &&
       (DAT_1002402c = DAT_100241b4, hLibModule == (HMODULE)0x0)) {
      DAT_1002402c = DAT_1002408e;
    }
  }
  if (((*(byte *)(*piVar1 + 1) & 8) == 0) && (hLibModule != (HMODULE)0x0)) {
    FreeLibrary(hLibModule);
  }
LAB_10014f7e:
  if (param_1 != (int *)0x0) {
    if (param_1 == (int *)0x2) {
      wsprintfA(local_10c,s__s___s__1001feb8,local_50c,local_b0c);
    }
    else {
      lstrcpyA(local_10c,(LPCSTR)local_50c);
    }
    wsprintfA(local_70c,*(LPCSTR *)(DAT_100240b8 + 0x18),local_10c);
    FUN_1000b352(local_70c);
    return 0xfffffffe;
  }
  if (pHVar5 == (HMODULE)0x0) {
    bVar2 = *(byte *)(*piVar1 + 1) & 3;
    if (1 < bVar2) {
      if (bVar2 == 3) {
        *(char *)&param_3->unused = (char)param_3->unused + -1;
        bVar2 = *(byte *)(*piVar1 + 1);
        if ((bVar2 & 0x20) != 0) {
          *(byte *)(*piVar1 + 1) = bVar2 ^ 0x30;
        }
      }
      iVar4 = (*(code *)param_4)();
      if (iVar4 != 0) {
        return 0xffffffff;
      }
    }
  }
  else if ((*(byte *)(*piVar1 + 1) & 3) == 1) {
    return 0xfffffffe;
  }
  return 0;
}



/* ==== FUN_100150f2 @ 100150f2 ==== 
 * signature: undefined __cdecl FUN_100150f2(undefined4 param_1, undefined * param_2, char * param_3, char * param_4, undefined4 param_5)
 * body: 100150f2-1001548d
 */

void __cdecl
FUN_100150f2(undefined4 param_1,undefined *param_2,char *param_3,char *param_4,undefined4 param_5)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  LPSTR lpString1;
  byte *pbVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  byte *lpString1_00;
  LPCSTR pCVar11;
  char local_1e0 [256];
  char acStack_e0 [16];
  undefined4 auStack_d0 [16];
  undefined1 local_90 [64];
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint *local_10;
  uint *local_c;
  int local_8;
  
  local_8 = 0;
  if (*param_3 != '\0') {
    local_c = &local_50;
    local_10 = (uint *)local_90;
    pbVar4 = param_2;
    pcVar8 = param_3;
    lpString1_00 = DAT_10023e84;
    do {
      acStack_e0[local_8] = *pcVar8;
      cVar2 = pcVar8[1];
      if (cVar2 == '0') {
        pcVar7 = local_1e0;
        for (pcVar5 = pcVar8 + 2; (cVar2 = *pcVar5, cVar2 != '\0' && (cVar2 != '\r'));
            pcVar5 = pcVar5 + 1) {
          *pcVar7 = cVar2;
          pcVar7 = pcVar7 + 1;
        }
        *pcVar7 = '\0';
        pbVar4 = FUN_1000ba71(local_1e0);
        auStack_d0[local_8] = pbVar4;
      }
      else {
        pbVar10 = lpString1_00;
        if (cVar2 == '1') {
          for (pbVar4 = (byte *)(pcVar8 + 2); (bVar1 = *pbVar4, bVar1 != 0 && (bVar1 != 0xd));
              pbVar4 = pbVar4 + 1) {
            *pbVar10 = bVar1;
            pbVar10 = pbVar10 + 1;
          }
          *pbVar10 = 0;
          FUN_10009eff(lpString1_00,lpString1_00);
        }
        else if (cVar2 == '2') {
          lstrcpyA((LPSTR)lpString1_00,&DAT_1001f4b0);
        }
        else {
          if (cVar2 != '3') goto LAB_100151ca;
          wsprintfA((LPSTR)lpString1_00,&DAT_1001f4ac,param_5);
        }
        pbVar4 = lpString1_00;
        lpString1_00 = pbVar10 + 0x100;
      }
LAB_100151ca:
      if (*pcVar8 == '4') {
        *local_c = (uint)pbVar4;
        cVar2 = '4';
      }
      else {
        uVar3 = FUN_100154c2(pbVar4,pcVar8);
        *local_10 = uVar3;
        *local_c = uVar3;
        cVar2 = *pcVar8;
        if ('4' < cVar2) {
          puVar6 = local_10;
          if (cVar2 < '7') {
            puVar6 = (uint *)(local_90 + local_8 * 4 + 2);
          }
          *local_c = (uint)puVar6;
        }
      }
      while ((cVar2 != '\0' && (cVar2 != '\r'))) {
        pcVar5 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
        cVar2 = *pcVar5;
      }
      for (; (*pcVar8 == '\r' || (*pcVar8 == '\n')); pcVar8 = pcVar8 + 1) {
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
      local_c = local_c + 1;
    } while (*pcVar8 != '\0');
  }
  switch(local_8) {
  case 0:
    param_2 = (undefined *)(*(code *)param_2)();
    break;
  case 1:
    param_2 = (undefined *)(*(code *)param_2)(local_50);
    break;
  case 2:
    param_2 = (undefined *)(*(code *)param_2)(local_50,local_4c);
    break;
  case 3:
    param_2 = (undefined *)(*(code *)param_2)(local_50,local_4c,local_48);
    break;
  case 4:
    param_2 = (undefined *)(*(code *)param_2)(local_50,local_4c,local_48,local_44);
    break;
  case 5:
    param_2 = (undefined *)(*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40);
    break;
  case 6:
    param_2 = (undefined *)(*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c)
    ;
    break;
  case 7:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38);
    break;
  case 8:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38,
                                 local_34);
    break;
  case 9:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38,
                                 local_34,local_30);
    break;
  case 10:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38,
                                 local_34,local_30,local_2c);
    break;
  case 0xb:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38,
                                 local_34,local_30,local_2c,local_28);
    break;
  case 0xc:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38,
                                 local_34,local_30,local_2c,local_28,local_24);
  }
  if (*param_3 != '\0') {
    iVar9 = 0;
    do {
      if ((param_3[1] == '0') && (cVar2 = *param_3, '4' < cVar2)) {
        if (cVar2 == '5') {
          uVar3 = (uint)*(short *)(local_90 + iVar9);
LAB_100153f0:
          pCVar11 = &DAT_1001f8f8;
        }
        else {
          if (cVar2 == '6') {
            uVar3 = (uint)*(ushort *)(local_90 + iVar9);
            goto LAB_100153f0;
          }
          if (cVar2 == '7') {
            uVar3 = *(uint *)(local_90 + iVar9);
            pCVar11 = &DAT_1001f4c8;
          }
          else {
            if (cVar2 != '8') goto LAB_10015402;
            uVar3 = *(uint *)(local_90 + iVar9);
            pCVar11 = &DAT_1001f4ac;
          }
        }
        wsprintfA(*(LPSTR *)((int)auStack_d0 + iVar9),pCVar11,uVar3);
      }
LAB_10015402:
      for (; (*param_3 != '\0' && (*param_3 != '\r')); param_3 = param_3 + 1) {
      }
      for (; (*param_3 == '\r' || (*param_3 == '\n')); param_3 = param_3 + 1) {
      }
      iVar9 = iVar9 + 4;
    } while (*param_3 != '\0');
  }
  if (*param_4 == '\0') {
    return;
  }
  if (param_4[1] == '\0') {
    return;
  }
  lpString1 = FUN_1000ba71(param_4 + 1);
  cVar2 = *param_4;
  if (cVar2 == '0') {
    param_2 = (undefined *)(int)(short)param_2;
  }
  else {
    if (cVar2 != '1') {
      if (cVar2 == '2') {
        pCVar11 = &DAT_1001f4c8;
      }
      else {
        if (cVar2 != '3') {
          if (cVar2 != '4') {
            return;
          }
          lstrcpyA(lpString1,param_2);
          return;
        }
        pCVar11 = &DAT_1001f4ac;
      }
      goto LAB_1001547f;
    }
    param_2 = (undefined *)((uint)param_2 & 0xffff);
  }
  pCVar11 = &DAT_1001f8f8;
LAB_1001547f:
  wsprintfA(lpString1,pCVar11,param_2);
  return;
}



/* ==== FUN_100154c2 @ 100154c2 ==== 
 * signature: uint __cdecl FUN_100154c2(byte * param_1, char * param_2)
 * body: 100154c2-1001559f
 */

uint __cdecl FUN_100154c2(byte *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = 0;
  if ((*param_1 != 0x30) || (param_1[1] != 0x78)) {
    iVar3 = *param_2 + -0x30;
    if (0x34 < iVar3) {
      iVar3 = *param_2 + -0x35;
    }
    if (iVar3 % 2 == 1) {
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar2 = (byte)PTR_DAT_1001fec8[(char)*param_1 * 2] & 4;
        }
        else {
          uVar2 = FUN_10015ac0((int)(char)*param_1,4);
        }
        if (uVar2 == 0) break;
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar5 = (char)bVar1 + -0x30 + uVar5 * 10;
      }
    }
    else {
      uVar5 = FUN_10016190(param_1);
    }
    return uVar5;
  }
  pbVar4 = param_1 + 2;
  do {
    if (DAT_100200d4 < 2) {
      uVar2 = (byte)PTR_DAT_1001fec8[(char)*pbVar4 * 2] & 4;
    }
    else {
      uVar2 = FUN_10015ac0((int)(char)*pbVar4,4);
    }
    if (uVar2 == 0) {
      uVar2 = FUN_10015b60((int)(char)*pbVar4);
      if ((int)uVar2 < 0x41) {
        return uVar5;
      }
      uVar2 = FUN_10015b60((int)(char)*pbVar4);
      if (0x46 < (int)uVar2) {
        return uVar5;
      }
    }
    if ((char)*pbVar4 < ':') {
      iVar3 = -0x30;
    }
    else {
      iVar3 = -0x37;
    }
    uVar5 = uVar5 << 4 | (char)*pbVar4 + iVar3;
    pbVar4 = pbVar4 + 1;
  } while( true );
}



/* ==== FUN_100155a0 @ 100155a0 ==== 
 * signature: uint __cdecl FUN_100155a0(byte * param_1)
 * body: 100155a0-100157ce
 */

uint __cdecl FUN_100155a0(byte *param_1)

{
  byte *pbVar1;
  LPCSTR pCVar2;
  int iVar3;
  uint uVar4;
  byte *lpString2;
  byte local_c98 [512];
  byte local_a98 [1024];
  byte local_698 [1024];
  CHAR local_298 [512];
  _STARTUPINFOA local_98;
  _PROCESS_INFORMATION local_54;
  SHELLEXECUTEINFOA local_44;
  int local_8;
  
  if ((*param_1 & 1) == 0) {
    local_8 = ((*param_1 & 4) != 0) + 1;
  }
  else {
    local_8 = 3;
  }
  FUN_10009eff(local_698,param_1 + 1);
  pbVar1 = (byte *)FUN_1000bc0e((char *)(param_1 + 1));
  lpString2 = local_c98;
  FUN_10009eff(local_c98,pbVar1);
  local_a98[0] = 0;
  if (local_698[0] == 0) {
    lstrcpyA((LPSTR)local_698,(LPCSTR)local_c98);
    lpString2 = (byte *)0x0;
  }
  pbVar1 = (byte *)FUN_1000bc0e((char *)pbVar1);
  if (*pbVar1 != 0) {
    FUN_10009eff(local_a98,pbVar1);
    FUN_10012386((LPCSTR)local_a98,0);
  }
  if (local_698[0] != 0) {
    pCVar2 = FUN_100147fa((LPCSTR)local_698,0x5c);
    if (pCVar2 != (LPCSTR)0x0) {
      FUN_10012386((LPCSTR)local_698,0);
    }
  }
  if (local_a98[0] != 0) {
    FUN_10016240((LPCSTR)local_a98);
  }
  local_44.hwnd = DAT_100238d8;
  local_44.lpFile = (LPCSTR)local_698;
  local_44.lpDirectory = (LPCSTR)local_a98;
  local_44.cbSize = 0x3c;
  local_44.fMask = 0x40;
  local_44.lpVerb = (LPCSTR)0x0;
  local_44.nShow = local_8;
  local_44.lpParameters = (LPCSTR)lpString2;
  if (DAT_10023930 == 0) {
    _memset(&local_98,0,0x44);
    local_98.wShowWindow = (WORD)local_8;
    local_98.cb = 0x44;
    local_98.dwFlags = 1;
    wsprintfA(local_298,&DAT_1001fec0,local_698);
    if (lpString2 != (byte *)0x0) {
      lstrcatA(local_298,&DAT_1001f288);
      lstrcatA(local_298,(LPCSTR)lpString2);
    }
    iVar3 = CreateProcessA((LPCSTR)0x0,local_298,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,
                           (LPCSTR)(-(uint)(local_a98[0] != 0) & (uint)local_a98),&local_98,
                           &local_54);
    local_44.hProcess = local_54.hProcess;
  }
  else {
    iVar3 = ShellExecuteExA(&local_44);
  }
  if (iVar3 == 0) {
    wsprintfA(local_298,*(LPCSTR *)(DAT_100240b8 + 0x14),local_698);
    FUN_1000b352(local_298);
    uVar4 = -(uint)(DAT_10023e9c != '\x01') & 0xfffffffe;
  }
  else {
    if ((*param_1 & 2) != 0) {
      FUN_1000ba4c(local_44.hProcess);
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* ==== FUN_100157cf @ 100157cf ==== 
 * signature: uint __stdcall FUN_100157cf(void)
 * body: 100157cf-100157ea
 */

uint FUN_100157cf(void)

{
  BOOL BVar1;
  
  if (DAT_100238d8 == (HWND)0x0) {
    return 0;
  }
  BVar1 = IsWindowVisible(DAT_100238d8);
  return -(uint)(BVar1 != 0) & (uint)DAT_100238d8;
}



/* ==== FUN_100157eb @ 100157eb ==== 
 * signature: UINT __cdecl FUN_100157eb(int param_1, HWND param_2, HWND param_3, HWND param_4)
 * body: 100157eb-10015896
 */

UINT __cdecl FUN_100157eb(int param_1,HWND param_2,HWND param_3,HWND param_4)

{
  HDC hdc;
  HPALETTE pHVar1;
  UINT UVar2;
  
  if (((param_1 == 0x30f) || ((param_1 == 0x311 && (param_4 != param_2)))) &&
     ((DAT_10023f28 != (HPALETTE)0x0 ||
      ((*(int *)(DAT_1002392c + 0x40) != 0 || (*(int *)(DAT_1002392c + 0x3c) != 0)))))) {
    pHVar1 = DAT_10023f28;
    if ((DAT_10023f28 == (HPALETTE)0x0) &&
       (pHVar1 = *(HPALETTE *)(DAT_1002392c + 0x3c), pHVar1 == (HPALETTE)0x0)) {
      pHVar1 = *(HPALETTE *)(DAT_1002392c + 0x40);
    }
    hdc = GetDC(param_2);
    pHVar1 = SelectPalette(hdc,pHVar1,0);
    UVar2 = RealizePalette(hdc);
    if (UVar2 != 0) {
      InvalidateRect(DAT_100238d8,(RECT *)0x0,1);
      InvalidateRect(param_3,(RECT *)0x0,1);
    }
    SelectPalette(hdc,pHVar1,1);
    RealizePalette(hdc);
    ReleaseDC(param_2,hdc);
    return UVar2;
  }
  return 0;
}



/* ==== FUN_10015897 @ 10015897 ==== 
 * signature: undefined __cdecl FUN_10015897(HKEY param_1, LPCSTR param_2, int param_3, BYTE * param_4, DWORD param_5)
 * body: 10015897-100158d1
 */

void __cdecl FUN_10015897(HKEY param_1,LPCSTR param_2,int param_3,BYTE *param_4,DWORD param_5)

{
  FUN_10004d00(1,param_1,param_2,param_3,param_4,param_5,0);
  FUN_10004d00(2,param_1,param_2,param_3,param_4,param_5,0);
  return;
}



/* ==== FUN_100158d2 @ 100158d2 ==== 
 * signature: undefined __cdecl FUN_100158d2(LPCSTR param_1)
 * body: 100158d2-10015921
 */

void __cdecl FUN_100158d2(LPCSTR param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10015d50(0x100);
  *(undefined4 *)(DAT_1002417c + DAT_10024188 * 4) = uVar1;
  lstrcpyA(*(LPSTR *)(DAT_1002417c + DAT_10024188 * 4),param_1);
  FUN_10012386(*(LPCSTR *)(DAT_1002417c + DAT_10024188 * 4),0);
  DAT_10024188 = DAT_10024188 + 1;
  return;
}



/* ==== USER32.DLL::DdeUninitialize @ 10015922 ==== 
 * signature: BOOL __stdcall DdeUninitialize(DWORD idInst)
 * body: 10015922-10015927
 * thunk to: USER32.DLL::DdeUninitialize
 */

BOOL DdeUninitialize(DWORD idInst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeUninitialize(idInst);
  return BVar1;
}



/* ==== USER32.DLL::DdeFreeStringHandle @ 10015928 ==== 
 * signature: BOOL __stdcall DdeFreeStringHandle(DWORD idInst, HSZ hsz)
 * body: 10015928-1001592d
 * thunk to: USER32.DLL::DdeFreeStringHandle
 */

BOOL DdeFreeStringHandle(DWORD idInst,HSZ hsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeFreeStringHandle(idInst,hsz);
  return BVar1;
}



/* ==== USER32.DLL::DdeNameService @ 1001592e ==== 
 * signature: HDDEDATA __stdcall DdeNameService(DWORD idInst, HSZ hsz1, HSZ hsz2, UINT afCmd)
 * body: 1001592e-10015933
 * thunk to: USER32.DLL::DdeNameService
 */

HDDEDATA DdeNameService(DWORD idInst,HSZ hsz1,HSZ hsz2,UINT afCmd)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001592e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeNameService(idInst,hsz1,hsz2,afCmd);
  return pHVar1;
}



/* ==== USER32.DLL::DdeCreateStringHandleA @ 10015934 ==== 
 * signature: HSZ __stdcall DdeCreateStringHandleA(DWORD idInst, LPCSTR psz, int iCodePage)
 * body: 10015934-10015939
 * thunk to: USER32.DLL::DdeCreateStringHandleA
 */

HSZ DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage)

{
  HSZ pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateStringHandleA(idInst,psz,iCodePage);
  return pHVar1;
}



/* ==== USER32.DLL::DdeInitializeA @ 1001593a ==== 
 * signature: UINT __stdcall DdeInitializeA(LPDWORD pidInst, PFNCALLBACK pfnCallback, DWORD afCmd, DWORD ulRes)
 * body: 1001593a-1001593f
 * thunk to: USER32.DLL::DdeInitializeA
 */

UINT DdeInitializeA(LPDWORD pidInst,PFNCALLBACK pfnCallback,DWORD afCmd,DWORD ulRes)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001593a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeInitializeA(pidInst,pfnCallback,afCmd,ulRes);
  return UVar1;
}



/* ==== USER32.DLL::DdeGetData @ 10015940 ==== 
 * signature: DWORD __stdcall DdeGetData(HDDEDATA hData, LPBYTE pDst, DWORD cbMax, DWORD cbOff)
 * body: 10015940-10015945
 * thunk to: USER32.DLL::DdeGetData
 */

DWORD DdeGetData(HDDEDATA hData,LPBYTE pDst,DWORD cbMax,DWORD cbOff)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = DdeGetData(hData,pDst,cbMax,cbOff);
  return DVar1;
}



/* ==== USER32.DLL::DdeCreateDataHandle @ 10015946 ==== 
 * signature: HDDEDATA __stdcall DdeCreateDataHandle(DWORD idInst, LPBYTE pSrc, DWORD cb, DWORD cbOff, HSZ hszItem, UINT wFmt, UINT afCmd)
 * body: 10015946-1001594b
 * thunk to: USER32.DLL::DdeCreateDataHandle
 */

HDDEDATA DdeCreateDataHandle(DWORD idInst,LPBYTE pSrc,DWORD cb,DWORD cbOff,HSZ hszItem,UINT wFmt,
                            UINT afCmd)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateDataHandle(idInst,pSrc,cb,cbOff,hszItem,wFmt,afCmd);
  return pHVar1;
}



/* ==== USER32.DLL::DdeQueryStringA @ 1001594c ==== 
 * signature: DWORD __stdcall DdeQueryStringA(DWORD idInst, HSZ hsz, LPSTR psz, DWORD cchMax, int iCodePage)
 * body: 1001594c-10015951
 * thunk to: USER32.DLL::DdeQueryStringA
 */

DWORD DdeQueryStringA(DWORD idInst,HSZ hsz,LPSTR psz,DWORD cchMax,int iCodePage)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001594c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = DdeQueryStringA(idInst,hsz,psz,cchMax,iCodePage);
  return DVar1;
}



/* ==== USER32.DLL::DdeConnect @ 10015952 ==== 
 * signature: HCONV __stdcall DdeConnect(DWORD idInst, HSZ hszService, HSZ hszTopic, PCONVCONTEXT pCC)
 * body: 10015952-10015957
 * thunk to: USER32.DLL::DdeConnect
 */

HCONV DdeConnect(DWORD idInst,HSZ hszService,HSZ hszTopic,PCONVCONTEXT pCC)

{
  HCONV pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeConnect(idInst,hszService,hszTopic,pCC);
  return pHVar1;
}



/* ==== USER32.DLL::DdeClientTransaction @ 10015958 ==== 
 * signature: HDDEDATA __stdcall DdeClientTransaction(LPBYTE pData, DWORD cbData, HCONV hConv, HSZ hszItem, UINT wFmt, UINT wType, DWORD dwTimeout, LPDWORD pdwResult)
 * body: 10015958-1001595d
 * thunk to: USER32.DLL::DdeClientTransaction
 */

HDDEDATA DdeClientTransaction
                   (LPBYTE pData,DWORD cbData,HCONV hConv,HSZ hszItem,UINT wFmt,UINT wType,
                   DWORD dwTimeout,LPDWORD pdwResult)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeClientTransaction(pData,cbData,hConv,hszItem,wFmt,wType,dwTimeout,pdwResult);
  return pHVar1;
}



/* ==== USER32.DLL::DdeDisconnect @ 1001595e ==== 
 * signature: BOOL __stdcall DdeDisconnect(HCONV hConv)
 * body: 1001595e-10015963
 * thunk to: USER32.DLL::DdeDisconnect
 */

BOOL DdeDisconnect(HCONV hConv)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001595e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeDisconnect(hConv);
  return BVar1;
}



/* ==== COMDLG32.DLL::GetSaveFileNameA @ 10015964 ==== 
 * signature: BOOL __stdcall GetSaveFileNameA(LPOPENFILENAMEA param_1)
 * body: 10015964-10015969
 * thunk to: COMDLG32.DLL::GetSaveFileNameA
 */

BOOL GetSaveFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetSaveFileNameA(param_1);
  return BVar1;
}



/* ==== VERSION.DLL::VerFindFileA @ 1001596a ==== 
 * signature: DWORD __stdcall VerFindFileA(DWORD uFlags, LPCSTR szFileName, LPCSTR szWinDir, LPCSTR szAppDir, LPSTR szCurDir, PUINT lpuCurDirLen, LPSTR szDestDir, PUINT lpuDestDirLen)
 * body: 1001596a-1001596f
 * thunk to: VERSION.DLL::VerFindFileA
 */

DWORD VerFindFileA(DWORD uFlags,LPCSTR szFileName,LPCSTR szWinDir,LPCSTR szAppDir,LPSTR szCurDir,
                  PUINT lpuCurDirLen,LPSTR szDestDir,PUINT lpuDestDirLen)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001596a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = VerFindFileA(uFlags,szFileName,szWinDir,szAppDir,szCurDir,lpuCurDirLen,szDestDir,
                       lpuDestDirLen);
  return DVar1;
}



/* ==== VERSION.DLL::VerInstallFileA @ 10015970 ==== 
 * signature: DWORD __stdcall VerInstallFileA(DWORD uFlags, LPCSTR szSrcFileName, LPCSTR szDestFileName, LPCSTR szSrcDir, LPCSTR szDestDir, LPCSTR szCurDir, LPSTR szTmpFile, PUINT lpuTmpFileLen)
 * body: 10015970-10015975
 * thunk to: VERSION.DLL::VerInstallFileA
 */

DWORD VerInstallFileA(DWORD uFlags,LPCSTR szSrcFileName,LPCSTR szDestFileName,LPCSTR szSrcDir,
                     LPCSTR szDestDir,LPCSTR szCurDir,LPSTR szTmpFile,PUINT lpuTmpFileLen)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = VerInstallFileA(uFlags,szSrcFileName,szDestFileName,szSrcDir,szDestDir,szCurDir,szTmpFile,
                          lpuTmpFileLen);
  return DVar1;
}



/* ==== VERSION.DLL::VerQueryValueA @ 10015976 ==== 
 * signature: BOOL __stdcall VerQueryValueA(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID * lplpBuffer, PUINT puLen)
 * body: 10015976-1001597b
 * thunk to: VERSION.DLL::VerQueryValueA
 */

BOOL VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueA(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}



/* ==== VERSION.DLL::GetFileVersionInfoA @ 1001597c ==== 
 * signature: BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
 * body: 1001597c-10015981
 * thunk to: VERSION.DLL::GetFileVersionInfoA
 */

BOOL GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001597c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoA(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}



/* ==== MPR.DLL::WNetGetConnectionA @ 10015982 ==== 
 * signature: DWORD __stdcall WNetGetConnectionA(LPCSTR lpLocalName, LPSTR lpRemoteName, LPDWORD lpnLength)
 * body: 10015982-10015987
 * thunk to: MPR.DLL::WNetGetConnectionA
 */

DWORD WNetGetConnectionA(LPCSTR lpLocalName,LPSTR lpRemoteName,LPDWORD lpnLength)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WNetGetConnectionA(lpLocalName,lpRemoteName,lpnLength);
  return DVar1;
}



/* ==== FUN_10015990 @ 10015990 ==== 
 * signature: int __cdecl FUN_10015990(byte * param_1)
 * body: 10015990-100159b7
 */

int __cdecl FUN_10015990(byte *param_1)

{
  int iVar1;
  
  FUN_10016e20(0xc);
  iVar1 = FUN_100159c0(param_1);
  FUN_10016ea0(0xc);
  return iVar1;
}



/* ==== FUN_100159c0 @ 100159c0 ==== 
 * signature: int __cdecl FUN_100159c0(byte * param_1)
 * body: 100159c0-10015a4d
 */

int __cdecl FUN_100159c0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  LPWSTR pWVar4;
  byte *pbVar5;
  int *piVar6;
  byte *pbVar7;
  
  if (((DAT_100233b0 != (int *)0x0) ||
      (((DAT_100233b8 == 0 || (iVar2 = FUN_10016fe0(), iVar2 == 0)) && (DAT_100233b0 != (int *)0x0))
      )) && (param_1 != (byte *)0x0)) {
    uVar3 = 0xffffffff;
    pbVar5 = (byte *)*DAT_100233b0;
    pbVar7 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    pWVar4 = (LPWSTR)(~uVar3 - 1);
    piVar6 = DAT_100233b0;
    if (pbVar5 != (byte *)0x0) {
      do {
        uVar3 = 0xffffffff;
        pbVar7 = pbVar5;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
        if (((pWVar4 < (LPWSTR)(~uVar3 - 1)) && (*(byte *)((int)pWVar4 + (int)pbVar5) == 0x3d)) &&
           (iVar2 = FUN_10016fa0(pbVar5,param_1,pWVar4), iVar2 == 0)) {
          return *piVar6 + 1 + (int)pWVar4;
        }
        pbVar5 = (byte *)piVar6[1];
        piVar6 = piVar6 + 1;
        if (pbVar5 == (byte *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}



/* ==== FUN_10015a50 @ 10015a50 ==== 
 * signature: undefined __cdecl FUN_10015a50(undefined * param_1)
 * body: 10015a50-10015ab7
 */

void __cdecl FUN_10015a50(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    FUN_10016e20(9);
    pbVar1 = (byte *)FUN_100174e0(lpMem,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_10017540(local_4,(int)param_1,pbVar1);
      FUN_10016ea0(9);
      return;
    }
    FUN_10016ea0(9);
    HeapFree(DAT_1002532c,0,lpMem);
  }
  return;
}



/* ==== FUN_10015ac0 @ 10015ac0 ==== 
 * signature: uint __cdecl FUN_10015ac0(int param_1, uint param_2)
 * body: 10015ac0-10015b54
 */

uint __cdecl FUN_10015ac0(int param_1,uint param_2)

{
  int iVar1;
  BOOL BVar2;
  uint local_4;
  
  iVar1 = param_1;
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(PTR_DAT_1001fec8 + param_1 * 2) & param_2;
  }
  if ((PTR_DAT_1001fec8[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1._0_2_ = (ushort)(byte)param_1;
    iVar1 = 1;
  }
  else {
    param_1._0_2_ = CONCAT11((byte)param_1,(char)((uint)param_1 >> 8));
    param_1._3_1_ = SUB41(iVar1,3);
    param_1._0_3_ = (uint3)(ushort)param_1;
    iVar1 = 2;
  }
  BVar2 = FUN_10017bc0(1,(LPCSTR)&param_1,iVar1,(LPWORD)&local_4,0,0,1);
  if (BVar2 == 0) {
    return 0;
  }
  return local_4 & 0xffff & param_2;
}



/* ==== FUN_10015b60 @ 10015b60 ==== 
 * signature: uint __cdecl FUN_10015b60(uint param_1)
 * body: 10015b60-10015be1
 */

uint __cdecl FUN_10015b60(uint param_1)

{
  bool bVar1;
  
  if (DAT_100233f8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10025328);
    bVar1 = DAT_10025324 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10025328);
      FUN_10016e20(0x13);
    }
    param_1 = FUN_10015bf0(param_1);
    if (bVar1) {
      FUN_10016ea0(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_10025328);
  }
  return param_1;
}



/* ==== FUN_10015bf0 @ 10015bf0 ==== 
 * signature: uint __cdecl FUN_10015bf0(uint param_1)
 * body: 10015bf0-10015ced
 */

uint __cdecl FUN_10015bf0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_100233f8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_100200d4 < 2) {
        uVar2 = (byte)PTR_DAT_1001fec8[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10015ac0(param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_1001fec8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_10017d00(DAT_100233f8,0x200,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0,1);
    if (iVar4 == 0) {
      return uVar1;
    }
    if (iVar4 == 1) {
      return local_8[0] & 0xff;
    }
    param_1 = (local_8[0] >> 8 & 0xff) << 8 | local_8[0] & 0xff;
  }
  return param_1;
}



/* ==== _memset @ 10015cf0 ==== 
 * signature: void * __cdecl _memset(void * _Dst, int _Val, size_t _Size)
 * body: 10015cf0-10015d47
 * note: Library Function - Single Match  _memset  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



/* ==== FUN_10015d50 @ 10015d50 ==== 
 * signature: undefined __cdecl FUN_10015d50(uint param_1)
 * body: 10015d50-10015d63
 */

void __cdecl FUN_10015d50(uint param_1)

{
  FUN_10015d70(param_1,DAT_10023414);
  return;
}



/* ==== FUN_10015d70 @ 10015d70 ==== 
 * signature: int * __cdecl FUN_10015d70(uint param_1, int param_2)
 * body: 10015d70-10015db3
 */

int * __cdecl FUN_10015d70(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        piVar1 = FUN_10015dc0(param_1);
      }
      else {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      iVar2 = FUN_10017f60(param_1);
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}



/* ==== FUN_10015dc0 @ 10015dc0 ==== 
 * signature: int * __cdecl FUN_10015dc0(int param_1)
 * body: 10015dc0-10015e14
 */

int * __cdecl FUN_10015dc0(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if (dwBytes <= DAT_100221d4) {
    FUN_10016e20(9);
    piVar1 = FUN_100175a0(param_1 + 0xfU >> 4);
    FUN_10016ea0(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  piVar1 = HeapAlloc(DAT_1002532c,0,dwBytes);
  return piVar1;
}



/* ==== FUN_10015e20 @ 10015e20 ==== 
 * signature: uint __stdcall FUN_10015e20(void)
 * body: 10015e20-10015e4c
 */

uint FUN_10015e20(void)

{
  uint uVar1;
  DWORD *pDVar2;
  
  pDVar2 = FUN_10018030();
  uVar1 = pDVar2[5] * 0x343fd + 0x269ec3;
  pDVar2[5] = uVar1;
  return uVar1 >> 0x10 & 0x7fff;
}



/* ==== FUN_10015e50 @ 10015e50 ==== 
 * signature: undefined4 * __cdecl FUN_10015e50(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * body: 10015e50-10015eaa;10015eac-10015eb2;10015ec0-10015ee8;10015fe8-1001600d
 */

undefined4 * __cdecl FUN_10015e50(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10016007_caseD_2;
        case 3:
          goto switchD_10016007_caseD_3;
        }
        goto switchD_10016007_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10016007_caseD_0;
      case 1:
        goto switchD_10016007_caseD_1;
      case 2:
        goto switchD_10016007_caseD_2;
      case 3:
        goto switchD_10016007_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10016007_caseD_2;
            case 3:
              goto switchD_10016007_caseD_3;
            }
            goto switchD_10016007_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10016007_caseD_2;
            case 3:
              goto switchD_10016007_caseD_3;
            }
            goto switchD_10016007_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10016007_caseD_2;
            case 3:
              goto switchD_10016007_caseD_3;
            }
            goto switchD_10016007_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10016007_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10016007_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10016007_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10016007_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10015e85_caseD_2;
      case 3:
        goto switchD_10015e85_caseD_3;
      }
      goto switchD_10015e85_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10015e85_caseD_0;
    case 1:
      goto switchD_10015e85_caseD_1;
    case 2:
      goto switchD_10015e85_caseD_2;
    case 3:
      goto switchD_10015e85_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10015e85_caseD_2;
          case 3:
            goto switchD_10015e85_caseD_3;
          }
          goto switchD_10015e85_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10015e85_caseD_2;
          case 3:
            goto switchD_10015e85_caseD_3;
          }
          goto switchD_10015e85_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10015e85_caseD_2;
          case 3:
            goto switchD_10015e85_caseD_3;
          }
          goto switchD_10015e85_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10015e85_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10015e85_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10015e85_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10015e85_caseD_0:
  return param_1;
}



/* ==== FUN_10015ee9 @ 10015ee9 ==== 
 * signature: undefined __fastcall FUN_10015ee9(uint param_1, uint param_2)
 * body: 10015ee9-10015f0e
 */

void __fastcall FUN_10015ee9(uint param_1,uint param_2)

{
  uint uVar1;
  undefined1 *unaff_ESI;
  undefined4 *puVar2;
  undefined1 *unaff_EDI;
  undefined4 *puVar3;
  
  *unaff_EDI = *unaff_ESI;
  uVar1 = param_1 >> 2;
  unaff_EDI[1] = unaff_ESI[1];
  puVar2 = (undefined4 *)(unaff_ESI + 2);
  puVar3 = (undefined4 *)(unaff_EDI + 2);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x1a) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x1a);
  case 6:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x16) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x16);
  case 5:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x12) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x12);
  case 4:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xe) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xe);
  case 3:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -10) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -10);
  case 2:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -6) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -6);
  case 1:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -2) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -2);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x10015f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10015e85::switchdataD_10015f98)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x10015f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10015e85::switchdataD_10015f98)[param_2 & param_1])();
    return;
  }
}



/* ==== switchD_10015e9d::caseD_3 @ 10015f10 ==== 
 * signature: undefined caseD_3(void)
 * body: 10015f10-10015f28;10015f4c-10015f95;10015fb0-10015fba;10015fbc-10015fcc
 */

void __fastcall switchD_10015e9d::caseD_3(uint param_1,uint param_2)

{
  uint uVar1;
  undefined1 *unaff_ESI;
  undefined4 *puVar2;
  undefined1 *unaff_EDI;
  undefined4 *puVar3;
  
  *unaff_EDI = *unaff_ESI;
  uVar1 = param_1 >> 2;
  puVar2 = (undefined4 *)(unaff_ESI + 1);
  puVar3 = (undefined4 *)(unaff_EDI + 1);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x1b) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x1b);
  case 6:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x17) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x17);
  case 5:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x13) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x13);
  case 4:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xf) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xf);
  case 3:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xb) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xb);
  case 2:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -7) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -7);
  case 1:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -3) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -3);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x10015f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10015e85::switchdataD_10015f98)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x10015f22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10015e85::switchdataD_10015f98)[param_2 & param_1])();
    return;
  }
}



/* ==== FUN_10015f29 @ 10015f29 ==== 
 * signature: undefined __stdcall FUN_10015f29(void)
 * body: 10015f29-10015f2b
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_10015f29(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ==== FUN_10015f96 @ 10015f96 ==== 
 * signature: undefined4 __fastcall FUN_10015f96(undefined4 param_1, int param_2)
 * body: 10015f96-10015f97
 */

undefined4 __fastcall FUN_10015f96(undefined4 param_1,int param_2)

{
  int *in_EAX;
  int *piVar1;
  int unaff_EBP;
  
  *in_EAX = *in_EAX + param_2;
  piVar1 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),0x5f);
  *piVar1 = *piVar1 + param_2;
  *piVar1 = *piVar1 + param_2;
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== switchD_10015e85::caseD_0 @ 10015fa8 ==== 
 * signature: undefined4 __stdcall caseD_0(void)
 * body: 10015fa8-10015fae
 */

undefined4 switchD_10015e85::caseD_0(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_10015fcd @ 10015fcd ==== 
 * signature: undefined4 __stdcall FUN_10015fcd(void)
 * body: 10015fcd-10015fe6
 */

undefined4 FUN_10015fcd(void)

{
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = unaff_ESI[2];
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_1001600e @ 1001600e ==== 
 * signature: undefined __fastcall FUN_1001600e(int param_1)
 * body: 1001600e-10016018
 */

void __fastcall FUN_1001600e(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_caseD_0_100160e0)[-param_1])();
  return;
}



/* ==== FUN_10016019 @ 10016019 ==== 
 * signature: undefined4 __fastcall FUN_10016019(int param_1)
 * body: 10016019-1001603a;10016048-10016064
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */

undefined4 __fastcall FUN_10016019(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  switch(param_1) {
  case 0:
    goto switchD_10016007_caseD_0;
  case 1:
switchD_10016007_caseD_1:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    return *(undefined4 *)(unaff_EBP + 8);
  case 2:
switchD_10016007_caseD_2:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
    return *(undefined4 *)(unaff_EBP + 8);
  case 3:
switchD_10016007_caseD_3:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
    *(undefined1 *)((int)unaff_EDI + 1) = *(undefined1 *)((int)unaff_ESI + 1);
    return *(undefined4 *)(unaff_EBP + 8);
  default:
    uVar2 = param_1 - ((uint)unaff_EDI & 3);
    switch((uint)unaff_EDI & 3) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -1);
      uVar3 = uVar2 >> 2;
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -1);
      if (uVar3 < 8) {
LAB_10016010:
                    /* WARNING: Could not recover jumptable at 0x10016012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(&PTR_caseD_0_100160e0)[-(uVar2 >> 2)])();
        return uVar1;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_10016007_caseD_1;
      case 2:
        goto switchD_10016007_caseD_2;
      case 3:
        goto switchD_10016007_caseD_3;
      }
      break;
    case 2:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      uVar3 = uVar2 >> 2;
      *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -2);
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -2);
      if (uVar3 < 8) goto LAB_10016010;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_10016007_caseD_1;
      case 2:
        goto switchD_10016007_caseD_2;
      case 3:
        goto switchD_10016007_caseD_3;
      }
      break;
    case 3:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
      uVar3 = uVar2 >> 2;
      *(undefined1 *)((int)unaff_EDI + 1) = *(undefined1 *)((int)unaff_ESI + 1);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -3);
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -3);
      if (uVar3 < 8) goto LAB_10016010;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_10016007_caseD_1;
      case 2:
        goto switchD_10016007_caseD_2;
      case 3:
        goto switchD_10016007_caseD_3;
      }
    }
switchD_10016007_caseD_0:
    return *(undefined4 *)(unaff_EBP + 8);
  }
}



/* ==== FUN_10016065 @ 10016065 ==== 
 * signature: undefined __fastcall FUN_10016065(uint param_1, uint param_2)
 * body: 10016065-1001608e
 */

void __fastcall FUN_10016065(uint param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  uVar1 = param_1 >> 2;
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  puVar2 = (undefined4 *)(unaff_ESI + -2);
  puVar3 = (undefined4 *)(unaff_EDI + -2);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + 0x1a + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x1a + uVar1 * -4);
  case 6:
    *(undefined4 *)(unaff_EDI + 0x16 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x16 + uVar1 * -4);
  case 5:
    *(undefined4 *)(unaff_EDI + 0x12 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x12 + uVar1 * -4);
  case 4:
    *(undefined4 *)(unaff_EDI + 0xe + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0xe + uVar1 * -4);
  case 3:
    *(undefined4 *)(unaff_EDI + 10 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 10 + uVar1 * -4);
  case 2:
    *(undefined4 *)(unaff_EDI + 6 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 6 + uVar1 * -4);
  case 1:
    *(undefined4 *)(unaff_EDI + 2 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 2 + uVar1 * -4);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x10016127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10016007::switchdataD_10016130)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x10016088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10016007::switchdataD_10016130)[param_2 & param_1])();
    return;
  }
}



/* ==== switchD_1001602d::caseD_3 @ 10016090 ==== 
 * signature: undefined caseD_3(void)
 * body: 10016090-100160c0;100160e4-1001612d;10016148-10016154;1001616c-10016184
 */

void __fastcall switchD_1001602d::caseD_3(uint param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  uVar1 = param_1 >> 2;
  *(undefined1 *)(unaff_EDI + 1) = *(undefined1 *)(unaff_ESI + 1);
  puVar2 = (undefined4 *)(unaff_ESI + -3);
  puVar3 = (undefined4 *)(unaff_EDI + -3);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + 0x19 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x19 + uVar1 * -4);
  case 6:
    *(undefined4 *)(unaff_EDI + 0x15 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x15 + uVar1 * -4);
  case 5:
    *(undefined4 *)(unaff_EDI + 0x11 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x11 + uVar1 * -4);
  case 4:
    *(undefined4 *)(unaff_EDI + 0xd + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0xd + uVar1 * -4);
  case 3:
    *(undefined4 *)(unaff_EDI + 9 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 9 + uVar1 * -4);
  case 2:
    *(undefined4 *)(unaff_EDI + 5 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 5 + uVar1 * -4);
  case 1:
    *(undefined4 *)(unaff_EDI + 1 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 1 + uVar1 * -4);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x10016127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10016007::switchdataD_10016130)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x100160ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10016007::switchdataD_10016130)[param_2 & param_1])();
    return;
  }
}



/* ==== FUN_100160c1 @ 100160c1 ==== 
 * signature: undefined __fastcall FUN_100160c1(undefined4 param_1, int param_2)
 * body: 100160c1-100160c3
 */

void __fastcall FUN_100160c1(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  undefined3 uVar3;
  int *piVar2;
  
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  uVar1 = in(0x60);
  piVar2 = (int *)CONCAT31(uVar3,uVar1);
  *piVar2 = *piVar2 + param_2;
  uVar1 = in((short)param_2);
  piVar2 = (int *)CONCAT31(uVar3,uVar1);
  *piVar2 = *piVar2 + param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ==== FUN_1001612e @ 1001612e ==== 
 * signature: undefined4 __stdcall FUN_1001612e(void)
 * body: 1001612e-1001612f
 */

undefined4 FUN_1001612e(void)

{
  undefined1 uVar1;
  int in_stack_00000014;
  int *in_stack_0000001c;
  int in_stack_00000034;
  int *in_stack_0000003c;
  undefined1 *in_stack_00000044;
  int in_stack_00000058;
  int *in_stack_00000060;
  int in_stack_0000006c;
  int in_stack_00000078;
  int *in_stack_00000080;
  
  *in_stack_0000001c = *in_stack_0000001c + in_stack_00000014;
  *in_stack_0000003c = *in_stack_0000003c + in_stack_00000034;
  *in_stack_00000060 = *in_stack_00000060 + in_stack_00000058;
  uVar1 = in((short)in_stack_00000058);
  *in_stack_00000044 = uVar1;
  *in_stack_00000080 = *in_stack_00000080 + in_stack_00000078;
  return *(undefined4 *)(in_stack_0000006c + 8);
}



/* ==== switchD_10016007::caseD_0 @ 10016140 ==== 
 * signature: undefined4 __stdcall caseD_0(void)
 * body: 10016140-10016146
 */

undefined4 switchD_10016007::caseD_0(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_10016155 @ 10016155 ==== 
 * signature: undefined4 __stdcall FUN_10016155(void)
 * body: 10016155-1001616a
 */

undefined4 FUN_10016155(void)

{
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_10016190 @ 10016190 ==== 
 * signature: int __cdecl FUN_10016190(byte * param_1)
 * body: 10016190-10016228
 */

int __cdecl FUN_10016190(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  while( true ) {
    if (DAT_100200d4 < 2) {
      uVar2 = (byte)PTR_DAT_1001fec8[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_10015ac0((uint)*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  pbVar6 = param_1 + 1;
  if ((uVar2 == 0x2d) || (uVar4 = uVar2, uVar2 == 0x2b)) {
    uVar4 = (uint)*pbVar6;
    pbVar6 = param_1 + 2;
  }
  iVar5 = 0;
  while( true ) {
    if (DAT_100200d4 < 2) {
      uVar3 = (byte)PTR_DAT_1001fec8[uVar4 * 2] & 4;
    }
    else {
      uVar3 = FUN_10015ac0(uVar4,4);
    }
    if (uVar3 == 0) break;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar5 = (uVar4 - 0x30) + iVar5 * 10;
    uVar4 = (uint)bVar1;
  }
  if (uVar2 == 0x2d) {
    iVar5 = -iVar5;
  }
  return iVar5;
}



/* ==== FUN_10016230 @ 10016230 ==== 
 * signature: undefined __cdecl FUN_10016230(byte * param_1)
 * body: 10016230-1001623d
 */

void __cdecl FUN_10016230(byte *param_1)

{
  FUN_10016190(param_1);
  return;
}



/* ==== FUN_10016240 @ 10016240 ==== 
 * signature: undefined4 __cdecl FUN_10016240(LPCSTR param_1)
 * body: 10016240-100162d8
 */

undefined4 __cdecl FUN_10016240(LPCSTR param_1)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  CHAR local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  uint local_108 [66];
  
  BVar2 = SetCurrentDirectoryA(param_1);
  if (BVar2 != 0) {
    DVar3 = GetCurrentDirectoryA(0x105,(LPSTR)local_108);
    if (DVar3 != 0) {
      cVar1 = (char)local_108[0];
      if (((cVar1 == '\\') || (cVar1 == '/')) && (cVar1 == (char)(local_108[0] >> 8))) {
        return 0;
      }
      local_10c = '=';
      uVar4 = FUN_10018240(local_108[0] & 0xff);
      local_10b = (undefined1)uVar4;
      local_10a = 0x3a;
      local_109 = 0;
      BVar2 = SetEnvironmentVariableA(&local_10c,(LPCSTR)local_108);
      if (BVar2 != 0) {
        return 0;
      }
    }
  }
  DVar3 = GetLastError();
  FUN_100181a0(DVar3);
  return 0xffffffff;
}



/* ==== FUN_100162e0 @ 100162e0 ==== 
 * signature: char * __cdecl FUN_100162e0(char * param_1, uint param_2)
 * body: 100162e0-1001630e
 */

char * __cdecl FUN_100162e0(char *param_1,uint param_2)

{
  char *pcVar1;
  
  FUN_10016e20(0xc);
  pcVar1 = FUN_10016310(0,param_1,param_2);
  FUN_10016ea0(0xc);
  return pcVar1;
}



/* ==== FUN_10016310 @ 10016310 ==== 
 * signature: char * __cdecl FUN_10016310(uint param_1, char * param_2, uint param_3)
 * body: 10016310-1001643a
 */

char * __cdecl FUN_10016310(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char local_10c [4];
  LPSTR local_108;
  CHAR local_104 [260];
  
  if (param_1 == 0) {
    DVar4 = GetCurrentDirectoryA(0x104,local_104);
  }
  else {
    iVar2 = FUN_10016440(param_1);
    if (iVar2 == 0) {
      pDVar3 = FUN_10018230();
      *pDVar3 = 0xf;
      pDVar3 = FUN_10018220();
      *pDVar3 = 0xd;
      return (char *)0x0;
    }
    local_10c[0] = (char)param_1 + '@';
    local_10c[1] = 0x3a;
    local_10c[2] = 0x2e;
    local_10c[3] = 0;
    DVar4 = GetFullPathNameA(local_10c,0x104,local_104,&local_108);
  }
  if ((DVar4 == 0) || (uVar5 = DVar4 + 1, 0x104 < uVar5)) {
    return (char *)0x0;
  }
  if (param_2 == (char *)0x0) {
    if ((int)uVar5 <= (int)param_3) {
      uVar5 = param_3;
    }
    param_2 = (char *)FUN_10015d50(uVar5);
    if (param_2 == (char *)0x0) {
      pDVar3 = FUN_10018220();
      *pDVar3 = 0xc;
      return (char *)0x0;
    }
  }
  else if ((int)param_3 < (int)uVar5) {
    pDVar3 = FUN_10018220();
    *pDVar3 = 0x22;
    return (char *)0x0;
  }
  uVar5 = 0xffffffff;
  pcVar7 = local_104;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = param_2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return param_2;
}



/* ==== FUN_10016440 @ 10016440 ==== 
 * signature: undefined4 __cdecl FUN_10016440(uint param_1)
 * body: 10016440-1001647f
 */

undefined4 __cdecl FUN_10016440(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  cVar1 = (char)param_1;
  param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
  UVar2 = GetDriveTypeA((LPCSTR)&param_1);
  if ((UVar2 != 0) && (UVar2 != 1)) {
    return 1;
  }
  return 0;
}



/* ==== FUN_10016480 @ 10016480 ==== 
 * signature: undefined __stdcall FUN_10016480(void)
 * body: 10016480-100164ae
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10016480(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



/* ==== FUN_100164b0 @ 100164b0 ==== 
 * signature: int __stdcall FUN_100164b0(void)
 * body: 100164b0-100164f2
 */

int FUN_100164b0(void)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  uint local_104 [65];
  
  iVar3 = 0;
  DVar1 = GetCurrentDirectoryA(0x104,(LPSTR)local_104);
  if ((DVar1 != 0) && ((char)(local_104[0] >> 8) == ':')) {
    uVar2 = FUN_10015b60(local_104[0] & 0xff);
    iVar3 = uVar2 - 0x40;
  }
  return iVar3;
}



/* ==== FUN_10016500 @ 10016500 ==== 
 * signature: undefined4 __cdecl FUN_10016500(int param_1)
 * body: 10016500-1001657f
 */

undefined4 __cdecl FUN_10016500(int param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  
  iVar1 = param_1;
  if ((0 < param_1) && (param_1 < 0x20)) {
    FUN_10016e20(0xc);
    iVar2 = param_1;
    param_1 = CONCAT31(0x3a,(char)iVar1 + '@');
    iVar1 = param_1;
    param_1._3_1_ = SUB41(iVar2,3);
    param_1._0_3_ = (uint3)(ushort)iVar1;
    BVar3 = SetCurrentDirectoryA((LPCSTR)&param_1);
    if (BVar3 != 0) {
      FUN_10016ea0(0xc);
      return 0;
    }
    DVar4 = GetLastError();
    FUN_100181a0(DVar4);
    FUN_10016ea0(0xc);
    return 0xffffffff;
  }
  pDVar5 = FUN_10018220();
  *pDVar5 = 0xd;
  pDVar5 = FUN_10018230();
  *pDVar5 = 0xf;
  return 0xffffffff;
}



/* ==== FUN_10016580 @ 10016580 ==== 
 * signature: int __cdecl FUN_10016580(int param_1)
 * body: 10016580-1001658a
 */

int __cdecl FUN_10016580(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}



/* ==== _strncpy @ 10016590 ==== 
 * signature: char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
 * body: 10016590-1001668d
 * note: Library Function - Single Match  _strncpy  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x100165ce;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1001660b;
        goto LAB_10016679;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x10016675:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10016679:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1001660b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10016675;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10016675;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10016675;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x100165ce:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1001660b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* ==== FUN_10016690 @ 10016690 ==== 
 * signature: undefined4 * __cdecl FUN_10016690(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * body: 10016690-100166ea;100166ec-100166f2;10016700-10016728;10016828-1001684d
 */

undefined4 * __cdecl FUN_10016690(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10016847_caseD_2;
        case 3:
          goto switchD_10016847_caseD_3;
        }
        goto switchD_10016847_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10016847_caseD_0;
      case 1:
        goto switchD_10016847_caseD_1;
      case 2:
        goto switchD_10016847_caseD_2;
      case 3:
        goto switchD_10016847_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10016847_caseD_2;
            case 3:
              goto switchD_10016847_caseD_3;
            }
            goto switchD_10016847_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10016847_caseD_2;
            case 3:
              goto switchD_10016847_caseD_3;
            }
            goto switchD_10016847_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10016847_caseD_2;
            case 3:
              goto switchD_10016847_caseD_3;
            }
            goto switchD_10016847_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10016847_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10016847_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10016847_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10016847_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_100166c5_caseD_2;
      case 3:
        goto switchD_100166c5_caseD_3;
      }
      goto switchD_100166c5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100166c5_caseD_0;
    case 1:
      goto switchD_100166c5_caseD_1;
    case 2:
      goto switchD_100166c5_caseD_2;
    case 3:
      goto switchD_100166c5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100166c5_caseD_2;
          case 3:
            goto switchD_100166c5_caseD_3;
          }
          goto switchD_100166c5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100166c5_caseD_2;
          case 3:
            goto switchD_100166c5_caseD_3;
          }
          goto switchD_100166c5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100166c5_caseD_2;
          case 3:
            goto switchD_100166c5_caseD_3;
          }
          goto switchD_100166c5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_100166c5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100166c5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100166c5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100166c5_caseD_0:
  return param_1;
}



/* ==== FUN_10016729 @ 10016729 ==== 
 * signature: undefined __fastcall FUN_10016729(uint param_1, uint param_2)
 * body: 10016729-1001674e
 */

void __fastcall FUN_10016729(uint param_1,uint param_2)

{
  uint uVar1;
  undefined1 *unaff_ESI;
  undefined4 *puVar2;
  undefined1 *unaff_EDI;
  undefined4 *puVar3;
  
  *unaff_EDI = *unaff_ESI;
  uVar1 = param_1 >> 2;
  unaff_EDI[1] = unaff_ESI[1];
  puVar2 = (undefined4 *)(unaff_ESI + 2);
  puVar3 = (undefined4 *)(unaff_EDI + 2);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x1a) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x1a);
  case 6:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x16) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x16);
  case 5:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x12) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x12);
  case 4:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xe) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xe);
  case 3:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -10) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -10);
  case 2:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -6) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -6);
  case 1:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -2) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -2);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x100167cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_100166c5::switchdataD_100167d8)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x10016748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_100166c5::switchdataD_100167d8)[param_2 & param_1])();
    return;
  }
}



/* ==== switchD_100166dd::caseD_3 @ 10016750 ==== 
 * signature: undefined caseD_3(void)
 * body: 10016750-10016768;1001678c-100167d5;100167f0-100167fa;100167fc-1001680c
 */

void __fastcall switchD_100166dd::caseD_3(uint param_1,uint param_2)

{
  uint uVar1;
  undefined1 *unaff_ESI;
  undefined4 *puVar2;
  undefined1 *unaff_EDI;
  undefined4 *puVar3;
  
  *unaff_EDI = *unaff_ESI;
  uVar1 = param_1 >> 2;
  puVar2 = (undefined4 *)(unaff_ESI + 1);
  puVar3 = (undefined4 *)(unaff_EDI + 1);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x1b) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x1b);
  case 6:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x17) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x17);
  case 5:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x13) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x13);
  case 4:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xf) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xf);
  case 3:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xb) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xb);
  case 2:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -7) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -7);
  case 1:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -3) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -3);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x100167cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_100166c5::switchdataD_100167d8)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x10016762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_100166c5::switchdataD_100167d8)[param_2 & param_1])();
    return;
  }
}



/* ==== FUN_10016769 @ 10016769 ==== 
 * signature: undefined __stdcall FUN_10016769(void)
 * body: 10016769-1001676b
 */

void FUN_10016769(void)

{
  return;
}



/* ==== FUN_100167d6 @ 100167d6 ==== 
 * signature: undefined __stdcall FUN_100167d6(void)
 * body: 100167d6-100167d7
 */

void FUN_100167d6(void)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar6;
  char extraout_CL;
  byte extraout_CH;
  uint uVar7;
  int unaff_EBX;
  short unaff_SI;
  undefined2 in_DS;
  undefined8 uVar8;
  byte bVar5;
  
  uVar8 = func_0x00116944();
  uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
  piVar2 = (int *)segment(in_DS,(short)unaff_EBX + unaff_SI);
  *piVar2 = *piVar2 + uVar7;
  puVar3 = (uint *)segment(in_DS,(short)unaff_EBX + unaff_SI);
  uVar6 = *puVar3;
  *puVar3 = *puVar3 + uVar7;
  pbVar1 = (byte *)((int)uVar8 + 1);
  bVar4 = *pbVar1;
  bVar5 = *pbVar1;
  *pbVar1 = bVar5 + extraout_CH + CARRY4(uVar6,uVar7);
  *(char *)(unaff_EBX + 0x5f5e0845) =
       *(char *)(unaff_EBX + 0x5f5e0845) + extraout_CL +
       (CARRY1(bVar4,extraout_CH) || CARRY1(bVar5 + extraout_CH,CARRY4(uVar6,uVar7)));
  return;
}



/* ==== switchD_100166c5::caseD_0 @ 100167e8 ==== 
 * signature: undefined4 __stdcall caseD_0(void)
 * body: 100167e8-100167ee
 */

undefined4 switchD_100166c5::caseD_0(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_1001680d @ 1001680d ==== 
 * signature: undefined4 __stdcall FUN_1001680d(void)
 * body: 1001680d-10016826
 */

undefined4 FUN_1001680d(void)

{
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = unaff_ESI[2];
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_1001684e @ 1001684e ==== 
 * signature: undefined __fastcall FUN_1001684e(int param_1)
 * body: 1001684e-10016858
 */

void __fastcall FUN_1001684e(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_caseD_0_10016920)[-param_1])();
  return;
}



/* ==== FUN_10016859 @ 10016859 ==== 
 * signature: undefined4 __fastcall FUN_10016859(int param_1)
 * body: 10016859-1001687a;10016888-100168a4
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */

undefined4 __fastcall FUN_10016859(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  switch(param_1) {
  case 0:
    goto switchD_10016847_caseD_0;
  case 1:
switchD_10016847_caseD_1:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    return *(undefined4 *)(unaff_EBP + 8);
  case 2:
switchD_10016847_caseD_2:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
    return *(undefined4 *)(unaff_EBP + 8);
  case 3:
switchD_10016847_caseD_3:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
    *(undefined1 *)((int)unaff_EDI + 1) = *(undefined1 *)((int)unaff_ESI + 1);
    return *(undefined4 *)(unaff_EBP + 8);
  default:
    uVar2 = param_1 - ((uint)unaff_EDI & 3);
    switch((uint)unaff_EDI & 3) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -1);
      uVar3 = uVar2 >> 2;
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -1);
      if (uVar3 < 8) {
LAB_10016850:
                    /* WARNING: Could not recover jumptable at 0x10016852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(&PTR_caseD_0_10016920)[-(uVar2 >> 2)])();
        return uVar1;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_10016847_caseD_1;
      case 2:
        goto switchD_10016847_caseD_2;
      case 3:
        goto switchD_10016847_caseD_3;
      }
      break;
    case 2:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      uVar3 = uVar2 >> 2;
      *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -2);
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -2);
      if (uVar3 < 8) goto LAB_10016850;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_10016847_caseD_1;
      case 2:
        goto switchD_10016847_caseD_2;
      case 3:
        goto switchD_10016847_caseD_3;
      }
      break;
    case 3:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
      uVar3 = uVar2 >> 2;
      *(undefined1 *)((int)unaff_EDI + 1) = *(undefined1 *)((int)unaff_ESI + 1);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -3);
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -3);
      if (uVar3 < 8) goto LAB_10016850;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_10016847_caseD_1;
      case 2:
        goto switchD_10016847_caseD_2;
      case 3:
        goto switchD_10016847_caseD_3;
      }
    }
switchD_10016847_caseD_0:
    return *(undefined4 *)(unaff_EBP + 8);
  }
}



/* ==== FUN_100168a5 @ 100168a5 ==== 
 * signature: undefined __fastcall FUN_100168a5(uint param_1, uint param_2)
 * body: 100168a5-100168ce
 */

void __fastcall FUN_100168a5(uint param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  uVar1 = param_1 >> 2;
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  puVar2 = (undefined4 *)(unaff_ESI + -2);
  puVar3 = (undefined4 *)(unaff_EDI + -2);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + 0x1a + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x1a + uVar1 * -4);
  case 6:
    *(undefined4 *)(unaff_EDI + 0x16 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x16 + uVar1 * -4);
  case 5:
    *(undefined4 *)(unaff_EDI + 0x12 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x12 + uVar1 * -4);
  case 4:
    *(undefined4 *)(unaff_EDI + 0xe + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0xe + uVar1 * -4);
  case 3:
    *(undefined4 *)(unaff_EDI + 10 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 10 + uVar1 * -4);
  case 2:
    *(undefined4 *)(unaff_EDI + 6 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 6 + uVar1 * -4);
  case 1:
    *(undefined4 *)(unaff_EDI + 2 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 2 + uVar1 * -4);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x10016967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10016847::switchdataD_10016970)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x100168c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10016847::switchdataD_10016970)[param_2 & param_1])();
    return;
  }
}



/* ==== switchD_1001686d::caseD_3 @ 100168d0 ==== 
 * signature: undefined caseD_3(void)
 * body: 100168d0-10016900;10016924-1001696d;10016988-10016994;100169ac-100169c4
 */

void __fastcall switchD_1001686d::caseD_3(uint param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  uVar1 = param_1 >> 2;
  *(undefined1 *)(unaff_EDI + 1) = *(undefined1 *)(unaff_ESI + 1);
  puVar2 = (undefined4 *)(unaff_ESI + -3);
  puVar3 = (undefined4 *)(unaff_EDI + -3);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + 0x19 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x19 + uVar1 * -4);
  case 6:
    *(undefined4 *)(unaff_EDI + 0x15 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x15 + uVar1 * -4);
  case 5:
    *(undefined4 *)(unaff_EDI + 0x11 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x11 + uVar1 * -4);
  case 4:
    *(undefined4 *)(unaff_EDI + 0xd + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0xd + uVar1 * -4);
  case 3:
    *(undefined4 *)(unaff_EDI + 9 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 9 + uVar1 * -4);
  case 2:
    *(undefined4 *)(unaff_EDI + 5 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 5 + uVar1 * -4);
  case 1:
    *(undefined4 *)(unaff_EDI + 1 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 1 + uVar1 * -4);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x10016967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10016847::switchdataD_10016970)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x100168fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10016847::switchdataD_10016970)[param_2 & param_1])();
    return;
  }
}



/* ==== FUN_10016901 @ 10016901 ==== 
 * signature: undefined __fastcall FUN_10016901(int * param_1, int param_2)
 * body: 10016901-10016903
 */

void __fastcall FUN_10016901(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  uint in_EAX;
  undefined3 uVar7;
  int *piVar6;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  piVar6 = (int *)(in_EAX & 0xffffff69);
  *piVar6 = *piVar6 + param_2;
  uVar7 = (undefined3)((uint)piVar6 >> 8);
  cVar5 = (char)piVar6 + -0x69;
  piVar6 = (int *)CONCAT31(uVar7,cVar5);
  *piVar6 = *piVar6 + param_2;
  piVar6 = (int *)(CONCAT31(uVar7,cVar5) ^ 0x69);
  *piVar6 = *piVar6 + param_2;
  *piVar6 = *piVar6 + param_2;
  lVar4 = (longlong)*param_1 * 0x1694c10;
  piVar6 = (int *)lVar4;
  pbVar1 = (byte *)((int)param_1 + unaff_EBP * 2 + 1);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1 + (byte)param_2;
  *pbVar1 = bVar3 + ((int)piVar6 != lVar4);
  *(char *)(unaff_EDI + 0x69) =
       *(char *)(unaff_EDI + 0x69) + (char)((ulonglong)lVar4 >> 8) +
       (CARRY1(bVar2,(byte)param_2) || CARRY1(bVar3,(int)piVar6 != lVar4));
  *piVar6 = *piVar6 + param_2;
  *(undefined4 *)(unaff_EDI + 0x1c + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 0x1c + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 0x18 + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 0x18 + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 0x14 + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 0x14 + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 0x10 + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 0x10 + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 0xc + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 0xc + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 8 + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 8 + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 4 + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 4 + (int)param_1 * 4);
                    /* WARNING: Could not recover jumptable at 0x10016967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_10016847::switchdataD_10016970)[param_2])();
  return;
}



/* ==== FUN_1001696e @ 1001696e ==== 
 * signature: int __fastcall FUN_1001696e(int * param_1)
 * body: 1001696e-1001696f
 */

int __fastcall FUN_1001696e(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  char unaff_BL;
  
  pbVar1 = (byte *)((int)param_1 + 1);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 0x10;
  *(char *)((int)param_1 + 1) = (char)((uint)param_1 >> 8);
  *(char *)(in_EAX + -0x53effe97) = *(char *)(in_EAX + -0x53effe97) + unaff_BL + (bVar2 < 0x10);
  return *param_1 * 0x8458b10;
}



/* ==== switchD_10016847::caseD_0 @ 10016980 ==== 
 * signature: undefined4 __stdcall caseD_0(void)
 * body: 10016980-10016986
 */

undefined4 switchD_10016847::caseD_0(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_10016995 @ 10016995 ==== 
 * signature: undefined4 __stdcall FUN_10016995(void)
 * body: 10016995-100169aa
 */

undefined4 FUN_10016995(void)

{
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_100169d0 @ 100169d0 ==== 
 * signature: uint * __cdecl FUN_100169d0(uint * param_1, char * param_2)
 * body: 100169d0-10016a54
 */

uint * __cdecl FUN_100169d0(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    while (((uint)param_1 & 3) != 0) {
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar7 = uVar5 ^ 0xffffffff ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (uint *)0x0;
          }
          if ((uVar5 + 0x7efefeff & 0x80000000) == 0) {
            return (uint *)0x0;
          }
        }
      }
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 8);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
    }
    return (uint *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (uint *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (uint *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar4 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar8 = pcVar8 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/* ==== FUN_10016a55 @ 10016a55 ==== 
 * signature: uint * __stdcall FUN_10016a55(uint * param_1, char param_2)
 * body: 10016a55-10016a5f
 */

uint * FUN_10016a55(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



/* ==== FUN_10016a60 @ 10016a60 ==== 
 * signature: uint * __cdecl FUN_10016a60(uint * param_1, char param_2)
 * body: 10016a60-10016b1b
 */

uint * __cdecl FUN_10016a60(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



/* ==== _strncmp @ 10016b20 ==== 
 * signature: int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * body: 10016b20-10016b57
 * note: Library Function - Single Match  _strncmp  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}



/* ==== FUN_10016b60 @ 10016b60 ==== 
 * signature: undefined4 __stdcall FUN_10016b60(undefined4 param_1, int param_2)
 * body: 10016b60-10016c7a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10016b60(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      if (param_2 == 3) {
        FUN_100180b0((undefined *)0x0);
      }
      return 1;
    }
    if (0 < DAT_10023318) {
      DAT_10023318 = DAT_10023318 + -1;
      if (DAT_100233cc == 0) {
        FUN_100170b0();
      }
      FUN_100184f0();
      FUN_10017fe0();
      FUN_10017200();
      return 1;
    }
    return 0;
  }
  DAT_10023394 = GetVersion();
  iVar1 = FUN_100171c0();
  if (iVar1 == 0) {
    return 0;
  }
  _DAT_100233a0 = DAT_10023394 >> 8 & 0xff;
  _DAT_1002339c = DAT_10023394 & 0xff;
  _DAT_10023398 = _DAT_1002339c * 0x100 + _DAT_100233a0;
  DAT_10023394 = DAT_10023394 >> 0x10;
  iVar1 = FUN_10017f80();
  if (iVar1 == 0) {
    FUN_10017200();
    return 0;
  }
  DAT_1002533c = GetCommandLineA();
  DAT_1002331c = FUN_10018e00();
  if ((DAT_1002533c != (LPSTR)0x0) && (DAT_1002331c != (LPSTR)0x0)) {
    FUN_100182e0();
    FUN_10018df0();
    FUN_10018640();
    FUN_10018550();
    FUN_10017060();
    DAT_10023318 = DAT_10023318 + 1;
    return 1;
  }
  FUN_10017fe0();
  FUN_10017200();
  return 0;
}



/* ==== entry @ 10016c80 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 10016c80-10016d2c
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_10023318 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_10016cde:
    iVar1 = FUN_10001000(param_1);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_10016b60(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_10016b60(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_10025340 != (code *)0x0)) {
        iVar1 = (*DAT_10025340)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_10025340 != (code *)0x0) {
    iVar1 = (*DAT_10025340)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_10016b60(param_1,param_2);
    if (iVar1 != 0) goto LAB_10016cde;
  }
  return 0;
}



/* ==== __amsg_exit @ 10016d30 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 10016d30-10016d63
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 10016d64-10016d67
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10023324 == 1) || ((DAT_10023324 == 0 && (DAT_10023328 == 1)))) {
    FUN_10018f60();
  }
  FUN_10018fa0((undefined *)param_1);
  (*(code *)PTR___exit_100200e0)(0xff);
  return;
}



/* ==== FUN_10016d70 @ 10016d70 ==== 
 * signature: undefined __stdcall FUN_10016d70(void)
 * body: 10016d70-10016d9a
 */

void FUN_10016d70(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002012c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002011c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002010c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100200ec);
  return;
}



/* ==== FUN_10016da0 @ 10016da0 ==== 
 * signature: undefined __stdcall FUN_10016da0(void)
 * body: 10016da0-10016e11
 */

void FUN_10016da0(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100200e8;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1002012c)) && (ppuVar1 != &PTR_DAT_1002011c)) &&
       ((ppuVar1 != &PTR_DAT_1002010c && (ppuVar1 != &PTR_DAT_100200ec)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10015a50(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100201a8);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002010c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002011c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002012c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100200ec);
  return;
}



/* ==== FUN_10016e20 @ 10016e20 ==== 
 * signature: undefined __cdecl FUN_10016e20(int param_1)
 * body: 10016e20-10016e95
 */

void __cdecl FUN_10016e20(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((&DAT_100200e8)[param_1] == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_10015d50(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10016e20(0x11);
    if ((&DAT_100200e8)[param_1] == 0) {
      InitializeCriticalSection(lpCriticalSection);
      (&DAT_100200e8)[param_1] = lpCriticalSection;
    }
    else {
      FUN_10015a50((undefined *)lpCriticalSection);
    }
    FUN_10016ea0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_100200e8)[param_1]);
  return;
}



/* ==== FUN_10016ea0 @ 10016ea0 ==== 
 * signature: undefined __cdecl FUN_10016ea0(int param_1)
 * body: 10016ea0-10016eb5
 */

void __cdecl FUN_10016ea0(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100200e8)[param_1]);
  return;
}



/* ==== FUN_10016ec0 @ 10016ec0 ==== 
 * signature: undefined __cdecl FUN_10016ec0(uint param_1)
 * body: 10016ec0-10016ef5
 */

void __cdecl FUN_10016ec0(uint param_1)

{
  if ((0x10022657 < param_1) && (param_1 < 0x100228b9)) {
    FUN_10016e20(((int)(param_1 + 0xeffdd9a8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ==== FUN_10016f00 @ 10016f00 ==== 
 * signature: undefined __cdecl FUN_10016f00(int param_1, int param_2)
 * body: 10016f00-10016f27
 */

void __cdecl FUN_10016f00(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10016e20(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ==== FUN_10016f30 @ 10016f30 ==== 
 * signature: undefined __cdecl FUN_10016f30(uint param_1)
 * body: 10016f30-10016f65
 */

void __cdecl FUN_10016f30(uint param_1)

{
  if ((0x10022657 < param_1) && (param_1 < 0x100228b9)) {
    FUN_10016ea0(((int)(param_1 + 0xeffdd9a8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ==== FUN_10016f70 @ 10016f70 ==== 
 * signature: undefined __cdecl FUN_10016f70(int param_1, int param_2)
 * body: 10016f70-10016f97
 */

void __cdecl FUN_10016f70(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10016ea0(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ==== FUN_10016fa0 @ 10016fa0 ==== 
 * signature: int __cdecl FUN_10016fa0(byte * param_1, byte * param_2, LPWSTR param_3)
 * body: 10016fa0-10016fda
 */

int __cdecl FUN_10016fa0(byte *param_1,byte *param_2,LPWSTR param_3)

{
  int iVar1;
  
  if (param_3 == (LPWSTR)0x0) {
    return 0;
  }
  iVar1 = FUN_10019260(DAT_10023734,1,param_1,param_3,param_2,(int)param_3,DAT_10023730);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



/* ==== FUN_10016fe0 @ 10016fe0 ==== 
 * signature: undefined4 __stdcall FUN_10016fe0(void)
 * body: 10016fe0-10017059
 */

undefined4 FUN_10016fe0(void)

{
  LPCWSTR lpWideCharStr;
  uint cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_100233b8;
  piVar2 = DAT_100233b8;
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  while (((cbMultiByte = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                             (LPBOOL)0x0), cbMultiByte != 0 &&
          (lpMultiByteStr = (uint *)FUN_10015d50(cbMultiByte), lpMultiByteStr != (uint *)0x0)) &&
         (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                      (LPCSTR)0x0,(LPBOOL)0x0), iVar1 != 0))) {
    FUN_10019530(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)piVar2[1];
    piVar2 = piVar2 + 1;
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
  }
  return 0xffffffff;
}



/* ==== FUN_10017060 @ 10017060 ==== 
 * signature: undefined __stdcall FUN_10017060(void)
 * body: 10017060-1001708f
 */

void FUN_10017060(void)

{
  if (DAT_10025338 != (code *)0x0) {
    (*DAT_10025338)();
  }
  FUN_100171a0((undefined4 *)&DAT_1001f008,(undefined4 *)&DAT_1001f010);
  FUN_100171a0((undefined4 *)&DAT_1001f000,(undefined4 *)&DAT_1001f004);
  return;
}



/* ==== __exit @ 10017090 ==== 
 * signature: noreturn void __cdecl __exit(int _Code)
 * body: 10017090-100170a1
 * note: Library Function - Single Match  __exit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __exit(int _Code)

{
  FUN_100170c0(_Code,1,0);
  return;
}



/* ==== FUN_100170b0 @ 100170b0 ==== 
 * signature: undefined __stdcall FUN_100170b0(void)
 * body: 100170b0-100170be
 */

void FUN_100170b0(void)

{
  FUN_100170c0(0,0,1);
  return;
}



/* ==== FUN_100170c0 @ 100170c0 ==== 
 * signature: undefined __cdecl FUN_100170c0(UINT param_1, int param_2, int param_3)
 * body: 100170c0-1001716d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1001716e-10017171
 */

void __cdecl FUN_100170c0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  FUN_10017180();
  if (DAT_100233d0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100233cc = 1;
  DAT_100233c8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10025334 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_10025330 + -4), puVar1 = DAT_10025334, DAT_10025334 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_10025334;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_100171a0((undefined4 *)&DAT_1001f014,(undefined4 *)&DAT_1001f01c);
  }
  FUN_100171a0((undefined4 *)&DAT_1001f020,(undefined4 *)&DAT_1001f024);
  if (param_3 != 0) {
    FUN_10017190();
    return;
  }
  DAT_100233d0 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ==== FUN_10017180 @ 10017180 ==== 
 * signature: undefined __stdcall FUN_10017180(void)
 * body: 10017180-1001718a
 */

void FUN_10017180(void)

{
  FUN_10016e20(0xd);
  return;
}



/* ==== FUN_10017190 @ 10017190 ==== 
 * signature: undefined __stdcall FUN_10017190(void)
 * body: 10017190-1001719a
 */

void FUN_10017190(void)

{
  FUN_10016ea0(0xd);
  return;
}



/* ==== FUN_100171a0 @ 100171a0 ==== 
 * signature: undefined __cdecl FUN_100171a0(undefined4 * param_1, undefined4 * param_2)
 * body: 100171a0-100171bf
 */

void __cdecl FUN_100171a0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ==== FUN_100171c0 @ 100171c0 ==== 
 * signature: undefined4 __stdcall FUN_100171c0(void)
 * body: 100171c0-100171f6
 */

undefined4 FUN_100171c0(void)

{
  undefined **ppuVar1;
  
  DAT_1002532c = HeapCreate(0,0x1000,0);
  if (DAT_1002532c == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_10017240();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_1002532c);
    return 0;
  }
  return 1;
}



/* ==== FUN_10017200 @ 10017200 ==== 
 * signature: undefined __stdcall FUN_10017200(void)
 * body: 10017200-10017236
 */

void FUN_10017200(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_LOOP_100201b0;
  do {
    if (ppuVar1[4] != (undefined *)0x0) {
      VirtualFree(ppuVar1[4],0,0x8000);
    }
    ppuVar1 = (undefined **)*ppuVar1;
  } while (ppuVar1 != &PTR_LOOP_100201b0);
  HeapDestroy(DAT_1002532c);
  return;
}



/* ==== FUN_10017240 @ 10017240 ==== 
 * signature: undefined * * __stdcall FUN_10017240(void)
 * body: 10017240-100173a1
 */

undefined ** FUN_10017240(void)

{
  bool bVar1;
  undefined4 *lpAddress;
  LPVOID pvVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **lpMem;
  undefined4 *puVar5;
  
  if (DAT_100201c0 == -1) {
    lpMem = &PTR_LOOP_100201b0;
  }
  else {
    lpMem = HeapAlloc(DAT_1002532c,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (undefined4 *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_100201b0) {
        if (PTR_LOOP_100201b0 == (undefined *)0x0) {
          PTR_LOOP_100201b0 = (undefined *)&PTR_LOOP_100201b0;
        }
        if (PTR_LOOP_100201b4 == (undefined *)0x0) {
          PTR_LOOP_100201b4 = (undefined *)&PTR_LOOP_100201b0;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_100201b0;
        lpMem[1] = PTR_LOOP_100201b4;
        PTR_LOOP_100201b4 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)(lpMem + 6);
      lpMem[3] = (undefined *)(lpMem + 0x26);
      iVar3 = 0;
      ppuVar4 = lpMem + 6;
      do {
        bVar1 = 0xf < iVar3;
        iVar3 = iVar3 + 1;
        *ppuVar4 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar4[1] = (undefined *)0xf1;
        ppuVar4 = ppuVar4 + 2;
      } while (iVar3 < 0x400);
      puVar5 = lpAddress;
      for (iVar3 = 0x4000; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      if (lpAddress < lpMem[4] + 0x10000) {
        do {
          lpAddress[1] = 0xf0;
          *lpAddress = lpAddress + 2;
          *(undefined1 *)(lpAddress + 0x3e) = 0xff;
          lpAddress = lpAddress + 0x400;
        } while (lpAddress < lpMem[4] + 0x10000);
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_100201b0) {
    HeapFree(DAT_1002532c,0,lpMem);
  }
  return (undefined **)0x0;
}



/* ==== FUN_100173b0 @ 100173b0 ==== 
 * signature: undefined __cdecl FUN_100173b0(undefined * * param_1)
 * body: 100173b0-1001740a
 */

void __cdecl FUN_100173b0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_100221d0 == param_1) {
    PTR_LOOP_100221d0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_100201b0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1002532c,0,param_1);
    return;
  }
  DAT_100201c0 = 0xffffffff;
  return;
}



/* ==== FUN_10017410 @ 10017410 ==== 
 * signature: undefined __cdecl FUN_10017410(int param_1)
 * body: 10017410-100174dc
 */

void __cdecl FUN_10017410(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar6 = (undefined **)PTR_LOOP_100201b4;
  do {
    ppuVar5 = ppuVar6;
    if (ppuVar6[4] != (undefined *)0xffffffff) {
      iVar4 = 0;
      ppuVar5 = ppuVar6 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar6[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_100233d4 = DAT_100233d4 + -1;
            if (((undefined **)ppuVar6[3] == (undefined **)0x0) || (ppuVar5 < ppuVar6[3])) {
              ppuVar6[3] = (undefined *)ppuVar5;
            }
            iVar4 = iVar4 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar6[1];
      if ((iVar4 != 0) && (ppuVar6[6] == (undefined *)0xffffffff)) {
        iVar3 = 1;
        ppuVar2 = ppuVar6 + 8;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_100173b0(ppuVar6);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_100201b4) || (ppuVar6 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



/* ==== FUN_100174e0 @ 100174e0 ==== 
 * signature: int __cdecl FUN_100174e0(undefined * param_1, undefined4 * param_2, uint * param_3)
 * body: 100174e0-10017538
 */

int __cdecl FUN_100174e0(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_100201b0;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_100201b0) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



/* ==== FUN_10017540 @ 10017540 ==== 
 * signature: undefined __cdecl FUN_10017540(int param_1, int param_2, byte * param_3)
 * body: 10017540-10017592
 */

void __cdecl FUN_10017540(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_100233d4 = DAT_100233d4 + 1, DAT_100233d4 == 0x20)) {
    FUN_10017410(0x10);
  }
  return;
}



/* ==== FUN_100175a0 @ 100175a0 ==== 
 * signature: int * __cdecl FUN_100175a0(uint param_1)
 * body: 100175a0-100177d2
 */

int * __cdecl FUN_100175a0(uint param_1)

{
  undefined **ppuVar1;
  uint *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  bool bVar12;
  
  piVar11 = (int *)PTR_LOOP_100221d0;
  do {
    if (piVar11[4] != -1) {
      puVar10 = (uint *)piVar11[2];
      piVar8 = (int *)(((int)puVar10 + (-0x18 - (int)piVar11) >> 3) * 0x1000 + piVar11[4]);
      for (; puVar10 < piVar11 + 0x806; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_100177e0(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_LOOP_100221d0 = (undefined *)piVar11;
            *puVar10 = *puVar10 - param_1;
            piVar11[2] = (int)puVar10;
            return piVar5;
          }
          puVar10[1] = param_1;
        }
        piVar8 = piVar8 + 0x400;
      }
      puVar2 = (uint *)piVar11[2];
      piVar8 = (int *)piVar11[4];
      for (puVar10 = (uint *)(piVar11 + 6); puVar10 < puVar2; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_100177e0(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_LOOP_100221d0 = (undefined *)piVar11;
            *puVar10 = *puVar10 - param_1;
            piVar11[2] = (int)puVar10;
            return piVar5;
          }
          puVar10[1] = param_1;
        }
        piVar8 = piVar8 + 0x400;
      }
    }
    piVar11 = (int *)*piVar11;
  } while (piVar11 != (int *)PTR_LOOP_100221d0);
  ppuVar7 = &PTR_LOOP_100201b0;
  while ((ppuVar7[4] == (undefined *)0xffffffff || (ppuVar7[3] == (undefined *)0x0))) {
    ppuVar7 = (undefined **)*ppuVar7;
    if (ppuVar7 == &PTR_LOOP_100201b0) {
      ppuVar7 = FUN_10017240();
      if (ppuVar7 == (undefined **)0x0) {
        return (int *)0x0;
      }
      piVar11 = (int *)ppuVar7[4];
      *(char *)(piVar11 + 2) = (char)param_1;
      PTR_LOOP_100221d0 = (undefined *)ppuVar7;
      *piVar11 = (int)piVar11 + param_1 + 8;
      piVar11[1] = 0xf0 - param_1;
      ppuVar7[6] = ppuVar7[6] + -(param_1 & 0xff);
      return piVar11 + 0x40;
    }
  }
  ppuVar3 = (undefined **)ppuVar7[3];
  puVar4 = *ppuVar3;
  piVar11 = (int *)(ppuVar7[4] + ((int)ppuVar3 + (-0x18 - (int)ppuVar7) >> 3) * 0x1000);
  ppuVar6 = ppuVar3;
  for (iVar9 = 0; (puVar4 == (undefined *)0xffffffff && (iVar9 < 0x10)); iVar9 = iVar9 + 1) {
    puVar4 = ppuVar6[2];
    ppuVar6 = ppuVar6 + 2;
  }
  piVar8 = VirtualAlloc(piVar11,iVar9 << 0xc,0x1000,4);
  if (piVar8 != piVar11) {
    return (int *)0x0;
  }
  ppuVar6 = ppuVar3;
  if (0 < iVar9) {
    piVar8 = piVar11 + 1;
    do {
      *piVar8 = 0xf0;
      piVar8[-1] = (int)(piVar8 + 1);
      *(undefined1 *)(piVar8 + 0x3d) = 0xff;
      *ppuVar6 = (undefined *)0xf0;
      ppuVar6[1] = (undefined *)0xf1;
      piVar8 = piVar8 + 0x400;
      ppuVar6 = ppuVar6 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  ppuVar1 = ppuVar7 + 0x806;
  bVar12 = false;
  if (ppuVar6 < ppuVar1) {
    do {
      if (*ppuVar6 == (undefined *)0xffffffff) break;
      ppuVar6 = ppuVar6 + 2;
    } while (ppuVar6 < ppuVar1);
    bVar12 = ppuVar6 < ppuVar1;
  }
  PTR_LOOP_100221d0 = (undefined *)ppuVar7;
  ppuVar7[3] = (undefined *)(-(uint)bVar12 & (uint)ppuVar6);
  *(char *)(piVar11 + 2) = (char)param_1;
  ppuVar7[2] = (undefined *)ppuVar3;
  *ppuVar3 = *ppuVar3 + -param_1;
  piVar11[1] = piVar11[1] - param_1;
  *piVar11 = (int)piVar11 + param_1 + 8;
  return piVar11 + 0x40;
}



/* ==== FUN_100177e0 @ 100177e0 ==== 
 * signature: int __cdecl FUN_100177e0(int * param_1, uint param_2, uint param_3)
 * body: 100177e0-10017951
 */

int __cdecl FUN_100177e0(int *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  if (param_3 <= (uint)param_1[1]) {
    *pbVar2 = (byte)param_3;
    if (pbVar2 + param_3 < param_1 + 0x3e) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    return (int)(pbVar2 + 8) * 0x10 + (int)param_1 * -0xf;
  }
  pbVar6 = pbVar2;
  if (pbVar2[param_1[1]] != 0) {
    pbVar6 = pbVar2 + param_1[1];
  }
  if (pbVar6 + param_3 < param_1 + 0x3e) {
    do {
      if (*pbVar6 == 0) {
        pbVar3 = pbVar6 + 1;
        uVar5 = 1;
        bVar1 = pbVar6[1];
        while (bVar1 == 0) {
          pbVar3 = pbVar3 + 1;
          uVar5 = uVar5 + 1;
          bVar1 = *pbVar3;
        }
        if (param_3 <= uVar5) {
          if (param_1 + 0x3e <= pbVar6 + param_3) {
            *param_1 = (int)(param_1 + 2);
            goto LAB_1001792f;
          }
          *param_1 = (int)(pbVar6 + param_3);
          param_1[1] = uVar5 - param_3;
          goto LAB_10017936;
        }
        if (pbVar6 == pbVar2) {
          param_1[1] = uVar5;
        }
        else {
          param_2 = param_2 - uVar5;
          if (param_2 < param_3) {
            return 0;
          }
        }
      }
      else {
        pbVar3 = pbVar6 + *pbVar6;
      }
      pbVar6 = pbVar3;
    } while (pbVar3 + param_3 < param_1 + 0x3e);
  }
  pbVar3 = (byte *)(param_1 + 2);
  pbVar6 = pbVar3;
  if (pbVar3 < pbVar2) {
    while (pbVar6 + param_3 < param_1 + 0x3e) {
      if (*pbVar6 == 0) {
        pbVar4 = pbVar6 + 1;
        uVar5 = 1;
        bVar1 = pbVar6[1];
        while (bVar1 == 0) {
          pbVar4 = pbVar4 + 1;
          uVar5 = uVar5 + 1;
          bVar1 = *pbVar4;
        }
        if (param_3 <= uVar5) {
          if (pbVar6 + param_3 < param_1 + 0x3e) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            *param_1 = (int)pbVar3;
LAB_1001792f:
            param_1[1] = 0;
          }
LAB_10017936:
          *pbVar6 = (byte)param_3;
          return (int)(pbVar6 + 8) * 0x10 + (int)param_1 * -0xf;
        }
        param_2 = param_2 - uVar5;
        if (param_2 < param_3) {
          return 0;
        }
      }
      else {
        pbVar4 = pbVar6 + *pbVar6;
      }
      pbVar6 = pbVar4;
      if (pbVar2 <= pbVar4) {
        return 0;
      }
    }
  }
  return 0;
}



/* ==== FUN_10017960 @ 10017960 ==== 
 * signature: undefined4 __cdecl FUN_10017960(int param_1, int * param_2, byte * param_3, uint param_4)
 * body: 10017960-10017a23
 */

undefined4 __cdecl FUN_10017960(int param_1,int *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
  uVar5 = 0;
  piVar3 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  uVar7 = (uint)*param_3;
  if (uVar7 <= param_4) {
    if ((uVar7 < param_4) && (pbVar1 = param_3 + param_4, pbVar1 <= param_2 + 0x3e)) {
      for (pbVar8 = param_3 + uVar7; (pbVar8 < pbVar1 && (*pbVar8 == 0)); pbVar8 = pbVar8 + 1) {
      }
      if (pbVar8 == pbVar1) {
        *param_3 = (byte)param_4;
        if ((param_3 <= (byte *)*param_2) && ((byte *)*param_2 < pbVar1)) {
          if (pbVar1 < param_2 + 0x3e) {
            *param_2 = (int)pbVar1;
            iVar6 = 0;
            bVar4 = *pbVar1;
            while (bVar4 == 0) {
              iVar2 = iVar6 + 1;
              iVar6 = iVar6 + 1;
              bVar4 = pbVar1[iVar2];
            }
            param_2[1] = iVar6;
          }
          else {
            param_2[1] = 0;
            *param_2 = (int)(param_2 + 2);
          }
        }
        *piVar3 = *piVar3 + (uVar7 - param_4);
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  *param_3 = (byte)param_4;
  piVar3[1] = 0xf1;
  *piVar3 = *piVar3 + (uVar7 - param_4);
  return 1;
}



/* ==== FUN_10017a30 @ 10017a30 ==== 
 * signature: BOOL __cdecl FUN_10017a30(DWORD param_1, LPCWSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6)
 * body: 10017a30-10017bb3
 */

BOOL __cdecl
FUN_10017a30(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  int cbMultiByte;
  int *lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  BOOL local_4;
  
  lpCharType = (LPWORD)0x0;
  if (DAT_100233d8 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_100233d8 = 2;
    }
    else {
      DAT_100233d8 = 1;
    }
  }
  if (DAT_100233d8 != 1) {
    local_4 = DAT_100233d8;
    if (DAT_100233d8 == 2) {
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = DAT_10023408;
      }
      cbMultiByte = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = FUN_10019830(1,cbMultiByte);
      if (lpMultiByteStr == (int *)0x0) {
        return 0;
      }
      iVar2 = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)lpMultiByteStr,cbMultiByte,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar2 != 0) &&
         (lpCharType = (LPWORD)FUN_10015d50(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_100233f8;
        }
        lpCharType[param_3] = 0xffff;
        lpCharType[param_3 + -1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,(LPCSTR)lpMultiByteStr,cbMultiByte,lpCharType);
        if ((lpCharType[param_3 + -1] == 0xffff) || (lpCharType[param_3] != 0xffff)) {
          local_4 = 0;
        }
        else {
          FUN_10016690((undefined4 *)param_4,(undefined4 *)lpCharType,param_3 * 2);
        }
      }
      FUN_10015a50((undefined *)lpMultiByteStr);
      FUN_10015a50((undefined *)lpCharType);
    }
    return local_4;
  }
  BVar1 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar1;
}



/* ==== FUN_10017bc0 @ 10017bc0 ==== 
 * signature: BOOL __cdecl FUN_10017bc0(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
 * body: 10017bc0-10017cf7
 */

BOOL __cdecl
FUN_10017bc0(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  BOOL BVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_100233dc == 0) {
    BVar1 = GetStringTypeW(1,L"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_100233dc = 2;
    }
    else {
      DAT_100233dc = 1;
    }
  }
  if (DAT_100233dc == 2) {
    if (param_6 == 0) {
      param_6 = DAT_100233f8;
    }
    BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    return BVar1;
  }
  param_6 = DAT_100233dc;
  if (DAT_100233dc == 1) {
    param_6 = 0;
    if (param_5 == 0) {
      param_5 = DAT_10023408;
    }
    iVar2 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar2 != 0) {
      lpWideCharStr = (LPCWSTR)FUN_10019830(2,iVar2);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
        if (iVar2 != 0) {
          BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
          FUN_10015a50((undefined *)lpWideCharStr);
          return BVar1;
        }
      }
    }
    FUN_10015a50((undefined *)lpWideCharStr);
  }
  return param_6;
}



/* ==== FUN_10017d00 @ 10017d00 ==== 
 * signature: int __cdecl FUN_10017d00(LCID param_1, uint param_2, char * param_3, LPCWSTR param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8)
 * body: 10017d00-10017f24
 */

int __cdecl
FUN_10017d00(LCID param_1,uint param_2,char *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  LPCWSTR cbMultiByte;
  LPCWSTR lpWideCharStr;
  int iVar2;
  
  if (DAT_10023410 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_10023410 = 2;
    }
    else {
      DAT_10023410 = 1;
    }
  }
  cbMultiByte = param_4;
  if (0 < (int)param_4) {
    cbMultiByte = (LPCWSTR)FUN_10017f30(param_3,(int)param_4);
  }
  if (DAT_10023410 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,(int)cbMultiByte,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_10023410 != 1) {
    return DAT_10023410;
  }
  param_4 = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_10023408;
  }
  iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,(int)cbMultiByte,
                              (LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_10015d50(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPCWSTR)FUN_10015d50(iVar2 * 2);
      if ((param_4 == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar2), iVar1 == 0))
      goto LAB_10017f08;
      if (param_6 == 0) {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                   );
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)param_5,param_6,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (param_6 == 0) goto LAB_10017e6f;
      if (param_6 < iVar2) goto LAB_10017f08;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_10017e6f:
      FUN_10015a50((undefined *)lpWideCharStr);
      FUN_10015a50((undefined *)param_4);
      return iVar2;
    }
  }
LAB_10017f08:
  FUN_10015a50((undefined *)lpWideCharStr);
  FUN_10015a50((undefined *)param_4);
  return 0;
}



/* ==== FUN_10017f30 @ 10017f30 ==== 
 * signature: int __cdecl FUN_10017f30(char * param_1, int param_2)
 * body: 10017f30-10017f5e
 */

int __cdecl FUN_10017f30(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}



/* ==== FUN_10017f60 @ 10017f60 ==== 
 * signature: undefined4 __cdecl FUN_10017f60(undefined4 param_1)
 * body: 10017f60-10017f7f
 */

undefined4 __cdecl FUN_10017f60(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10023418 != (code *)0x0) {
    iVar1 = (*DAT_10023418)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ==== FUN_10017f80 @ 10017f80 ==== 
 * signature: undefined4 __stdcall FUN_10017f80(void)
 * body: 10017f80-10017fdb
 */

undefined4 FUN_10017f80(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10016d70();
  DAT_10022334 = TlsAlloc();
  if (DAT_10022334 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10019830(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10022334,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10018010((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}



/* ==== FUN_10017fe0 @ 10017fe0 ==== 
 * signature: undefined __stdcall FUN_10017fe0(void)
 * body: 10017fe0-10018000
 */

void FUN_10017fe0(void)

{
  FUN_10016da0();
  if (DAT_10022334 != 0xffffffff) {
    TlsFree(DAT_10022334);
    DAT_10022334 = 0xffffffff;
  }
  return;
}



/* ==== FUN_10018010 @ 10018010 ==== 
 * signature: undefined __cdecl FUN_10018010(int param_1)
 * body: 10018010-10018022
 */

void __cdecl FUN_10018010(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10023060;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



/* ==== FUN_10018030 @ 10018030 ==== 
 * signature: DWORD * __stdcall FUN_10018030(void)
 * body: 10018030-100180a9
 */

DWORD * FUN_10018030(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10022334);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10019830(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10022334,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10018010((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        SetLastError(dwErrCode);
        return lpTlsValue;
      }
    }
    __amsg_exit(0x10);
  }
  SetLastError(dwErrCode);
  return lpTlsValue;
}



/* ==== FUN_100180b0 @ 100180b0 ==== 
 * signature: undefined __cdecl FUN_100180b0(undefined * param_1)
 * body: 100180b0-1001815f
 */

void __cdecl FUN_100180b0(undefined *param_1)

{
  if (DAT_10022334 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_10022334), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10023060) {
        FUN_10015a50(*(undefined **)(param_1 + 0x50));
      }
      FUN_10015a50(param_1);
    }
    TlsSetValue(DAT_10022334,(LPVOID)0x0);
    return;
  }
  return;
}



/* ==== FUN_10018160 @ 10018160 ==== 
 * signature: longlong __stdcall FUN_10018160(uint param_1, int param_2, uint param_3, int param_4)
 * body: 10018160-10018193
 */

longlong FUN_10018160(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



/* ==== FUN_100181a0 @ 100181a0 ==== 
 * signature: undefined __cdecl FUN_100181a0(uint param_1)
 * body: 100181a0-10018212
 */

void __cdecl FUN_100181a0(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10018230();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10022340;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10018220();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10022344);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar2 < &DAT_100224a8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10018220();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10018220();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10018220();
  *pDVar1 = 0x16;
  return;
}



/* ==== FUN_10018220 @ 10018220 ==== 
 * signature: DWORD * __stdcall FUN_10018220(void)
 * body: 10018220-10018228
 */

DWORD * FUN_10018220(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10018030();
  return pDVar1 + 2;
}



/* ==== FUN_10018230 @ 10018230 ==== 
 * signature: DWORD * __stdcall FUN_10018230(void)
 * body: 10018230-10018238
 */

DWORD * FUN_10018230(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10018030();
  return pDVar1 + 3;
}



/* ==== FUN_10018240 @ 10018240 ==== 
 * signature: uint __cdecl FUN_10018240(uint param_1)
 * body: 10018240-100182dd
 */

uint __cdecl FUN_10018240(uint param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (param_1 < 0x100) {
    if ((*(byte *)((int)&DAT_10023528 + param_1 + 1) & 0x20) == 0x20) {
      return (uint)(byte)(&DAT_10023630)[param_1];
    }
  }
  else {
    bVar2 = (byte)(param_1 >> 8);
    param_1 = CONCAT31(CONCAT21(param_1._2_2_,(char)param_1),bVar2);
    if ((*(byte *)((int)&DAT_10023528 + bVar2 + 1) & 4) != 0) {
      iVar3 = FUN_10017d00(DAT_10023734,0x200,(char *)&param_1,(LPCWSTR)0x2,(LPWSTR)local_8,2,
                           DAT_10023730,1);
      if (iVar3 != 0) {
        return (local_8[0] & 0xff) * 0x100 + (local_8[0] >> 8 & 0xff);
      }
    }
  }
  return uVar1;
}



/* ==== FUN_100182e0 @ 100182e0 ==== 
 * signature: undefined __stdcall FUN_100182e0(void)
 * body: 100182e0-100184eb
 */

void FUN_100182e0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE hFile;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  UINT *pUVar8;
  UINT local_48;
  _STARTUPINFOA local_44;
  
  puVar2 = (undefined4 *)FUN_10015d50(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_10025320 = 0x20;
  DAT_10025220 = puVar2;
  if (puVar2 < puVar2 + 0x120) {
    do {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      puVar2 = puVar2 + 9;
    } while (puVar2 < DAT_10025220 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    local_48 = *(UINT *)local_44.lpReserved2;
    pUVar8 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar4 = (byte *)((int)pUVar8 + local_48);
    if (0x7ff < (int)local_48) {
      local_48 = 0x800;
    }
    if ((int)DAT_10025320 < (int)local_48) {
      piVar6 = &DAT_10025224;
      do {
        puVar2 = (undefined4 *)FUN_10015d50(0x480);
        if (puVar2 == (undefined4 *)0x0) {
          local_48 = DAT_10025320;
          break;
        }
        *piVar6 = (int)puVar2;
        DAT_10025320 = DAT_10025320 + 0x20;
        if (puVar2 < puVar2 + 0x120) {
          do {
            *(undefined1 *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffff;
            *(undefined1 *)((int)puVar2 + 5) = 10;
            puVar2[2] = 0;
            puVar2 = puVar2 + 9;
          } while (puVar2 < (undefined4 *)(*piVar6 + 0x480));
        }
        piVar6 = piVar6 + 1;
      } while ((int)DAT_10025320 < (int)local_48);
    }
    uVar7 = 0;
    if (0 < (int)local_48) {
      do {
        if (((*(HANDLE *)pbVar4 != (HANDLE)0xffffffff) && ((*pUVar8 & 1) != 0)) &&
           (((*pUVar8 & 8) != 0 || (DVar3 = GetFileType(*(HANDLE *)pbVar4), DVar3 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10025220)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)pbVar4;
          *(byte *)(puVar2 + 1) = (byte)*pUVar8;
        }
        uVar7 = uVar7 + 1;
        pUVar8 = (UINT *)((int)pUVar8 + 1);
        pbVar4 = pbVar4 + 4;
      } while ((int)uVar7 < (int)local_48);
    }
  }
  iVar5 = 0;
  do {
    puVar2 = DAT_10025220 + iVar5 * 9;
    if (DAT_10025220[iVar5 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else {
        DVar3 = 0xfffffff5 - (iVar5 != 1);
      }
      hFile = GetStdHandle(DVar3);
      if ((hFile == (HANDLE)0xffffffff) || (DVar3 = GetFileType(hFile), DVar3 == 0)) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_100184ce;
      }
      *puVar2 = hFile;
      if ((DVar3 & 0xff) == 2) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_100184ce;
      }
      if ((DVar3 & 0xff) == 3) {
        bVar1 = *(byte *)(puVar2 + 1) | 8;
        goto LAB_100184ce;
      }
    }
    else {
      bVar1 = *(byte *)(puVar2 + 1) | 0x80;
LAB_100184ce:
      *(byte *)(puVar2 + 1) = bVar1;
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      SetHandleCount(DAT_10025320);
      return;
    }
  } while( true );
}



/* ==== FUN_100184f0 @ 100184f0 ==== 
 * signature: undefined __stdcall FUN_100184f0(void)
 * body: 100184f0-1001854e
 */

void FUN_100184f0(void)

{
  uint *puVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar1 = &DAT_10025220;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_10015a50((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10025320);
  return;
}



/* ==== FUN_10018550 @ 10018550 ==== 
 * signature: undefined __stdcall FUN_10018550(void)
 * body: 10018550-1001863d
 */

void FUN_10018550(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int *local_4;
  
  iVar8 = 0;
  cVar2 = *DAT_1002331c;
  pcVar7 = DAT_1002331c;
  while (cVar2 != '\0') {
    if (cVar2 != '=') {
      iVar8 = iVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    pcVar9 = pcVar7 + ~uVar4;
    pcVar7 = pcVar7 + ~uVar4;
    cVar2 = *pcVar9;
  }
  piVar3 = (int *)FUN_10015d50(iVar8 * 4 + 4);
  DAT_100233b0 = piVar3;
  if (piVar3 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar2 = *DAT_1002331c;
  local_4 = piVar3;
  pcVar7 = DAT_1002331c;
  do {
    if (cVar2 == '\0') {
      FUN_10015a50(DAT_1002331c);
      DAT_1002331c = (char *)0x0;
      *piVar3 = 0;
      return;
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    if (cVar2 != '=') {
      iVar8 = FUN_10015d50(uVar4);
      *piVar3 = iVar8;
      if (iVar8 == 0) {
        __amsg_exit(9);
      }
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        pcVar10 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar10 + -uVar5;
      pcVar10 = (char *)*local_4;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      piVar3 = local_4 + 1;
      for (uVar5 = uVar5 & 3; local_4 = piVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    cVar2 = pcVar7[uVar4];
    pcVar7 = pcVar7 + uVar4;
  } while( true );
}



/* ==== FUN_10018640 @ 10018640 ==== 
 * signature: undefined __stdcall FUN_10018640(void)
 * body: 10018640-100186dd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018640(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_10023420,0x104);
  _DAT_100233c0 = &DAT_10023420;
  pbVar2 = DAT_1002533c;
  if (*DAT_1002533c == 0) {
    pbVar2 = &DAT_10023420;
  }
  FUN_100186e0(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_10015d50(local_4 + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100186e0(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_100233a8 = puVar1;
  _DAT_100233a4 = local_8 + -1;
  return;
}



/* ==== FUN_100186e0 @ 100186e0 ==== 
 * signature: undefined __cdecl FUN_100186e0(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
 * body: 100186e0-100188ee
 */

void __cdecl FUN_100186e0(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  
  piVar6 = param_5;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    bVar2 = param_1[1];
    while ((pbVar7 = param_1 + 1, bVar2 != 0x22 && (bVar2 != 0))) {
      if (((*(byte *)((int)&DAT_10023528 + bVar2 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        pbVar7 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
      }
      param_1 = pbVar7;
      bVar2 = pbVar7[1];
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar7 == 0x22) {
      pbVar7 = param_1 + 2;
    }
  }
  else {
    do {
      *piVar6 = *piVar6 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar2 = *param_1;
      pbVar7 = param_1 + 1;
      param_5 = (int *)(uint)bVar2;
      if ((*(byte *)((int)param_5 + 0x10023529) & 4) != 0) {
        *piVar6 = *piVar6 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar7;
          param_3 = param_3 + 1;
        }
        pbVar7 = param_1 + 2;
      }
      if (bVar2 == 0x20) break;
      if (bVar2 == 0) goto LAB_100187b9;
      param_1 = pbVar7;
    } while (bVar2 != 9);
    if (bVar2 == 0) {
LAB_100187b9:
      pbVar7 = pbVar7 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar4 = false;
  bVar5 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      uVar8 = 0;
      bVar3 = true;
      bVar2 = *pbVar7;
      while (bVar2 == 0x5c) {
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        uVar8 = uVar8 + 1;
        bVar2 = *pbVar1;
      }
      if (*pbVar7 == 0x22) {
        if ((uVar8 & 1) == 0) {
          if ((bVar4) && (pbVar7[1] == 0x22)) {
            pbVar7 = pbVar7 + 1;
          }
          else {
            bVar3 = false;
          }
          bVar4 = !bVar5;
          bVar5 = bVar4;
        }
        uVar8 = uVar8 >> 1;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *piVar6 = *piVar6 + 1;
      }
      bVar2 = *pbVar7;
      if ((bVar2 == 0) || ((!bVar4 && ((bVar2 == 0x20 || (bVar2 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_10023528 + bVar2 + 1) & 4) != 0) {
            pbVar7 = pbVar7 + 1;
            *piVar6 = *piVar6 + 1;
          }
          *piVar6 = *piVar6 + 1;
          goto LAB_100188b5;
        }
        if ((*(byte *)((int)&DAT_10023528 + bVar2 + 1) & 4) != 0) {
          *param_3 = bVar2;
          param_3 = param_3 + 1;
          pbVar7 = pbVar7 + 1;
          *piVar6 = *piVar6 + 1;
        }
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        *piVar6 = *piVar6 + 1;
        pbVar7 = pbVar7 + 1;
      }
      else {
LAB_100188b5:
        pbVar7 = pbVar7 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *piVar6 = *piVar6 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* ==== FUN_100188f0 @ 100188f0 ==== 
 * signature: undefined4 __cdecl FUN_100188f0(int param_1)
 * body: 100188f0-10018b1a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100188f0(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  BYTE *pBVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  _cpinfo local_14;
  
  FUN_10016e20(0x19);
  CodePage = FUN_10018b20(param_1);
  if (CodePage == DAT_10023730) {
    FUN_10016ea0(0x19);
    return 0;
  }
  if (CodePage == 0) {
    FUN_10018bd0();
    FUN_10018c10();
    FUN_10016ea0(0x19);
    return 0;
  }
  iVar10 = 0;
  pUVar5 = &DAT_100224d8;
  do {
    if (*pUVar5 == CodePage) {
      puVar14 = &DAT_10023528;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      uVar7 = 0;
      iVar10 = iVar10 * 0x30;
      pbVar12 = (byte *)(iVar10 + 0x100224e8);
      do {
        bVar3 = *pbVar12;
        for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
            pbVar13 = pbVar13 + 2) {
          uVar8 = (uint)*pbVar13;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100224d0)[uVar7];
            do {
              pbVar2 = (byte *)((int)&DAT_10023528 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          bVar3 = pbVar13[2];
        }
        uVar7 = uVar7 + 1;
        pbVar12 = pbVar12 + 8;
      } while (uVar7 < 4);
      _DAT_10025204 = 1;
      DAT_10023730 = CodePage;
      DAT_10023734 = FUN_10018b70(CodePage);
      _DAT_10023738 = *(undefined4 *)(iVar10 + 0x100224dc);
      _DAT_1002373c = *(undefined4 *)(iVar10 + 0x100224e0);
      _DAT_10023740 = *(undefined4 *)(iVar10 + 0x100224e4);
      goto LAB_10018a42;
    }
    pUVar5 = pUVar5 + 0xc;
    iVar10 = iVar10 + 1;
  } while (pUVar5 < &DAT_100225c8);
  BVar6 = GetCPInfo(CodePage,&local_14);
  if (BVar6 == 1) {
    puVar14 = &DAT_10023528;
    for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)puVar14 = 0;
    DAT_10023734 = 0;
    if (local_14.MaxCharSize < 2) {
      _DAT_10025204 = 0;
      DAT_10023730 = CodePage;
    }
    else {
      DAT_10023730 = CodePage;
      if (local_14.LeadByte[0] != '\0') {
        pBVar11 = local_14.LeadByte + 1;
        do {
          bVar3 = *pBVar11;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            *(byte *)((int)&DAT_10023528 + uVar7 + 1) =
                 *(byte *)((int)&DAT_10023528 + uVar7 + 1) | 4;
          }
          pBVar1 = pBVar11 + 1;
          pBVar11 = pBVar11 + 2;
        } while (*pBVar1 != 0);
      }
      uVar7 = 1;
      do {
        *(byte *)((int)&DAT_10023528 + uVar7 + 1) = *(byte *)((int)&DAT_10023528 + uVar7 + 1) | 8;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0xff);
      DAT_10023734 = FUN_10018b70(CodePage);
      _DAT_10025204 = 1;
    }
    _DAT_10023738 = 0;
    _DAT_1002373c = 0;
    _DAT_10023740 = 0;
  }
  else {
    if (DAT_10023744 == 0) {
      FUN_10016ea0(0x19);
      return 0xffffffff;
    }
    FUN_10018bd0();
  }
LAB_10018a42:
  FUN_10018c10();
  FUN_10016ea0(0x19);
  return 0;
}



/* ==== FUN_10018b20 @ 10018b20 ==== 
 * signature: int __cdecl FUN_10018b20(int param_1)
 * body: 10018b20-10018b6c
 */

int __cdecl FUN_10018b20(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10023744 = 1;
                    /* WARNING: Could not recover jumptable at 0x10018b3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10023744 = 1;
                    /* WARNING: Could not recover jumptable at 0x10018b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10023408;
  }
  DAT_10023744 = (uint)bVar2;
  return param_1;
}



/* ==== FUN_10018b70 @ 10018b70 ==== 
 * signature: undefined4 __cdecl FUN_10018b70(undefined4 param_1)
 * body: 10018b70-10018ba7
 */

undefined4 __cdecl FUN_10018b70(undefined4 param_1)

{
  switch(param_1) {
  case 0x3a4:
    return 0x411;
  default:
    return 0;
  case 0x3a8:
    return 0x804;
  case 0x3b5:
    return 0x412;
  case 0x3b6:
    return 0x404;
  }
}



/* ==== FUN_10018bd0 @ 10018bd0 ==== 
 * signature: undefined __stdcall FUN_10018bd0(void)
 * body: 10018bd0-10018c01
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018bd0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10023528;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10023730 = 0;
  _DAT_10025204 = 0;
  DAT_10023734 = 0;
  _DAT_10023738 = 0;
  _DAT_1002373c = 0;
  _DAT_10023740 = 0;
  return;
}



/* ==== FUN_10018c10 @ 10018c10 ==== 
 * signature: undefined __stdcall FUN_10018c10(void)
 * body: 10018c10-10018de9
 */

void FUN_10018c10(void)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  BYTE *pBVar5;
  ushort *puVar6;
  CHAR *pCVar7;
  _cpinfo local_514;
  CHAR local_500 [256];
  WCHAR local_400 [128];
  WCHAR local_300 [128];
  WORD local_200 [256];
  
  BVar1 = GetCPInfo(DAT_10023730,&local_514);
  if (BVar1 == 1) {
    uVar2 = 0;
    do {
      local_500[uVar2] = (CHAR)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    local_500[0] = ' ';
    if (local_514.LeadByte[0] != 0) {
      pBVar5 = local_514.LeadByte + 1;
      do {
        uVar2 = (uint)local_514.LeadByte[0];
        if (uVar2 <= *pBVar5) {
          uVar3 = (*pBVar5 - uVar2) + 1;
          uVar4 = uVar3 >> 2;
          pCVar7 = local_500 + uVar2;
          while (uVar4 != 0) {
            uVar4 = uVar4 - 1;
            builtin_memcpy(pCVar7,"    ",4);
            pCVar7 = pCVar7 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pCVar7 = ' ';
            pCVar7 = pCVar7 + 1;
          }
        }
        local_514.LeadByte[0] = pBVar5[1];
        pBVar5 = pBVar5 + 2;
      } while (local_514.LeadByte[0] != 0);
    }
    FUN_10017bc0(1,local_500,0x100,local_200,DAT_10023730,DAT_10023734,0);
    FUN_10017d00(DAT_10023734,0x100,local_500,(LPCWSTR)0x100,local_400,0x100,DAT_10023730,0);
    FUN_10017d00(DAT_10023734,0x200,local_500,(LPCWSTR)0x100,local_300,0x100,DAT_10023730,0);
    uVar2 = 0;
    puVar6 = local_200;
    do {
      if ((*puVar6 & 1) == 0) {
        if ((*puVar6 & 2) == 0) {
          (&DAT_10023630)[uVar2] = 0;
        }
        else {
          *(byte *)((int)&DAT_10023528 + uVar2 + 1) =
               *(byte *)((int)&DAT_10023528 + uVar2 + 1) | 0x20;
          (&DAT_10023630)[uVar2] = *(undefined1 *)((int)local_300 + uVar2);
        }
      }
      else {
        *(byte *)((int)&DAT_10023528 + uVar2 + 1) = *(byte *)((int)&DAT_10023528 + uVar2 + 1) | 0x10
        ;
        (&DAT_10023630)[uVar2] = *(undefined1 *)((int)local_400 + uVar2);
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 < 0x100);
    return;
  }
  uVar2 = 0;
  do {
    if ((uVar2 < 0x41) || (0x5a < uVar2)) {
      if ((uVar2 < 0x61) || (0x7a < uVar2)) {
        (&DAT_10023630)[uVar2] = 0;
      }
      else {
        *(byte *)((int)&DAT_10023528 + uVar2 + 1) = *(byte *)((int)&DAT_10023528 + uVar2 + 1) | 0x20
        ;
        (&DAT_10023630)[uVar2] = (char)uVar2 + -0x20;
      }
    }
    else {
      *(byte *)((int)&DAT_10023528 + uVar2 + 1) = *(byte *)((int)&DAT_10023528 + uVar2 + 1) | 0x10;
      (&DAT_10023630)[uVar2] = (char)uVar2 + ' ';
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return;
}



/* ==== FUN_10018df0 @ 10018df0 ==== 
 * signature: undefined __stdcall FUN_10018df0(void)
 * body: 10018df0-10018dfa
 */

void FUN_10018df0(void)

{
  FUN_100188f0(-3);
  return;
}



/* ==== FUN_10018e00 @ 10018e00 ==== 
 * signature: LPSTR __stdcall FUN_10018e00(void)
 * body: 10018e00-10018f55
 */

LPSTR FUN_10018e00(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  int iVar5;
  uint uVar6;
  LPSTR pCVar7;
  LPCH pCVar8;
  LPCH pCVar9;
  LPCH pCVar10;
  LPWCH lpWideCharStr;
  CHAR *pCVar11;
  LPSTR pCVar12;
  WCHAR *pWVar4;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar10 = (LPCH)0x0;
  if (DAT_1002374c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      pCVar10 = GetEnvironmentStrings();
      if (pCVar10 == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_1002374c = 2;
    }
    else {
      DAT_1002374c = 1;
    }
  }
  if (DAT_1002374c == 1) {
    if ((lpWideCharStr != (LPWCH)0x0) ||
       (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr != (LPWCH)0x0)) {
      WVar2 = *lpWideCharStr;
      pWVar3 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar4 = pWVar3;
          pWVar3 = pWVar4 + 1;
        } while (*pWVar3 != L'\0');
        pWVar3 = pWVar4 + 2;
        WVar2 = *pWVar3;
      }
      iVar5 = ((int)pWVar3 - (int)lpWideCharStr >> 1) + 1;
      uVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((uVar6 != 0) && (pCVar7 = (LPSTR)FUN_10015d50(uVar6), pCVar7 != (LPSTR)0x0)) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar7,uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) {
          FUN_10015a50(pCVar7);
          pCVar7 = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(lpWideCharStr);
        return pCVar7;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return (LPSTR)0x0;
    }
  }
  else if ((DAT_1002374c == 2) &&
          ((pCVar10 != (LPCH)0x0 || (pCVar10 = GetEnvironmentStrings(), pCVar10 != (LPCH)0x0)))) {
    cVar1 = *pCVar10;
    pCVar9 = pCVar10;
    while (cVar1 != '\0') {
      do {
        pCVar8 = pCVar9;
        pCVar9 = pCVar8 + 1;
      } while (pCVar8[1] != '\0');
      pCVar9 = pCVar8 + 2;
      cVar1 = pCVar8[2];
    }
    pCVar9 = pCVar9 + (1 - (int)pCVar10);
    pCVar7 = (LPSTR)FUN_10015d50((uint)pCVar9);
    if (pCVar7 != (LPSTR)0x0) {
      pCVar11 = pCVar10;
      pCVar12 = pCVar7;
      for (uVar6 = (uint)pCVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pCVar12 = *(undefined4 *)pCVar11;
        pCVar11 = pCVar11 + 4;
        pCVar12 = pCVar12 + 4;
      }
      for (uVar6 = (uint)pCVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pCVar12 = *pCVar11;
        pCVar11 = pCVar11 + 1;
        pCVar12 = pCVar12 + 1;
      }
      FreeEnvironmentStringsA(pCVar10);
      return pCVar7;
    }
    FreeEnvironmentStringsA(pCVar10);
    return (LPSTR)0x0;
  }
  return (LPSTR)0x0;
}



/* ==== FUN_10018f60 @ 10018f60 ==== 
 * signature: undefined __stdcall FUN_10018f60(void)
 * body: 10018f60-10018f9c
 */

void FUN_10018f60(void)

{
  if ((DAT_10023324 == 1) || ((DAT_10023324 == 0 && (DAT_10023328 == 1)))) {
    FUN_10018fa0((undefined *)0xfc);
    if (DAT_10023750 != (code *)0x0) {
      (*DAT_10023750)();
    }
    FUN_10018fa0((undefined *)0xff);
  }
  return;
}



/* ==== FUN_10018fa0 @ 10018fa0 ==== 
 * signature: undefined __cdecl FUN_10018fa0(undefined * param_1)
 * body: 10018fa0-10019175
 */

void __cdecl FUN_10018fa0(undefined *param_1)

{
  char cVar1;
  undefined **ppuVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  CHAR *pCVar10;
  char *pcVar11;
  DWORD local_1a8;
  char local_1a4 [100];
  char acStack_140 [60];
  CHAR local_104 [260];
  
  ppuVar2 = (undefined **)&DAT_100225c8;
  iVar8 = 0;
  do {
    if (param_1 == *ppuVar2) break;
    ppuVar2 = ppuVar2 + 2;
    iVar8 = iVar8 + 1;
  } while (ppuVar2 < &PTR_DAT_10022658);
  if (param_1 == (undefined *)(&DAT_100225c8)[iVar8 * 2]) {
    if ((DAT_10023324 == 1) || ((DAT_10023324 == 0 && (DAT_10023328 == 1)))) {
      if ((DAT_10025220 == 0) ||
         (hFile = *(HANDLE *)(DAT_10025220 + 0x48), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar7 = *(char **)(iVar8 * 8 + 0x100225cc);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,pcVar7,~uVar5 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (param_1 != (undefined *)0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
      if (DVar3 == 0) {
        pcVar7 = "<program name unknown>";
        pCVar10 = local_104;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pCVar10 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pCVar10 = pCVar10 + 4;
        }
        *(undefined2 *)pCVar10 = *(undefined2 *)pcVar7;
        pCVar10[2] = pcVar7[2];
      }
      uVar5 = 0xffffffff;
      pcVar7 = local_104;
      pcVar9 = local_104;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0x3c < ~uVar5) {
        uVar5 = 0xffffffff;
        pcVar7 = local_104;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pcVar7 = acStack_140 + ~uVar5;
        _strncpy(pcVar7,&DAT_1001f6e8,3);
      }
      pcVar9 = "Runtime Error!\n\nProgram: ";
      pcVar11 = local_1a4;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      *(undefined2 *)pcVar11 = *(undefined2 *)pcVar9;
      uVar5 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = "\n\n";
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = *(char **)(iVar8 * 8 + 0x100225cc);
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_1001a890(local_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



/* ==== FUN_10019180 @ 10019180 ==== 
 * signature: undefined __stdcall FUN_10019180(void)
 * body: 10019180-1001923b
 */

void FUN_10019180(void)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_10025200 == 0) {
    DAT_10025200 = 0x200;
  }
  else if (DAT_10025200 < 0x14) {
    DAT_10025200 = 0x14;
  }
  DAT_100241f8 = FUN_10019830(DAT_10025200,4);
  if (DAT_100241f8 == (int *)0x0) {
    DAT_10025200 = 0x14;
    DAT_100241f8 = FUN_10019830(0x14,4);
    if (DAT_100241f8 == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar3 = 0;
  ppuVar1 = &PTR_DAT_10022658;
  do {
    *(undefined ***)((int)DAT_100241f8 + iVar3) = ppuVar1;
    ppuVar1 = ppuVar1 + 8;
    iVar3 = iVar3 + 4;
  } while ((int)ppuVar1 < 0x100228d8);
  uVar2 = 0;
  puVar4 = &DAT_10022668;
  do {
    iVar3 = *(int *)((&DAT_10025220)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
    if ((iVar3 == -1) || (iVar3 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar2 = uVar2 + 1;
  } while ((int)puVar4 < 0x100226c8);
  return;
}



/* ==== FUN_1001923c @ 1001923c ==== 
 * signature: undefined FUN_1001923c(void)
 * body: 1001923c-10019253
 */

void FUN_1001923c(void)

{
  FUN_1001aa70();
  if (DAT_100233c8 != '\0') {
    FUN_1001a920();
    return;
  }
  return;
}



/* ==== FUN_10019254 @ 10019254 ==== 
 * signature: undefined FUN_10019254(void)
 * body: 10019254-1001925f
 */

int FUN_10019254(LCID param_1,DWORD param_2,byte *param_3,LPWSTR param_4,byte *param_5,int param_6,
                UINT param_7)

{
  int iVar1;
  BOOL BVar2;
  BYTE *pBVar3;
  int cchWideChar;
  PCNZWCH lpWideCharStr;
  int iVar4;
  int iStack_18;
  _cpinfo _Stack_14;
  
  if (DAT_1002375c == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      iVar1 = CompareStringA(0,0,"",1,"",1);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_1002375c = 2;
    }
    else {
      DAT_1002375c = 1;
    }
  }
  iVar1 = (int)param_4;
  if (0 < (int)param_4) {
    iVar1 = FUN_10017f30((char *)param_3,(int)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_10017f30((char *)param_5,param_6);
  }
  if (DAT_1002375c == 2) {
    iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,iVar1,(PCNZCH)param_5,param_6);
    return iVar1;
  }
  iStack_18 = DAT_1002375c;
  if (DAT_1002375c == 1) {
    iStack_18 = 0;
    param_4 = (LPWSTR)0x0;
    if (param_7 == 0) {
      param_7 = DAT_10023408;
    }
    if ((iVar1 == 0) || (param_6 == 0)) {
      if (iVar1 == param_6) {
        return 2;
      }
      if (1 < param_6) {
        return 1;
      }
      if (1 < iVar1) {
        return 3;
      }
      BVar2 = GetCPInfo(param_7,&_Stack_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < iVar1) {
        if (_Stack_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = _Stack_14.LeadByte;
        while( true ) {
          if ((_Stack_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *param_3) && (*param_3 <= pBVar3[1])) break;
          _Stack_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
      if (0 < param_6) {
        if (_Stack_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = _Stack_14.LeadByte;
        while( true ) {
          if ((_Stack_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *param_5) && (*param_5 <= pBVar3[1])) break;
          _Stack_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
    }
    cchWideChar = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,iVar1,(LPWSTR)0x0,0);
    if (cchWideChar == 0) {
      return 0;
    }
    lpWideCharStr = (PCNZWCH)FUN_10015d50(cchWideChar * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar1 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,iVar1,lpWideCharStr,cchWideChar);
    if ((((iVar1 != 0) &&
         (iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar1 != 0))
        && (param_4 = (LPWSTR)FUN_10015d50(iVar1 * 2), param_4 != (LPWSTR)0x0)) &&
       (iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,param_4,iVar1), iVar4 != 0)) {
      iStack_18 = CompareStringW(param_1,param_2,lpWideCharStr,cchWideChar,param_4,iVar1);
    }
    FUN_10015a50((undefined *)lpWideCharStr);
    FUN_10015a50((undefined *)param_4);
  }
  return iStack_18;
}



/* ==== FUN_10019260 @ 10019260 ==== 
 * signature: int __cdecl FUN_10019260(LCID param_1, DWORD param_2, byte * param_3, LPWSTR param_4, byte * param_5, int param_6, UINT param_7)
 * body: 10019260-10019524
 */

int __cdecl
FUN_10019260(LCID param_1,DWORD param_2,byte *param_3,LPWSTR param_4,byte *param_5,int param_6,
            UINT param_7)

{
  int iVar1;
  LPWSTR cbMultiByte;
  BOOL BVar2;
  BYTE *pBVar3;
  PCNZWCH lpWideCharStr;
  int iVar4;
  int iVar5;
  int local_18;
  _cpinfo local_14;
  
  if (DAT_1002375c == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      iVar1 = CompareStringA(0,0,"",1,"",1);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_1002375c = 2;
    }
    else {
      DAT_1002375c = 1;
    }
  }
  cbMultiByte = param_4;
  if (0 < (int)param_4) {
    cbMultiByte = (LPWSTR)FUN_10017f30((char *)param_3,(int)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_10017f30((char *)param_5,param_6);
  }
  if (DAT_1002375c == 2) {
    iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,(int)cbMultiByte,(PCNZCH)param_5,param_6)
    ;
    return iVar1;
  }
  local_18 = DAT_1002375c;
  if (DAT_1002375c == 1) {
    local_18 = 0;
    param_4 = (LPWSTR)0x0;
    if (param_7 == 0) {
      param_7 = DAT_10023408;
    }
    if ((cbMultiByte == (LPWSTR)0x0) || (param_6 == 0)) {
      if (cbMultiByte == (LPWSTR)param_6) {
        return 2;
      }
      if (1 < param_6) {
        return 1;
      }
      if (1 < (int)cbMultiByte) {
        return 3;
      }
      BVar2 = GetCPInfo(param_7,&local_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < (int)cbMultiByte) {
        if (local_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *param_3) && (*param_3 <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
      if (0 < param_6) {
        if (local_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *param_5) && (*param_5 <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
    }
    iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,(int)cbMultiByte,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lpWideCharStr = (PCNZWCH)FUN_10015d50(iVar1 * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
    if ((((iVar4 != 0) &&
         (iVar4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar4 != 0))
        && (param_4 = (LPWSTR)FUN_10015d50(iVar4 * 2), param_4 != (LPWSTR)0x0)) &&
       (iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,param_4,iVar4), iVar5 != 0)) {
      local_18 = CompareStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar4);
    }
    FUN_10015a50((undefined *)lpWideCharStr);
    FUN_10015a50((undefined *)param_4);
  }
  return local_18;
}



/* ==== FUN_10019530 @ 10019530 ==== 
 * signature: undefined4 __cdecl FUN_10019530(uint * param_1, int param_2)
 * body: 10019530-10019732
 */

undefined4 __cdecl FUN_10019530(uint *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  LPWSTR pWVar5;
  int *piVar6;
  LPCSTR lpName;
  uint uVar7;
  uint uVar8;
  CHAR *pCVar9;
  LPCSTR pCVar10;
  bool bVar11;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar3 = FUN_1001acf0(param_1,0x3d);
  if (puVar3 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar3) {
    return 0xffffffff;
  }
  bVar11 = *(char *)((int)puVar3 + 1) == '\0';
  if (DAT_100233b0 == DAT_100233b4) {
    DAT_100233b0 = FUN_100197c0(DAT_100233b0);
  }
  if (DAT_100233b0 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_100233b8 == (undefined4 *)0x0)) {
      if (bVar11) {
        return 0;
      }
      DAT_100233b0 = (int *)FUN_10015d50(4);
      if (DAT_100233b0 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_100233b0 = 0;
      if (DAT_100233b8 == (undefined4 *)0x0) {
        DAT_100233b8 = (undefined4 *)FUN_10015d50(4);
        if (DAT_100233b8 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_100233b8 = 0;
      }
    }
    else {
      iVar4 = FUN_10016fe0();
      if (iVar4 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar6 = DAT_100233b0;
  pWVar5 = (LPWSTR)((int)puVar3 - (int)param_1);
  iVar4 = FUN_10019740((byte *)param_1,pWVar5);
  if ((iVar4 < 0) || (*piVar6 == 0)) {
    if (bVar11) {
      return 0;
    }
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    piVar6 = FUN_1001ab40(piVar6,iVar4 * 4 + 8);
    if (piVar6 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar6[iVar4] = (int)param_1;
    piVar6[iVar4 + 1] = 0;
    DAT_100233b0 = piVar6;
  }
  else if (bVar11) {
    FUN_10015a50((undefined *)piVar6[iVar4]);
    iVar1 = piVar6[iVar4];
    piVar2 = piVar6 + iVar4;
    while (iVar1 != 0) {
      *piVar2 = piVar2[1];
      iVar4 = iVar4 + 1;
      iVar1 = piVar2[1];
      piVar2 = piVar2 + 1;
    }
    piVar6 = FUN_1001ab40(piVar6,iVar4 * 4);
    if (piVar6 != (int *)0x0) {
      DAT_100233b0 = piVar6;
    }
  }
  else {
    piVar6[iVar4] = (int)param_1;
  }
  if (param_2 != 0) {
    uVar7 = 0xffffffff;
    puVar3 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar8 = *puVar3;
      puVar3 = (uint *)((int)puVar3 + 1);
    } while ((char)uVar8 != '\0');
    lpName = (LPCSTR)FUN_10015d50(~uVar7 + 1);
    if (lpName != (LPCSTR)0x0) {
      uVar7 = 0xffffffff;
      do {
        puVar3 = param_1;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        puVar3 = (uint *)((int)param_1 + 1);
        uVar8 = *param_1;
        param_1 = puVar3;
      } while ((char)uVar8 != '\0');
      uVar7 = ~uVar7;
      pCVar9 = (CHAR *)((int)puVar3 - uVar7);
      pCVar10 = lpName;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pCVar10 = *(undefined4 *)pCVar9;
        pCVar9 = pCVar9 + 4;
        pCVar10 = pCVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pCVar10 = *pCVar9;
        pCVar9 = pCVar9 + 1;
        pCVar10 = pCVar10 + 1;
      }
      lpName[(int)pWVar5] = '\0';
      SetEnvironmentVariableA(lpName,(LPCSTR)(~-(uint)bVar11 & (uint)(lpName + 1 + (int)pWVar5)));
      FUN_10015a50(lpName);
      return 0;
    }
  }
  return 0;
}



/* ==== FUN_10019740 @ 10019740 ==== 
 * signature: int __cdecl FUN_10019740(byte * param_1, LPWSTR param_2)
 * body: 10019740-100197b3
 */

int __cdecl FUN_10019740(byte *param_1,LPWSTR param_2)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  pbVar1 = (byte *)*DAT_100233b0;
  piVar3 = DAT_100233b0;
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  while ((iVar2 = FUN_10016fa0(param_1,pbVar1,param_2), iVar2 != 0 ||
         ((*(char *)(*piVar3 + (int)param_2) != '=' && (*(char *)(*piVar3 + (int)param_2) != '\0')))
         )) {
    pbVar1 = (byte *)piVar3[1];
    piVar3 = piVar3 + 1;
    if (pbVar1 == (byte *)0x0) {
      return -((int)piVar3 - (int)DAT_100233b0 >> 2);
    }
  }
  return (int)piVar3 - (int)DAT_100233b0 >> 2;
}



/* ==== FUN_100197c0 @ 100197c0 ==== 
 * signature: undefined4 * __cdecl FUN_100197c0(int * param_1)
 * body: 100197c0-1001982e
 */

undefined4 * __cdecl FUN_100197c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = (undefined4 *)FUN_10015d50(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    pcVar4 = (char *)*param_1;
    puVar6 = puVar3;
    while (pcVar4 != (char *)0x0) {
      param_1 = param_1 + 1;
      pcVar4 = FUN_1001adc0(pcVar4);
      *puVar6 = pcVar4;
      puVar6 = puVar6 + 1;
      pcVar4 = (char *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



/* ==== FUN_10019830 @ 10019830 ==== 
 * signature: int * __cdecl FUN_10019830(int param_1, int param_2)
 * body: 10019830-100198da
 */

int * __cdecl FUN_10019830(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint dwBytes;
  int *piVar3;
  int *piVar4;
  
  dwBytes = param_2 * param_1;
  if (dwBytes < 0xffffffe1) {
    if (dwBytes == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = dwBytes + 0xf & 0xfffffff0;
    }
  }
  do {
    piVar3 = (int *)0x0;
    if (dwBytes < 0xffffffe1) {
      if (DAT_100221d4 < dwBytes) {
LAB_100198a4:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        FUN_10016e20(9);
        piVar3 = FUN_100175a0(dwBytes >> 4);
        FUN_10016ea0(9);
        if (piVar3 != (int *)0x0) {
          piVar4 = piVar3;
          for (uVar2 = dwBytes >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          for (uVar2 = dwBytes & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)piVar4 = 0;
            piVar4 = (int *)((int)piVar4 + 1);
          }
          goto LAB_100198a4;
        }
      }
      piVar3 = HeapAlloc(DAT_1002532c,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_10023414 == 0)) {
      return piVar3;
    }
    iVar1 = FUN_10017f60(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



/* ==== FUN_100198e0 @ 100198e0 ==== 
 * signature: undefined4 __stdcall FUN_100198e0(void)
 * body: 100198e0-1001998d
 */

undefined4 FUN_100198e0(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_10023404 == 0) {
    PTR_PTR_10023194 = (undefined *)&PTR_DAT_100230e8;
    FUN_10019d10(DAT_10023760);
    FUN_10015a50((undefined *)DAT_10023760);
    DAT_10023760 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_10019830(1,0xac);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_10019990((char *)piVar1);
  if (uVar2 != 0) {
    FUN_10019d10(piVar1);
    FUN_10015a50((undefined *)piVar1);
    return 1;
  }
  PTR_PTR_10023194 = (undefined *)piVar1;
  FUN_10019d10(DAT_10023760);
  FUN_10015a50((undefined *)DAT_10023760);
  DAT_10023760 = piVar1;
  return 0;
}



/* ==== FUN_10019990 @ 10019990 ==== 
 * signature: uint __cdecl FUN_10019990(char * param_1)
 * body: 10019990-10019d00
 */

uint __cdecl FUN_10019990(char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  char *pcVar44;
  
  uVar40 = (uint)DAT_1002379e;
  pcVar44 = (char *)(uint)DAT_100237a0;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  uVar1 = FUN_1001ae10(1,uVar40,0x31,param_1 + 4);
  uVar2 = FUN_1001ae10(1,uVar40,0x32,param_1 + 8);
  uVar3 = FUN_1001ae10(1,uVar40,0x33,param_1 + 0xc);
  uVar4 = FUN_1001ae10(1,uVar40,0x34,param_1 + 0x10);
  uVar5 = FUN_1001ae10(1,uVar40,0x35,param_1 + 0x14);
  uVar6 = FUN_1001ae10(1,uVar40,0x36,param_1 + 0x18);
  uVar7 = FUN_1001ae10(1,uVar40,0x37,param_1);
  uVar8 = FUN_1001ae10(1,uVar40,0x2a,param_1 + 0x20);
  uVar9 = FUN_1001ae10(1,uVar40,0x2b,param_1 + 0x24);
  uVar10 = FUN_1001ae10(1,uVar40,0x2c,param_1 + 0x28);
  uVar11 = FUN_1001ae10(1,uVar40,0x2d,param_1 + 0x2c);
  uVar12 = FUN_1001ae10(1,uVar40,0x2e,param_1 + 0x30);
  uVar13 = FUN_1001ae10(1,uVar40,0x2f,param_1 + 0x34);
  uVar14 = FUN_1001ae10(1,uVar40,0x30,param_1 + 0x1c);
  uVar15 = FUN_1001ae10(1,uVar40,0x44,param_1 + 0x38);
  uVar16 = FUN_1001ae10(1,uVar40,0x45,param_1 + 0x3c);
  uVar17 = FUN_1001ae10(1,uVar40,0x46,param_1 + 0x40);
  uVar18 = FUN_1001ae10(1,uVar40,0x47,param_1 + 0x44);
  uVar19 = FUN_1001ae10(1,uVar40,0x48,param_1 + 0x48);
  uVar20 = FUN_1001ae10(1,uVar40,0x49,param_1 + 0x4c);
  uVar21 = FUN_1001ae10(1,uVar40,0x4a,param_1 + 0x50);
  uVar22 = FUN_1001ae10(1,uVar40,0x4b,param_1 + 0x54);
  uVar23 = FUN_1001ae10(1,uVar40,0x4c,param_1 + 0x58);
  uVar24 = FUN_1001ae10(1,uVar40,0x4d,param_1 + 0x5c);
  uVar25 = FUN_1001ae10(1,uVar40,0x4e,param_1 + 0x60);
  uVar26 = FUN_1001ae10(1,uVar40,0x4f,param_1 + 100);
  uVar27 = FUN_1001ae10(1,uVar40,0x38,param_1 + 0x68);
  uVar28 = FUN_1001ae10(1,uVar40,0x39,param_1 + 0x6c);
  uVar29 = FUN_1001ae10(1,uVar40,0x3a,param_1 + 0x70);
  uVar30 = FUN_1001ae10(1,uVar40,0x3b,param_1 + 0x74);
  uVar31 = FUN_1001ae10(1,uVar40,0x3c,param_1 + 0x78);
  uVar32 = FUN_1001ae10(1,uVar40,0x3d,param_1 + 0x7c);
  uVar33 = FUN_1001ae10(1,uVar40,0x3e,param_1 + 0x80);
  uVar34 = FUN_1001ae10(1,uVar40,0x3f,param_1 + 0x84);
  uVar35 = FUN_1001ae10(1,uVar40,0x40,param_1 + 0x88);
  uVar36 = FUN_1001ae10(1,uVar40,0x41,param_1 + 0x8c);
  uVar37 = FUN_1001ae10(1,uVar40,0x42,param_1 + 0x90);
  uVar38 = FUN_1001ae10(1,uVar40,0x43,param_1 + 0x94);
  uVar39 = FUN_1001ae10(1,uVar40,0x28,param_1 + 0x98);
  uVar40 = FUN_1001ae10(1,uVar40,0x29,param_1 + 0x9c);
  uVar41 = FUN_1001ae10(1,(LCID)pcVar44,0x1f,param_1 + 0xa0);
  uVar42 = FUN_1001ae10(1,(LCID)pcVar44,0x20,param_1 + 0xa4);
  uVar43 = FUN_10019f50(pcVar44,(int)param_1);
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
         uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 |
         uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 |
         uVar42 | uVar43;
}



/* ==== FUN_10019d10 @ 10019d10 ==== 
 * signature: undefined __cdecl FUN_10019d10(undefined4 * param_1)
 * body: 10019d10-10019f42
 */

void __cdecl FUN_10019d10(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_10015a50((undefined *)param_1[1]);
    FUN_10015a50((undefined *)param_1[2]);
    FUN_10015a50((undefined *)param_1[3]);
    FUN_10015a50((undefined *)param_1[4]);
    FUN_10015a50((undefined *)param_1[5]);
    FUN_10015a50((undefined *)param_1[6]);
    FUN_10015a50((undefined *)*param_1);
    FUN_10015a50((undefined *)param_1[8]);
    FUN_10015a50((undefined *)param_1[9]);
    FUN_10015a50((undefined *)param_1[10]);
    FUN_10015a50((undefined *)param_1[0xb]);
    FUN_10015a50((undefined *)param_1[0xc]);
    FUN_10015a50((undefined *)param_1[0xd]);
    FUN_10015a50((undefined *)param_1[7]);
    FUN_10015a50((undefined *)param_1[0xe]);
    FUN_10015a50((undefined *)param_1[0xf]);
    FUN_10015a50((undefined *)param_1[0x10]);
    FUN_10015a50((undefined *)param_1[0x11]);
    FUN_10015a50((undefined *)param_1[0x12]);
    FUN_10015a50((undefined *)param_1[0x13]);
    FUN_10015a50((undefined *)param_1[0x14]);
    FUN_10015a50((undefined *)param_1[0x15]);
    FUN_10015a50((undefined *)param_1[0x16]);
    FUN_10015a50((undefined *)param_1[0x17]);
    FUN_10015a50((undefined *)param_1[0x18]);
    FUN_10015a50((undefined *)param_1[0x19]);
    FUN_10015a50((undefined *)param_1[0x1a]);
    FUN_10015a50((undefined *)param_1[0x1b]);
    FUN_10015a50((undefined *)param_1[0x1c]);
    FUN_10015a50((undefined *)param_1[0x1d]);
    FUN_10015a50((undefined *)param_1[0x1e]);
    FUN_10015a50((undefined *)param_1[0x1f]);
    FUN_10015a50((undefined *)param_1[0x20]);
    FUN_10015a50((undefined *)param_1[0x21]);
    FUN_10015a50((undefined *)param_1[0x22]);
    FUN_10015a50((undefined *)param_1[0x23]);
    FUN_10015a50((undefined *)param_1[0x24]);
    FUN_10015a50((undefined *)param_1[0x25]);
    FUN_10015a50((undefined *)param_1[0x26]);
    FUN_10015a50((undefined *)param_1[0x27]);
    FUN_10015a50((undefined *)param_1[0x28]);
    FUN_10015a50((undefined *)param_1[0x29]);
    FUN_10015a50((undefined *)param_1[0x2a]);
  }
  return;
}



/* ==== FUN_10019f50 @ 10019f50 ==== 
 * signature: uint __cdecl FUN_10019f50(char * param_1, int param_2)
 * body: 10019f50-1001a045
 */

uint __cdecl FUN_10019f50(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int local_8;
  int local_4;
  
  pcVar7 = param_1;
  local_4 = 0;
  local_8 = 0;
  uVar3 = FUN_1001ae10(0,(LCID)param_1,0x23,(char *)&local_4);
  uVar4 = FUN_1001ae10(0,(LCID)pcVar7,0x25,(char *)&local_8);
  uVar5 = FUN_1001ae10(1,(LCID)pcVar7,0x1e,(char *)&param_1);
  uVar5 = uVar3 | uVar4 | uVar5;
  if (uVar5 != 0) {
    return uVar5;
  }
  puVar6 = (undefined1 *)FUN_10015d50(0xd);
  *(undefined1 **)(param_2 + 0xa8) = puVar6;
  if (local_4 == 0) {
    *puVar6 = 0x68;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_10019fec;
    *pcVar7 = 'h';
  }
  else {
    *puVar6 = 0x48;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_10019fec;
    *pcVar7 = 'H';
  }
  pcVar7 = puVar6 + 2;
LAB_10019fec:
  cVar2 = *param_1;
  pcVar8 = param_1;
  while (cVar2 != '\0') {
    *pcVar7 = cVar2;
    pcVar1 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar7 = 'm';
  pcVar8 = pcVar7 + 1;
  if (local_8 != 0) {
    *pcVar8 = 'm';
    pcVar8 = pcVar7 + 2;
  }
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    *pcVar8 = cVar2;
    pcVar1 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar8 = 's';
  pcVar8[1] = 's';
  pcVar8[2] = '\0';
  FUN_10015a50(param_1);
  return 0;
}



/* ==== FUN_1001a050 @ 1001a050 ==== 
 * signature: undefined4 __stdcall FUN_1001a050(void)
 * body: 1001a050-1001a245
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001a050(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_1002379a;
  if (DAT_10023400 == 0) {
    FUN_10015a50(DAT_10023764);
    FUN_10015a50(DAT_10023768);
    FUN_10015a50(DAT_1002376c);
    DAT_10023764 = (undefined *)0x0;
    DAT_10023768 = (undefined *)0x0;
    DAT_1002376c = (char *)0x0;
    uVar4 = FUN_10015d50(2);
    *(undefined4 *)PTR_PTR_100231d0 = uVar4;
    if (*(undefined2 **)PTR_PTR_100231d0 == (undefined2 *)0x0) {
      return 0xffffffff;
    }
    **(undefined2 **)PTR_PTR_100231d0 = DAT_1001fcfc;
    uVar4 = FUN_10015d50(2);
    *(undefined4 *)(PTR_PTR_100231d0 + 4) = uVar4;
    if (*(undefined1 **)(PTR_PTR_100231d0 + 4) == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    **(undefined1 **)(PTR_PTR_100231d0 + 4) = 0;
    uVar4 = FUN_10015d50(2);
    *(undefined4 *)(PTR_PTR_100231d0 + 8) = uVar4;
    if (*(undefined1 **)(PTR_PTR_100231d0 + 8) == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    **(undefined1 **)(PTR_PTR_100231d0 + 8) = 0;
  }
  else {
    iVar1 = FUN_1001ae10(1,uVar5,0xe,(char *)&DAT_10023764);
    iVar2 = FUN_1001ae10(1,uVar5,0xf,(char *)&DAT_10023768);
    iVar3 = FUN_1001ae10(1,uVar5,0x10,(char *)&DAT_1002376c);
    FUN_1001a490(DAT_1002376c);
    if ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) {
      FUN_10015a50(DAT_10023764);
      FUN_10015a50(DAT_10023768);
      FUN_10015a50(DAT_1002376c);
      DAT_10023764 = (undefined *)0x0;
      DAT_10023768 = (undefined *)0x0;
      DAT_1002376c = (char *)0x0;
      return 0xffffffff;
    }
    if (*(undefined **)PTR_PTR_100231d0 != &DAT_10023198) {
      FUN_10015a50(*(undefined **)PTR_PTR_100231d0);
      FUN_10015a50(*(undefined **)(PTR_PTR_100231d0 + 4));
      FUN_10015a50(*(undefined **)(PTR_PTR_100231d0 + 8));
    }
    *(undefined **)PTR_PTR_100231d0 = DAT_10023764;
    *(undefined **)(PTR_PTR_100231d0 + 4) = DAT_10023768;
    *(char **)(PTR_PTR_100231d0 + 8) = DAT_1002376c;
  }
  _DAT_100200dc = 1;
  DAT_100200d8 = **(undefined1 **)PTR_PTR_100231d0;
  return 0;
}



/* ==== FUN_1001a250 @ 1001a250 ==== 
 * signature: undefined4 __stdcall FUN_1001a250(void)
 * body: 1001a250-1001a33e
 */

undefined4 FUN_1001a250(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_100233fc == 0) {
    PTR_DAT_100231a0 = *(undefined **)PTR_PTR_100231d0;
    PTR_DAT_100231a4 = *(undefined **)(PTR_PTR_100231d0 + 4);
    PTR_DAT_100231a8 = *(undefined **)(PTR_PTR_100231d0 + 8);
    PTR_PTR_100231d0 = (undefined *)&PTR_DAT_100231a0;
    FUN_1001a4d0((int)DAT_10023770);
    FUN_10015a50((undefined *)DAT_10023770);
    DAT_10023770 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_10019830(1,0x30);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_1001a340((int)piVar1);
  if (uVar2 != 0) {
    FUN_1001a4d0((int)piVar1);
    FUN_10015a50((undefined *)piVar1);
    return 1;
  }
  *piVar1 = *(int *)PTR_PTR_100231d0;
  piVar1[1] = *(int *)(PTR_PTR_100231d0 + 4);
  piVar1[2] = *(int *)(PTR_PTR_100231d0 + 8);
  PTR_PTR_100231d0 = (undefined *)piVar1;
  FUN_1001a4d0((int)DAT_10023770);
  FUN_10015a50((undefined *)DAT_10023770);
  DAT_10023770 = piVar1;
  return 0;
}



/* ==== FUN_1001a340 @ 1001a340 ==== 
 * signature: uint __cdecl FUN_1001a340(int param_1)
 * body: 1001a340-1001a48a
 */

uint __cdecl FUN_1001a340(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar15 = (uint)DAT_10023794;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_1001ae10(1,uVar15,0x15,(char *)(param_1 + 0xc));
  uVar2 = FUN_1001ae10(1,uVar15,0x14,(char *)(param_1 + 0x10));
  uVar3 = FUN_1001ae10(1,uVar15,0x16,(char *)(param_1 + 0x14));
  uVar4 = FUN_1001ae10(1,uVar15,0x17,(char *)(param_1 + 0x18));
  uVar5 = FUN_1001ae10(1,uVar15,0x18,(char *)(param_1 + 0x1c));
  FUN_1001a490(*(char **)(param_1 + 0x1c));
  uVar6 = FUN_1001ae10(1,uVar15,0x50,(char *)(param_1 + 0x20));
  uVar7 = FUN_1001ae10(1,uVar15,0x51,(char *)(param_1 + 0x24));
  uVar8 = FUN_1001ae10(0,uVar15,0x1a,(char *)(param_1 + 0x28));
  uVar9 = FUN_1001ae10(0,uVar15,0x19,(char *)(param_1 + 0x29));
  uVar10 = FUN_1001ae10(0,uVar15,0x54,(char *)(param_1 + 0x2a));
  uVar11 = FUN_1001ae10(0,uVar15,0x55,(char *)(param_1 + 0x2b));
  uVar12 = FUN_1001ae10(0,uVar15,0x56,(char *)(param_1 + 0x2c));
  uVar13 = FUN_1001ae10(0,uVar15,0x57,(char *)(param_1 + 0x2d));
  uVar14 = FUN_1001ae10(0,uVar15,0x52,(char *)(param_1 + 0x2e));
  uVar15 = FUN_1001ae10(0,uVar15,0x53,(char *)(param_1 + 0x2f));
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15;
}



/* ==== FUN_1001a490 @ 1001a490 ==== 
 * signature: undefined __cdecl FUN_1001a490(char * param_1)
 * body: 1001a490-1001a4c2
 */

void __cdecl FUN_1001a490(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_1001a4a6;
      do {
        *pcVar3 = pcVar3[1];
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_1001a4a6:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}



/* ==== FUN_1001a4d0 @ 1001a4d0 ==== 
 * signature: undefined __cdecl FUN_1001a4d0(int param_1)
 * body: 1001a4d0-1001a535
 */

void __cdecl FUN_1001a4d0(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_100237e8)) {
    FUN_10015a50(*(undefined **)(param_1 + 0xc));
    FUN_10015a50(*(undefined **)(param_1 + 0x10));
    FUN_10015a50(*(undefined **)(param_1 + 0x14));
    FUN_10015a50(*(undefined **)(param_1 + 0x18));
    FUN_10015a50(*(undefined **)(param_1 + 0x1c));
    FUN_10015a50(*(undefined **)(param_1 + 0x20));
    FUN_10015a50(*(undefined **)(param_1 + 0x24));
  }
  return;
}



/* ==== FUN_1001a540 @ 1001a540 ==== 
 * signature: undefined4 __stdcall FUN_1001a540(void)
 * body: 1001a540-1001a7fa
 */

undefined4 FUN_1001a540(void)

{
  BYTE *pBVar1;
  LPWORD pWVar2;
  LPWORD pWVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  BYTE *pBVar7;
  LPCWSTR pWVar8;
  undefined2 *puVar9;
  LPCWSTR pWVar10;
  LPCSTR pCVar11;
  undefined2 *local_1c;
  undefined2 *local_18;
  _cpinfo local_14;
  
  pCVar11 = (LPCSTR)0x0;
  pWVar10 = (LPCWSTR)0x0;
  if (DAT_100233f8 == 0) {
    PTR_DAT_1001fec8 = &DAT_1001fed2;
    PTR_DAT_1001fecc = &DAT_1001fed2;
    FUN_10015a50((undefined *)DAT_10023774);
    FUN_10015a50((undefined *)DAT_10023778);
    DAT_10023774 = (undefined2 *)0x0;
    DAT_10023778 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_10023408 != 0) ||
     (iVar4 = FUN_1001ae10(0,(uint)DAT_1002378c,0xb,(char *)&DAT_10023408), iVar4 == 0)) {
    local_18 = (undefined2 *)FUN_10015d50(0x202);
    local_1c = (undefined2 *)FUN_10015d50(0x202);
    pCVar11 = (LPCSTR)FUN_10015d50(0x101);
    pWVar10 = (LPCWSTR)FUN_10015d50(0x202);
    if ((local_18 != (undefined2 *)0x0) &&
       (((local_1c != (undefined2 *)0x0 && (pCVar11 != (LPCSTR)0x0)) && (pWVar10 != (LPCWSTR)0x0))))
    {
      iVar4 = 0;
      do {
        pCVar11[iVar4] = (CHAR)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x100);
      BVar5 = GetCPInfo(DAT_10023408,&local_14);
      if ((BVar5 != 0) && (local_14.MaxCharSize < 3)) {
        DAT_100200d4 = local_14.MaxCharSize & 0xffff;
        if ((1 < DAT_100200d4) && (local_14.LeadByte[0] != '\0')) {
          pBVar7 = local_14.LeadByte + 1;
          do {
            if (*pBVar7 == 0) break;
            uVar6 = (uint)pBVar7[-1];
            if (uVar6 <= *pBVar7) {
              do {
                pCVar11[uVar6] = '\0';
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 <= (int)(uint)*pBVar7);
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        pWVar2 = local_18 + 1;
        BVar5 = FUN_10017bc0(1,pCVar11,0x100,pWVar2,0,0,0);
        if (BVar5 != 0) {
          *local_18 = 0;
          iVar4 = 0;
          pWVar8 = pWVar10;
          do {
            *pWVar8 = (WCHAR)iVar4;
            pWVar8 = pWVar8 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x100);
          pWVar3 = local_1c + 1;
          BVar5 = FUN_10017a30(1,pWVar10,0x100,pWVar3,0,0);
          if (BVar5 != 0) {
            *local_1c = 0;
            if ((1 < (int)DAT_100200d4) && (local_14.LeadByte[0] != '\0')) {
              pBVar7 = local_14.LeadByte + 1;
              do {
                if (*pBVar7 == 0) break;
                uVar6 = (uint)pBVar7[-1];
                if (uVar6 <= *pBVar7) {
                  puVar9 = local_18 + uVar6 + 1;
                  do {
                    *puVar9 = 0x8000;
                    uVar6 = uVar6 + 1;
                    puVar9 = puVar9 + 1;
                  } while ((int)uVar6 <= (int)(uint)*pBVar7);
                }
                pBVar1 = pBVar7 + 1;
                pBVar7 = pBVar7 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_DAT_1001fec8 = (undefined *)pWVar2;
            PTR_DAT_1001fecc = (undefined *)pWVar3;
            if (DAT_10023774 != (undefined2 *)0x0) {
              FUN_10015a50((undefined *)DAT_10023774);
            }
            DAT_10023774 = local_18;
            if (DAT_10023778 != (undefined2 *)0x0) {
              FUN_10015a50((undefined *)DAT_10023778);
            }
            DAT_10023778 = local_1c;
            FUN_10015a50(pCVar11);
            FUN_10015a50((undefined *)pWVar10);
            return 0;
          }
        }
      }
    }
  }
  FUN_10015a50((undefined *)local_18);
  FUN_10015a50((undefined *)local_1c);
  FUN_10015a50(pCVar11);
  FUN_10015a50((undefined *)pWVar10);
  return 1;
}



/* ==== FUN_1001a800 @ 1001a800 ==== 
 * signature: undefined4 __stdcall FUN_1001a800(void)
 * body: 1001a800-1001a802
 */

undefined4 FUN_1001a800(void)

{
  return 0;
}



/* ==== _strcspn @ 1001a810 ==== 
 * signature: size_t __cdecl _strcspn(char * _Str, char * _Control)
 * body: 1001a810-1001a84d
 * note: Library Function - Single Match  _strcspn  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strcspn
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}



/* ==== _strpbrk @ 1001a850 ==== 
 * signature: char * __cdecl _strpbrk(char * _Str, char * _Control)
 * body: 1001a850-1001a889
 * note: Library Function - Single Match  _strpbrk  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strpbrk
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}



/* ==== FUN_1001a890 @ 1001a890 ==== 
 * signature: int __cdecl FUN_1001a890(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 1001a890-1001a91e
 */

int __cdecl FUN_1001a890(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100237c8 != (FARPROC)0x0) {
LAB_1001a8e0:
    if (DAT_100237cc != (FARPROC)0x0) {
      iVar1 = (*DAT_100237cc)();
    }
    if ((iVar1 != 0) && (DAT_100237d0 != (FARPROC)0x0)) {
      iVar1 = (*DAT_100237d0)(iVar1);
    }
    iVar1 = (*DAT_100237c8)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_100237c8 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_100237c8 != (FARPROC)0x0) {
      DAT_100237cc = GetProcAddress(hModule,"GetActiveWindow");
      DAT_100237d0 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_1001a8e0;
    }
  }
  return 0;
}



/* ==== FUN_1001a920 @ 1001a920 ==== 
 * signature: int __stdcall FUN_1001a920(void)
 * body: 1001a920-1001a9b2
 */

int FUN_1001a920(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  FUN_10016e20(2);
  iVar4 = 3;
  if (3 < DAT_10025200) {
    do {
      uVar1 = *(uint *)(DAT_100241f8 + iVar4 * 4);
      if (uVar1 != 0) {
        if (((*(byte *)(uVar1 + 0xc) & 0x83) != 0) && (iVar2 = FUN_1001b1a0(uVar1), iVar2 != -1)) {
          iVar3 = iVar3 + 1;
        }
        if (0x13 < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_100241f8 + iVar4 * 4) + 0x20));
          FUN_10015a50(*(undefined **)(DAT_100241f8 + iVar4 * 4));
          *(undefined4 *)(DAT_100241f8 + iVar4 * 4) = 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10025200);
  }
  FUN_10016ea0(2);
  return iVar3;
}



/* ==== FUN_1001a9b3 @ 1001a9b3 ==== 
 * signature: undefined FUN_1001a9b3(void)
 * body: 1001a9b3-1001a9bf
 */

int FUN_1001a9b3(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001aa00(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1[3] & 0x4000U) != 0) {
    iVar1 = FUN_1001b250(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/* ==== FUN_1001a9c0 @ 1001a9c0 ==== 
 * signature: int __cdecl FUN_1001a9c0(int * param_1)
 * body: 1001a9c0-1001a9f4
 */

int __cdecl FUN_1001a9c0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001aa00(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1[3] & 0x4000U) != 0) {
    iVar1 = FUN_1001b250(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/* ==== FUN_1001a9f5 @ 1001a9f5 ==== 
 * signature: undefined FUN_1001a9f5(void)
 * body: 1001a9f5-1001a9ff
 */

undefined4 FUN_1001a9f5(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    iVar4 = *param_1 - param_1[2];
    if (0 < iVar4) {
      iVar2 = FUN_1001b2f0(param_1[4],param_1[2],iVar4);
      uVar1 = param_1[3];
      if (iVar2 == iVar4) {
        if ((uVar1 & 0x80) != 0) {
          param_1[1] = 0;
          param_1[3] = uVar1 & 0xfffffffd;
          *param_1 = param_1[2];
          return 0;
        }
      }
      else {
        uVar3 = 0xffffffff;
        param_1[3] = uVar1 | 0x20;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar3;
}



/* ==== FUN_1001aa00 @ 1001aa00 ==== 
 * signature: undefined4 __cdecl FUN_1001aa00(int * param_1)
 * body: 1001aa00-1001aa6d
 */

undefined4 __cdecl FUN_1001aa00(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    iVar4 = *param_1 - param_1[2];
    if (0 < iVar4) {
      iVar2 = FUN_1001b2f0(param_1[4],param_1[2],iVar4);
      uVar1 = param_1[3];
      if (iVar2 == iVar4) {
        if ((uVar1 & 0x80) != 0) {
          param_1[1] = 0;
          param_1[3] = uVar1 & 0xfffffffd;
          *param_1 = param_1[2];
          return 0;
        }
      }
      else {
        uVar3 = 0xffffffff;
        param_1[3] = uVar1 | 0x20;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar3;
}



/* ==== FUN_1001aa6e @ 1001aa6e ==== 
 * signature: undefined FUN_1001aa6e(void)
 * body: 1001aa6e-1001aa6f
 */

void FUN_1001aa6e(void)

{
  FUN_1001aa80(1);
  return;
}



/* ==== FUN_1001aa70 @ 1001aa70 ==== 
 * signature: undefined __stdcall FUN_1001aa70(void)
 * body: 1001aa70-1001aa70
 */

void FUN_1001aa70(void)

{
  FUN_1001aa80(1);
  return;
}



/* ==== FUN_1001aa72 @ 1001aa72 ==== 
 * signature: undefined FUN_1001aa72(void)
 * body: 1001aa72-1001aa7a
 */

void FUN_1001aa72(void)

{
  int unaff_retaddr;
  
  FUN_1001aa80(unaff_retaddr);
  return;
}



/* ==== FUN_1001aa7b @ 1001aa7b ==== 
 * signature: undefined FUN_1001aa7b(void)
 * body: 1001aa7b-1001aa7f
 */

int FUN_1001aa7b(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_4;
  
  iVar4 = 0;
  iStack_4 = 0;
  iVar3 = 0;
  FUN_10016e20(2);
  if (0 < DAT_10025200) {
    do {
      iVar2 = *(int *)(DAT_100241f8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10016f00(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100241f8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1001a9c0(piVar1);
            if (iVar2 != -1) {
              iStack_4 = iStack_4 + 1;
            }
          }
          else if (((param_1 == 0) && ((piVar1[3] & 2U) != 0)) &&
                  (iVar2 = FUN_1001a9c0(piVar1), iVar2 == -1)) {
            iVar3 = -1;
          }
        }
        FUN_10016f70(iVar4,*(int *)(DAT_100241f8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10025200);
  }
  FUN_10016ea0(2);
  if (param_1 != 1) {
    iStack_4 = iVar3;
  }
  return iStack_4;
}



/* ==== FUN_1001aa80 @ 1001aa80 ==== 
 * signature: int __stdcall FUN_1001aa80(int param_1)
 * body: 1001aa80-1001aa80
 */

int FUN_1001aa80(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_4;
  
  iVar4 = 0;
  iStack_4 = 0;
  iVar3 = 0;
  FUN_10016e20(2);
  if (0 < DAT_10025200) {
    do {
      iVar2 = *(int *)(DAT_100241f8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10016f00(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100241f8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1001a9c0(piVar1);
            if (iVar2 != -1) {
              iStack_4 = iStack_4 + 1;
            }
          }
          else if (((param_1 == 0) && ((piVar1[3] & 2U) != 0)) &&
                  (iVar2 = FUN_1001a9c0(piVar1), iVar2 == -1)) {
            iVar3 = -1;
          }
        }
        FUN_10016f70(iVar4,*(int *)(DAT_100241f8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10025200);
  }
  FUN_10016ea0(2);
  if (param_1 != 1) {
    iStack_4 = iVar3;
  }
  return iStack_4;
}



/* ==== FUN_1001aa81 @ 1001aa81 ==== 
 * signature: undefined FUN_1001aa81(void)
 * body: 1001aa81-1001ab3a
 */

int FUN_1001aa81(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar3 = 0;
  FUN_10016e20(2);
  if (0 < DAT_10025200) {
    do {
      iVar2 = *(int *)(DAT_100241f8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10016f00(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100241f8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_2 == 1) {
            iVar2 = FUN_1001a9c0(piVar1);
            if (iVar2 != -1) {
              iVar5 = iVar5 + 1;
            }
          }
          else if (((param_2 == 0) && ((piVar1[3] & 2U) != 0)) &&
                  (iVar2 = FUN_1001a9c0(piVar1), iVar2 == -1)) {
            iVar3 = -1;
          }
        }
        FUN_10016f70(iVar4,*(int *)(DAT_100241f8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10025200);
  }
  FUN_10016ea0(2);
  if (param_2 != 1) {
    iVar5 = iVar3;
  }
  return iVar5;
}



/* ==== FUN_1001ab3b @ 1001ab3b ==== 
 * signature: undefined FUN_1001ab3b(void)
 * body: 1001ab3b-1001ab3f
 */

int * FUN_1001ab3b(int *param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piStack_8;
  int iStack_4;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_10015d50(param_2);
    return piVar1;
  }
  if (param_2 == 0) {
    FUN_10015a50((undefined *)param_1);
    return (int *)0x0;
  }
  uVar4 = param_2;
  if (param_2 < 0xffffffe1) {
    if (param_2 == 0) {
      param_2 = 0x10;
      uVar4 = param_2;
    }
    else {
      param_2 = param_2 + 0xf & 0xfffffff0;
      uVar4 = param_2;
    }
  }
  do {
    piVar1 = (int *)0x0;
    if (uVar4 < 0xffffffe1) {
      FUN_10016e20(9);
      pbVar2 = (byte *)FUN_100174e0((undefined *)param_1,&iStack_4,(uint *)&piStack_8);
      if (pbVar2 == (byte *)0x0) {
        FUN_10016ea0(9);
        piVar1 = HeapReAlloc(DAT_1002532c,0,param_1,uVar4);
      }
      else {
        if (uVar4 < DAT_100221d4) {
          iVar3 = FUN_10017960(iStack_4,piStack_8,pbVar2,uVar4 >> 4);
          piVar1 = param_1;
          if (iVar3 != 0) goto LAB_1001ac45;
          piVar1 = FUN_100175a0(uVar4 >> 4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_10017540(iStack_4,(int)piStack_8,pbVar2);
            uVar4 = param_2;
            goto LAB_1001ac45;
          }
LAB_1001ac49:
          piVar1 = HeapAlloc(DAT_1002532c,0,uVar4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_10017540(iStack_4,(int)piStack_8,pbVar2);
            uVar4 = param_2;
          }
        }
        else {
LAB_1001ac45:
          if (piVar1 == (int *)0x0) goto LAB_1001ac49;
        }
        FUN_10016ea0(9);
      }
    }
    if ((piVar1 != (int *)0x0) || (DAT_10023414 == 0)) {
      return piVar1;
    }
    iVar3 = FUN_10017f60(uVar4);
    if (iVar3 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



/* ==== FUN_1001ab40 @ 1001ab40 ==== 
 * signature: int * __cdecl FUN_1001ab40(int * param_1, uint param_2)
 * body: 1001ab40-1001acef
 */

int * __cdecl FUN_1001ab40(int *param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *local_8;
  int local_4;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_10015d50(param_2);
    return piVar1;
  }
  if (param_2 == 0) {
    FUN_10015a50((undefined *)param_1);
    return (int *)0x0;
  }
  uVar4 = param_2;
  if (param_2 < 0xffffffe1) {
    if (param_2 == 0) {
      param_2 = 0x10;
      uVar4 = param_2;
    }
    else {
      param_2 = param_2 + 0xf & 0xfffffff0;
      uVar4 = param_2;
    }
  }
  do {
    piVar1 = (int *)0x0;
    if (uVar4 < 0xffffffe1) {
      FUN_10016e20(9);
      pbVar2 = (byte *)FUN_100174e0((undefined *)param_1,&local_4,(uint *)&local_8);
      if (pbVar2 == (byte *)0x0) {
        FUN_10016ea0(9);
        piVar1 = HeapReAlloc(DAT_1002532c,0,param_1,uVar4);
      }
      else {
        if (uVar4 < DAT_100221d4) {
          iVar3 = FUN_10017960(local_4,local_8,pbVar2,uVar4 >> 4);
          piVar1 = param_1;
          if (iVar3 != 0) goto LAB_1001ac45;
          piVar1 = FUN_100175a0(uVar4 >> 4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_10017540(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
            goto LAB_1001ac45;
          }
LAB_1001ac49:
          piVar1 = HeapAlloc(DAT_1002532c,0,uVar4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_10017540(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
          }
        }
        else {
LAB_1001ac45:
          if (piVar1 == (int *)0x0) goto LAB_1001ac49;
        }
        FUN_10016ea0(9);
      }
    }
    if ((piVar1 != (int *)0x0) || (DAT_10023414 == 0)) {
      return piVar1;
    }
    iVar3 = FUN_10017f60(uVar4);
    if (iVar3 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



/* ==== FUN_1001acf0 @ 1001acf0 ==== 
 * signature: uint * __cdecl FUN_1001acf0(uint * param_1, uint param_2)
 * body: 1001acf0-1001adb1
 */

uint * __cdecl FUN_1001acf0(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  
  if (DAT_10023730 == 0) {
    puVar3 = FUN_10016a60(param_1,(char)param_2);
    return puVar3;
  }
  FUN_10016e20(0x19);
  bVar1 = (byte)*param_1;
  while (uVar2 = (uint)bVar1, bVar1 != 0) {
    if ((*(byte *)((int)&DAT_10023528 + uVar2 + 1) & 4) == 0) {
      puVar3 = param_1;
      if (param_2 == uVar2) break;
    }
    else {
      puVar3 = (uint *)((int)param_1 + 1);
      if (*(char *)((int)param_1 + 1) == '\0') {
        FUN_10016ea0(0x19);
        return (uint *)0x0;
      }
      if (param_2 == CONCAT11(bVar1,*(char *)((int)param_1 + 1))) {
        FUN_10016ea0(0x19);
        return param_1;
      }
    }
    param_1 = (uint *)((int)puVar3 + 1);
    bVar1 = *(byte *)((int)puVar3 + 1);
  }
  FUN_10016ea0(0x19);
  return (uint *)((param_2 != uVar2) - 1 & (uint)param_1);
}



/* ==== FUN_1001adc0 @ 1001adc0 ==== 
 * signature: char * __cdecl FUN_1001adc0(char * param_1)
 * body: 1001adc0-1001ae0f
 */

char * __cdecl FUN_1001adc0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_1 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_10015d50(~uVar3);
    if (pcVar2 != (char *)0x0) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = pcVar2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      return pcVar2;
    }
  }
  return (char *)0x0;
}



/* ==== FUN_1001ae10 @ 1001ae10 ==== 
 * signature: undefined4 __cdecl FUN_1001ae10(int param_1, LCID param_2, LCTYPE param_3, char * param_4)
 * body: 1001ae10-1001afbb
 */

undefined4 __cdecl FUN_1001ae10(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  LPSTR _Source;
  char *_Dest;
  int iVar5;
  byte *pbVar6;
  CHAR local_80 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar5 = FUN_1001b580(param_2,param_3,(LPWSTR)&DAT_100237e0,4,0);
    if (iVar5 != 0) {
      pbVar6 = &DAT_100237e0;
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar6;
        if (DAT_100200d4 < 2) {
          uVar3 = (byte)PTR_DAT_1001fec8[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar3 = FUN_10015ac0((uint)bVar1,4);
        }
        if (uVar3 == 0) break;
        pbVar6 = pbVar6 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x100237e7 < (int)pbVar6) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_80;
  bVar2 = false;
  uVar3 = FUN_1001b6b0(param_2,param_3,local_80,0x80,0);
  if (uVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) || (uVar3 = FUN_1001b6b0(param_2,param_3,(LPSTR)0x0,0,0), uVar3 == 0)) ||
       (_Source = (LPSTR)FUN_10015d50(uVar3), _Source == (LPSTR)0x0)) goto LAB_1001aec0;
    bVar2 = true;
    uVar3 = FUN_1001b6b0(param_2,param_3,_Source,uVar3,0);
    if (uVar3 == 0) goto LAB_1001aec0;
  }
  _Dest = (char *)FUN_10015d50(uVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,uVar3);
    if (!bVar2) {
      return 0;
    }
    FUN_10015a50(_Source);
    return 0;
  }
LAB_1001aec0:
  if (!bVar2) {
    return 0xffffffff;
  }
  FUN_10015a50(_Source);
  return 0xffffffff;
}



/* ==== FUN_1001afc0 @ 1001afc0 ==== 
 * signature: uint __cdecl FUN_1001afc0(byte * param_1, byte * param_2)
 * body: 1001afc0-1001b08f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1001afc0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = _DAT_10025328;
  if (DAT_100233f8 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1001b00e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1001b00e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10025328 = _DAT_10025328 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10025324;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10025328 = iVar2;
      FUN_10016e20(0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1001b06f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1001b8e0(uVar8);
      uVar7 = FUN_1001b8e0(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1001b06f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10025328 = _DAT_10025328 + -1;
      UNLOCK();
    }
    else {
      FUN_10016ea0(0x13);
    }
  }
  return uVar7;
}



/* ==== FUN_1001b090 @ 1001b090 ==== 
 * signature: undefined4 __cdecl FUN_1001b090(byte * param_1, char * param_2, int param_3)
 * body: 1001b090-1001b190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1001b090(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_10025328;
  uVar6 = 0;
  if (param_3 != 0) {
    if (DAT_100233f8 == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_1001b0ef;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1001b0ef:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10025328 = _DAT_10025328 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10025324;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10025328 = iVar2;
        FUN_10016e20(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar7 = 0;
      uVar5 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_1001b8e0(uVar7);
        uVar5 = FUN_1001b8e0(uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1001b165;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1001b165:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10025328 = _DAT_10025328 + -1;
        UNLOCK();
      }
      else {
        FUN_10016ea0(0x13);
      }
    }
  }
  return uVar6;
}



/* ==== FUN_1001b1a0 @ 1001b1a0 ==== 
 * signature: undefined4 __stdcall FUN_1001b1a0(uint param_1)
 * body: 1001b1a0-1001b1a0
 */

undefined4 FUN_1001b1a0(uint param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0xffffffff;
  }
  FUN_10016ec0(param_1);
  uVar1 = FUN_1001b1e0((int *)param_1);
  FUN_10016f30(param_1);
  return uVar1;
}



/* ==== FUN_1001b1a1 @ 1001b1a1 ==== 
 * signature: undefined FUN_1001b1a1(void)
 * body: 1001b1a1-1001b1dc
 */

undefined4 FUN_1001b1a1(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_2 + 3) & 0x40) != 0) {
    param_2[3] = 0;
    return 0xffffffff;
  }
  FUN_10016ec0((uint)param_2);
  uVar1 = FUN_1001b1e0(param_2);
  FUN_10016f30((uint)param_2);
  return uVar1;
}



/* ==== FUN_1001b1dd @ 1001b1dd ==== 
 * signature: undefined FUN_1001b1dd(void)
 * body: 1001b1dd-1001b1df
 */

undefined4 FUN_1001b1dd(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_1001aa00(param_1);
    FUN_1001bae0(param_1);
    iVar1 = FUN_1001b9e0(param_1[4]);
    if (iVar1 < 0) {
      param_1[3] = 0;
      return 0xffffffff;
    }
    if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_10015a50((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}



/* ==== FUN_1001b1e0 @ 1001b1e0 ==== 
 * signature: undefined4 __stdcall FUN_1001b1e0(int * param_1)
 * body: 1001b1e0-1001b1e0
 */

undefined4 FUN_1001b1e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_1001aa00(param_1);
    FUN_1001bae0(param_1);
    iVar1 = FUN_1001b9e0(param_1[4]);
    if (iVar1 < 0) {
      param_1[3] = 0;
      return 0xffffffff;
    }
    if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_10015a50((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}



/* ==== FUN_1001b1e1 @ 1001b1e1 ==== 
 * signature: undefined FUN_1001b1e1(void)
 * body: 1001b1e1-1001b244
 */

undefined4 FUN_1001b1e1(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_2 + 3) & 0x83) != 0) {
    uVar2 = FUN_1001aa00(param_2);
    FUN_1001bae0(param_2);
    iVar1 = FUN_1001b9e0(param_2[4]);
    if (iVar1 < 0) {
      param_2[3] = 0;
      return 0xffffffff;
    }
    if ((undefined *)param_2[7] != (undefined *)0x0) {
      FUN_10015a50((undefined *)param_2[7]);
      param_2[7] = 0;
    }
  }
  param_2[3] = 0;
  return uVar2;
}



/* ==== FUN_1001b245 @ 1001b245 ==== 
 * signature: undefined FUN_1001b245(void)
 * body: 1001b245-1001b24f
 */

undefined4 FUN_1001b245(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10025320 <= param_1) {
LAB_1001b2dc:
    pDVar3 = FUN_10018220();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1001b2dc;
  FUN_1001bc10(param_1);
  if ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1001bbc0(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1001b2cd;
    pDVar3 = FUN_10018230();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10018220();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1001b2cd:
  FUN_1001bc80(param_1);
  return uVar5;
}



/* ==== FUN_1001b250 @ 1001b250 ==== 
 * signature: undefined4 __stdcall FUN_1001b250(uint param_1)
 * body: 1001b250-1001b250
 */

undefined4 FUN_1001b250(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10025320 <= param_1) {
LAB_1001b2dc:
    pDVar3 = FUN_10018220();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1001b2dc;
  FUN_1001bc10(param_1);
  if ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1001bbc0(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1001b2cd;
    pDVar3 = FUN_10018230();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10018220();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1001b2cd:
  FUN_1001bc80(param_1);
  return uVar5;
}



/* ==== FUN_1001b255 @ 1001b255 ==== 
 * signature: undefined FUN_1001b255(void)
 * body: 1001b255-1001b2ed
 */

undefined4 FUN_1001b255(uint param_1)

{
  uint in_EAX;
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (in_EAX <= param_1) {
LAB_1001b2dc:
    pDVar3 = FUN_10018220();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1001b2dc;
  FUN_1001bc10(param_1);
  if ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1001bbc0(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1001b2cd;
    pDVar3 = FUN_10018230();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10018220();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1001b2cd:
  FUN_1001bc80(param_1);
  return uVar5;
}



/* ==== FUN_1001b2ee @ 1001b2ee ==== 
 * signature: undefined FUN_1001b2ee(void)
 * body: 1001b2ee-1001b2ef
 */

int FUN_1001b2ee(uint param_1,undefined4 param_2,char *param_3,uint param_4)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10025320) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001bc10(param_1);
    iVar1 = FUN_1001b370(param_1,param_3,param_4);
    FUN_1001bc80(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return -1;
}



/* ==== FUN_1001b2f0 @ 1001b2f0 ==== 
 * signature: undefined4 __stdcall FUN_1001b2f0(uint param_1, undefined4 param_2, undefined4 param_3)
 * body: 1001b2f0-1001b2f0
 */

int FUN_1001b2f0(uint param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  uint in_stack_00000010;
  
  if ((param_1 < DAT_10025320) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001bc10(param_1);
    iVar1 = FUN_1001b370(param_1,param_3,in_stack_00000010);
    FUN_1001bc80(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1001b2f5 @ 1001b2f5 ==== 
 * signature: undefined FUN_1001b2f5(void)
 * body: 1001b2f5-1001b361
 */

int FUN_1001b2f5(uint param_1,undefined4 param_2,char *param_3,uint param_4)

{
  uint in_EAX;
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < in_EAX) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001bc10(param_1);
    iVar1 = FUN_1001b370(param_1,param_3,param_4);
    FUN_1001bc80(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return -1;
}



/* ==== FUN_1001b362 @ 1001b362 ==== 
 * signature: undefined FUN_1001b362(void)
 * body: 1001b362-1001b36f
 */

int FUN_1001b362(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                char *param_6)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int *piVar6;
  DWORD unaff_EDI;
  char *pcVar7;
  DWORD DStack_40c;
  uint uStack_404;
  DWORD DStack_400;
  int iStack_3fc;
  int *piStack_3f8;
  char acStack_3f4 [1012];
  
  DStack_40c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = &DAT_10025220 + ((int)param_1 >> 5);
  piVar6 = (int *)((param_1 & 0x1f) * 0x24);
  if ((*(byte *)((int)piVar6 + *piVar1 + 4) & 0x20) != 0) {
    FUN_1001bcb0(param_1,0,2,unaff_EDI);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + (int)piVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + (int)piVar6),param_6,param_3,&DStack_400,
                      (LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      uStack_404 = GetLastError();
    }
    else {
      DStack_40c = DStack_400;
      uStack_404 = 0;
    }
  }
  else {
    uStack_404 = 0;
    pcVar7 = param_6;
    if (param_3 != 0) {
      do {
        pcVar3 = acStack_3f4;
        do {
          if (param_3 <= (uint)((int)pcVar7 - (int)param_6)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            iStack_3fc = iStack_3fc + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)acStack_3f4 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)((int)piVar1 + *piStack_3f8),acStack_3f4,
                          (int)pcVar3 - (int)acStack_3f4,&DStack_400,(LPOVERLAPPED)0x0);
        piVar6 = piVar1;
        if (BVar4 == 0) {
          uStack_404 = GetLastError();
          break;
        }
        DStack_40c = DStack_40c + DStack_400;
        if (((int)DStack_400 < (int)pcVar3 - (int)acStack_3f4) ||
           (param_3 <= (uint)((int)pcVar7 - (int)param_6))) break;
      } while( true );
    }
  }
  if (DStack_40c != 0) {
    return DStack_40c - iStack_3fc;
  }
  if (uStack_404 == 0) {
    if (((*(byte *)((int)piVar6 + *piStack_3f8 + 4) & 0x40) != 0) && (*param_6 == '\x1a')) {
      return 0;
    }
    pDVar5 = FUN_10018220();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_10018230();
    *pDVar5 = 0;
    return -1;
  }
  if (uStack_404 != 5) {
    FUN_100181a0(uStack_404);
    return -1;
  }
  pDVar5 = FUN_10018220();
  *pDVar5 = 9;
  pDVar5 = FUN_10018230();
  *pDVar5 = 5;
  return -1;
}



/* ==== FUN_1001b370 @ 1001b370 ==== 
 * signature: int __stdcall FUN_1001b370(uint param_1, char * param_2, uint param_3)
 * body: 1001b370-1001b370
 */

int FUN_1001b370(uint param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int *piVar6;
  DWORD unaff_EDI;
  char *pcVar7;
  char *in_stack_00000018;
  DWORD DStack_40c;
  uint uStack_404;
  DWORD DStack_400;
  int iStack_3fc;
  int *piStack_3f8;
  char acStack_3f4 [1012];
  
  DStack_40c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = &DAT_10025220 + ((int)param_1 >> 5);
  piVar6 = (int *)((param_1 & 0x1f) * 0x24);
  if ((*(byte *)((int)piVar6 + *piVar1 + 4) & 0x20) != 0) {
    FUN_1001bcb0(param_1,0,2,unaff_EDI);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + (int)piVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + (int)piVar6),in_stack_00000018,param_3,&DStack_400,
                      (LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      uStack_404 = GetLastError();
    }
    else {
      DStack_40c = DStack_400;
      uStack_404 = 0;
    }
  }
  else {
    uStack_404 = 0;
    pcVar7 = in_stack_00000018;
    if (param_3 != 0) {
      do {
        pcVar3 = acStack_3f4;
        do {
          if (param_3 <= (uint)((int)pcVar7 - (int)in_stack_00000018)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            iStack_3fc = iStack_3fc + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)acStack_3f4 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)((int)piVar1 + *piStack_3f8),acStack_3f4,
                          (int)pcVar3 - (int)acStack_3f4,&DStack_400,(LPOVERLAPPED)0x0);
        piVar6 = piVar1;
        if (BVar4 == 0) {
          uStack_404 = GetLastError();
          break;
        }
        DStack_40c = DStack_40c + DStack_400;
        if (((int)DStack_400 < (int)pcVar3 - (int)acStack_3f4) ||
           (param_3 <= (uint)((int)pcVar7 - (int)in_stack_00000018))) break;
      } while( true );
    }
  }
  if (DStack_40c != 0) {
    return DStack_40c - iStack_3fc;
  }
  if (uStack_404 == 0) {
    if (((*(byte *)((int)piVar6 + *piStack_3f8 + 4) & 0x40) != 0) && (*in_stack_00000018 == '\x1a'))
    {
      return 0;
    }
    pDVar5 = FUN_10018220();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_10018230();
    *pDVar5 = 0;
    return -1;
  }
  if (uStack_404 != 5) {
    FUN_100181a0(uStack_404);
    return -1;
  }
  pDVar5 = FUN_10018220();
  *pDVar5 = 9;
  pDVar5 = FUN_10018230();
  *pDVar5 = 5;
  return -1;
}



/* ==== FUN_1001b376 @ 1001b376 ==== 
 * signature: undefined FUN_1001b376(void)
 * body: 1001b376-1001b578
 */

int FUN_1001b376(void)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int *piVar6;
  DWORD unaff_EDI;
  char *pcVar7;
  int *piStack00000004;
  DWORD DStack00000010;
  int *piStack00000014;
  DWORD DStack00000018;
  DWORD in_stack_0000001c;
  int in_stack_00000020;
  int *in_stack_00000024;
  uint in_stack_00000420;
  uint in_stack_00000428;
  char *in_stack_00000434;
  
  DStack00000010 = 0;
  if (in_stack_00000428 == 0) {
    return 0;
  }
  piVar1 = &DAT_10025220 + ((int)in_stack_00000420 >> 5);
  piVar6 = (int *)((in_stack_00000420 & 0x1f) * 0x24);
  piStack00000004 = piVar6;
  piStack00000014 = piVar1;
  if ((*(byte *)((int)piVar6 + *piVar1 + 4) & 0x20) != 0) {
    FUN_1001bcb0(in_stack_00000420,0,2,unaff_EDI);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + (int)piVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + (int)piVar6),in_stack_00000434,in_stack_00000428,
                      &stack0x0000001c,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      DStack00000018 = GetLastError();
    }
    else {
      DStack00000010 = in_stack_0000001c;
      DStack00000018 = 0;
    }
  }
  else {
    DStack00000018 = 0;
    pcVar7 = in_stack_00000434;
    if (in_stack_00000428 != 0) {
      do {
        pcVar3 = &stack0x00000028;
        do {
          if (in_stack_00000428 <= (uint)((int)pcVar7 - (int)in_stack_00000434)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            in_stack_00000020 = in_stack_00000020 + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)&stack0x00000028 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)((int)piStack00000014 + *in_stack_00000024),&stack0x00000028,
                          (int)pcVar3 - (int)&stack0x00000028,&stack0x0000001c,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          DStack00000018 = GetLastError();
          piVar6 = piStack00000014;
          break;
        }
        DStack00000010 = DStack00000010 + in_stack_0000001c;
        piVar6 = piStack00000014;
        if (((int)in_stack_0000001c < (int)pcVar3 - (int)&stack0x00000028) ||
           (in_stack_00000428 <= (uint)((int)pcVar7 - (int)in_stack_00000434))) break;
      } while( true );
    }
  }
  if (DStack00000010 != 0) {
    return DStack00000010 - in_stack_00000020;
  }
  if (DStack00000018 == 0) {
    if (((*(byte *)((int)piVar6 + *in_stack_00000024 + 4) & 0x40) != 0) &&
       (*in_stack_00000434 == '\x1a')) {
      return 0;
    }
    pDVar5 = FUN_10018220();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_10018230();
    *pDVar5 = 0;
    return -1;
  }
  if (DStack00000018 != 5) {
    FUN_100181a0(DStack00000018);
    return -1;
  }
  pDVar5 = FUN_10018220();
  *pDVar5 = 9;
  pDVar5 = FUN_10018230();
  *pDVar5 = 5;
  return -1;
}



/* ==== FUN_1001b579 @ 1001b579 ==== 
 * signature: undefined FUN_1001b579(void)
 * body: 1001b579-1001b57f
 */

int FUN_1001b579(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  uint cchData;
  LPSTR lpLCData;
  
  if (DAT_100238ac == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_100238ac = 2;
    }
    else {
      DAT_100238ac = 1;
    }
  }
  if (DAT_100238ac == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_100238ac != 2) {
    return DAT_100238ac;
  }
  if (param_5 == 0) {
    param_5 = DAT_10023408;
  }
  cchData = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
  if (cchData != 0) {
    lpLCData = (LPSTR)FUN_10015d50(cchData);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,cchData);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
        if (iVar1 != 0) {
          FUN_10015a50(lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
        if (iVar1 != 0) {
          FUN_10015a50(lpLCData);
          return iVar1;
        }
      }
    }
    FUN_10015a50(lpLCData);
    return 0;
  }
  return 0;
}



/* ==== FUN_1001b580 @ 1001b580 ==== 
 * signature: int __cdecl FUN_1001b580(LCID param_1, LCTYPE param_2, LPWSTR param_3, int param_4, UINT param_5)
 * body: 1001b580-1001b6af
 */

int __cdecl FUN_1001b580(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  uint cchData;
  LPSTR lpLCData;
  
  if (DAT_100238ac == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_100238ac = 2;
    }
    else {
      DAT_100238ac = 1;
    }
  }
  if (DAT_100238ac == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_100238ac != 2) {
    return DAT_100238ac;
  }
  if (param_5 == 0) {
    param_5 = DAT_10023408;
  }
  cchData = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
  if (cchData != 0) {
    lpLCData = (LPSTR)FUN_10015d50(cchData);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,cchData);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
        if (iVar1 != 0) {
          FUN_10015a50(lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
        if (iVar1 != 0) {
          FUN_10015a50(lpLCData);
          return iVar1;
        }
      }
    }
    FUN_10015a50(lpLCData);
    return 0;
  }
  return 0;
}



/* ==== FUN_1001b6b0 @ 1001b6b0 ==== 
 * signature: int __cdecl FUN_1001b6b0(LCID param_1, LCTYPE param_2, LPSTR param_3, int param_4, UINT param_5)
 * body: 1001b6b0-1001b7ee
 */

int __cdecl FUN_1001b6b0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  LPWSTR lpLCData;
  
  if (DAT_100238b0 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_100238b0 = 2;
    }
    else {
      DAT_100238b0 = 1;
    }
  }
  if (DAT_100238b0 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_100238b0 != 1) {
    return DAT_100238b0;
  }
  if (param_5 == 0) {
    param_5 = DAT_10023408;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
  if (iVar1 != 0) {
    lpLCData = (LPWSTR)FUN_10015d50(iVar1 * 2);
    if (lpLCData == (LPWSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_10015a50((undefined *)lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,param_3,param_4,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_10015a50((undefined *)lpLCData);
          return iVar1;
        }
      }
    }
    FUN_10015a50((undefined *)lpLCData);
    return 0;
  }
  return 0;
}



/* ==== FUN_1001b7f0 @ 1001b7f0 ==== 
 * signature: undefined8 __stdcall FUN_1001b7f0(uint param_1, uint param_2, uint param_3, uint param_4)
 * body: 1001b7f0-1001b857
 */

undefined8 FUN_1001b7f0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



/* ==== FUN_1001b858 @ 1001b858 ==== 
 * signature: undefined FUN_1001b858(void)
 * body: 1001b858-1001b858
 */

void FUN_1001b858(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b859 @ 1001b859 ==== 
 * signature: undefined FUN_1001b859(void)
 * body: 1001b859-1001b859
 */

void FUN_1001b859(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b85a @ 1001b85a ==== 
 * signature: undefined FUN_1001b85a(void)
 * body: 1001b85a-1001b85a
 */

void FUN_1001b85a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b85b @ 1001b85b ==== 
 * signature: undefined FUN_1001b85b(void)
 * body: 1001b85b-1001b85b
 */

void FUN_1001b85b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b85c @ 1001b85c ==== 
 * signature: undefined FUN_1001b85c(void)
 * body: 1001b85c-1001b85c
 */

void FUN_1001b85c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b85d @ 1001b85d ==== 
 * signature: undefined FUN_1001b85d(void)
 * body: 1001b85d-1001b85d
 */

void FUN_1001b85d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b85e @ 1001b85e ==== 
 * signature: undefined FUN_1001b85e(void)
 * body: 1001b85e-1001b85e
 */

void FUN_1001b85e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b85f @ 1001b85f ==== 
 * signature: undefined FUN_1001b85f(void)
 * body: 1001b85f-1001b85f
 */

void FUN_1001b85f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b860 @ 1001b860 ==== 
 * signature: undefined8 __stdcall FUN_1001b860(uint param_1, uint param_2, uint param_3, uint param_4)
 * body: 1001b860-1001b880
 */

undefined8 FUN_1001b860(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}



/* ==== FUN_1001b881 @ 1001b881 ==== 
 * signature: undefined FUN_1001b881(void)
 * body: 1001b881-1001b8d4
 */

undefined8 FUN_1001b881(undefined4 param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = param_2;
  uVar5 = param_3;
  uVar3 = param_4;
  do {
    uVar6 = in_EAX & 1;
    in_EAX = in_EAX >> 1;
    uVar3 = (uint)(CONCAT14(uVar6 != 0,uVar3) >> 1);
    uVar6 = uVar5 & 1;
    uVar5 = uVar5 >> 1;
    uVar4 = (uint)(CONCAT14(uVar6 != 0,uVar4) >> 1);
  } while (in_EAX != 0);
  uVar1 = CONCAT44(uVar5,uVar4) / (ulonglong)uVar3;
  uVar3 = (int)uVar1 * param_5;
  lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_4;
  uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar4 = (uint)lVar2;
  uVar6 = uVar5 + uVar3;
  if (((CARRY4(uVar5,uVar3)) || (param_3 < uVar6)) || ((param_3 <= uVar6 && (param_2 < uVar4)))) {
    bVar7 = uVar4 < param_4;
    uVar4 = uVar4 - param_4;
    uVar6 = (uVar6 - param_5) - (uint)bVar7;
  }
  return CONCAT44(-(uint)(uVar4 - param_2 != 0) - ((uVar6 - param_3) - (uint)(uVar4 < param_2)),
                  -(uVar4 - param_2));
}



/* ==== FUN_1001b8d5 @ 1001b8d5 ==== 
 * signature: undefined FUN_1001b8d5(void)
 * body: 1001b8d5-1001b8d5
 */

void FUN_1001b8d5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b8d6 @ 1001b8d6 ==== 
 * signature: undefined FUN_1001b8d6(void)
 * body: 1001b8d6-1001b8d6
 */

void FUN_1001b8d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b8d7 @ 1001b8d7 ==== 
 * signature: undefined FUN_1001b8d7(void)
 * body: 1001b8d7-1001b8d7
 */

void FUN_1001b8d7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b8d8 @ 1001b8d8 ==== 
 * signature: undefined FUN_1001b8d8(void)
 * body: 1001b8d8-1001b8d8
 */

void FUN_1001b8d8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b8d9 @ 1001b8d9 ==== 
 * signature: undefined FUN_1001b8d9(void)
 * body: 1001b8d9-1001b8d9
 */

void FUN_1001b8d9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b8da @ 1001b8da ==== 
 * signature: undefined FUN_1001b8da(void)
 * body: 1001b8da-1001b8da
 */

void FUN_1001b8da(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b8db @ 1001b8db ==== 
 * signature: undefined FUN_1001b8db(void)
 * body: 1001b8db-1001b8db
 */

void FUN_1001b8db(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b8dc @ 1001b8dc ==== 
 * signature: undefined FUN_1001b8dc(void)
 * body: 1001b8dc-1001b8dc
 */

void FUN_1001b8dc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b8dd @ 1001b8dd ==== 
 * signature: undefined FUN_1001b8dd(void)
 * body: 1001b8dd-1001b8dd
 */

void FUN_1001b8dd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b8de @ 1001b8de ==== 
 * signature: undefined FUN_1001b8de(void)
 * body: 1001b8de-1001b8de
 */

void FUN_1001b8de(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b8df @ 1001b8df ==== 
 * signature: undefined FUN_1001b8df(void)
 * body: 1001b8df-1001b8df
 */

void FUN_1001b8df(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1001b8e0 @ 1001b8e0 ==== 
 * signature: uint __cdecl FUN_1001b8e0(uint param_1)
 * body: 1001b8e0-1001b9dd
 */

uint __cdecl FUN_1001b8e0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_100233f8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_100200d4 < 2) {
        uVar2 = (byte)PTR_DAT_1001fec8[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10015ac0(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_1001fec8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_10017d00(DAT_100233f8,0x100,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0,1);
    if (iVar4 == 0) {
      return uVar1;
    }
    if (iVar4 == 1) {
      return local_8[0] & 0xff;
    }
    param_1 = (local_8[0] >> 8 & 0xff) << 8 | local_8[0] & 0xff;
  }
  return param_1;
}



/* ==== FUN_1001b9e0 @ 1001b9e0 ==== 
 * signature: undefined4 __stdcall FUN_1001b9e0(uint param_1)
 * body: 1001b9e0-1001b9e0
 */

undefined4 FUN_1001b9e0(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10025320) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001bc10(param_1);
    uVar1 = FUN_1001ba50((HANDLE)param_1);
    FUN_1001bc80(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1001b9e5 @ 1001b9e5 ==== 
 * signature: undefined FUN_1001b9e5(void)
 * body: 1001b9e5-1001ba47
 */

undefined4 FUN_1001b9e5(HANDLE param_1)

{
  HANDLE in_EAX;
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < in_EAX) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + ((uint)param_1 & 0x1f) * 0x24) & 1) != 0))
  {
    FUN_1001bc10((uint)param_1);
    uVar1 = FUN_1001ba50(param_1);
    FUN_1001bc80((uint)param_1);
    return uVar1;
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1001ba48 @ 1001ba48 ==== 
 * signature: undefined FUN_1001ba48(void)
 * body: 1001ba48-1001ba4f
 */

undefined4 FUN_1001ba48(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_1001bbc0(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1001bbc0(1);
      iVar2 = FUN_1001bbc0(2);
      if (iVar1 == iVar2) goto LAB_1001baa6;
    }
    hObject = (HANDLE)FUN_1001bbc0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1001baa8;
    }
  }
LAB_1001baa6:
  DVar4 = 0;
LAB_1001baa8:
  FUN_1001bb20(param_1);
  *(undefined1 *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_100181a0(DVar4);
    return 0xffffffff;
  }
  return 0;
}



/* ==== FUN_1001ba50 @ 1001ba50 ==== 
 * signature: undefined4 __stdcall FUN_1001ba50(HANDLE param_1)
 * body: 1001ba50-1001ba50
 */

undefined4 FUN_1001ba50(HANDLE param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_1001bbc0((uint)param_1);
  if (iVar1 != -1) {
    if ((param_1 == (HANDLE)0x1) || (param_1 == (HANDLE)0x2)) {
      iVar1 = FUN_1001bbc0(1);
      iVar2 = FUN_1001bbc0(2);
      if (iVar1 == iVar2) goto LAB_1001baa6;
    }
    hObject = (HANDLE)FUN_1001bbc0((uint)param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1001baa8;
    }
  }
LAB_1001baa6:
  DVar4 = 0;
LAB_1001baa8:
  FUN_1001bb20((uint)param_1);
  *(undefined1 *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + ((uint)param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_100181a0(DVar4);
    return 0xffffffff;
  }
  return 0;
}



/* ==== FUN_1001ba51 @ 1001ba51 ==== 
 * signature: undefined FUN_1001ba51(void)
 * body: 1001ba51-1001badf
 */

undefined4 FUN_1001ba51(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_1001bbc0(param_2);
  if (iVar1 != -1) {
    if ((param_2 == 1) || (param_2 == 2)) {
      iVar1 = FUN_1001bbc0(1);
      iVar2 = FUN_1001bbc0(2);
      if (iVar1 == iVar2) goto LAB_1001baa6;
    }
    hObject = (HANDLE)FUN_1001bbc0(param_2);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1001baa8;
    }
  }
LAB_1001baa6:
  DVar4 = 0;
LAB_1001baa8:
  FUN_1001bb20(param_2);
  *(undefined1 *)((&DAT_10025220)[(int)param_2 >> 5] + 4 + (param_2 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_100181a0(DVar4);
    return 0xffffffff;
  }
  return 0;
}



/* ==== FUN_1001bae0 @ 1001bae0 ==== 
 * signature: undefined __stdcall FUN_1001bae0(undefined4 * param_1)
 * body: 1001bae0-1001bae0
 */

void FUN_1001bae0(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_10015a50((undefined *)param_1[2]);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



/* ==== FUN_1001bae1 @ 1001bae1 ==== 
 * signature: undefined FUN_1001bae1(void)
 * body: 1001bae1-1001bb12
 */

void FUN_1001bae1(undefined4 param_1,undefined4 *param_2)

{
  if (((param_2[3] & 0x83) != 0) && ((param_2[3] & 8) != 0)) {
    FUN_10015a50((undefined *)param_2[2]);
    param_2[3] = param_2[3] & 0xfffffbf7;
    *param_2 = 0;
    param_2[2] = 0;
    param_2[1] = 0;
  }
  return;
}



/* ==== FUN_1001bb13 @ 1001bb13 ==== 
 * signature: undefined FUN_1001bb13(void)
 * body: 1001bb13-1001bb1f
 */

undefined4 FUN_1001bb13(uint param_1)

{
  int iVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10025320) {
    iVar1 = (&DAT_10025220)[(int)param_1 >> 5];
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar3) & 1) != 0) && (*(int *)(iVar1 + iVar3) != -1)) {
      if (DAT_10023328 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1001bb87;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1001bb87:
      *(undefined4 *)((&DAT_10025220)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1001bb20 @ 1001bb20 ==== 
 * signature: undefined4 __stdcall FUN_1001bb20(uint param_1)
 * body: 1001bb20-1001bb20
 */

undefined4 FUN_1001bb20(uint param_1)

{
  int iVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10025320) {
    iVar1 = (&DAT_10025220)[(int)param_1 >> 5];
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar3) & 1) != 0) && (*(int *)(iVar1 + iVar3) != -1)) {
      if (DAT_10023328 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1001bb87;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1001bb87:
      *(undefined4 *)((&DAT_10025220)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1001bb24 @ 1001bb24 ==== 
 * signature: undefined FUN_1001bb24(void)
 * body: 1001bb24-1001bbb2
 */

undefined4 __fastcall FUN_1001bb24(uint param_1)

{
  int iVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10025320) {
    iVar1 = (&DAT_10025220)[(int)param_1 >> 5];
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar3) & 1) != 0) && (*(int *)(iVar1 + iVar3) != -1)) {
      if (DAT_10023328 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1001bb87;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1001bb87:
      *(undefined4 *)((&DAT_10025220)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1001bbb3 @ 1001bbb3 ==== 
 * signature: undefined FUN_1001bbb3(void)
 * body: 1001bbb3-1001bbbf
 */

undefined4 FUN_1001bbb3(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10025320) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10025220)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10018220();
  *pDVar1 = 9;
  pDVar1 = FUN_10018230();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ==== FUN_1001bbc0 @ 1001bbc0 ==== 
 * signature: undefined4 __cdecl FUN_1001bbc0(uint param_1)
 * body: 1001bbc0-1001bc08
 */

undefined4 __cdecl FUN_1001bbc0(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10025320) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10025220)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10018220();
  *pDVar1 = 9;
  pDVar1 = FUN_10018230();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ==== FUN_1001bc09 @ 1001bc09 ==== 
 * signature: undefined FUN_1001bc09(void)
 * body: 1001bc09-1001bc0f
 */

void FUN_1001bc09(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10025220)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10016e20(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10016ea0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10025220)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



/* ==== FUN_1001bc10 @ 1001bc10 ==== 
 * signature: undefined __stdcall FUN_1001bc10(uint param_1)
 * body: 1001bc10-1001bc10
 */

void FUN_1001bc10(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10025220)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10016e20(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10016ea0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10025220)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



/* ==== FUN_1001bc14 @ 1001bc14 ==== 
 * signature: undefined FUN_1001bc14(void)
 * body: 1001bc14-1001bc74
 */

void FUN_1001bc14(void)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = (in_EAX & 0x1f) * 0x24;
  iVar1 = (&DAT_10025220)[(int)in_EAX >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10016e20(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10016ea0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10025220)[(int)in_EAX >> 5] + 0xc + iVar2));
  return;
}



/* ==== FUN_1001bc75 @ 1001bc75 ==== 
 * signature: undefined FUN_1001bc75(void)
 * body: 1001bc75-1001bc7f
 */

void FUN_1001bc75(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10025220)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



/* ==== FUN_1001bc80 @ 1001bc80 ==== 
 * signature: undefined __stdcall FUN_1001bc80(uint param_1)
 * body: 1001bc80-1001bc80
 */

void FUN_1001bc80(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10025220)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



/* ==== FUN_1001bc84 @ 1001bc84 ==== 
 * signature: undefined FUN_1001bc84(void)
 * body: 1001bc84-1001bca1
 */

void FUN_1001bc84(void)

{
  uint in_EAX;
  
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((&DAT_10025220)[(int)in_EAX >> 5] + 0xc + (in_EAX & 0x1f) * 0x24))
  ;
  return;
}



/* ==== FUN_1001bca2 @ 1001bca2 ==== 
 * signature: undefined FUN_1001bca2(void)
 * body: 1001bca2-1001bcaf
 */

DWORD FUN_1001bca2(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)FUN_1001bbc0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_10018220();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    uVar3 = GetLastError();
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    FUN_100181a0(uVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}



/* ==== FUN_1001bcb0 @ 1001bcb0 ==== 
 * signature: DWORD __stdcall FUN_1001bcb0(uint param_1, undefined4 param_2, LONG param_3, DWORD param_4)
 * body: 1001bcb0-1001bcb0
 */

DWORD FUN_1001bcb0(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)FUN_1001bbc0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_10018220();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    uVar3 = GetLastError();
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    FUN_100181a0(uVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}



/* ==== FUN_1001bcb1 @ 1001bcb1 ==== 
 * signature: undefined FUN_1001bcb1(void)
 * body: 1001bcb1-1001bd2f
 */

DWORD FUN_1001bcb1(undefined4 param_1,uint param_2,LONG param_3,DWORD param_4)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)FUN_1001bbc0(param_2);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_10018220();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_3,(PLONG)0x0,param_4);
  if (DVar2 == 0xffffffff) {
    uVar3 = GetLastError();
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    FUN_100181a0(uVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_10025220)[(int)param_2 >> 5] + 4 + (param_2 & 0x1f) * 0x24) =
       *(byte *)((&DAT_10025220)[(int)param_2 >> 5] + 4 + (param_2 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}



/* ==== FUN_1001bd30 @ 1001bd30 ==== 
 * signature: undefined FUN_1001bd30(void)
 * body: 1001bd30-1001bdff
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1001bd30(void)

{
  char cVar1;
  char *in_EAX;
  
  cVar1 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


