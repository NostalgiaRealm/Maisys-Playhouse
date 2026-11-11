
/* ==== FUN_004a4416 @ 004a4416 ==== 
 * signature: undefined __stdcall FUN_004a4416(void)
 * body: 004a4416-004a4424
 */

void FUN_004a4416(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


