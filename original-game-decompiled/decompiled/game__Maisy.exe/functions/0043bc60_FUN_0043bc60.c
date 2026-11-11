
/* ==== FUN_0043bc60 @ 0043bc60 ==== 
 * signature: undefined1 * __thiscall FUN_0043bc60(void * this, char param_1, char param_2)
 * body: 0043bc60-0043bccc
 */

undefined1 * __thiscall FUN_0043bc60(void *this,char param_1,char param_2)

{
  *(char *)this = DAT_004da3e8;
  *(undefined1 *)((int)this + 1) = DAT_004db9c8;
  DAT_004db9c8 = param_1 == '\0';
  *(undefined1 *)((int)this + 2) = DAT_004db9c4;
  DAT_004da3e8 = param_1;
  DAT_004db9c4 = DAT_004db9c8;
  if ((param_1 != '\0') && (DAT_004dc564 != 0)) {
    FUN_00470af0(0x7fffffff);
    if (param_2 != '\0') {
      FUN_0043bf40();
    }
  }
  return this;
}


