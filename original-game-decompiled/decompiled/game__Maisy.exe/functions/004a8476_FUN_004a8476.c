
/* ==== FUN_004a8476 @ 004a8476 ==== 
 * signature: undefined __stdcall FUN_004a8476(void)
 * body: 004a8476-004a8490
 */

void FUN_004a8476(void)

{
  if ((DAT_004e3638 & 1) == 0) {
    DAT_004e3638 = DAT_004e3638 | 1;
    CWnd::~CWnd((CWnd *)&DAT_004e4e40);
    return;
  }
  return;
}


