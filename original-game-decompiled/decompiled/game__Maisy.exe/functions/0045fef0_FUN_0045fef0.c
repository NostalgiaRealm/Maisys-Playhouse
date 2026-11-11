
/* ==== FUN_0045fef0 @ 0045fef0 ==== 
 * signature: undefined __stdcall FUN_0045fef0(void)
 * body: 0045fef0-0045ff7b
 */

void FUN_0045fef0(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  PALETTEENTRY *pPVar4;
  LOGPALETTE local_408;
  undefined1 local_400 [1020];
  
  local_408.palVersion = 0x300;
  local_408.palNumEntries = 0x100;
  pPVar4 = local_408.palPalEntry;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    pPVar4->peRed = '\0';
    pPVar4->peGreen = '\0';
    pPVar4->peBlue = '\0';
    pPVar4->peFlags = '\0';
    pPVar4 = pPVar4 + 1;
  }
  puVar1 = local_400 + 1;
  do {
    *puVar1 = 0;
    puVar2 = puVar1 + 4;
    puVar1[1] = 0;
    puVar1[-1] = 0;
    puVar1[2] = 1;
    puVar1 = puVar2;
  } while (puVar2 < local_400 + 0x3f9);
  local_408.palPalEntry[0].peGreen = '\0';
  local_408.palPalEntry[0].peBlue = '\0';
  local_408.palPalEntry[0].peRed = '\0';
  local_408.palPalEntry[0].peFlags = '\0';
  local_400[0x3f9] = 0xff;
  local_400[0x3fa] = 0xff;
  local_400[0x3f8] = 0xff;
  local_400[0x3fb] = 0;
  CreatePalette(&local_408);
  return;
}


