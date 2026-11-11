
/* ==== FUN_0042eaf0 @ 0042eaf0 ==== 
 * signature: undefined __thiscall FUN_0042eaf0(void * this, undefined4 * param_1)
 * body: 0042eaf0-0042eb1d
 */

void __thiscall FUN_0042eaf0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *(undefined4 *)((int)this + 0x58) = *param_1;
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(undefined2 *)((int)this + 0x50) = 1;
  *(undefined2 *)((int)this + 0x52) = 1;
  *(undefined2 *)((int)this + 0x54) = 1;
  *(undefined2 *)((int)this + 0x56) = 1;
  return;
}


