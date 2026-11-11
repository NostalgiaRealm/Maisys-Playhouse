
/* ==== FUN_00455730 @ 00455730 ==== 
 * signature: int __cdecl FUN_00455730(short * param_1, char * param_2, int * param_3)
 * body: 00455730-00455911
 */

int __cdecl FUN_00455730(short *param_1,char *param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char local_170 [256];
  short local_70 [22];
  char local_44 [20];
  undefined2 local_30;
  char local_2e;
  int local_8;
  
  switch(*param_1) {
  case 1:
    *param_2 = '\x01' - (*(int *)(param_1 + 1) == 0);
    return 0;
  default:
    return 0x60002;
  case 0xf:
    *param_2 = (*(uint *)(param_1 + 3) & 0x7fffffff) != 0 || *(int *)(param_1 + 1) != 0;
    return 0;
  case 0x14:
    *param_2 = (char)param_1[1];
    return 0;
  case 0x66:
    local_8 = 0;
    if (*(char **)(param_1 + 7) != (char *)0x0) {
      uVar2 = FUN_0043d430(*(char **)(param_1 + 7),(char *)&DAT_004dbc80);
      if (uVar2 == 0) {
        local_8 = 1;
      }
      else {
        uVar2 = FUN_0043d430(*(char **)(param_1 + 7),s_false_004dbc78);
        if (uVar2 == 0) {
          local_8 = 0;
        }
        else {
          FUN_0043bb50(*(char **)(param_1 + 7),&local_8);
        }
      }
    }
    *param_2 = '\x01' - (local_8 == 0);
    return 0;
  case 0x69:
  case 0x73:
    FUN_004537b0(param_1,param_3);
    local_30 = 0x14;
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
        local_8 = 0;
        if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
          local_70[0] = 0x6a;
          FUN_004374f0(*(char **)(param_1 + 7),local_44);
          (**(code **)(*param_3 + 0x98))(local_44,0,local_70);
          FUN_00455730(local_70,param_2,param_3);
          FUN_00452ae0((int)param_3,local_70);
        }
        else {
          FUN_004537f0((int)param_3,*(char **)(param_1 + 7),local_170,0x3ff);
          FUN_0043bb50(local_170,&local_8);
        }
        *param_2 = '\x01' - (local_8 == 0);
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}


