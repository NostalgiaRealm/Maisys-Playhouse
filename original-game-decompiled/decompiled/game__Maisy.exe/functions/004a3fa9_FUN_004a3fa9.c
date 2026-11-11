
/* ==== FUN_004a3fa9 @ 004a3fa9 ==== 
 * signature: undefined __stdcall FUN_004a3fa9(void)
 * body: 004a3fa9-004a3fb7
 */

void FUN_004a3fa9(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


