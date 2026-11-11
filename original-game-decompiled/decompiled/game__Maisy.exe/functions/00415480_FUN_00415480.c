
/* ==== FUN_00415480 @ 00415480 ==== 
 * signature: undefined __thiscall FUN_00415480(void * this, undefined4 * param_1)
 * body: 00415480-004154b1
 */

void __thiscall FUN_00415480(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = param_1[1];
    *(undefined4 *)((int)this + 0x52) = *param_1;
    *(undefined4 *)((int)this + 0x56) = uVar1;
    return;
  }
  *(undefined2 *)((int)this + 0x52) = 0;
  *(undefined2 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x56) = 0;
  *(undefined2 *)((int)this + 0x58) = 0;
  return;
}


