
/* ==== FUN_004a84f6 @ 004a84f6 ==== 
 * signature: undefined __stdcall FUN_004a84f6(void)
 * body: 004a84f6-004a8510
 */

void FUN_004a84f6(void)

{
  if ((DAT_004e3638 & 4) == 0) {
    DAT_004e3638 = DAT_004e3638 | 4;
    CWnd::~CWnd((CWnd *)&DAT_004e4e80);
    return;
  }
  return;
}


