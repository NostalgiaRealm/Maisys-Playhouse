
/* ==== FUN_1000_0177 @ 1000:0177 ==== 
 * signature: undefined FUN_1000_0177(void)
 * body: 1000:0177-1000:01a1
 */

void FUN_1000_0177(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  int extraout_DX;
  uint extraout_DX_00;
  int iVar6;
  byte *pbVar7;
  int unaff_DI;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  byte bVar9;
  bool bVar10;
  
  iVar6 = 0x1119;
  FUN_1000_0680();
  FUN_1000_033e();
  FUN_1000_05d1();
  bVar9 = DAT_1119_015a < 0xd6d6;
  if (DAT_1119_015a == 0xd6d6) {
    (*DAT_1119_015e)();
  }
  (*DAT_1119_0044)(0xff);
  *(int *)(iVar6 + unaff_DI) = (*(int *)(iVar6 + unaff_DI) - extraout_DX) - (uint)bVar9;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x21);
  iRam00011200 = iVar6;
  uRam00011202 = unaff_ES;
  (*pcVar4)();
  if (*(int *)0x168 != 0) {
    *(undefined2 *)0x16a = 0x1000;
    *(undefined2 *)0x172 = 0x1000;
    bVar10 = false;
    (*(code *)*(undefined2 *)0x168)();
    if (bVar10) {
      FUN_1000_035e();
      return;
    }
    (*(code *)*(undefined2 *)0x168)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0x62;
      bVar10 = false;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar10 = *pbVar1 == *pbVar3;
      } while (bVar10);
      if (bVar10) {
        pbVar7 = (byte *)0x90;
        goto LAB_1000_0228;
      }
      iVar5 = 0x7fff;
      bVar10 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar10 = *pbVar1 == 0;
      } while (!bVar10);
    } while (bVar10);
  }
LAB_1000_023c:
  iVar6 = 4;
  do {
    bVar10 = false;
    *(byte *)(iVar6 + 0x90) = *(byte *)(iVar6 + 0x90) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar10) && ((extraout_DX_00 & 0x80) != 0)) {
      *(byte *)(iVar6 + 0x90) = *(byte *)(iVar6 + 0x90) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_1000_032a();
  FUN_1000_031b();
  FUN_1000_032a();
  return;
LAB_1000_0228:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_023c;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_023c;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_0228;
}


