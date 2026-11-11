
/* ==== FUN_00491978 @ 00491978 ==== 
 * signature: undefined __stdcall FUN_00491978(void)
 * body: 00491978-00491992
 */

void FUN_00491978(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)**(undefined4 **)(unaff_EBP + -0x14);
  __XcptFilter(*(ulong *)(unaff_EBP + -0x20),*(_EXCEPTION_POINTERS **)(unaff_EBP + -0x14));
  return;
}


