
/* ==== FUN_004b10fb @ 004b10fb ==== 
 * signature: int __thiscall FUN_004b10fb(void * this, int param_1)
 * body: 004b10fb-004b1136
 */

int __thiscall FUN_004b10fb(void *this,int param_1)

{
  undefined4 local_8;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    local_8 = SetROP2(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = SetROP2(*(HDC *)((int)this + 8),param_1);
  }
  return local_8;
}


