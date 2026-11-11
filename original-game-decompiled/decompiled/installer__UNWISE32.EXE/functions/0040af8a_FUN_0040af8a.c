
/* ==== FUN_0040af8a @ 0040af8a ==== 
 * signature: undefined __stdcall FUN_0040af8a(void)
 * body: 0040af8a-0040af9e
 */

void FUN_0040af8a(void)

{
  DWORD DVar1;
  int unaff_EBP;
  
  DVar1 = (*(_EXCEPTION_POINTERS **)(unaff_EBP + -0x14))->ExceptionRecord->ExceptionCode;
  *(DWORD *)(unaff_EBP + -0x68) = DVar1;
  FUN_0040c810(DVar1,*(_EXCEPTION_POINTERS **)(unaff_EBP + -0x14));
  return;
}


