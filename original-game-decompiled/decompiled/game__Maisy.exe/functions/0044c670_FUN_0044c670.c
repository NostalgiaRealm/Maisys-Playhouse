
/* ==== FUN_0044c670 @ 0044c670 ==== 
 * signature: longlong __thiscall FUN_0044c670(void * this, char param_1)
 * body: 0044c670-0044c6d4
 */

longlong __thiscall FUN_0044c670(void *this,char param_1)

{
  longlong lVar1;
  
  if ((*(HWND *)((int)this + 0x7e) != (HWND)0x0) &&
     (SendMessageA(*(HWND *)((int)this + 0x7e),0x466,0,0), param_1 != '\0')) {
    FUN_0044c700((int)this);
  }
  lVar1 = __ftol();
  return lVar1;
}


