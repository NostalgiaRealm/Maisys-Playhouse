
/* ==== FUN_004a84b6 @ 004a84b6 ==== 
 * signature: undefined __stdcall FUN_004a84b6(void)
 * body: 004a84b6-004a84d0
 */

void FUN_004a84b6(void)

{
  if ((DAT_004e3638 & 2) == 0) {
    DAT_004e3638 = DAT_004e3638 | 2;
    CWnd::~CWnd((CWnd *)&DAT_004e4f00);
    return;
  }
  return;
}


