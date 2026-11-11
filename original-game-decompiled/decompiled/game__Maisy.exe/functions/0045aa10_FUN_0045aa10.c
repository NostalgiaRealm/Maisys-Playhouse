
/* ==== FUN_0045aa10 @ 0045aa10 ==== 
 * signature: undefined __thiscall FUN_0045aa10(void * this, undefined2 param_1)
 * body: 0045aa10-0045aa2f
 */

void __thiscall FUN_0045aa10(void *this,undefined2 param_1)

{
  *(undefined2 *)((int)this + 0x5e) = param_1;
  if (*(void **)((int)this + 0x82) != (void *)0x0) {
    FUN_00403890(*(void **)((int)this + 0x82),param_1);
  }
  return;
}


