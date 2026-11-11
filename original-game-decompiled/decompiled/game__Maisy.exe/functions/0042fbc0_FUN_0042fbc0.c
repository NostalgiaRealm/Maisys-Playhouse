
/* ==== FUN_0042fbc0 @ 0042fbc0 ==== 
 * signature: undefined __fastcall FUN_0042fbc0(int * param_1)
 * body: 0042fbc0-0042fbf6
 */

void __fastcall FUN_0042fbc0(int *param_1)

{
  if ((*(HLOCAL *)((int)param_1 + 0x36) != (HLOCAL)0x0) && ((*(byte *)(param_1 + 0x12) & 1) != 0)) {
    FUN_0043f720(*(HLOCAL *)((int)param_1 + 0x36));
    *(undefined4 *)((int)param_1 + 0x36) = 0;
    *(undefined4 *)((int)param_1 + 0x2a) = 0;
    *(undefined4 *)((int)param_1 + 0x26) = 0;
  }
  FUN_00412db0(param_1);
  return;
}


