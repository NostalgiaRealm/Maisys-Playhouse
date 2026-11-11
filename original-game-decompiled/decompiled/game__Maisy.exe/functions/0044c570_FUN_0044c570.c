
/* ==== FUN_0044c570 @ 0044c570 ==== 
 * signature: undefined __thiscall FUN_0044c570(void * this, int param_1)
 * body: 0044c570-0044c5cc
 */

void __thiscall FUN_0044c570(void *this,int param_1)

{
  MCIDEVICEID mciId;
  undefined1 local_20 [4];
  undefined4 local_1c;
  int local_18;
  
  if ((DAT_004d99b8 != '\0') && (*(HWND *)((int)this + 0x7e) != (HWND)0x0)) {
    local_18 = param_1;
    if (param_1 == 0) {
      local_18 = 0;
    }
    local_1c = 0x8000;
    mciId = SendMessageA(*(HWND *)((int)this + 0x7e),0x464,0,0);
    if (mciId != 0) {
      mciSendCommandA(mciId,0x876,0x1100000,(DWORD_PTR)local_20);
    }
  }
  return;
}


