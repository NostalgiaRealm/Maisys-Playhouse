
/* ==== FUN_00403890 @ 00403890 ==== 
 * signature: undefined __thiscall FUN_00403890(void * this, undefined2 param_1)
 * body: 00403890-004038cb
 */

void __thiscall FUN_00403890(void *this,undefined2 param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)((int)this + 0x2a) + 0x104))();
  if (cVar1 == '\0') {
    *(undefined2 *)((int)this + 0xc0) = param_1;
    FUN_004105b0(*(int *)((int)this + 0x8e));
    *(undefined2 *)(*(int *)((int)this + 0x8a) + 0x2a) = param_1;
  }
  return;
}


