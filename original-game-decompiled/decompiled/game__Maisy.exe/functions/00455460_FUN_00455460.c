
/* ==== FUN_00455460 @ 00455460 ==== 
 * signature: undefined4 __cdecl FUN_00455460(short * param_1, undefined2 * param_2)
 * body: 00455460-004554f4
 */

undefined4 __cdecl FUN_00455460(short *param_1,undefined2 *param_2)

{
  undefined2 local_30;
  undefined4 local_2e;
  
  if (*param_1 != 0x69) {
    if (*param_1 != 0x73) {
      return 0x10000;
    }
    *param_2 = 0x73;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 3);
    return 0;
  }
  if ((*(int *)(param_1 + 1) != 0) && ((*(byte *)(*(int *)(param_1 + 1) + 0x1e) & 0x80) != 0)) {
    local_2e = 0;
    *param_2 = 0x73;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    local_30 = 1;
    (**(code **)(**(int **)(param_1 + 1) + 0x98))(s_objectid_004d9c2c,0,&local_30);
    *(undefined4 *)(param_2 + 3) = local_2e;
    return 0;
  }
  return 0x10000;
}


