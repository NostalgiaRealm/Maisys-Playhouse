
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


