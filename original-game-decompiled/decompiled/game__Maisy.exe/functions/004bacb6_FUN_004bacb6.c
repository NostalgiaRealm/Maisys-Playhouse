
/* ==== FUN_004bacb6 @ 004bacb6 ==== 
 * signature: void * __thiscall FUN_004bacb6(void * this, byte param_1)
 * body: 004bacb6-004bacd0
 */

void * __thiscall FUN_004bacb6(void *this,byte param_1)

{
  FUN_004bacd1();
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


