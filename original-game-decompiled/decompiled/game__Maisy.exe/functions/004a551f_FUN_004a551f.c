
/* ==== FUN_004a551f @ 004a551f ==== 
 * signature: LPVOID __thiscall FUN_004a551f(void * this, byte param_1)
 * body: 004a551f-004a553c
 */

LPVOID __thiscall FUN_004a551f(void *this,byte param_1)

{
  FID_conflict__CPtrList();
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


