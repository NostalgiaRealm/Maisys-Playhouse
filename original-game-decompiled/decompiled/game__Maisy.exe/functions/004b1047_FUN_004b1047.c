
/* ==== FUN_004b1047 @ 004b1047 ==== 
 * signature: COLORREF __thiscall FUN_004b1047(void * this, COLORREF param_1)
 * body: 004b1047-004b1082
 */

COLORREF __thiscall FUN_004b1047(void *this,COLORREF param_1)

{
  undefined4 local_8;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    local_8 = SetBkColor(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = SetBkColor(*(HDC *)((int)this + 8),param_1);
  }
  return local_8;
}


