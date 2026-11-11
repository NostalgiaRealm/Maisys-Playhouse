
/* ==== FUN_00478e40 @ 00478e40 ==== 
 * signature: undefined4 __thiscall FUN_00478e40(void * this, short param_1, undefined4 param_2, char * param_3)
 * body: 00478e40-00478f2f
 */

undefined4 __thiscall FUN_00478e40(void *this,short param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char local_10 [8];
  void *local_8;
  
  local_8 = this;
  FUN_00479080(this,param_3);
  if (param_1 != 1) {
    FUN_0043bac0((int)param_1,local_10);
    uVar2 = 0xffffffff;
    pcVar6 = local_10;
    do {
      pcVar5 = pcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar6 = param_3;
    do {
      pcVar7 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar5 + -uVar2;
    pcVar5 = pcVar7 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar5 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  pcVar6 = param_3;
  if (*param_3 != '\0') {
    switch(*(undefined2 *)((int)local_8 + 0x3e)) {
    case 1:
    case 2:
    case 3:
    case 4:
      pcVar6 = &DAT_004dbc5c;
      if (param_1 != 1) {
        pcVar6 = &DAT_004dcaf8;
      }
      break;
    default:
      pcVar6 = &DAT_004dcae8;
      if (param_1 != 1) {
        pcVar6 = &DAT_004dcae0;
      }
      break;
    case 7:
    case 8:
    case 9:
      pcVar6 = &DAT_004dbc54;
      if (param_1 != 1) {
        pcVar6 = (char *)&DAT_004dcaf0;
      }
    }
    uVar2 = 0xffffffff;
    do {
      pcVar5 = pcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar6 = (char *)0x0;
    do {
      pcVar7 = param_3;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar7;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -uVar2;
    pcVar7 = pcVar7 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  return CONCAT31((int3)((uint)pcVar6 >> 8),1);
}


