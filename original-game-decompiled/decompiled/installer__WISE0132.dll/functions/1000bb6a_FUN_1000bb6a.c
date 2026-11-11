
/* ==== FUN_1000bb6a @ 1000bb6a ==== 
 * signature: undefined __stdcall FUN_1000bb6a(void)
 * body: 1000bb6a-1000bbba
 */

void FUN_1000bb6a(void)

{
  DAT_10023dc0 = 0;
  if (DAT_100238b4 == (code *)0x0) {
    if (DAT_10023fac == (HWND)0x0) {
      DAT_10023dc0 = 0;
      DAT_10023fac = (HWND)0x0;
      return;
    }
    EnableWindow(DAT_100238d8,1);
    DestroyWindow(DAT_10023fac);
  }
  else {
    (*DAT_100238b4)(2,0,&DAT_10024080,0,0,0);
  }
  UpdateScreen(0);
  DAT_10023fac = (HWND)0x0;
  return;
}


