
/* ==== FUN_00488f15 @ 00488f15 ==== 
 * signature: undefined __fastcall FUN_00488f15(int param_1, undefined4 param_2)
 * body: 00488f15-00488f17
 */

void __fastcall FUN_00488f15(int param_1,undefined4 param_2)

{
  int unaff_ESI;
  
  *(int *)(unaff_ESI + -0x71d0ffb8) = *(int *)(unaff_ESI + -0x71d0ffb8) - param_1;
  cRam3b00488e = cRam3b00488e + (char)((uint)param_2 >> 8);
  return;
}


