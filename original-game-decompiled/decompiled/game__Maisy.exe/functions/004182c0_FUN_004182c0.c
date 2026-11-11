
/* ==== FUN_004182c0 @ 004182c0 ==== 
 * signature: undefined4 __thiscall FUN_004182c0(void * this, int param_1)
 * body: 004182c0-004182ef
 */

undefined4 __thiscall FUN_004182c0(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  if (param_1 != 0) {
    uVar1 = FUN_00430370(*(void **)((int)this + 0x4a),param_1,&local_8);
    if ((char)uVar1 != '\0') {
      return local_8;
    }
  }
  return 0;
}


