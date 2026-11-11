
/* ==== FUN_00453f10 @ 00453f10 ==== 
 * signature: undefined4 __cdecl FUN_00453f10(undefined2 * param_1, short * param_2)
 * body: 00453f10-004540b2
 */

undefined4 __cdecl FUN_00453f10(undefined2 *param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 1;
  }
  switch(*param_1) {
  case 1:
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    return 0;
  default:
    return 0x10000;
  case 9:
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    return 0;
  case 0xf:
    _floor(*(double *)(param_1 + 1) + 0.5);
    lVar6 = __ftol();
    *(int *)(param_2 + 1) = (int)lVar6;
    return 0;
  case 0x14:
    *(int *)(param_2 + 1) = (int)(short)param_1[1];
    return 0;
  case 0x66:
    break;
  case 0x68:
    lVar6 = __ftol();
    *(int *)(param_2 + 1) = (int)lVar6;
    return 0;
  case 0x69:
    uVar3 = FUN_00453ed0(*(int **)(param_1 + 1),param_2);
    return uVar3;
  case 0x73:
    uVar3 = FUN_00453ed0(*(int **)(param_1 + 1),param_2);
    return uVar3;
  }
  local_8 = 0;
  sVar2 = *param_2;
  if (sVar2 == 1) {
    if (*(char **)(param_1 + 7) != (char *)0x0) {
      iVar4 = -1;
      pcVar5 = *(char **)(param_1 + 7);
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (iVar4 != -2) {
        FUN_0043bb50(*(char **)(param_1 + 7),&local_8);
      }
    }
    *(int *)(param_2 + 1) = local_8;
    return 0;
  }
  if (sVar2 == 0xf) {
    local_10 = 0;
    local_c = 0;
    if (*(char **)(param_1 + 7) != (char *)0x0) {
      iVar4 = -1;
      pcVar5 = *(char **)(param_1 + 7);
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (iVar4 != -2) {
        FUN_0043bbf0(*(char **)(param_1 + 7),&local_10);
      }
    }
    *(undefined4 *)(param_2 + 3) = local_c;
    *(undefined4 *)(param_2 + 1) = local_10;
    return 0;
  }
  if (sVar2 != 0x14) {
    return 0;
  }
  if (*(char **)(param_1 + 7) != (char *)0x0) {
    iVar4 = -1;
    pcVar5 = *(char **)(param_1 + 7);
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      FUN_0043bb50(*(char **)(param_1 + 7),&local_8);
    }
  }
  param_2[1] = (ushort)(local_8 != 0);
  return 0;
}


