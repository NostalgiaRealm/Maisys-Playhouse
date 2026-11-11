
/* ==== FUN_004a53a3 @ 004a53a3 ==== 
 * signature: undefined __stdcall FUN_004a53a3(void)
 * body: 004a53a3-004a53b1
 */

void FUN_004a53a3(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


