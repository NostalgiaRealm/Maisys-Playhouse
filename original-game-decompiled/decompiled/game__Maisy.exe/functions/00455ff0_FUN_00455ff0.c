
/* ==== FUN_00455ff0 @ 00455ff0 ==== 
 * signature: int __cdecl FUN_00455ff0(short * param_1, undefined4 * param_2, int * param_3)
 * body: 00455ff0-004560f5
 */

int __cdecl FUN_00455ff0(short *param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  short local_30;
  undefined4 local_2e;
  
  switch(*param_1) {
  case 10:
    *param_2 = *(undefined4 *)(param_1 + 1);
    return 0;
  case 0xb:
    *(short *)param_2 = (short)*(undefined4 *)(param_1 + 1);
    *(short *)((int)param_2 + 2) = (short)*(undefined4 *)(param_1 + 3);
    return 0;
  default:
    return 0x60002;
  case 0x10:
    return 0x10000;
  case 0x66:
    return 0x10000;
  case 0x69:
  case 0x73:
    FUN_004537b0(param_1,param_3);
    local_30 = 10;
    iVar3 = FUN_00453ed0(*(int **)(param_1 + 1),&local_30);
    if (iVar3 == 0) {
      *param_2 = local_2e;
      return 0;
    }
    break;
  case 0x76:
    if ((param_3 != (int *)0x0) && (*(char **)(param_1 + 7) != (char *)0x0)) {
      iVar3 = -1;
      pcVar4 = *(char **)(param_1 + 7);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) {
        local_30 = 0x6a;
        bVar2 = FUN_00453ea0((int)param_3,*(char **)(param_1 + 7),&local_30);
        if (bVar2) {
          iVar3 = FUN_00455ff0(&local_30,param_2,param_3);
          return iVar3;
        }
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}


