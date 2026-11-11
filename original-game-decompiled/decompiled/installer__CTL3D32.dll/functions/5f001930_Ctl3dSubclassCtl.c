
/* ==== Ctl3dSubclassCtl @ 5f001930 ==== 
 * signature: bool __stdcall Ctl3dSubclassCtl(HWND param_1)
 * body: 5f001930-5f001956
 */

bool Ctl3dSubclassCtl(HWND param_1)

{
  bool bVar1;
  
                    /* 0x1930  3  Ctl3dSubclassCtl */
  if (DAT_5f005130 == 0) {
    return false;
  }
  bVar1 = FUN_5f002df0(param_1,0xffff,0,0);
  return bVar1;
}


