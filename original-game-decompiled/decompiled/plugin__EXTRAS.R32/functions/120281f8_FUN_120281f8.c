
/* ==== FUN_120281f8 @ 120281f8 ==== 
 * signature: undefined4 __stdcall FUN_120281f8(void)
 * body: 120281f8-12028225
 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_120281f8(void)

{
  undefined4 uVar1;
  
  if (DAT_12037d7c == 0) {
    FUN_120283e0((int *)0x0);
                    /* WARNING: Could not recover jumptable at 0x1202821a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_FUN_12037d8c)();
    return uVar1;
  }
  return 0x80008001;
}


