
/* ==== FUN_004ac001 @ 004ac001 ==== 
 * signature: undefined __stdcall FUN_004ac001(void)
 * body: 004ac001-004ac00f
 */

void FUN_004ac001(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


