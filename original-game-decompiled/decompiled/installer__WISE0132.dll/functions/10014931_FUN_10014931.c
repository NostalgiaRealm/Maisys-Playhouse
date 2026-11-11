
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


