
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


