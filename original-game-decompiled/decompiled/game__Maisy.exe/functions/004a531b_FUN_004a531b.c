
/* ==== FUN_004a531b @ 004a531b ==== 
 * signature: undefined __stdcall FUN_004a531b(void)
 * body: 004a531b-004a5329
 */

void FUN_004a531b(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


