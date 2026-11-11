
/* ==== FUN_004b1886 @ 004b1886 ==== 
 * signature: int __thiscall FUN_004b1886(void * this, int param_1)
 * body: 004b1886-004b18c1
 */

int __thiscall FUN_004b1886(void *this,int param_1)

{
  undefined4 local_8;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    local_8 = SetArcDirection(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = SetArcDirection(*(HDC *)((int)this + 8),param_1);
  }
  return local_8;
}


