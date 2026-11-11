
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


