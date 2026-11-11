
/* ==== FUN_004a7144 @ 004a7144 ==== 
 * signature: undefined __stdcall FUN_004a7144(void)
 * body: 004a7144-004a7165
 */

void FUN_004a7144(void)

{
  int unaff_EBP;
  int unaff_ESI;
  
  SetThreadPriority(*(HANDLE *)(unaff_ESI + 0x28),*(int *)(unaff_EBP + 0xc));
  if ((*(byte *)(unaff_EBP + 0x14) & 4) == 0) {
    ResumeThread(*(HANDLE *)(unaff_ESI + 0x28));
  }
  return;
}


