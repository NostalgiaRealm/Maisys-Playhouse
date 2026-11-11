
/* ==== FUN_004535a0 @ 004535a0 ==== 
 * signature: undefined4 __cdecl FUN_004535a0(undefined4 param_1, undefined4 * param_2, undefined4 param_3, int * param_4, short * param_5)
 * body: 004535a0-0045370b
 */

undefined4 __cdecl
FUN_004535a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4,short *param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  switch(*param_5) {
  case 1:
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)param_5;
      *(short *)(param_2 + 1) = param_5[2];
    }
    *param_4 = *param_4 + 6;
    return 0;
  default:
    return 0x10000;
  case 10:
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)param_5;
      *(short *)(param_2 + 1) = param_5[2];
    }
    *param_4 = *param_4 + 6;
    return 0;
  case 0xb:
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)param_5;
      param_2[1] = *(undefined4 *)(param_5 + 2);
      *(short *)(param_2 + 2) = param_5[4];
    }
    *param_4 = *param_4 + 10;
    return 0;
  case 0xf:
    FUN_00484cf0(param_2,(undefined4 *)param_5,param_4);
    return 0;
  case 0x10:
    FUN_00484d40(param_2,param_5,param_4);
    return 0;
  case 0x14:
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)param_5;
    }
    *param_4 = *param_4 + 4;
    return 0;
  case 0x66:
    break;
  case 0x73:
    FUN_004537b0(param_5,(int *)0x0);
    piVar2 = *(int **)(param_5 + 1);
    if (piVar2 == (int *)0x0) {
      return 0x10000;
    }
    if (*(short *)((int)piVar2 + 0x22) != 0x51) {
      return 0x10000;
    }
    uVar3 = FUN_004530c0(piVar2,(undefined2 *)param_2,param_3,param_4);
    return uVar3;
  }
  if (param_2 != (undefined4 *)0x0) {
    *(undefined2 *)param_2 = 0x66;
    *(undefined4 *)((int)param_2 + 2) = *(undefined4 *)(param_5 + 5);
  }
  if (*(char **)(param_5 + 7) == (char *)0x0) {
    *param_4 = *param_4 + 6;
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    uVar4 = 0xffffffff;
    pcVar6 = *(char **)(param_5 + 7);
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = (char *)((int)param_2 + 6);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  *param_4 = *param_4 + *(int *)(param_5 + 5) + 7;
  return 0;
}


