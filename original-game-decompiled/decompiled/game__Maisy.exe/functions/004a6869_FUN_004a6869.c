
/* ==== FUN_004a6869 @ 004a6869 ==== 
 * signature: undefined4 __thiscall FUN_004a6869(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 004a6869-004a688b
 */

undefined4 __thiscall
FUN_004a6869(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)((int)this + 0x50) == 0) {
    *(undefined4 *)((int)this + 0x50) = param_2;
  }
  *(undefined4 *)((int)this + 0x48) = param_1;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  return 1;
}


