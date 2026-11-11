
/* ==== FUN_00450230 @ 00450230 ==== 
 * signature: undefined4 __thiscall FUN_00450230(void * this, short param_1)
 * body: 00450230-0045025c
 */

undefined4 __thiscall FUN_00450230(void *this,short param_1)

{
  undefined4 uVar1;
  undefined4 local_14 [4];
  
  uVar1 = FUN_00430370(*(void **)((int)this + 0x26),(int)param_1,local_14);
  if ((char)uVar1 != '\0') {
    return local_14[0];
  }
  return 0;
}


