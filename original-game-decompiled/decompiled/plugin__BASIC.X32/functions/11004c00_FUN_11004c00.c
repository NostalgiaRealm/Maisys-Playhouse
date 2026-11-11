
/* ==== FUN_11004c00 @ 11004c00 ==== 
 * signature: undefined __cdecl FUN_11004c00(undefined4 * param_1, int param_2, undefined2 * param_3)
 * body: 11004c00-11004ca6
 */

void __cdecl FUN_11004c00(undefined4 *param_1,int param_2,undefined2 *param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  switch(*param_3) {
  case 1:
    *(double *)(param_2 + 0x10) = (double)*(int *)(param_3 + 1);
    return;
  default:
    return;
  case 0xd:
    FUN_11013c40(param_1,*(undefined4 *)(param_3 + 2),&local_8);
    *(undefined4 *)(param_2 + 0x14) = local_4;
    *(undefined4 *)(param_2 + 0x10) = local_8;
    return;
  case 0x15:
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 1);
    return;
  case 0x1a:
    break;
  case 0x1e:
    *(double *)(param_2 + 0x10) = (double)*(int *)(param_3 + 1);
    return;
  }
  if (*(char *)(param_3 + 1) == '\0') {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    return;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0x3ff00000;
  return;
}


