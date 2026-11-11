
/* ==== FUN_004ac096 @ 004ac096 ==== 
 * signature: undefined __stdcall FUN_004ac096(void)
 * body: 004ac096-004ac0a4
 */

void FUN_004ac096(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


