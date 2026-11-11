
/* ==== FUN_004987e6 @ 004987e6 ==== 
 * signature: undefined1[10] __stdcall FUN_004987e6(void)
 * body: 004987e6-004987f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [10] FUN_004987e6(void)

{
  int unaff_EBP;
  undefined1 auVar1 [10];
  
  auVar1 = _DAT_004dece0;
  if (*(char *)(unaff_EBP + -0x90) < '\x01') {
    *(undefined1 *)(unaff_EBP + -0x90) = 1;
  }
  return auVar1;
}


