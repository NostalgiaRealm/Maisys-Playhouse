
/* ==== FUN_00411ea0 @ 00411ea0 ==== 
 * signature: undefined4 * __thiscall FUN_00411ea0(void * this, HGLOBAL param_1)
 * body: 00411ea0-00411ebc
 */

undefined4 * __thiscall FUN_00411ea0(void *this,HGLOBAL param_1)

{
  LPVOID pvVar1;
  
  *(HGLOBAL *)this = param_1;
  pvVar1 = GlobalLock(param_1);
  *(LPVOID *)((int)this + 4) = pvVar1;
  return this;
}


