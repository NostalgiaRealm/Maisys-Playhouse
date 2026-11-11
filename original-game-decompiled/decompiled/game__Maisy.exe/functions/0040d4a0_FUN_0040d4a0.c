
/* ==== FUN_0040d4a0 @ 0040d4a0 ==== 
 * signature: undefined __thiscall FUN_0040d4a0(void * this, undefined4 param_1, char param_2)
 * body: 0040d4a0-0040d4d3
 */

void __thiscall FUN_0040d4a0(void *this,undefined4 param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined4 *)((int)this + 0x9c) = param_1;
    *(undefined2 *)((int)this + 0xa0) = 0xffff;
    return;
  }
  *(undefined4 *)((int)this + 0xa2) = param_1;
  *(undefined2 *)((int)this + 0xa6) = 0xffff;
  return;
}


