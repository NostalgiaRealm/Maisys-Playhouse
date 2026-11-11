
/* ==== FUN_00455ee0 @ 00455ee0 ==== 
 * signature: undefined4 __cdecl FUN_00455ee0(short * param_1, int * param_2, int * param_3)
 * body: 00455ee0-00455fc5
 */

undefined4 __cdecl FUN_00455ee0(short *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int local_8;
  
  switch(*param_1) {
  case 0x69:
    *param_2 = *(int *)(param_1 + 1);
    return 0;
  case 0x6d:
    return 0x60002;
  case 0x73:
    FUN_004537b0(param_1,param_3);
    if (((*(int *)(param_1 + 1) == 0) && (param_3 != (int *)0x0)) &&
       ((*(byte *)((int)param_3 + 0x1e) & 0x10) != 0)) {
      piVar2 = FUN_0043ea50(param_3,(int *)(param_1 + 3),*(char **)(param_1 + 5));
      *param_2 = (int)piVar2;
      *(int **)(param_1 + 1) = piVar2;
      return 0;
    }
    *param_2 = *(int *)(param_1 + 1);
    return 0;
  case 0x76:
    if (((param_3 != (int *)0x0) && ((*(byte *)((int)param_3 + 0x1e) & 0x10) != 0)) &&
       (*(char **)(param_1 + 7) != (char *)0x0)) {
      iVar3 = -1;
      pcVar4 = *(char **)(param_1 + 7);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) {
        piVar2 = FUN_0043e9b0(param_3,&local_8,*(char **)(param_1 + 7));
        *param_2 = (int)piVar2;
        if (piVar2 != (int *)0x0) {
          return 0;
        }
      }
    }
  }
  return 0x60002;
}


