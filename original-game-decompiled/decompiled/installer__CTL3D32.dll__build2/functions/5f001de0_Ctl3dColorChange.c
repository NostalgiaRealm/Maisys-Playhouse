
/* ==== Ctl3dColorChange @ 5f001de0 ==== 
 * signature: undefined4 __stdcall Ctl3dColorChange(void)
 * body: 5f001de0-5f001e06
 */

undefined4 Ctl3dColorChange(void)

{
  undefined4 uVar1;
  
                    /* 0x1de0  6  Ctl3dColorChange */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  uVar1 = FUN_5f002560(0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  return uVar1;
}


