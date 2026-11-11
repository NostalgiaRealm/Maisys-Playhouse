
/* ==== Ctl3dSubclassDlgEx @ 5f001c90 ==== 
 * signature: undefined4 __stdcall Ctl3dSubclassDlgEx(HWND param_1, ushort param_2)
 * body: 5f001c90-5f001cf2
 */

undefined4 Ctl3dSubclassDlgEx(HWND param_1,ushort param_2)

{
  HWND hWnd;
  
                    /* 0x1c90  21  Ctl3dSubclassDlgEx */
  if (DAT_5f005130 == 0) {
    return 0;
  }
  for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    FUN_5f002df0(hWnd,param_2,0,0);
  }
  FUN_5f001070(param_1,0x5f0026a0);
  return 1;
}


