
/* ==== FUN_0043f910 @ 0043f910 ==== 
 * signature: undefined __thiscall FUN_0043f910(void * this, int param_1, undefined1 param_2)
 * body: 0043f910-0043f964
 */

void __thiscall FUN_0043f910(void *this,int param_1,undefined1 param_2)

{
  if ((*(int *)((int)this + 0x84) != 0) && (param_1 == 0)) {
    FUN_0048d4b6();
  }
  *(int *)((int)this + 0x84) = param_1;
  FUN_0043f980(this,param_2);
  if (*(int *)((int)this + 0x84) != 0) {
    FUN_0048d4b6();
  }
  return;
}


