
/* ==== FUN_00434780 @ 00434780 ==== 
 * signature: HFONT __cdecl FUN_00434780(undefined4 * param_1)
 * body: 00434780-0043491b
 */

HFONT __cdecl FUN_00434780(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined4 *puVar5;
  short sVar6;
  HFONT *ppHVar7;
  LOGFONTA local_60;
  HFONT local_24 [5];
  undefined2 local_10;
  undefined4 local_e;
  HFONT local_8;
  
  if (DAT_004dae30 == (int *)0x0) {
    return (HFONT)0x0;
  }
  sVar6 = 0;
  local_e._2_2_ = *(short *)((int)DAT_004dae30 + 0x26);
  local_8 = (HFONT)0x0;
  iVar2 = FUN_00430190((int)DAT_004dae30);
  if (0 < local_e._2_2_) {
    do {
      iVar1 = sVar6 * 0x1a + iVar2;
      if (((*(short *)(sVar6 * 0x1a + 4 + iVar2) == *(short *)(param_1 + 1)) &&
          (*(short *)(iVar1 + 6) == *(short *)((int)param_1 + 6))) &&
         (uVar3 = FUN_0043d430(*(char **)(iVar1 + 0x16),*(char **)((int)param_1 + 0x16)), uVar3 == 0
         )) {
        local_8 = *(HFONT *)(sVar6 * 0x1a + iVar2);
        break;
      }
      sVar6 = sVar6 + 1;
    } while (sVar6 < local_e._2_2_);
  }
  FUN_004301f0((int)DAT_004dae30);
  if (local_8 == (HFONT)0x0) {
    iVar2 = GetDeviceCaps(DAT_004da398,0x5a);
    local_60.lfHeight = (iVar2 * *(short *)((int)param_1 + 6)) / -0x48;
    local_60.lfWidth = 0;
    local_60.lfEscapement = 0;
    local_60.lfOrientation = 0;
    local_60.lfWeight = (-(uint)((*(ushort *)(param_1 + 1) & 1) == 0) & 0xfffffed4) + 700;
    bVar4 = (byte)*(ushort *)(param_1 + 1);
    local_60.lfStrikeOut = '\0';
    local_60.lfCharSet = '\0';
    local_60.lfOutPrecision = '\0';
    local_60.lfClipPrecision = '\0';
    local_60.lfItalic = (bVar4 & 2) >> 1;
    local_60.lfUnderline = (bVar4 & 4) >> 2;
    local_60.lfQuality = '\x01';
    local_60.lfPitchAndFamily = '\0';
    _strncpy(local_60.lfFaceName,*(char **)((int)param_1 + 0x16),0x1f);
    local_60.lfFaceName[0x1f] = '\0';
    local_8 = CreateFontIndirectA(&local_60);
    puVar5 = param_1;
    ppHVar7 = local_24;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppHVar7 = (HFONT)*puVar5;
      puVar5 = puVar5 + 1;
      ppHVar7 = ppHVar7 + 1;
    }
    local_24[0] = local_8;
    local_e = FUN_0043b970(*(char **)((int)param_1 + 0x16));
    iVar2 = FUN_0043ba40(*(char **)((int)param_1 + 0x16));
    local_10 = (undefined2)iVar2;
    (**(code **)(*DAT_004dae30 + 0xe8))(local_24);
  }
  return local_8;
}


