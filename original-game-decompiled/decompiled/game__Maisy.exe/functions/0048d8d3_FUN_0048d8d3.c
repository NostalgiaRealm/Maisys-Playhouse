
/* ==== FUN_0048d8d3 @ 0048d8d3 ==== 
 * signature: void * __thiscall FUN_0048d8d3(void * this, byte param_1)
 * body: 0048d8d3-0048d8ed
 */

void * __thiscall FUN_0048d8d3(void *this,byte param_1)

{
  FUN_004bc8c9();
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


