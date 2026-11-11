
/* ==== FUN_004a4641 @ 004a4641 ==== 
 * signature: undefined __stdcall FUN_004a4641(void)
 * body: 004a4641-004a464f
 */

void FUN_004a4641(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


