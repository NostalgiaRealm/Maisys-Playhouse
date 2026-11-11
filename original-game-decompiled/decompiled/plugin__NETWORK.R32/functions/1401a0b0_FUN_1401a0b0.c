
/* ==== FUN_1401a0b0 @ 1401a0b0 ==== 
 * signature: char * __stdcall FUN_1401a0b0(void)
 * body: 1401a0b0-1401a19f
 */

char * FUN_1401a0b0(void)

{
  undefined **ppuVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined **ppuVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  
  bVar4 = true;
  if (DAT_14027094 == (char *)0x0) {
    DAT_14027094 = (char *)FUN_1401def0(0x351);
  }
  *DAT_14027094 = '\0';
  ppuVar9 = &PTR_DAT_140270a0;
  do {
    FUN_1401a380(DAT_14027094,3);
    if ((undefined **)((int)&PTR_s_LC_TIME_140270cc + 3) < ppuVar9) {
      if (bVar4) {
        FUN_1401dd10(DAT_14027094);
        DAT_14027094 = (char *)0x0;
        return PTR_DAT_140270ac;
      }
      return DAT_14027094;
    }
    uVar6 = 0xffffffff;
    pcVar10 = ";";
    do {
      pcVar13 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar10 = DAT_14027094;
    do {
      pcVar12 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar2 != '\0');
    pcVar10 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar13 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar13 = pcVar13 + 1;
    }
    ppuVar1 = ppuVar9 + 3;
    pbVar5 = *ppuVar9;
    pbVar11 = *ppuVar1;
    do {
      bVar3 = *pbVar5;
      bVar14 = bVar3 < *pbVar11;
      if (bVar3 != *pbVar11) {
LAB_1401a163:
        iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_1401a168;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar5[1];
      bVar14 = bVar3 < pbVar11[1];
      if (bVar3 != pbVar11[1]) goto LAB_1401a163;
      pbVar5 = pbVar5 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar3 != 0);
    iVar7 = 0;
LAB_1401a168:
    ppuVar9 = ppuVar1;
    if (iVar7 != 0) {
      bVar4 = false;
    }
  } while( true );
}


