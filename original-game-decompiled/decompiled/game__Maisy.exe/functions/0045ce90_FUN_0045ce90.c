
/* ==== FUN_0045ce90 @ 0045ce90 ==== 
 * signature: undefined __fastcall FUN_0045ce90(int param_1)
 * body: 0045ce90-0045ceaa
 */

void __fastcall FUN_0045ce90(int param_1)

{
  if (*(int *)(param_1 + 0x68) != 0) {
    RedrawWindow(*(HWND *)(*(int *)(param_1 + 0x68) + 0x1c),(RECT *)0x0,(HRGN)0x0,0x221);
  }
  return;
}


