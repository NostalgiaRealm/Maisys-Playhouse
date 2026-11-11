
/* ==== FUN_004b1173 @ 004b1173 ==== 
 * signature: COLORREF __thiscall FUN_004b1173(void * this, COLORREF param_1)
 * body: 004b1173-004b11ae
 */

COLORREF __thiscall FUN_004b1173(void *this,COLORREF param_1)

{
  undefined4 local_8;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    local_8 = SetTextColor(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = SetTextColor(*(HDC *)((int)this + 8),param_1);
  }
  return local_8;
}


