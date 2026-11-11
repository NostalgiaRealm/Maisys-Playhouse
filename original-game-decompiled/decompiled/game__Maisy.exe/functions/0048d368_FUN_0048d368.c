
/* ==== FUN_0048d368 @ 0048d368 ==== 
 * signature: undefined4 __stdcall FUN_0048d368(void)
 * body: 0048d368-0048d395
 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0048d368(void)

{
  undefined4 uVar1;
  
  if (DAT_004dd1a4 == 0) {
    FUN_0048caa0((int *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0048d38a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_FUN_004dd1b4)();
    return uVar1;
  }
  return 0x80008001;
}


