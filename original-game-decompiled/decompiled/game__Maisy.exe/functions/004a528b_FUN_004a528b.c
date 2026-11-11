
/* ==== FUN_004a528b @ 004a528b ==== 
 * signature: undefined __stdcall FUN_004a528b(void)
 * body: 004a528b-004a5299
 */

void FUN_004a528b(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


