
/* ==== FUN_11016eb0 @ 11016eb0 ==== 
 * signature: undefined __cdecl FUN_11016eb0(undefined4 * param_1, int param_2, undefined2 * param_3)
 * body: 11016eb0-11016f5d
 */

void __cdecl FUN_11016eb0(undefined4 *param_1,int param_2,undefined2 *param_3)

{
  longlong lVar1;
  double local_8;
  
  switch(*param_3) {
  case 1:
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 1);
    return;
  case 0xd:
    FUN_11020cf0(param_1,*(undefined4 *)(param_3 + 2),&local_8);
    *(undefined4 *)(param_2 + 0x10) = local_8._0_4_;
    return;
  case 0x15:
    local_8 = *(double *)(param_3 + 1) + 0.5;
    FUN_11011490(param_1,&local_8,&local_8);
    lVar1 = __ftol();
    *(int *)(param_2 + 0x10) = (int)lVar1;
    return;
  case 0x1a:
    *(uint *)(param_2 + 0x10) = (uint)(*(char *)(param_3 + 1) != '\0');
    return;
  case 0x1e:
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 1);
  }
  return;
}


