
/* ==== FUN_004ba73d @ 004ba73d ==== 
 * signature: undefined __stdcall FUN_004ba73d(void)
 * body: 004ba73d-004ba81c
 */

void FUN_004ba73d(void)

{
  byte bVar1;
  ushort uVar2;
  LONG LVar3;
  undefined1 *puVar4;
  int iVar5;
  int nWidth;
  int nHeight;
  undefined1 local_8c [128];
  byte *local_c;
  int local_8;
  
  LVar3 = GetMenuCheckMarkDimensions();
  nWidth = (int)(short)LVar3;
  nHeight = (int)(short)((uint)LVar3 >> 0x10);
  if (0x20 < nWidth) {
    nWidth = 0x20;
  }
  iVar5 = nWidth + 0xf >> 4;
  local_8 = ((nWidth + -4) / 2 + iVar5 * 0x10) - nWidth;
  if (0xc < local_8) {
    local_8 = 0xc;
  }
  if (0x20 < nHeight) {
    nHeight = 0x20;
  }
  _memset(local_8c,0xff,0x80);
  bVar1 = (byte)local_8;
  local_c = &DAT_004cb258;
  local_8 = 5;
  puVar4 = local_8c + (nHeight + -6 >> 1) * iVar5 * 2;
  do {
    uVar2 = ~((ushort)*local_c << (bVar1 & 0x1f));
    local_c = local_c + 1;
    *puVar4 = (char)(uVar2 >> 8);
    puVar4[1] = (char)uVar2;
    local_8 = local_8 + -1;
    puVar4 = puVar4 + iVar5 * 2;
  } while (local_8 != 0);
  DAT_004e51ec = CreateBitmap(nWidth,nHeight,1,1,local_8c);
  if (DAT_004e51ec == (HBITMAP)0x0) {
    DAT_004e51ec = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7fe3);
  }
  return;
}


