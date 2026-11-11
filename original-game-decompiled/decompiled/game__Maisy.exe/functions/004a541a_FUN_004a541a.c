
/* ==== FUN_004a541a @ 004a541a ==== 
 * signature: undefined __stdcall FUN_004a541a(void)
 * body: 004a541a-004a5428
 */

void FUN_004a541a(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


