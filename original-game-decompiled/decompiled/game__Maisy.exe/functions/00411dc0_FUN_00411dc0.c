
/* ==== FUN_00411dc0 @ 00411dc0 ==== 
 * signature: int __fastcall FUN_00411dc0(int * param_1)
 * body: 00411dc0-00411e93
 */

int __fastcall FUN_00411dc0(int *param_1)

{
  char cVar1;
  PALETTEENTRY *pPVar2;
  undefined1 *puVar3;
  HPALETTE pHVar4;
  int iVar5;
  PALETTEENTRY *pPVar6;
  LOGPALETTE local_408;
  undefined1 local_3fd [1016];
  undefined1 local_5;
  
  if (param_1[0x30] == 0) {
    if (((short)param_1[0x31] == -3) || (cVar1 = (**(code **)(*param_1 + 0x124))(), cVar1 != '\0'))
    {
      pPVar2 = (PALETTEENTRY *)(**(code **)(*param_1 + 0x1d4))();
      if (pPVar2 != (PALETTEENTRY *)0x0) {
        local_408.palVersion = 0x300;
        local_408.palNumEntries = 0x100;
        pPVar6 = local_408.palPalEntry;
        for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
          pPVar6->peRed = '\0';
          pPVar6->peGreen = '\0';
          pPVar6->peBlue = '\0';
          pPVar6->peFlags = '\0';
          pPVar6 = pPVar6 + 1;
        }
        pPVar6 = local_408.palPalEntry;
        for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pPVar6 = *pPVar2;
          pPVar2 = pPVar2 + 1;
          pPVar6 = pPVar6 + 1;
        }
        puVar3 = local_3fd;
        do {
          *puVar3 = 4;
          puVar3 = puVar3 + 4;
        } while (puVar3 < &local_5);
        pHVar4 = CreatePalette(&local_408);
        param_1[0x30] = (int)pHVar4;
      }
      (**(code **)(*param_1 + 0x1dc))();
      FUN_0047d5f0(param_1,0x7fffffff,100);
    }
    if (param_1[0x30] != 0) {
      (**(code **)(*param_1 + 0xc4))(0,1);
    }
    return param_1[0x30];
  }
  return param_1[0x30];
}


