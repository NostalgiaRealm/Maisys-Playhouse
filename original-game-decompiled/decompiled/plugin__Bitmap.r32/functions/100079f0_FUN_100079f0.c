
/* ==== FUN_100079f0 @ 100079f0 ==== 
 * signature: undefined __cdecl FUN_100079f0(char * param_1, char * param_2)
 * body: 100079f0-10007bb8
 */

void __cdecl FUN_100079f0(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  byte local_114 [4];
  char local_110 [4];
  char local_10c;
  undefined4 local_108;
  undefined4 local_104;
  CHAR local_100 [256];
  
  local_108 = DAT_100131bc;
  local_104 = DAT_100131c0;
  local_110 = (char  [4])s_<player>_10013120._4_4_;
  local_10c = s_<player>_10013120[8];
  uVar4 = 0xffffffff;
  pcVar7 = (char *)&local_108;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_114 = (byte  [4])s_<player>_10013120._0_4_;
  *param_2 = '\0';
  iVar3 = FUN_10009900((byte *)&local_108,param_1,~uVar4 - 1);
  if (iVar3 == 0) {
    FUN_100078f0(local_100);
    uVar4 = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar7 = (char *)&local_108;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar6 = 0xffffffff;
    pcVar7 = local_100;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((~uVar4 - (~uVar5 - 1)) + (~uVar6 - 2) < 0x100) {
      uVar4 = 0xffffffff;
      pcVar7 = local_100;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = param_2;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    pbVar9 = (byte *)&local_108;
  }
  else {
    uVar4 = 0xffffffff;
    pbVar9 = local_114;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
    iVar3 = FUN_10009900(local_114,param_1,~uVar4 - 1);
    if (iVar3 != 0) {
      uVar4 = 0xffffffff;
      do {
        pcVar7 = param_1;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar7 + -uVar4;
      pcVar8 = param_2;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      goto LAB_10007b92;
    }
    FUN_10007930(local_100);
    uVar4 = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pbVar9 = local_114;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
    uVar6 = 0xffffffff;
    pcVar7 = local_100;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((~uVar4 - (~uVar5 - 1)) + (~uVar6 - 2) < 0x100) {
      uVar4 = 0xffffffff;
      pcVar7 = local_100;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = param_2;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    pbVar9 = local_114;
  }
  uVar5 = 0xffffffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (bVar2 != 0);
  uVar4 = 0xffffffff;
  pcVar7 = param_1 + (~uVar5 - 1);
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar7 = param_2;
  do {
    pcVar10 = pcVar7;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  pcVar7 = pcVar8 + -uVar4;
  pcVar8 = pcVar10 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
LAB_10007b92:
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    if (*param_2 == '/') {
      *param_2 = '\\';
    }
    pcVar7 = param_2 + 1;
    param_2 = param_2 + 1;
    cVar1 = *pcVar7;
  }
  s_<player>_10013120[0] = (char)s_<player>_10013120._0_4_;
  s_<player>_10013120[1] = SUB41(s_<player>_10013120._0_4_,1);
  s_<player>_10013120[2] = SUB41(s_<player>_10013120._0_4_,2);
  s_<player>_10013120[3] = SUB41(s_<player>_10013120._0_4_,3);
  s_<player>_10013120[4] = (char)s_<player>_10013120._4_4_;
  s_<player>_10013120[5] = SUB41(s_<player>_10013120._4_4_,1);
  s_<player>_10013120[6] = SUB41(s_<player>_10013120._4_4_,2);
  s_<player>_10013120[7] = SUB41(s_<player>_10013120._4_4_,3);
  return;
}


