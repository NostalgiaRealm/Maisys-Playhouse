
/* ==== FUN_0046c990 @ 0046c990 ==== 
 * signature: undefined __thiscall FUN_0046c990(void * this, undefined2 param_1)
 * body: 0046c990-0046c9e3
 */

void __thiscall FUN_0046c990(void *this,undefined2 param_1)

{
  void *this_00;
  undefined4 uVar1;
  undefined4 local_20 [7];
  
  *(undefined2 *)((int)this + 0x60) = param_1;
  this_00 = *(void **)((int)this + 0x3a);
  if ((this_00 != (void *)0x0) && (*(char *)((int)this_00 + 0xa4) != '\0')) {
    uVar1 = FUN_00406bb0(this_00,1,this,local_20);
    if ((char)uVar1 != '\0') {
      FUN_00406bb0(*(void **)((int)this + 0x3a),0,this,local_20);
    }
  }
  (**(code **)(**(int **)((int)this + 0x5a) + 0x20c))(this);
  return;
}


