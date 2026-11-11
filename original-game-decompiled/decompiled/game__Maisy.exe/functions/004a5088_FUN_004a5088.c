
/* ==== FUN_004a5088 @ 004a5088 ==== 
 * signature: undefined FUN_004a5088(void)
 * body: 004a5088-004a50bd
 */

void * FUN_004a5088(void *param_1,undefined4 *param_2)

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


