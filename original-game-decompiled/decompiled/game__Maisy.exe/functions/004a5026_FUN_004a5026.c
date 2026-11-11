
/* ==== FUN_004a5026 @ 004a5026 ==== 
 * signature: void * __stdcall FUN_004a5026(void * param_1, undefined4 * param_2)
 * body: 004a5026-004a505b
 */

void * FUN_004a5026(void *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 0x24);
  if (*(uint *)((int)param_1 + 0x28) < *piVar1 + 4U) {
    FUN_004b4055(param_1,(*piVar1 - *(uint *)((int)param_1 + 0x28)) + 4);
  }
  *param_2 = *(undefined4 *)*piVar1;
  *piVar1 = *piVar1 + 4;
  return param_1;
}


