
/* ==== FUN_0048d7c2 @ 0048d7c2 ==== 
 * signature: undefined4 * __thiscall FUN_0048d7c2(void * this, byte param_1)
 * body: 0048d7c2-0048d7dd
 */

undefined4 * __thiscall FUN_0048d7c2(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004caff4;
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


