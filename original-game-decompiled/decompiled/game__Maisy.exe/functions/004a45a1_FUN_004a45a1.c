
/* ==== FUN_004a45a1 @ 004a45a1 ==== 
 * signature: undefined __stdcall FUN_004a45a1(void)
 * body: 004a45a1-004a45af
 */

void FUN_004a45a1(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


