
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


