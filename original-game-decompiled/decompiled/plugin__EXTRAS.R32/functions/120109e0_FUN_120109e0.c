
/* ==== FUN_120109e0 @ 120109e0 ==== 
 * signature: HBITMAP __cdecl FUN_120109e0(undefined4 param_1)
 * body: 120109e0-12010be6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBITMAP __cdecl FUN_120109e0(undefined4 param_1)

{
  code *pcVar1;
  HANDLE hFile;
  BITMAPINFO *pbmi;
  LPVOID lpBuffer;
  HBITMAP pHVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 *puVar5;
  undefined4 in_stack_00000016;
  DWORD nNumberOfBytesToRead;
  UINT UStack_1a0;
  int local_19c;
  undefined1 auStack_198 [2];
  int iStack_196;
  int iStack_18e;
  undefined2 local_188;
  undefined4 local_186 [63];
  _OFSTRUCT _Stack_88;
  
  local_188 = DAT_1203765c;
  puVar5 = local_186;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,10,&local_19c);
  DAT_12039a9c = (*pcVar1)(local_19c,param_1,in_stack_00000016,&local_188);
  DAT_12037588 = CreateCompatibleDC((HDC)0x0);
  hFile = (HANDLE)OpenFile((LPCSTR)&local_188,&_Stack_88,0);
  if (hFile != (HANDLE)0xffffffff) {
    UStack_1a0 = _lread((HFILE)hFile,auStack_198,0xe);
    UStack_1a0 = _lread((HFILE)hFile,&DAT_12039ab0,0x28);
    DAT_12039ad8 = GlobalAlloc(0x42,(1 << (DAT_12039abe & 0x1f)) * 4 + 0x28);
    pbmi = GlobalLock(DAT_12039ad8);
    (pbmi->bmiHeader).biSize = DAT_12039ab0;
    (pbmi->bmiHeader).biWidth = DAT_12039ab4;
    (pbmi->bmiHeader).biHeight = DAT_12039ab8;
    (pbmi->bmiHeader).biPlanes = DAT_12039abc;
    (pbmi->bmiHeader).biBitCount = _DAT_12039abe;
    (pbmi->bmiHeader).biCompression = DAT_12039ac0;
    (pbmi->bmiHeader).biSizeImage = DAT_12039ac4;
    (pbmi->bmiHeader).biXPelsPerMeter = DAT_12039ac8;
    (pbmi->bmiHeader).biYPelsPerMeter = DAT_12039acc;
    (pbmi->bmiHeader).biClrUsed = DAT_12039ad0;
    (pbmi->bmiHeader).biClrImportant = DAT_12039ad4;
    UStack_1a0 = _lread((HFILE)hFile,pbmi->bmiColors,(1 << (DAT_12039abe & 0x1f)) << 2);
    DAT_12039aa0 = GlobalAlloc(0x42,iStack_196 - iStack_18e);
    lpBuffer = GlobalLock(DAT_12039aa0);
    DVar4 = iStack_196 - iStack_18e;
    DAT_12039aa4 = lpBuffer;
    do {
      nNumberOfBytesToRead = DVar4;
      if (64000 < (int)DVar4) {
        nNumberOfBytesToRead = 64000;
      }
      ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,&UStack_1a0,(LPOVERLAPPED)0x0);
      lpBuffer = (LPVOID)((int)lpBuffer + UStack_1a0);
      DVar4 = DVar4 - UStack_1a0;
    } while (DVar4 != 0);
    pHVar2 = CreateDIBitmap(DAT_12037588,(BITMAPINFOHEADER *)&DAT_12039ab0,4,DAT_12039aa4,pbmi,0);
    GlobalUnlock(DAT_12039ad8);
    GlobalUnlock(DAT_12039aa0);
    CloseHandle(hFile);
    return pHVar2;
  }
  return (HBITMAP)0x0;
}


