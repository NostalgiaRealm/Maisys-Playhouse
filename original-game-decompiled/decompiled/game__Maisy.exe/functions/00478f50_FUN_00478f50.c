
/* ==== FUN_00478f50 @ 00478f50 ==== 
 * signature: uint __thiscall FUN_00478f50(void * this, short param_1, undefined4 param_2, char * param_3)
 * body: 00478f50-00479076
 */

uint __thiscall FUN_00478f50(void *this,short param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char local_224 [256];
  char local_124 [256];
  undefined1 local_24 [8];
  char *local_1c;
  void *local_8;
  
  if (*(short *)((int)*(void **)((int)this + 0x54) + 0x26) < param_1) {
    return CONCAT22((short)((uint)this >> 0x10),param_1) & 0xffffff00;
  }
  local_8 = this;
  FUN_00430370(*(void **)((int)this + 0x54),(int)param_1,local_24);
  if ((local_1c != (char *)0x0) && (param_3 != (char *)0x0)) {
    uVar2 = 0xffffffff;
    do {
      pcVar5 = local_1c;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = local_1c + 1;
      cVar1 = *local_1c;
      local_1c = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar5 + -uVar2;
    pcVar6 = param_3;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  FUN_00479080(local_8,local_124);
  FUN_0043bac0((int)param_1,local_224);
  uVar2 = 0xffffffff;
  pcVar5 = local_224;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  pcVar5 = local_124;
  do {
    pcVar7 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  pcVar5 = pcVar6 + -uVar2;
  pcVar6 = pcVar7 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar5 = (char *)&DAT_004db560;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  pcVar5 = param_3;
  do {
    pcVar7 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  pcVar5 = pcVar6 + -uVar2;
  pcVar6 = pcVar7 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar5 = local_124;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  do {
    pcVar5 = param_3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar5 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar5;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -uVar2;
  pcVar5 = pcVar5 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return 1;
}


