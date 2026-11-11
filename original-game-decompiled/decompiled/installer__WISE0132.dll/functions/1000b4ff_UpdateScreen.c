
/* ==== UpdateScreen @ 1000b4ff ==== 
 * signature: undefined __stdcall UpdateScreen(int param_1)
 * body: 1000b4ff-1000b577
 */

void UpdateScreen(int param_1)

{
  int iVar1;
  RECT local_14;
  
                    /* 0xb4ff  13  UpdateScreen */
  iVar1 = 0;
  if (DAT_100238b4 == 0) {
    if (DAT_10023fac != (HWND)0x0) {
      local_14.top = DAT_10023f5c + -1;
      local_14.bottom = DAT_100238c4 + 1;
      local_14.left = DAT_10023f58 + -1;
      local_14.right = DAT_100238c0 + 1;
      InvalidateRect(DAT_10023fac,&local_14,0);
    }
  }
  else {
    FUN_10013bba((LPCSTR)0x0);
  }
  if ((param_1 != 0) && (DAT_1001f038 != 0)) {
    iVar1 = 1;
  }
  FUN_1000b578(500,iVar1);
  return;
}


