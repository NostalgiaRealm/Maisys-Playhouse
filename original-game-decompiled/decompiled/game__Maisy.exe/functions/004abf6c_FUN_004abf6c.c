
/* ==== FUN_004abf6c @ 004abf6c ==== 
 * signature: undefined __stdcall FUN_004abf6c(void)
 * body: 004abf6c-004abf7a
 */

void FUN_004abf6c(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


