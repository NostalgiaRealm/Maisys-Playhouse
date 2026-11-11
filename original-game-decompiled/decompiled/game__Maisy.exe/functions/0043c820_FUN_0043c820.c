
/* ==== FUN_0043c820 @ 0043c820 ==== 
 * signature: char __stdcall FUN_0043c820(void)
 * body: 0043c820-0043c858
 */

char FUN_0043c820(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  BVar1 = PeekMessageA(&local_20,(HWND)0x0,0x200,0x209,1);
  if (BVar1 != 0) {
    return '\x01' - ((local_20.wParam & 1) == 0);
  }
  return '\x01';
}


