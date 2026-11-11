
/* ==== FUN_1401871c @ 1401871c ==== 
 * signature: undefined4 __stdcall FUN_1401871c(void)
 * body: 1401871c-14018749
 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_1401871c(void)

{
  undefined4 uVar1;
  
  if (DAT_14026d68 == 0) {
    FUN_140183c0((int *)0x0);
                    /* WARNING: Could not recover jumptable at 0x1401873e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_FUN_14026d78)();
    return uVar1;
  }
  return 0x80008001;
}


