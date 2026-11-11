
/* ==== FUN_11025230 @ 11025230 ==== 
 * signature: undefined __cdecl FUN_11025230(undefined4 param_1, int param_2, short * param_3)
 * body: 11025230-11025362
 */

void __cdecl FUN_11025230(undefined4 param_1,int param_2,short *param_3)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char local_8 [8];
  
  sVar2 = *param_3;
  if (sVar2 == 0x1a) {
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_2 + 0xc);
    return;
  }
  if (sVar2 == 0x17) {
    *param_3 = 0x1a;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_2 + 0xc);
    return;
  }
  if (sVar2 == 1) {
    *(uint *)(param_3 + 1) = (uint)(*(char *)(param_2 + 0xc) != '\0');
    return;
  }
  if (sVar2 == 0x15) {
    if (*(char *)(param_2 + 0xc) != '\0') {
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0x3ff0;
      return;
    }
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    return;
  }
  if (sVar2 != 0xd) {
    *param_3 = 0;
    return;
  }
  if (*(char *)(param_2 + 0xc) == '\0') {
    builtin_strncpy(local_8,"false",6);
    uVar3 = 0xffffffff;
    pcVar5 = local_8;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = *(char **)(param_3 + 2);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    return;
  }
  builtin_strncpy(local_8,"true",5);
  uVar3 = 0xffffffff;
  pcVar5 = local_8;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = *(char **)(param_3 + 2);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}


