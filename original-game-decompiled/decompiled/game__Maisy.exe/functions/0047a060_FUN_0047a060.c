
/* ==== FUN_0047a060 @ 0047a060 ==== 
 * signature: undefined __cdecl FUN_0047a060(HPALETTE param_1, LPPALETTEENTRY param_2)
 * body: 0047a060-0047a09f
 */

void __cdecl FUN_0047a060(HPALETTE param_1,LPPALETTEENTRY param_2)

{
  short sVar1;
  int iVar2;
  
  GetPaletteEntries(param_1,0,0x100,param_2);
  sVar1 = 1;
  do {
    iVar2 = (int)sVar1;
    sVar1 = sVar1 + 1;
    param_2[iVar2].peFlags = '\x04';
  } while (sVar1 < 0xff);
  param_2->peFlags = '\0';
  param_2[0xff].peFlags = '\0';
  return;
}


