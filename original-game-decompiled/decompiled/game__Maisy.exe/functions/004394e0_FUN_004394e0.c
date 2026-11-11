
/* ==== FUN_004394e0 @ 004394e0 ==== 
 * signature: uint __thiscall FUN_004394e0(void * this, uint param_1, HPALETTE param_2, uint * param_3)
 * body: 004394e0-00439644
 */

uint __thiscall FUN_004394e0(void *this,uint param_1,HPALETTE param_2,uint *param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  HPALETTE pHVar4;
  DWORD DVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  PALETTEENTRY *pPVar9;
  uint *puVar10;
  LOGPALETTE local_408;
  undefined1 local_400 [1020];
  
  puVar1 = FUN_00439730((int)this);
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  *puVar1 = param_1;
  local_408.palVersion = 0x300;
  local_408.palNumEntries = 0x100;
  pPVar9 = local_408.palPalEntry;
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    pPVar9->peRed = '\0';
    pPVar9->peGreen = '\0';
    pPVar9->peBlue = '\0';
    pPVar9->peFlags = '\0';
    pPVar9 = pPVar9 + 1;
  }
  if (param_3 == (uint *)0x0) {
    GetPaletteEntries(param_2,0,0x100,local_408.palPalEntry);
    puVar3 = local_400;
    puVar7 = (undefined1 *)((int)puVar1 + 0x12);
    do {
      puVar2 = puVar3 + 4;
      *puVar7 = *puVar3;
      puVar7[-1] = puVar3[1];
      puVar7[-2] = puVar3[2];
      puVar7[1] = 0;
      puVar3 = puVar2;
      puVar7 = puVar7 + 4;
    } while (puVar2 < local_400 + 0x3f8);
  }
  else {
    puVar8 = param_3;
    puVar10 = puVar1 + 3;
    for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar3 = local_400;
    puVar7 = (undefined1 *)((int)param_3 + 6);
    do {
      puVar2 = puVar3 + 4;
      *puVar3 = *puVar7;
      puVar3[1] = puVar7[-1];
      puVar3[2] = puVar7[-2];
      puVar3[3] = 4;
      puVar3 = puVar2;
      puVar7 = puVar7 + 4;
    } while (puVar2 < local_400 + 0x3f8);
    local_408.palPalEntry[0].peRed = '\0';
    local_408.palPalEntry[0].peGreen = '\0';
    local_408.palPalEntry[0].peBlue = '\0';
    local_408.palPalEntry[0].peFlags = '\0';
    local_400[0x3f8] = 0xff;
    local_400[0x3f9] = 0xff;
    local_400[0x3fa] = 0xff;
    local_400[0x3fb] = 0;
  }
  *(undefined1 *)((int)puVar1 + 0xe) = 0;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xf) = 0;
  *(undefined1 *)((int)puVar1 + 0x40a) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x409) = 0xff;
  *(undefined1 *)(puVar1 + 0x102) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x40b) = 0;
  pHVar4 = CreatePalette(&local_408);
  puVar1[1] = (uint)pHVar4;
  DVar5 = timeGetTime();
  puVar1[2] = (DVar5 * 6) / 100;
  puVar1[0x103] = 0;
  return puVar1[1];
}


