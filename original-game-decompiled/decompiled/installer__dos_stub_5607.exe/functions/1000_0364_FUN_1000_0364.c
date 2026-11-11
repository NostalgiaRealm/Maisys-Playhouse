
/* ==== FUN_1000_0364 @ 1000:0364 ==== 
 * signature: undefined FUN_1000_0364(void)
 * body: 1000:0364-1000:037a
 */

void FUN_1000_0364(void)

{
  undefined1 *in_AX;
  undefined2 unaff_DS;
  code *in_stack_00000000;
  
  if ((in_AX <= &stack0x0002) && ((undefined1 *)*(uint *)0xbc <= &stack0x0002 + -(int)in_AX)) {
                    /* WARNING: Could not recover jumptable at 0x00010373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*in_stack_00000000)();
    return;
  }
  FUN_1000_0177();
  return;
}


