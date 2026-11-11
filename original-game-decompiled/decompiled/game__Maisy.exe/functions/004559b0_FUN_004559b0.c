
/* ==== FUN_004559b0 @ 004559b0 ==== 
 * signature: int __cdecl FUN_004559b0(short * param_1, double * param_2, int * param_3)
 * body: 004559b0-00455b68
 */

int __cdecl FUN_004559b0(short *param_1,double *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_15c [256];
  short local_5c [22];
  undefined2 local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  char local_15 [9];
  undefined4 local_c;
  undefined4 local_8;
  
  switch(*param_1) {
  case 1:
    *param_2 = (double)*(int *)(param_1 + 1);
    return 0;
  default:
    return 0x60002;
  case 0xf:
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + 3);
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 1);
    return 0;
  case 0x14:
    *param_2 = (double)(int)param_1[1];
    return 0;
  case 0x66:
    local_c = 0;
    local_8 = 0;
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
        FUN_0043bbf0(*(char **)(param_1 + 7),&local_c);
      }
    }
    *(undefined4 *)((int)param_2 + 4) = local_8;
    *(undefined4 *)param_2 = local_c;
    return 0;
  case 0x69:
  case 0x73:
    FUN_004537b0(param_1,param_3);
    local_30 = 0xf;
    iVar2 = FUN_00453ed0(*(int **)(param_1 + 1),&local_30);
    if (iVar2 == 0) {
      *(undefined4 *)((int)param_2 + 4) = local_2a;
      *(undefined4 *)param_2 = local_2e;
      return 0;
    }
    break;
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
        *(undefined4 *)param_2 = 0;
        *(undefined4 *)((int)param_2 + 4) = 0;
        if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
          local_5c[0] = 0x6a;
          FUN_004374f0(*(char **)(param_1 + 7),local_15);
          (**(code **)(*param_3 + 0x98))(local_15,0,local_5c);
          FUN_004559b0(local_5c,param_2,param_3);
          FUN_00452ae0((int)param_3,local_5c);
          return 0;
        }
        FUN_004537f0((int)param_3,*(char **)(param_1 + 7),local_15c,0x3ff);
        FUN_0043bbf0(local_15c,param_2);
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}


