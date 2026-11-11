
/* ==== FUN_004a3eb8 @ 004a3eb8 ==== 
 * signature: undefined __stdcall FUN_004a3eb8(void)
 * body: 004a3eb8-004a3ec6
 */

void FUN_004a3eb8(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x20) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


