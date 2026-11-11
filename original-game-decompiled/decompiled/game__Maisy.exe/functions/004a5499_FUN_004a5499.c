
/* ==== FUN_004a5499 @ 004a5499 ==== 
 * signature: undefined __stdcall FUN_004a5499(void)
 * body: 004a5499-004a54a7
 */

void FUN_004a5499(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


