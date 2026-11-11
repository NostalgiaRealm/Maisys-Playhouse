
/* ==== FUN_004ab920 @ 004ab920 ==== 
 * signature: int __stdcall FUN_004ab920(ushort param_1)
 * body: 004ab920-004aba3c
 */

int FUN_004ab920(ushort param_1)

{
  int iVar1;
  int iVar2;
  tagWNDCLASSA local_2c;
  
  iVar2 = 0;
  _memset(&local_2c,0,0x28);
  local_2c.lpfnWndProc = DefWindowProcA_exref;
  iVar1 = FUN_004bafca();
  local_2c.hInstance = *(HINSTANCE *)(iVar1 + 8);
  local_2c.hCursor = DAT_004e51dc;
  iVar1 = FUN_004bafca();
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 8) == 0) {
          if ((param_1 & 0x10) != 0) {
            iVar2 = 1;
            Ordinal_17();
            *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 0x10;
          }
        }
        else {
          local_2c.style = 0xb;
          local_2c.hbrBackground = (HBRUSH)&DAT_00000006;
          iVar2 = RegisterWithIcon(&local_2c,"AfxFrameOrView40s",0x7a02);
          if (iVar2 != 0) {
            *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 8;
          }
        }
      }
      else {
        local_2c.style = 8;
        local_2c.hbrBackground = (HBRUSH)0x0;
        iVar2 = RegisterWithIcon(&local_2c,"AfxMDIFrame40s",0x7a01);
        if (iVar2 != 0) {
          *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 4;
        }
      }
    }
    else {
      local_2c.style = 0;
      local_2c.lpszClassName = "AfxControlBar40s";
      local_2c.hbrBackground = (HBRUSH)&DAT_00000010;
      iVar2 = AfxRegisterClass(&local_2c);
      if (iVar2 != 0) {
        *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 2;
      }
    }
  }
  else {
    local_2c.style = 0xb;
    local_2c.lpszClassName = "AfxWnd40s";
    iVar2 = AfxRegisterClass(&local_2c);
    if (iVar2 != 0) {
      *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 1;
    }
  }
  return iVar2;
}


