
/* ==== FUN_140188fc @ 140188fc ==== 
 * signature: undefined6 __stdcall FUN_140188fc(void)
 * body: 140188fc-14018928
 */

/* WARNING: Unable to track spacebase fully for stack */

undefined6 FUN_140188fc(void)

{
  undefined4 in_EAX;
  undefined6 uVar1;
  
  if (DAT_14026d68 == 0) {
    FUN_140183c0((int *)0x0);
                    /* WARNING: Could not recover jumptable at 0x1401891a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_FUN_14026d6c)();
    return uVar1;
  }
  return CONCAT24(0x8000,CONCAT22((short)((uint)in_EAX >> 0x10),0x8001));
}


