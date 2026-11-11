
/* ==== FUN_1100b480 @ 1100b480 ==== 
 * signature: undefined __cdecl FUN_1100b480(undefined4 * param_1, int param_2, undefined1 param_3)
 * body: 1100b480-1100b69f
 */

void __cdecl FUN_1100b480(undefined4 *param_1,int param_2,undefined1 param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  short *psVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  short *psVar12;
  byte *pbVar13;
  short *psVar14;
  char *pcVar15;
  bool bVar16;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined1 local_19c;
  undefined1 local_19b;
  char *local_198;
  undefined2 local_194;
  undefined4 local_192;
  short local_184 [2];
  undefined4 local_180;
  short local_130 [24];
  byte local_100 [256];
  
  iVar8 = *(int *)(param_2 + 0xc);
  local_198 = *(char **)(param_2 + 0x7c);
  iVar3 = *(int *)((int)param_1 + 0x1a);
  psVar5 = (short *)(iVar3 + 0x24);
  bVar4 = false;
  psVar12 = (short *)(param_2 + 0x20);
  if (*(short *)(param_2 + 0x20) == 0x1b) {
    psVar12 = psVar5;
  }
  psVar14 = local_130;
  for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)psVar14 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    psVar14 = psVar14 + 2;
  }
  *psVar14 = *psVar12;
  if (((iVar8 == 4) || (iVar8 == 1)) ||
     ((pcVar6 = _strchr(local_198,0x3a), pcVar6 == (char *)0x0 &&
      ((pcVar6 = _strchr(*(char **)(param_2 + 0x7c),0x5c), pcVar6 == (char *)0x0 &&
       (pcVar6 = _strchr(*(char **)(param_2 + 0x7c),0x2f), pcVar6 == (char *)0x0)))))) {
    if (*(char **)(param_2 + 0x80) == (char *)0x0) {
      local_100[0] = 0;
    }
    else {
      uVar10 = 0xffffffff;
      pcVar6 = *(char **)(param_2 + 0x80);
      do {
        pcVar15 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar15 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar15;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pbVar7 = (byte *)(pcVar15 + -uVar10);
      pbVar13 = local_100;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar7;
        pbVar7 = pbVar7 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar13 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        pbVar13 = pbVar13 + 1;
      }
    }
    psVar12 = (short *)(param_2 + 0x4e);
    if ((*psVar12 == 0x1b) && ((*psVar5 == 0x1c || (psVar12 = psVar5, *psVar5 == 0x19)))) {
      local_1a0 = 0x76;
      local_19f = 0x61;
      local_19e = 0x6c;
      local_19d = 0x75;
      local_19c = 0x65;
      local_19b = 0;
      local_194 = 2;
      local_192 = *(undefined4 *)(iVar3 + 0x26);
      local_184[0] = 0x17;
      FUN_11024d70(param_1,&local_194,&local_1a0,local_184,0);
      psVar12 = local_184;
      if (local_184[0] == 0xd) {
        bVar4 = true;
      }
    }
    FUN_11015570(param_1,param_3,iVar8,local_130,psVar12,local_198,local_100);
    if (local_100[0] != 0) {
      pbVar7 = *(byte **)(param_2 + 0x80);
      if (pbVar7 != (byte *)0x0) {
        pbVar13 = local_100;
        do {
          bVar2 = *pbVar7;
          bVar16 = bVar2 < *pbVar13;
          if (bVar2 != *pbVar13) {
LAB_1100b64b:
            iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_1100b650;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar16 = bVar2 < pbVar13[1];
          if (bVar2 != pbVar13[1]) goto LAB_1100b64b;
          pbVar7 = pbVar7 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar2 != 0);
        iVar8 = 0;
LAB_1100b650:
        if (iVar8 != 0) {
          FUN_1100d8f0(*(LPVOID *)(param_2 + 0x80));
        }
      }
      pcVar6 = FUN_11027da0((char *)local_100);
      *(char **)(param_2 + 0x80) = pcVar6;
    }
    if (bVar4) {
      FUN_11002530(param_1,local_180);
    }
  }
  return;
}


