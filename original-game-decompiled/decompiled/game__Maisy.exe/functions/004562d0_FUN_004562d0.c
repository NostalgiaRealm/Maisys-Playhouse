
/* ==== FUN_004562d0 @ 004562d0 ==== 
 * signature: int __cdecl FUN_004562d0(short * param_1, int * param_2, int * param_3, int * param_4)
 * body: 004562d0-00456381
 */

int __cdecl FUN_004562d0(short *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined2 local_30;
  int local_2e;
  int local_2a;
  
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
    return 0x60002;
  case 0x69:
  case 0x73:
    break;
  }
  FUN_004537b0(param_1,param_4);
  local_30 = 0xb;
  iVar1 = FUN_00453ed0(*(int **)(param_1 + 1),&local_30);
  if (iVar1 == 0) {
    *param_2 = local_2e;
    *param_3 = local_2a;
  }
  return iVar1;
}


