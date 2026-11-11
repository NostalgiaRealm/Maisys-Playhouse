
/* ==== FUN_004a3957 @ 004a3957 ==== 
 * signature: undefined __stdcall FUN_004a3957(void)
 * body: 004a3957-004a3965
 */

void FUN_004a3957(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


