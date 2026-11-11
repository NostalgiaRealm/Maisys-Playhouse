
/* ==== ComboWndProc3d @ 5f0042f0 ==== 
 * signature: uint __stdcall ComboWndProc3d(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4)
 * body: 5f0042f0-5f004332
 */

uint ComboWndProc3d(HWND param_1,uint param_2,WPARAM param_3,undefined4 *param_4)

{
  uint uVar1;
  
                    /* 0x42f0  10  ComboWndProc3d */
  if ((0x1942 < param_2) && (param_2 < 0x1945)) {
    *param_4 = 1;
    return 0x3eb;
  }
  uVar1 = FUN_5f003f10(param_1,param_2,param_3,param_4,3);
  return uVar1;
}


