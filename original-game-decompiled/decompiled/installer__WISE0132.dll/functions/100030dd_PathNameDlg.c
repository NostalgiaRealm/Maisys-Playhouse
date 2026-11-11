
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


