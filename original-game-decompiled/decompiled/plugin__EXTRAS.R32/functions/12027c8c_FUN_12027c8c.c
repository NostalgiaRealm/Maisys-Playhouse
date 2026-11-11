
/* ==== FUN_12027c8c @ 12027c8c ==== 
 * signature: undefined6 __stdcall FUN_12027c8c(void)
 * body: 12027c8c-12027cb8
 */

/* WARNING: Unable to track spacebase fully for stack */

undefined6 FUN_12027c8c(void)

{
  undefined4 in_EAX;
  undefined6 uVar1;
  
  if (DAT_12037d7c == 0) {
    FUN_120283e0((int *)0x0);
                    /* WARNING: Could not recover jumptable at 0x12027caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_FUN_12037d80)();
    return uVar1;
  }
  return CONCAT24(0x8000,CONCAT22((short)((uint)in_EAX >> 0x10),0x8001));
}


