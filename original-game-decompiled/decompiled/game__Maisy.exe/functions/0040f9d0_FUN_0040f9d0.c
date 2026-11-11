
/* ==== FUN_0040f9d0 @ 0040f9d0 ==== 
 * signature: undefined4 __stdcall FUN_0040f9d0(void)
 * body: 0040f9d0-0040fa6a
 */

undefined4 FUN_0040f9d0(void)

{
  if (DAT_004d99c4 == 0) {
    return 0;
  }
  if (DAT_004dbc10 != (int *)0x0) {
    (**(code **)(*DAT_004dbc10 + 4))(1);
    DAT_004dbc10 = (int *)0x0;
  }
  if (DAT_004dae3c != (void *)0x0) {
    FUN_00437c50(DAT_004dae3c,0);
  }
  if (DAT_004da38c != (undefined4 *)0x0) {
    (**(code **)*DAT_004da38c)(1);
    DAT_004da38c = (undefined4 *)0x0;
  }
  FUN_00481ec0();
  if (DAT_004dc564 != (int *)0x0) {
    (**(code **)(*DAT_004dc564 + 4))();
    DAT_004dc564 = (int *)0x0;
  }
  FUN_004293a0();
  FUN_00447fa0();
  FUN_00416f50();
  return 0;
}


