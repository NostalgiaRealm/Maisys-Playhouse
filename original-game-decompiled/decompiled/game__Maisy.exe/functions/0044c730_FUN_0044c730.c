
/* ==== FUN_0044c730 @ 0044c730 ==== 
 * signature: LRESULT __fastcall FUN_0044c730(int param_1)
 * body: 0044c730-0044c74a
 */

LRESULT __fastcall FUN_0044c730(int param_1)

{
  LRESULT LVar1;
  
  if (*(HWND *)(param_1 + 0x7e) == (HWND)0x0) {
    return 0;
  }
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x7e),0x471,0,0);
  return LVar1;
}


