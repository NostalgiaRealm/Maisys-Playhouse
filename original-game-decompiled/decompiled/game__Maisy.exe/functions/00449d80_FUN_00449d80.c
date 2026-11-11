
/* ==== FUN_00449d80 @ 00449d80 ==== 
 * signature: undefined4 __cdecl FUN_00449d80(undefined2 * param_1, undefined2 param_2)
 * body: 00449d80-00449e25
 */

int __cdecl FUN_00449d80(undefined2 *param_1,short param_2)

{
  uint3 uVar2;
  uint uVar1;
  longlong lVar3;
  
  uVar2 = (uint3)((uint)(param_2 + -1) >> 8);
  switch(param_2) {
  case 1:
    _floor(*(double *)(param_1 + 1) + 0.5);
    lVar3 = __ftol();
    *param_1 = param_2;
    *(int *)(param_1 + 1) = (int)lVar3;
    return CONCAT31((int3)((ulonglong)lVar3 >> 8),1);
  default:
    return (uint)uVar2 << 8;
  case 0x15:
    *param_1 = param_2;
    return CONCAT31(uVar2,1);
  case 0x1a:
    *param_1 = param_2;
    uVar1 = *(uint *)(param_1 + 3) & 0x7fffffff | *(uint *)(param_1 + 1);
    *(bool *)(param_1 + 1) = uVar1 != 0;
    return CONCAT31((int3)(uVar1 >> 8),1);
  case 0x1e:
    _floor(*(double *)(param_1 + 1) + 0.5);
    lVar3 = __ftol();
    *param_1 = param_2;
    *(int *)(param_1 + 1) = (int)lVar3;
    return CONCAT31((int3)((ulonglong)lVar3 >> 8),1);
  }
}


