
/* ==== FUN_004b42c0 @ 004b42c0 ==== 
 * signature: undefined1 * __stdcall FUN_004b42c0(void)
 * body: 004b42c0-004b42dd;004b42e3-004b42f1
 */

undefined1 * FUN_004b42c0(void)

{
  int unaff_EBP;
  
  if (*(int *)(*(CException **)(unaff_EBP + -0x20) + 8) == 3) {
    CException::Delete(*(CException **)(unaff_EBP + -0x20));
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      return FUN_004b42de;
    }
  }
  else {
    __CxxThrowException_8(0,0);
  }
  return (undefined1 *)0x4b425f;
}


