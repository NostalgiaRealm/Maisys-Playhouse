
/* ==== FUN_004b11af @ 004b11af ==== 
 * signature: int __thiscall FUN_004b11af(void * this, int param_1)
 * body: 004b11af-004b11ea
 */

int __thiscall FUN_004b11af(void *this,int param_1)

{
  undefined4 local_8;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    local_8 = SetMapMode(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = SetMapMode(*(HDC *)((int)this + 8),param_1);
  }
  return local_8;
}


