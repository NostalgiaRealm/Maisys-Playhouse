
/* ==== FUN_1100f400 @ 1100f400 ==== 
 * signature: undefined4 __cdecl FUN_1100f400(undefined4 param_1, undefined4 param_2, int param_3, HANDLE param_4, int param_5, undefined4 * param_6, undefined4 * param_7, undefined4 * param_8)
 * body: 1100f400-1100f5a5
 */

undefined4 __cdecl
FUN_1100f400(undefined4 param_1,undefined4 param_2,int param_3,HANDLE param_4,int param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  BYTE *pBVar1;
  HGLOBAL hMem;
  LPVOID pjBits;
  HBITMAP pHVar2;
  HDC pHVar3;
  HGDIOBJ pvVar4;
  int iVar5;
  short sVar6;
  DWORD *pDVar7;
  uint uVar8;
  BITMAPINFO *pBVar9;
  SIZE_T dwBytes;
  undefined1 local_488 [20];
  char *local_474;
  DWORD local_470 [15];
  BITMAPINFO local_434 [24];
  
  GetObjectA(param_4,0x54,local_488);
  pDVar7 = local_470;
  pBVar9 = local_434;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    (pBVar9->bmiHeader).biSize = *pDVar7;
    pDVar7 = pDVar7 + 1;
    pBVar9 = (BITMAPINFO *)&(pBVar9->bmiHeader).biWidth;
  }
  sVar6 = 0;
  do {
    iVar5 = (int)sVar6;
    sVar6 = sVar6 + 1;
    pBVar1 = (BYTE *)(iVar5 * 4 + param_5);
    local_434[0].bmiColors[iVar5].rgbRed = *pBVar1;
    local_434[0].bmiColors[iVar5].rgbGreen = pBVar1[1];
    local_434[0].bmiColors[iVar5].rgbBlue = pBVar1[2];
    local_434[0].bmiColors[iVar5].rgbReserved = '\0';
  } while (sVar6 < 0x100);
  sVar6 = FUN_1100f5b0((int)local_434[0].bmiColors);
  dwBytes = (local_434[0].bmiHeader.biWidth + 3U & 0xfffffffc) *
            ((local_434[0].bmiHeader.biHeight ^ local_434[0].bmiHeader.biHeight >> 0x1f) -
            (local_434[0].bmiHeader.biHeight >> 0x1f));
  FUN_1100f780(local_474,dwBytes,-1,(char)sVar6);
  if (local_434[0].bmiHeader.biHeight < 0) {
    uVar8 = local_434[0].bmiHeader.biWidth + 3U & 0xfffffffc;
    hMem = GlobalAlloc(2,dwBytes);
    pjBits = GlobalLock(hMem);
    iVar5 = (local_434[0].bmiHeader.biHeight ^ local_434[0].bmiHeader.biHeight >> 0x1f) -
            (local_434[0].bmiHeader.biHeight >> 0x1f);
    FUN_11005ee4(0,(undefined4 *)((iVar5 + -1) * uVar8 + (int)pjBits),0,(undefined4 *)local_474,
                 local_434[0].bmiHeader.biWidth,iVar5,-uVar8,uVar8);
    local_434[0].bmiHeader.biHeight =
         (local_434[0].bmiHeader.biHeight ^ local_434[0].bmiHeader.biHeight >> 0x1f) -
         (local_434[0].bmiHeader.biHeight >> 0x1f);
    pHVar2 = CreateDIBitmap(*(HDC *)(param_3 + 8),&local_434[0].bmiHeader,4,pjBits,local_434,0);
    *param_7 = pHVar2;
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  else {
    pHVar2 = CreateDIBitmap(*(HDC *)(param_3 + 8),&local_434[0].bmiHeader,4,local_474,local_434,0);
    *param_7 = pHVar2;
  }
  pHVar3 = CreateCompatibleDC(*(HDC *)(param_3 + 8));
  *param_6 = pHVar3;
  pvVar4 = SelectObject((HDC)*param_6,(HGDIOBJ)*param_7);
  *param_8 = pvVar4;
  return CONCAT31((int3)((uint)pvVar4 >> 8),1);
}


