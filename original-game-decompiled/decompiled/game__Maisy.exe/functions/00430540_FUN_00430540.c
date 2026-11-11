
/* ==== FUN_00430540 @ 00430540 ==== 
 * signature: undefined __fastcall FUN_00430540(undefined4 * param_1)
 * body: 00430540-00430567
 */

void __fastcall FUN_00430540(undefined4 *param_1)

{
  if ((HLOCAL)param_1[2] != (HLOCAL)0x0) {
    FUN_0043f720((HLOCAL)param_1[2]);
    param_1[2] = 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}


