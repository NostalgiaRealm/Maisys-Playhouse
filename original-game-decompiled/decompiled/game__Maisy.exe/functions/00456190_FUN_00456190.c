
/* ==== FUN_00456190 @ 00456190 ==== 
 * signature: int __cdecl FUN_00456190(short * param_1, int * param_2, int * param_3, int * param_4)
 * body: 00456190-00456243
 */

int __cdecl FUN_00456190(short *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined2 local_30;
  short local_2e;
  short local_2c;
  
  switch(*param_1) {
  case 10:
    *param_2 = (int)param_1[1];
    *param_3 = (int)param_1[2];
    return 0;
  case 0xb:
    *param_2 = *(int *)(param_1 + 1);
    *param_3 = *(int *)(param_1 + 3);
    return 0;
  default:
    return 0x60002;
  case 0x10:
    return 0x10000;
  case 0x66:
    return 0x10000;
  case 0x69:
  case 0x73:
    break;
  }
  FUN_004537b0(param_1,param_4);
  local_30 = 10;
  iVar1 = FUN_00453ed0(*(int **)(param_1 + 1),&local_30);
  if (iVar1 == 0) {
    *param_2 = (int)local_2e;
    *param_3 = (int)local_2c;
  }
  return iVar1;
}


