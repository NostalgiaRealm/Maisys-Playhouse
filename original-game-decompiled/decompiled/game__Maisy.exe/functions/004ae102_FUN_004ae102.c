
/* ==== FUN_004ae102 @ 004ae102 ==== 
 * signature: undefined __stdcall FUN_004ae102(void)
 * body: 004ae102-004ae110
 */

void FUN_004ae102(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


