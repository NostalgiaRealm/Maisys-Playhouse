
/* ==== FUN_00496ddb @ 00496ddb ==== 
 * signature: undefined1[10] __stdcall FUN_00496ddb(void)
 * body: 00496ddb-00496de1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [10] FUN_00496ddb(void)

{
  int unaff_EBP;
  undefined1 auVar1 [10];
  
  auVar1 = _DAT_004dece0;
  if (*(char *)(unaff_EBP + -0x90) < '\x01') {
    *(undefined1 *)(unaff_EBP + -0x90) = 1;
  }
  return auVar1;
}


