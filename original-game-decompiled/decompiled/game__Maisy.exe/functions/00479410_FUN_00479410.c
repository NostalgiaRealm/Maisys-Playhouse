
/* ==== FUN_00479410 @ 00479410 ==== 
 * signature: undefined4 __thiscall FUN_00479410(void * this, short param_1, char * param_2, char * param_3)
 * body: 00479410-004794aa
 */

uint __thiscall FUN_00479410(void *this,short param_1,char *param_2,char *param_3)

{
  char cVar1;
  short sVar2;
  undefined2 extraout_var;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_20 [8];
  char *local_18;
  char *local_14;
  
  sVar2 = FUN_00479330(this,param_1);
  if (sVar2 == 0) {
    return CONCAT22(extraout_var,sVar2) & 0xffffff00;
  }
  uVar3 = FUN_00430370(*(void **)((int)this + 0x54),(int)sVar2,local_20);
  if ((local_18 != (char *)0x0) && (param_2 != (char *)0x0)) {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = local_18;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = local_18 + 1;
      cVar1 = *local_18;
      local_18 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      param_2 = param_2 + 1;
    }
  }
  if ((local_14 != (char *)0x0) && (param_3 != (char *)0x0)) {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = local_14;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = local_14 + 1;
      cVar1 = *local_14;
      local_14 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)param_3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      param_3 = param_3 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      param_3 = param_3 + 1;
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


