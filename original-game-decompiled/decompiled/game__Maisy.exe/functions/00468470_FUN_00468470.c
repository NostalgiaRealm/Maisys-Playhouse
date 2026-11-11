
/* ==== FUN_00468470 @ 00468470 ==== 
 * signature: undefined __thiscall FUN_00468470(void * this, uint * param_1)
 * body: 00468470-0046848b
 */

void __thiscall FUN_00468470(void *this,uint *param_1)

{
  uint uVar1;
  
  if (*(int **)((int)this + 0x48) != (int *)0x0) {
    uVar1 = FUN_00427e20(*(void **)((int)this + 0x3a),*(int **)((int)this + 0x48));
    *param_1 = uVar1;
  }
  return;
}


