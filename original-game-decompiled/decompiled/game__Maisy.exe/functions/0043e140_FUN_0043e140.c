
/* ==== FUN_0043e140 @ 0043e140 ==== 
 * signature: undefined4 __cdecl FUN_0043e140(char * param_1, char * param_2)
 * body: 0043e140-0043e340
 */

undefined4 __cdecl FUN_0043e140(char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char local_308 [256];
  char local_208 [254];
  char acStack_10a [2];
  undefined2 local_108;
  undefined1 local_106;
  undefined4 local_105 [63];
  char local_6 [2];
  
  uVar3 = 0xffffffff;
  do {
    pcVar7 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar7 + -uVar3;
  pcVar10 = local_308;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar7 = local_308;
  do {
    pcVar10 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar10 + -uVar3;
  pcVar10 = param_2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  local_108 = DAT_004db564;
  local_106 = DAT_004db566;
  puVar8 = local_105;
  for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = 0;
  uVar2 = FUN_0043e0a0(0,local_308,(int)local_208);
  if ((char)uVar2 == '\0') {
    return 0x10000;
  }
  iVar5 = -1;
  pcVar7 = local_208;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  cVar1 = local_208[0];
  if (iVar5 != -3) {
    iVar5 = FUN_0043e000(local_208,(short *)local_6);
    if (iVar5 != 0) {
      return 0x10000;
    }
    cVar1 = local_6[0] + 'A';
  }
  sVar6 = 1;
  local_108 = CONCAT11(local_108._1_1_,cVar1);
  uVar2 = FUN_0043e0a0(1,local_308,(int)local_208);
  cVar1 = (char)uVar2;
  while (cVar1 != '\0') {
    if (local_208[0] != '\\') {
      uVar3 = 0xffffffff;
      pcVar7 = (char *)&local_108;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (acStack_10a[~uVar3] != '\\') {
        uVar3 = 0xffffffff;
        pcVar7 = &DAT_004d99a4;
        do {
          pcVar10 = pcVar7;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar10 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar10;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar5 = -1;
        pcVar7 = (char *)&local_108;
        do {
          pcVar9 = pcVar7;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar9 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar1 != '\0');
        pcVar7 = pcVar10 + -uVar3;
        pcVar10 = pcVar9 + -1;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar10 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
    }
    uVar3 = 0xffffffff;
    pcVar7 = local_208;
    do {
      pcVar10 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar7 = (char *)&local_108;
    do {
      pcVar9 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    sVar6 = sVar6 + 1;
    pcVar7 = pcVar10 + -uVar3;
    pcVar10 = pcVar9 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar2 = FUN_0043e0a0(sVar6,local_308,(int)local_208);
    cVar1 = (char)uVar2;
  }
  uVar3 = 0xffffffff;
  pcVar7 = (char *)&local_108;
  do {
    pcVar10 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar10 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


