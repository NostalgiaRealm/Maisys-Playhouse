
/* ==== Ctl3dSubclassCtl @ 5f001960 ==== 
 * signature: bool __stdcall Ctl3dSubclassCtl(HWND param_1)
 * body: 5f001960-5f001986
 */

bool Ctl3dSubclassCtl(HWND param_1)

{
  bool bVar1;
  
                    /* 0x1960  3  Ctl3dSubclassCtl */
  if (DAT_5f005240 == 0) {
    return false;
  }
  bVar1 = FUN_5f002e40(param_1,0xffff,0,0);
  return bVar1;
}


