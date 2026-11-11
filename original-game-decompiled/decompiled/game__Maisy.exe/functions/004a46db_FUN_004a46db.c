
/* ==== FUN_004a46db @ 004a46db ==== 
 * signature: undefined __stdcall FUN_004a46db(void)
 * body: 004a46db-004a46e9
 */

void FUN_004a46db(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


