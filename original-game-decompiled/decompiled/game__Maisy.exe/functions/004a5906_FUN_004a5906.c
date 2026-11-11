
/* ==== FUN_004a5906 @ 004a5906 ==== 
 * signature: LPVOID __thiscall FUN_004a5906(void * this, byte param_1)
 * body: 004a5906-004a5923
 */

LPVOID __thiscall FUN_004a5906(void *this,byte param_1)

{
  FID_conflict__CMapPtrToWord();
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


