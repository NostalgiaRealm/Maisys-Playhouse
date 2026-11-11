
/* ==== FUN_004a3a43 @ 004a3a43 ==== 
 * signature: undefined __stdcall FUN_004a3a43(void)
 * body: 004a3a43-004a3a51
 */

void FUN_004a3a43(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x18) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


