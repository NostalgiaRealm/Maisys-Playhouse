
/* ==== FUN_004bc45c @ 004bc45c ==== 
 * signature: undefined __stdcall FUN_004bc45c(void)
 * body: 004bc45c-004bc46a
 */

void FUN_004bc45c(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


