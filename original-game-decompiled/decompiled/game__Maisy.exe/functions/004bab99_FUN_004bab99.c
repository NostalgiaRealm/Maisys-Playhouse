
/* ==== FUN_004bab99 @ 004bab99 ==== 
 * signature: void * __thiscall FUN_004bab99(void * this, byte param_1)
 * body: 004bab99-004babb3
 */

void * __thiscall FUN_004bab99(void *this,byte param_1)

{
  FUN_004babb4();
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


