
/* ==== Ctl3dColorChange @ 5f001da0 ==== 
 * signature: undefined4 __stdcall Ctl3dColorChange(void)
 * body: 5f001da0-5f001dc6
 */

undefined4 Ctl3dColorChange(void)

{
  undefined4 uVar1;
  
                    /* 0x1da0  6  Ctl3dColorChange */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  uVar1 = FUN_5f002510(0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  return uVar1;
}


