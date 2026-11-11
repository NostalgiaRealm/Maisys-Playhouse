
/* ==== FUN_00401b50 @ 00401b50 ==== 
 * signature: undefined4 * __thiscall FUN_00401b50(void * this, byte param_1)
 * body: 00401b50-00401b71
 */

undefined4 * __thiscall FUN_00401b50(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004be060;
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


