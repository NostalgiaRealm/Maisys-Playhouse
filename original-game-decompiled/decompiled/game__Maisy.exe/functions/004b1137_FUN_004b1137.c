
/* ==== FUN_004b1137 @ 004b1137 ==== 
 * signature: int __thiscall FUN_004b1137(void * this, int param_1)
 * body: 004b1137-004b1172
 */

int __thiscall FUN_004b1137(void *this,int param_1)

{
  undefined4 local_8;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    local_8 = SetStretchBltMode(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = SetStretchBltMode(*(HDC *)((int)this + 8),param_1);
  }
  return local_8;
}


