
/* ==== FUN_004a3c3e @ 004a3c3e ==== 
 * signature: undefined __stdcall FUN_004a3c3e(void)
 * body: 004a3c3e-004a3c4c
 */

void FUN_004a3c3e(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


