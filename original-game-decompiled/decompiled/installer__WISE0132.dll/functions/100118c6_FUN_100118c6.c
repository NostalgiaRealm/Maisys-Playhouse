
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


