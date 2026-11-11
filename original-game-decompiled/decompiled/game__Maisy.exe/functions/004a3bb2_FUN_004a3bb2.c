
/* ==== FUN_004a3bb2 @ 004a3bb2 ==== 
 * signature: undefined __stdcall FUN_004a3bb2(void)
 * body: 004a3bb2-004a3bc0
 */

void FUN_004a3bb2(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


