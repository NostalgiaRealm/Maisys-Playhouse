
/* ==== FUN_0040d49a @ 0040d49a ==== 
 * signature: undefined FUN_0040d49a(void)
 * body: 0040d49a-0040d4bc
 */

undefined4 FUN_0040d49a(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(code **)((int)ExceptionList + 4) == FUN_0040d410) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    uVar1 = 1;
  }
  return uVar1;
}


