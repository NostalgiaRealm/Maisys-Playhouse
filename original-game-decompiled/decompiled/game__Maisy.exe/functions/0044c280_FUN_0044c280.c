
/* ==== FUN_0044c280 @ 0044c280 ==== 
 * signature: undefined __fastcall FUN_0044c280(int * param_1)
 * body: 0044c280-0044c3ff
 */

void __fastcall FUN_0044c280(int *param_1)

{
  WORD *pWVar1;
  code *pcVar2;
  WORD WVar3;
  HDC pHVar4;
  int iVar5;
  void *this;
  HPALETTE pHVar6;
  HBITMAP h;
  HGDIOBJ pvVar7;
  char cVar8;
  BITMAPINFO local_434 [24];
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  pHVar4 = CreateCompatibleDC((HDC)0x0);
  param_1[0x21] = (int)pHVar4;
  if (pHVar4 != (HDC)0x0) {
    iVar5 = *param_1;
    (**(code **)(iVar5 + 0x298))(&local_c);
    local_8 = local_8 - local_c;
    local_6 = local_6 - local_a;
    local_c = 0;
    local_a = 0;
    pWVar1 = (WORD *)(param_1 + 0x25);
    *(short *)(param_1 + 0x24) = local_8;
    *(short *)((int)param_1 + 0x92) = local_6;
    pcVar2 = *(code **)(iVar5 + 0x10);
    iVar5 = (*pcVar2)();
    if (iVar5 == 0) {
      *pWVar1 = 8;
    }
    else {
      iVar5 = (*pcVar2)();
      WVar3 = FUN_0045aa30(iVar5);
      *pWVar1 = WVar3;
    }
    local_434[0].bmiHeader.biSize = 0x28;
    local_434[0].bmiHeader.biPlanes = 1;
    local_434[0].bmiHeader.biBitCount = *pWVar1;
    local_434[0].bmiHeader.biCompression = 0;
    local_434[0].bmiHeader.biSizeImage = 0;
    local_434[0].bmiHeader.biXPelsPerMeter = 0;
    local_434[0].bmiHeader.biYPelsPerMeter = 0;
    local_434[0].bmiHeader.biClrUsed = -(uint)(local_434[0].bmiHeader.biBitCount == 8) & 0x100;
    local_434[0].bmiHeader.biClrImportant = 0;
    local_434[0].bmiHeader.biHeight = (LONG)local_6;
    local_434[0].bmiHeader.biWidth = (LONG)local_8;
    *(short *)((int)param_1 + 0x92) = local_6;
    iVar5 = FUN_0041ed90((int)param_1);
    if (iVar5 != 0) {
      iVar5 = FUN_0041ed90((int)param_1);
      iVar5 = FUN_004084c0(iVar5);
      if (iVar5 != 0) {
        cVar8 = '\0';
        iVar5 = FUN_0041ed90((int)param_1);
        this = (void *)FUN_004084c0(iVar5);
        pHVar6 = FUN_0047bd40(this,cVar8);
        FUN_0044c400((int)local_434,pHVar6);
      }
    }
    h = CreateDIBSection((HDC)param_1[0x21],local_434,0,(void **)(param_1 + 0x23),(HANDLE)0x0,0);
    pvVar7 = SelectObject((HDC)param_1[0x21],h);
    param_1[0x22] = (int)pvVar7;
    if (h == (HBITMAP)0x0) {
      FUN_0044c470((int)param_1);
    }
  }
  return;
}


