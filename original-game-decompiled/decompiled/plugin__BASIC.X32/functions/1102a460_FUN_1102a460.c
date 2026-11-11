
/* ==== FUN_1102a460 @ 1102a460 ==== 
 * signature: undefined __stdcall FUN_1102a460(void)
 * body: 1102a460-1102a53b
 */

void FUN_1102a460(void)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar6 = 0;
  cVar1 = *DAT_11036584;
  pcVar7 = DAT_11036584;
  while (cVar1 != '\0') {
    if (*pcVar7 != '=') {
      iVar6 = iVar6 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + ~uVar3;
    cVar1 = *pcVar7;
  }
  piVar2 = (int *)FUN_11029420(iVar6 * 4 + 4);
  DAT_110365e0 = piVar2;
  if (piVar2 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_11036584;
  pcVar7 = DAT_11036584;
  do {
    if (cVar1 == '\0') {
      FUN_11029180(DAT_11036584);
      *piVar2 = 0;
      return;
    }
    uVar3 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (*pcVar7 != '=') {
      iVar6 = FUN_11029420(~uVar3);
      *piVar2 = iVar6;
      if (iVar6 == 0) {
        __amsg_exit(9);
      }
      uVar4 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        pcVar8 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = (char *)*piVar2;
      piVar2 = piVar2 + 1;
      pcVar8 = pcVar8 + -uVar4;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    pcVar7 = pcVar7 + ~uVar3;
    cVar1 = *pcVar7;
  } while( true );
}


