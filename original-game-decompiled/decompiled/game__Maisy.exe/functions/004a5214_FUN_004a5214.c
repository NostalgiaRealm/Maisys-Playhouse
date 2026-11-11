
/* ==== FUN_004a5214 @ 004a5214 ==== 
 * signature: undefined __stdcall FUN_004a5214(void)
 * body: 004a5214-004a5222
 */

void FUN_004a5214(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


