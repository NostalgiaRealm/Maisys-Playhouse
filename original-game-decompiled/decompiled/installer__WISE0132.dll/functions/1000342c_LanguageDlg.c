
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


