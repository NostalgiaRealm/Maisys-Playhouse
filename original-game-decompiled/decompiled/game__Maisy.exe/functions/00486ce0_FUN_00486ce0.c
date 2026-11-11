
/* ==== FUN_00486ce0 @ 00486ce0 ==== 
 * signature: undefined __fastcall FUN_00486ce0(int param_1)
 * body: 00486ce0-00486d2a
 */

void __fastcall FUN_00486ce0(int param_1)

{
  FUN_00486cd0();
  if (*(HMMIO *)(param_1 + 0x14a) != (HMMIO)0x0) {
    FUN_00411a40(*(HMMIO *)(param_1 + 0x14a));
    *(undefined4 *)(param_1 + 0x14a) = 0;
  }
  if (*(HMMIO *)(param_1 + 0x14e) != (HMMIO)0x0) {
    FUN_00411a40(*(HMMIO *)(param_1 + 0x14e));
    *(undefined4 *)(param_1 + 0x14e) = 0;
  }
  FUN_00486c10(param_1);
  return;
}


