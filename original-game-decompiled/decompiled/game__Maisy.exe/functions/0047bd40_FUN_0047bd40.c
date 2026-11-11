
/* ==== FUN_0047bd40 @ 0047bd40 ==== 
 * signature: HPALETTE __thiscall FUN_0047bd40(void * this, char param_1)
 * body: 0047bd40-0047bdab
 */

HPALETTE __thiscall FUN_0047bd40(void *this,char param_1)

{
  HPALETTE pHVar1;
  HPALETTE pHVar2;
  int iVar3;
  PALETTEENTRY *pPVar4;
  LOGPALETTE local_408 [128];
  
  if (param_1 == '\0') {
    return *(HPALETTE *)((int)this + 0xce4);
  }
  pHVar2 = (HPALETTE)0x0;
  pHVar1 = *(HPALETTE *)((int)this + 0xce4);
  if (pHVar1 != (HPALETTE)0x0) {
    local_408[0].palVersion = 0x300;
    local_408[0].palNumEntries = 0x100;
    pPVar4 = local_408[0].palPalEntry;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      pPVar4->peRed = '\0';
      pPVar4->peGreen = '\0';
      pPVar4->peBlue = '\0';
      pPVar4->peFlags = '\0';
      pPVar4 = pPVar4 + 1;
    }
    FUN_0047a060(pHVar1,local_408[0].palPalEntry);
    pHVar2 = CreatePalette(local_408);
  }
  return pHVar2;
}


