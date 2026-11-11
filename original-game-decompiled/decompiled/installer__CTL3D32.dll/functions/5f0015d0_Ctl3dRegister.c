
/* ==== Ctl3dRegister @ 5f0015d0 ==== 
 * signature: undefined4 __stdcall Ctl3dRegister(undefined4 param_1)
 * body: 5f0015d0-5f001614
 */

undefined4 Ctl3dRegister(undefined4 param_1)

{
  int iVar1;
  
                    /* 0x15d0  12  Ctl3dRegister */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  DAT_5f005134 = DAT_5f005134 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  if (DAT_5f005134 == 1) {
    FUN_5f002140();
  }
  iVar1 = Ctl3dIsAutoSubclass();
  if (iVar1 != 0) {
    Ctl3dAutoSubclass(param_1);
  }
  return DAT_5f005130;
}


