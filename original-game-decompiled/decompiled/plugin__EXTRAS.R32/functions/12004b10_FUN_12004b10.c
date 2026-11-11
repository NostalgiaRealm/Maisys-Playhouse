
/* ==== FUN_12004b10 @ 12004b10 ==== 
 * signature: int __thiscall FUN_12004b10(void * this, undefined4 param_1, undefined4 param_2, undefined2 param_3)
 * body: 12004b10-12004b2b
 */

int __thiscall FUN_12004b10(void *this,undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined2 *)((int)this + 0xc) = param_3;
  return (int)this;
}


