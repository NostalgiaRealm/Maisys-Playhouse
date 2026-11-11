
/* ==== FUN_100060b0 @ 100060b0 ==== 
 * signature: LPVOID __cdecl FUN_100060b0(LPCSTR param_1)
 * body: 100060b0-10006182
 */

LPVOID __cdecl FUN_100060b0(LPCSTR param_1)

{
  HFILE hFile;
  UINT UVar1;
  HGLOBAL hMem;
  int iVar2;
  long lVar3;
  uint uVar4;
  LPVOID lpBuffer;
  uint lBytes;
  undefined1 local_10 [2];
  int local_e;
  int local_6;
  
  lpBuffer = (LPCVOID)0x0;
  hFile = _lopen(param_1,0);
  if (hFile == -1) {
LAB_1000615e:
    if (lpBuffer != (LPCVOID)0x0) {
      FUN_10006570(lpBuffer);
    }
  }
  else {
    UVar1 = _lread(hFile,local_10,0xe);
    if (UVar1 != 0xe) goto LAB_1000615e;
    hMem = GlobalAlloc(0x42,local_e - 0xe);
    lpBuffer = GlobalLock(hMem);
    if (lpBuffer != (LPVOID)0x0) {
      UVar1 = _lread(hFile,lpBuffer,0x28);
      if (UVar1 == 0x28) {
        iVar2 = *(int *)((int)lpBuffer + 0x20);
        if ((iVar2 == 0) && (*(ushort *)((int)lpBuffer + 0xe) < 9)) {
          iVar2 = 1 << ((byte)*(ushort *)((int)lpBuffer + 0xe) & 0x1f);
        }
        iVar2 = iVar2 * 4;
        lVar3 = _hread(hFile,(LPVOID)((int)lpBuffer + 0x28),iVar2);
        if (lVar3 == iVar2) {
          lBytes = local_e - local_6;
          if (*(uint *)((int)lpBuffer + 0x14) < (uint)(local_e - local_6)) {
            lBytes = *(uint *)((int)lpBuffer + 0x14);
          }
          uVar4 = _hread(hFile,(LPVOID)((int)lpBuffer + 0x28 + iVar2),lBytes);
          if (uVar4 == lBytes) goto LAB_1000616d;
        }
      }
      goto LAB_1000615e;
    }
  }
  lpBuffer = (LPVOID)0x0;
LAB_1000616d:
  if (hFile != -1) {
    _lclose(hFile);
  }
  return lpBuffer;
}


