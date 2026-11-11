
/* ==== FUN_004791c0 @ 004791c0 ==== 
 * signature: undefined4 __thiscall FUN_004791c0(void * this, short param_1, char * param_2, undefined2 * param_3, char * param_4, char * param_5)
 * body: 004791c0-004792af
 */

uint __thiscall
FUN_004791c0(void *this,short param_1,char *param_2,undefined2 *param_3,char *param_4,char *param_5)

{
  char cVar1;
  undefined4 in_EAX;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined2 local_20 [2];
  char *local_1c;
  char *local_18;
  char *local_14;
  
  if (*(short *)((int)*(void **)((int)this + 0x54) + 0x26) < param_1) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),param_1) & 0xffffff00;
  }
  FUN_00430370(*(void **)((int)this + 0x54),(int)param_1,local_20);
  if (local_1c == (char *)0x0) {
    if (param_2 != (char *)0x0) {
      *param_2 = '\0';
    }
  }
  else if (param_2 != (char *)0x0) {
    uVar2 = 0xffffffff;
    do {
      pcVar4 = local_1c;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar4 = local_1c + 1;
      cVar1 = *local_1c;
      local_1c = pcVar4;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar4 + -uVar2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      param_2 = param_2 + 1;
    }
  }
  *param_3 = local_20[0];
  if (local_18 == (char *)0x0) {
    if (param_4 != (char *)0x0) {
      *param_4 = '\0';
    }
  }
  else if (param_4 != (char *)0x0) {
    uVar2 = 0xffffffff;
    do {
      pcVar4 = local_18;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar4 = local_18 + 1;
      cVar1 = *local_18;
      local_18 = pcVar4;
    } while (cVar1 != '\0');
    param_3 = (undefined2 *)~uVar2;
    pcVar4 = pcVar4 + -(int)param_3;
    for (uVar2 = (uint)param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)param_4 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      param_4 = param_4 + 4;
    }
    for (uVar2 = (uint)param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_4 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      param_4 = param_4 + 1;
    }
  }
  if (local_14 == (char *)0x0) {
    if (param_5 != (char *)0x0) {
      *param_5 = '\0';
    }
  }
  else if (param_5 != (char *)0x0) {
    uVar2 = 0xffffffff;
    do {
      pcVar4 = local_14;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar4 = local_14 + 1;
      cVar1 = *local_14;
      local_14 = pcVar4;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar4 + -uVar2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      param_5 = param_5 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      param_5 = param_5 + 1;
    }
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}


