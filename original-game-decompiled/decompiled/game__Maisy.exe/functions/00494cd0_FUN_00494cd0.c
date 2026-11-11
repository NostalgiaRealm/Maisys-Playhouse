
/* ==== FUN_00494cd0 @ 00494cd0 ==== 
 * signature: char * __stdcall FUN_00494cd0(void)
 * body: 00494cd0-00494dbf
 */

char * FUN_00494cd0(void)

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
  if (DAT_004de534 == (char *)0x0) {
    DAT_004de534 = (char *)FUN_00490210(0x351);
  }
  *DAT_004de534 = '\0';
  ppuVar9 = &PTR_DAT_004de540;
  do {
    FUN_00494fa0(DAT_004de534,3);
    if ((undefined **)((int)&PTR_s_LC_TIME_004de56c + 3) < ppuVar9) {
      if (bVar4) {
        FUN_0048e750(DAT_004de534);
        DAT_004de534 = (char *)0x0;
        return PTR_DAT_004de54c;
      }
      return DAT_004de534;
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
    pcVar10 = DAT_004de534;
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
LAB_00494d83:
        iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_00494d88;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar5[1];
      bVar14 = bVar3 < pbVar11[1];
      if (bVar3 != pbVar11[1]) goto LAB_00494d83;
      pbVar5 = pbVar5 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar3 != 0);
    iVar7 = 0;
LAB_00494d88:
    ppuVar9 = ppuVar1;
    if (iVar7 != 0) {
      bVar4 = false;
    }
  } while( true );
}


