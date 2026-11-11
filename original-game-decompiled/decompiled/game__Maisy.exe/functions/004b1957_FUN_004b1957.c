
/* ==== FUN_004b1957 @ 004b1957 ==== 
 * signature: BOOL __thiscall FUN_004b1957(void * this, COLORADJUSTMENT * param_1)
 * body: 004b1957-004b1992
 */

BOOL __thiscall FUN_004b1957(void *this,COLORADJUSTMENT *param_1)

{
  undefined4 local_8;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    local_8 = SetColorAdjustment(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = SetColorAdjustment(*(HDC *)((int)this + 8),param_1);
  }
  return local_8;
}


