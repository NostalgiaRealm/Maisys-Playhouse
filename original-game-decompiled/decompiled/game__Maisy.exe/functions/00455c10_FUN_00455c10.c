
/* ==== FUN_00455c10 @ 00455c10 ==== 
 * signature: int __cdecl FUN_00455c10(short * param_1, int * param_2, int * param_3)
 * body: 00455c10-00455dfa
 */

int __cdecl FUN_00455c10(short *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  char local_15c [256];
  short local_5c [22];
  undefined2 local_30;
  int local_2e;
  char local_15 [17];
  
  switch(*param_1) {
  case 1:
    *param_2 = *(int *)(param_1 + 1);
    return 0;
  default:
    return 0x60002;
  case 9:
    *param_2 = *(int *)(param_1 + 1);
    return 0;
  case 0xf:
    _floor(*(double *)(param_1 + 1) + 0.5);
    lVar4 = __ftol();
    *param_2 = (int)lVar4;
    return 0;
  case 0x14:
    *param_2 = (int)param_1[1];
    return 0;
  case 0x66:
    if (*(char **)(param_1 + 7) != (char *)0x0) {
      iVar2 = -1;
      pcVar3 = *(char **)(param_1 + 7);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (iVar2 != -2) {
        FUN_0043bb50(*(char **)(param_1 + 7),param_2);
      }
    }
    return 0;
  case 0x68:
    lVar4 = __ftol();
    *param_2 = (int)lVar4;
    return 0;
  case 0x69:
  case 0x73:
    FUN_004537b0(param_1,param_3);
    local_30 = 1;
    iVar2 = FUN_00453ed0(*(int **)(param_1 + 1),&local_30);
    if (iVar2 == 0) {
      *param_2 = local_2e;
      return 0;
    }
    break;
  case 0x6d:
    *param_2 = (int)param_1[1];
    return 0;
  case 0x76:
    if ((param_3 != (int *)0x0) && (*(char **)(param_1 + 7) != (char *)0x0)) {
      iVar2 = -1;
      pcVar3 = *(char **)(param_1 + 7);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (iVar2 != -2) {
        if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
          local_5c[0] = 0x6a;
          FUN_004374f0(*(char **)(param_1 + 7),local_15);
          (**(code **)(*param_3 + 0x98))(local_15,0,local_5c);
          FUN_00455c10(local_5c,param_2,param_3);
          FUN_00452ae0((int)param_3,local_5c);
          return 0;
        }
        FUN_004537f0((int)param_3,*(char **)(param_1 + 7),local_15c,0x3ff);
        FUN_0043bb50(local_15c,param_2);
      }
    }
    return 0;
  case 0x7c:
    *param_2 = (int)(char)param_1[1];
    iVar2 = 0;
  }
  return iVar2;
}


