
/* ==== FUN_004af057 @ 004af057 ==== 
 * signature: undefined __stdcall FUN_004af057(void)
 * body: 004af057-004af065
 */

void FUN_004af057(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


