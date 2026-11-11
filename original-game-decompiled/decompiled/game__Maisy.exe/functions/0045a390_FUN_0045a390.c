
/* ==== FUN_0045a390 @ 0045a390 ==== 
 * signature: undefined __thiscall FUN_0045a390(void * this, undefined4 param_1, undefined2 param_2)
 * body: 0045a390-0045a3d7
 */

void __thiscall FUN_0045a390(void *this,undefined4 param_1,undefined2 param_2)

{
  *(undefined2 *)((int)this + 0x5e) = param_2;
  *(undefined4 *)((int)this + 0x5a) = param_1;
  if (*(void **)((int)this + 0x82) != (void *)0x0) {
    FUN_00403860(*(void **)((int)this + 0x82),param_1);
    FUN_00403890(*(void **)((int)this + 0x82),param_2);
  }
  return;
}


