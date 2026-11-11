
/* ==== FUN_004a47af @ 004a47af ==== 
 * signature: undefined __stdcall FUN_004a47af(void)
 * body: 004a47af-004a47bd
 */

void FUN_004a47af(void)

{
  int unaff_EBP;
  
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
    return;
  }
  return;
}


