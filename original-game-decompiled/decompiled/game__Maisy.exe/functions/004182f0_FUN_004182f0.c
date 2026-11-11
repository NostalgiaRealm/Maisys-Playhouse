
/* ==== FUN_004182f0 @ 004182f0 ==== 
 * signature: undefined4 __thiscall FUN_004182f0(void * this, int param_1)
 * body: 004182f0-0041832c
 */

undefined4 __thiscall FUN_004182f0(void *this,int param_1)

{
  undefined4 uVar1;
  int *local_8;
  
  if (param_1 != 0) {
    uVar1 = FUN_00430370(*(void **)((int)this + 0x4a),param_1,&local_8);
    if (((char)uVar1 != '\0') && (local_8 != (int *)0x0)) {
      uVar1 = FUN_00430190(*local_8);
      return uVar1;
    }
  }
  return 0;
}


