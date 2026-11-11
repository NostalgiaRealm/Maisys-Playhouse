
/* ==== FUN_0046c0b5 @ 0046c0b5 ==== 
 * signature: undefined __stdcall FUN_0046c0b5(void)
 * body: 0046c0b5-0046c0b7
 */

void FUN_0046c0b5(void)

{
  code *pcVar1;
  byte in_AL;
  int unaff_EBX;
  
  *(char *)(unaff_EBX + -0x42) = *(char *)(unaff_EBX + -0x42) + (in_AL & 0xbd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


