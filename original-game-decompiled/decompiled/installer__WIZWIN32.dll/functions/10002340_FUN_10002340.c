
/* ==== FUN_10002340 @ 10002340 ==== 
 * signature: undefined __cdecl FUN_10002340(HWND param_1, LPCSTR param_2)
 * body: 10002340-1000255b
 */

void __cdecl FUN_10002340(HWND param_1,LPCSTR param_2)

{
  char *pcVar1;
  HGDIOBJ h;
  HDC hdc;
  int iVar2;
  LPCSTR lpString2;
  char cVar3;
  char *pcVar4;
  LPSTR lpString1;
  tagSIZE *ptVar5;
  CHAR *lpString2_00;
  LPCSTR local_328;
  tagSIZE local_324;
  HGDIOBJ local_31c;
  HGDIOBJ local_318;
  tagRECT local_314;
  char local_304;
  char local_303 [254];
  undefined1 local_205;
  CHAR local_204 [260];
  CHAR local_100 [256];
  
  cVar3 = *param_2;
  local_328 = param_2;
  while (((cVar3 != '\n' && (cVar3 != '\r')) && (cVar3 != '\0'))) {
    pcVar4 = local_328 + 1;
    local_328 = local_328 + 1;
    cVar3 = *pcVar4;
  }
  for (; (*local_328 == '\r' || (*local_328 == '\n')); local_328 = local_328 + 1) {
  }
  if (*local_328 == '\0') {
    lstrcpyA(local_204,param_2);
    local_328 = param_2;
  }
  else {
    lstrcpyA(local_204,local_328);
  }
  if (param_1 != (HWND)0x0) {
    GetWindowRect(param_1,&local_314);
    local_314.right = local_314.right - local_314.left;
    h = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
    local_318 = h;
    hdc = GetDC(param_1);
    if (h != (HGDIOBJ)0x0) {
      local_31c = SelectObject(hdc,h);
    }
    ptVar5 = &local_324;
    iVar2 = lstrlenA(param_2);
    GetTextExtentPointA(hdc,local_204,iVar2,ptVar5);
    if (local_314.right <= local_324.cx) {
      lstrcpynA(&local_304,local_204,0x100);
      local_205 = 0;
      pcVar4 = &local_304;
      while ((local_304 != '\0' && (local_304 != '\\'))) {
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
        local_304 = *pcVar1;
      }
      if (*pcVar4 == '\\') {
        pcVar4 = pcVar4 + 1;
      }
      if (local_314.right <= local_324.cx) {
        do {
          lpString2 = pcVar4;
          if (*pcVar4 == '.') {
            cVar3 = '.';
            do {
              if (cVar3 == '\\') break;
              cVar3 = lpString2[1];
              lpString2 = lpString2 + 1;
            } while (cVar3 != '\0');
            if (*lpString2 == '\\') {
              lpString2 = lpString2 + 1;
            }
          }
          cVar3 = *lpString2;
          while ((cVar3 != '\0' && (cVar3 != '\\'))) {
            pcVar1 = lpString2 + 1;
            lpString2 = lpString2 + 1;
            cVar3 = *pcVar1;
          }
          if ((*lpString2 == '\0') || ((int)lpString2 - (int)pcVar4 < 4)) {
            lpString2_00 = &DAT_100040d0;
            iVar2 = lstrlenA(&local_304);
            lpString1 = (LPSTR)((int)&local_314.bottom + iVar2);
          }
          else {
            lstrcpyA(local_100,lpString2);
            lstrcpyA(pcVar4,&DAT_100040d0);
            lpString2_00 = local_100;
            lpString1 = pcVar4 + 3;
          }
          lstrcpyA(lpString1,lpString2_00);
          ptVar5 = &local_324;
          iVar2 = lstrlenA(&local_304);
          GetTextExtentPointA(hdc,&local_304,iVar2,ptVar5);
        } while (local_314.right <= local_324.cx);
      }
      lstrcpyA(local_328,&local_304);
    }
    if (local_318 != (HGDIOBJ)0x0) {
      SelectObject(hdc,local_31c);
    }
    ReleaseDC(param_1,hdc);
  }
  return;
}


