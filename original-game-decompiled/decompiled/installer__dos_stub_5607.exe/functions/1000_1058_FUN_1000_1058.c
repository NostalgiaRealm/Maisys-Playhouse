
/* ==== FUN_1000_1058 @ 1000:1058 ==== 
 * signature: undefined FUN_1000_1058(void)
 * body: 1000:1058-1000:106b
 */

void FUN_1000_1058(void)

{
  undefined2 unaff_DS;
  
  if ((code *)*(int *)0x174 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001105e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(int *)0x174)();
    return;
  }
  *(undefined2 *)0x7e = 0x16;
  FUN_1000_063f();
  return;
}


