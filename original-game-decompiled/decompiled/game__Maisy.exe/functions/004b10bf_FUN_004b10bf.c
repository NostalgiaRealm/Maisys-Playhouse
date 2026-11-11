
/* ==== FUN_004b10bf @ 004b10bf ==== 
 * signature: int __thiscall FUN_004b10bf(void * this, int param_1)
 * body: 004b10bf-004b10fa
 */

int __thiscall FUN_004b10bf(void *this,int param_1)

{
  undefined4 local_8;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    local_8 = SetPolyFillMode(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = SetPolyFillMode(*(HDC *)((int)this + 8),param_1);
  }
  return local_8;
}


