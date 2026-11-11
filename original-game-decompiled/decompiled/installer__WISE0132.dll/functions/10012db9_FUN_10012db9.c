
/* ==== FUN_10012db9 @ 10012db9 ==== 
 * signature: undefined __stdcall FUN_10012db9(void)
 * body: 10012db9-10012dfa
 */

void FUN_10012db9(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    if (BVar1 == 0) break;
    TranslateMessage(&local_20);
    DispatchMessageA(&local_20);
  }
  return;
}


