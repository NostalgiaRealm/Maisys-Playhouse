
/* ==== FUN_5f002c90 @ 5f002c90 ==== 
 * signature: undefined4 __stdcall FUN_5f002c90(void)
 * body: 5f002c90-5f002cce
 */

undefined4 FUN_5f002c90(void)

{
  uint uVar1;
  short in_stack_00000010;
  HWND in_stack_00000014;
  
  if (0x35e < DAT_5f005150) {
    return 0;
  }
  if (in_stack_00000010 == 1) {
    uVar1 = GetWindowLongA(in_stack_00000014,-0x10);
    if (((uVar1 & 3) != 2) && ((uVar1 & 3) != 3)) {
      return 1;
    }
    return 0;
  }
  return 1;
}


