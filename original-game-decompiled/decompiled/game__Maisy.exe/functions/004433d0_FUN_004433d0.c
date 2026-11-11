
/* ==== FUN_004433d0 @ 004433d0 ==== 
 * signature: undefined __cdecl FUN_004433d0(int param_1, short param_2)
 * body: 004433d0-00443418
 */

void __cdecl FUN_004433d0(int param_1,short param_2)

{
  if (param_1 != 0) {
    *(short *)(param_1 + 0x20) = param_2;
    if ((DAT_004db5a0 != '\0') && (-1 < *(short *)(param_1 + 0x28))) {
      DAT_004db87c = 1;
      *(int *)((int)&DAT_004db5b8 + *(short *)(param_1 + 0x28) * 0x3e) = (int)param_2;
    }
  }
  return;
}


