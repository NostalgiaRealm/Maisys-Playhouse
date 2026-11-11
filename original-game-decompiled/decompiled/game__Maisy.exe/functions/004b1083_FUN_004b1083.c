
/* ==== FUN_004b1083 @ 004b1083 ==== 
 * signature: int __thiscall FUN_004b1083(void * this, int param_1)
 * body: 004b1083-004b10be
 */

int __thiscall FUN_004b1083(void *this,int param_1)

{
  undefined4 local_8;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    local_8 = SetBkMode(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = SetBkMode(*(HDC *)((int)this + 8),param_1);
  }
  return local_8;
}


