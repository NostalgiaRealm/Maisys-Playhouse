
/* ==== FUN_004a8536 @ 004a8536 ==== 
 * signature: undefined __stdcall FUN_004a8536(void)
 * body: 004a8536-004a8550
 */

void FUN_004a8536(void)

{
  if ((DAT_004e3638 & 8) == 0) {
    DAT_004e3638 = DAT_004e3638 | 8;
    CWnd::~CWnd((CWnd *)&DAT_004e4ec0);
    return;
  }
  return;
}


