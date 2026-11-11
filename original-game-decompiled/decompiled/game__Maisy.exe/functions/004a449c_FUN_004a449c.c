
/* ==== FUN_004a449c @ 004a449c ==== 
 * signature: undefined __stdcall FUN_004a449c(void)
 * body: 004a449c-004a44aa
 */

void FUN_004a449c(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


