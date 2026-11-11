
/* ==== FUN_004a474e @ 004a474e ==== 
 * signature: undefined __stdcall FUN_004a474e(void)
 * body: 004a474e-004a475c
 */

void FUN_004a474e(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


