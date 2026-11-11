
/* ==== FUN_0044f7e0 @ 0044f7e0 ==== 
 * signature: undefined __thiscall FUN_0044f7e0(void * this, short param_1)
 * body: 0044f7e0-0044f81f
 */

void __thiscall FUN_0044f7e0(void *this,short param_1)

{
  if (param_1 < 0) {
    *(byte *)((int)this + 0x15c) = *(byte *)((int)this + 0x15c) & 0xfe;
    param_1 = -param_1;
  }
  else {
    *(byte *)((int)this + 0x15c) = *(byte *)((int)this + 0x15c) | 1;
  }
  *(int *)((int)this + 0x94) = param_1 * 100000;
  return;
}


