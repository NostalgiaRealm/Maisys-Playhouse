
/* ==== FUN_004b17ef @ 004b17ef ==== 
 * signature: DWORD __thiscall FUN_004b17ef(void * this, DWORD param_1)
 * body: 004b17ef-004b182a
 */

DWORD __thiscall FUN_004b17ef(void *this,DWORD param_1)

{
  undefined4 local_8;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    local_8 = SetMapperFlags(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = SetMapperFlags(*(HDC *)((int)this + 8),param_1);
  }
  return local_8;
}


