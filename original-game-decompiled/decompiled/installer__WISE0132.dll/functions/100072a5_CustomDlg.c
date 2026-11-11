
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


