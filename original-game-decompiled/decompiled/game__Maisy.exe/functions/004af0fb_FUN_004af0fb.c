
/* ==== FUN_004af0fb @ 004af0fb ==== 
 * signature: undefined __stdcall FUN_004af0fb(void)
 * body: 004af0fb-004af109
 */

void FUN_004af0fb(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


