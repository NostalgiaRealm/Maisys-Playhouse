
/* ==== FUN_0040d570 @ 0040d570 ==== 
 * signature: undefined __thiscall FUN_0040d570(void * this, undefined2 param_1, char param_2)
 * body: 0040d570-0040d594
 */

void __thiscall FUN_0040d570(void *this,undefined2 param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined2 *)((int)this + 0xa0) = param_1;
    return;
  }
  *(undefined2 *)((int)this + 0xa6) = param_1;
  return;
}


