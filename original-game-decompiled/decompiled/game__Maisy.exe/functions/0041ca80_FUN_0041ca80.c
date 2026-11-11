
/* ==== FUN_0041ca80 @ 0041ca80 ==== 
 * signature: undefined __thiscall FUN_0041ca80(void * this, int param_1, int param_2)
 * body: 0041ca80-0041caa8
 */

void __thiscall FUN_0041ca80(void *this,int param_1,int param_2)

{
  FUN_0041e220(this,param_1,param_2);
  if (*(char *)((int)this + 0xf2) == '\0') {
    *(byte *)((int)this + 0x15e) = *(byte *)((int)this + 0x15e) & 0xfd;
  }
  return;
}


