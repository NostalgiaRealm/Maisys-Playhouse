
/* ==== FUN_00430640 @ 00430640 ==== 
 * signature: undefined __fastcall FUN_00430640(int param_1)
 * body: 00430640-00430661
 */

void __fastcall FUN_00430640(int param_1)

{
  if (*(HLOCAL *)(param_1 + 8) != (HLOCAL)0x0) {
    FUN_0043f720(*(HLOCAL *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  return;
}


