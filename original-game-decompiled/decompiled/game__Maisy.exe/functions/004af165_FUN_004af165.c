
/* ==== FUN_004af165 @ 004af165 ==== 
 * signature: undefined __stdcall FUN_004af165(void)
 * body: 004af165-004af173
 */

void FUN_004af165(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


