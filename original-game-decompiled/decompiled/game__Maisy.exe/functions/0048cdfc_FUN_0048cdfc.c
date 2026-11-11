
/* ==== FUN_0048cdfc @ 0048cdfc ==== 
 * signature: undefined6 __stdcall FUN_0048cdfc(void)
 * body: 0048cdfc-0048ce28
 */

/* WARNING: Unable to track spacebase fully for stack */

undefined6 FUN_0048cdfc(void)

{
  undefined4 in_EAX;
  undefined6 uVar1;
  
  if (DAT_004dd1a4 == 0) {
    FUN_0048caa0((int *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0048ce1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_FUN_004dd1a8)();
    return uVar1;
  }
  return CONCAT24(0x8000,CONCAT22((short)((uint)in_EAX >> 0x10),0x8001));
}


