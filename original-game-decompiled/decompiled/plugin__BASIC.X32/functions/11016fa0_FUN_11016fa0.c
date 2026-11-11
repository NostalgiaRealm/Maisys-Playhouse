
/* ==== FUN_11016fa0 @ 11016fa0 ==== 
 * signature: undefined __cdecl FUN_11016fa0(undefined4 * param_1, int param_2, undefined2 * param_3)
 * body: 11016fa0-11017031
 */

void __cdecl FUN_11016fa0(undefined4 *param_1,int param_2,undefined2 *param_3)

{
  switch(*param_3) {
  case 1:
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x10);
    return;
  default:
    *param_3 = 0;
    return;
  case 0xd:
    FUN_11020c90(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_3 + 2));
    return;
  case 0x15:
    *(double *)(param_3 + 1) = (double)*(int *)(param_2 + 0x10);
    return;
  case 0x17:
    *param_3 = 1;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x10);
    return;
  case 0x1a:
    *(char *)(param_3 + 1) = '\x01' - (*(int *)(param_2 + 0x10) == 0);
    return;
  case 0x1e:
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x10);
    return;
  }
}


