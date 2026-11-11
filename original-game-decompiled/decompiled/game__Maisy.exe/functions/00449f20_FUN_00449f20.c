
/* ==== FUN_00449f20 @ 00449f20 ==== 
 * signature: undefined4 __cdecl FUN_00449f20(undefined2 * param_1, undefined2 param_2)
 * body: 00449f20-00449f7d
 */

uint __cdecl FUN_00449f20(undefined2 *param_1,short param_2)

{
  undefined3 uVar1;
  
  uVar1 = (undefined3)((uint)param_1 >> 8);
  switch(param_2) {
  case 1:
  case 0x1e:
    *param_1 = param_2;
    return CONCAT31(uVar1,1);
  default:
    return (int)param_2 - 1U & 0xffffff00;
  case 0x15:
    *param_1 = param_2;
    *(double *)(param_1 + 1) = (double)*(int *)(param_1 + 1);
    return CONCAT31(uVar1,1);
  case 0x1a:
    *param_1 = param_2;
    *(char *)(param_1 + 1) = '\x01' - (*(int *)(param_1 + 1) == 0);
    return CONCAT31(uVar1,1);
  }
}


