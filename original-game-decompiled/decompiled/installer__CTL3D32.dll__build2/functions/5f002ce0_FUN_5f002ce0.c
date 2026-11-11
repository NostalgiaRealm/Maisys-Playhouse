
/* ==== FUN_5f002ce0 @ 5f002ce0 ==== 
 * signature: undefined4 __stdcall FUN_5f002ce0(void)
 * body: 5f002ce0-5f002d1e
 */

undefined4 FUN_5f002ce0(void)

{
  uint uVar1;
  short in_stack_00000010;
  HWND in_stack_00000014;
  
  if (0x35e < DAT_5f005260) {
    return 0;
  }
  if (in_stack_00000010 == 1) {
    uVar1 = GetWindowLongW(in_stack_00000014,-0x10);
    if (((uVar1 & 3) != 2) && ((uVar1 & 3) != 3)) {
      return 1;
    }
    return 0;
  }
  return 1;
}


