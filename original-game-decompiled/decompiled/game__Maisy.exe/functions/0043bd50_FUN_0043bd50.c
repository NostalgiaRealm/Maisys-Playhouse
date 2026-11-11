
/* ==== FUN_0043bd50 @ 0043bd50 ==== 
 * signature: undefined1 * __thiscall FUN_0043bd50(void * this, char param_1, char param_2)
 * body: 0043bd50-0043bd87
 */

undefined1 * __thiscall FUN_0043bd50(void *this,char param_1,char param_2)

{
  char cVar1;
  
  *(char *)this = DAT_004db9c0;
  *(char *)((int)this + 1) = param_2;
  DAT_004db9c0 = param_1;
  if ((param_2 != '\0') && (param_1 != '\0')) {
    cVar1 = FUN_00447e30();
    if (cVar1 == '\0') {
      FUN_004a3538();
    }
  }
  return this;
}


