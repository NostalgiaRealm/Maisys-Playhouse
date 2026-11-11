
/* ==== FUN_00444bed @ 00444bed ==== 
 * signature: undefined __stdcall FUN_00444bed(void)
 * body: 00444bed-00444bef
 */

void FUN_00444bed(void)

{
  code *pcVar1;
  undefined1 in_AL;
  char in_AH;
  int unaff_EBX;
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBX + 0x44) = *(undefined1 *)(unaff_EBX + 0x44);
  uRamc200444b = in_AL;
  *(char *)(unaff_EBP + 0x4b) = *(char *)(unaff_EBP + 0x4b) + in_AH;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


