
/* ==== FUN_004293a0 @ 004293a0 ==== 
 * signature: undefined __stdcall FUN_004293a0(void)
 * body: 004293a0-00429449
 */

void FUN_004293a0(void)

{
  FUN_00439880();
  if (DAT_004e01e0 != 0) {
    FUN_00414520(0x4e01e0);
    DAT_004e01e0 = 0;
  }
  if (DAT_004da380 != (undefined4 *)0x0) {
    FUN_0041f1c0((int)DAT_004da380);
    if (DAT_004da380 != (undefined4 *)0x0) {
      (**(code **)*DAT_004da380)(1);
    }
    DAT_004da380 = (undefined4 *)0x0;
  }
  if (DAT_004da388 != (undefined4 *)0x0) {
    (**(code **)*DAT_004da388)(1);
    DAT_004da388 = (undefined4 *)0x0;
  }
  if (DAT_004da390 != (undefined4 *)0x0) {
    (**(code **)*DAT_004da390)(1);
    DAT_004da390 = (undefined4 *)0x0;
  }
  if (DAT_004dae3c != 0) {
    FUN_00434fb0(DAT_004dae3c);
  }
  FUN_0048a260();
  return;
}


