
/* ==== FUN_004a4506 @ 004a4506 ==== 
 * signature: undefined __stdcall FUN_004a4506(void)
 * body: 004a4506-004a4514
 */

void FUN_004a4506(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


