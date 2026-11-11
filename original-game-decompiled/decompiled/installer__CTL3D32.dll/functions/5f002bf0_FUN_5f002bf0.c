
/* ==== FUN_5f002bf0 @ 5f002bf0 ==== 
 * signature: bool __stdcall FUN_5f002bf0(void)
 * body: 5f002bf0-5f002c36
 */

bool FUN_5f002bf0(void)

{
  int iVar1;
  HWND in_stack_00000014;
  CHAR local_10 [16];
  
  if ((0x35e < DAT_5f005150) && (in_stack_00000014 != (HWND)0x0)) {
    GetClassNameA(in_stack_00000014,local_10,0x10);
    iVar1 = lstrcmpA(local_10,"ComboBox");
    return (bool)('\x01' - (iVar1 == 0));
  }
  return true;
}


