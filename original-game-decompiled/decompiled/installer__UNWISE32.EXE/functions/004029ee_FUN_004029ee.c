
/* ==== FUN_004029ee @ 004029ee ==== 
 * signature: undefined __cdecl FUN_004029ee(HWND param_1)
 * body: 004029ee-00402b79
 */

void __cdecl FUN_004029ee(HWND param_1)

{
  bool bVar1;
  LRESULT LVar2;
  int iVar3;
  int iVar4;
  WPARAM wParam;
  
  if (DAT_00413ba0 == '\0') {
    LVar2 = SendDlgItemMessageA(DAT_00413818,1000,0xf0,0,0);
    DAT_00413840 = 0x3e9 - (uint)(LVar2 != 0);
  }
  else if (DAT_00413ba0 == '\f') {
    LVar2 = SendDlgItemMessageA(DAT_00413818,1000,0xf0,0,0);
    DAT_004138c8 = (uint)(LVar2 != 0);
  }
  else if (DAT_00413ba0 == '\v') {
    return;
  }
  wParam = 0;
  if (0 < DAT_00413c38) {
    do {
      LVar2 = SendDlgItemMessageA(param_1,0x3eb,0x187,wParam,0);
      switch(DAT_00413ba0) {
      case '\x01':
        iVar4 = DAT_00413858;
        goto LAB_00402ad2;
      case '\x02':
        *(LRESULT *)(*(int *)(DAT_00413c4c + wParam * 4) + 0x208) = LVar2;
        break;
      case '\x03':
        iVar4 = DAT_0041386c;
        goto LAB_00402ae6;
      case '\x04':
        iVar4 = DAT_0041382c;
        goto LAB_00402ae6;
      case '\x05':
        *(LRESULT *)(*(int *)(DAT_004138fc + wParam * 4) + 0x70c) = LVar2;
        break;
      case '\x06':
        iVar4 = DAT_00413848;
LAB_00402ad2:
        *(LRESULT *)(*(int *)(iVar4 + wParam * 4) + 0x210) = LVar2;
        break;
      case '\a':
        iVar4 = DAT_00413910;
LAB_00402ae6:
        iVar4 = *(int *)(iVar4 + wParam * 4);
LAB_00402b62:
        *(LRESULT *)(iVar4 + 0x104) = LVar2;
        break;
      case '\b':
        *(LRESULT *)(*(int *)(DAT_00413bc4 + wParam * 4) + 0x1210) = LVar2;
        break;
      case '\t':
        *(LRESULT *)(*(int *)(DAT_00413898 + wParam * 4) + 0x300) = LVar2;
        break;
      case '\n':
        iVar4 = 0;
        iVar3 = 0;
        if ((DAT_004138f0 != 0) && (iVar4 = 1, wParam == 0)) {
          iVar3 = iVar4;
          DAT_0041384c = LVar2;
        }
        if (iVar3 != 0) break;
        iVar3 = wParam - iVar4;
        bVar1 = iVar3 < DAT_00413bd8;
        if (bVar1) {
          *(LRESULT *)(*(int *)(DAT_004138a4 + iVar3 * 4) + 0x204) = LVar2;
        }
        if (bVar1) break;
        iVar4 = *(int *)(DAT_00413cd8 + (wParam - (iVar4 + DAT_00413bd8)) * 4);
        goto LAB_00402b62;
      }
      wParam = wParam + 1;
    } while ((int)wParam < DAT_00413c38);
  }
  return;
}


