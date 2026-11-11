
/* ==== FUN_0043bdf0 @ 0043bdf0 ==== 
 * signature: undefined __fastcall FUN_0043bdf0(undefined4 * param_1)
 * body: 0043bdf0-0043be0d
 */

void __fastcall FUN_0043bdf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c7ca8;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  return;
}


