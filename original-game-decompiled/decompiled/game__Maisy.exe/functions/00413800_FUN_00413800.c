
/* ==== FUN_00413800 @ 00413800 ==== 
 * signature: undefined4 __thiscall FUN_00413800(void * this, int param_1)
 * body: 00413800-0041381c
 */

undefined4 __thiscall FUN_00413800(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(void **)((int)this + 0x12) != (void *)0x0) {
    uVar1 = FUN_00413cd0(*(void **)((int)this + 0x12),param_1);
    return uVar1;
  }
  return 0;
}


