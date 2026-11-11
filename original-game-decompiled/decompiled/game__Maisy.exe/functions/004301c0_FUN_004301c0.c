
/* ==== FUN_004301c0 @ 004301c0 ==== 
 * signature: int __thiscall FUN_004301c0(void * this, int param_1)
 * body: 004301c0-004301e6
 */

int __thiscall FUN_004301c0(void *this,int param_1)

{
  if ((*(int *)((int)this + 0x36) != 0) && (*(int *)((int)this + 0x3a) != 0)) {
    return *(int *)((int)this + 0x32) * (param_1 + -1) + *(int *)((int)this + 0x3a);
  }
  return 0;
}


