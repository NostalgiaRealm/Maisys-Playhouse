
/* ==== FUN_00436f50 @ 00436f50 ==== 
 * signature: undefined4 __cdecl FUN_00436f50(char * param_1)
 * body: 00436f50-00436fe3
 */

undefined4 __cdecl FUN_00436f50(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  
  uVar4 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_004dafcc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (~uVar4 - 1 <= ~uVar5 - 1) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_004dafcc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pbVar6 = &DAT_004dafcc;
  pbVar7 = (byte *)(param_1 + ((~uVar4 - 1) - (~uVar5 - 1)));
  while( true ) {
    bVar2 = *pbVar7;
    bVar9 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) break;
    if (bVar2 == 0) {
      return 1;
    }
    bVar2 = pbVar7[1];
    bVar9 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) break;
    pbVar7 = pbVar7 + 2;
    pbVar6 = pbVar6 + 2;
    if (bVar2 == 0) {
      return 1;
    }
  }
  iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == 0);
}


