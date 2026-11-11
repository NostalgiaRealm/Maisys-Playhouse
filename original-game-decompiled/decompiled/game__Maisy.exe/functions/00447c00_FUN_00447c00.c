
/* ==== FUN_00447c00 @ 00447c00 ==== 
 * signature: int __fastcall FUN_00447c00(int * param_1)
 * body: 00447c00-00447d3f
 */

int __fastcall FUN_00447c00(int *param_1)

{
  code *pcVar1;
  LPCSTR lpchText;
  int iVar2;
  void *this;
  HGDIOBJ h;
  short sVar3;
  HGDIOBJ *ppvVar4;
  tagTEXTMETRICA local_70;
  HGDIOBJ local_38 [4];
  short local_28;
  tagRECT local_24;
  HGLOBAL local_14;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  int local_8;
  
  local_24.top._0_2_ = 0;
  if (DAT_004da398 != (HDC)0x0) {
    local_14 = (HGLOBAL)FUN_00445fa0(param_1);
    lpchText = GlobalLock(local_14);
    local_8 = FUN_00445fe0(param_1);
    (**(code **)(*param_1 + 0x398))(&local_10,1);
    local_24.left = (LONG)local_10;
    local_a = local_e;
    local_38[0] = (HGDIOBJ)0x0;
    local_24.top = (LONG)local_e;
    local_24.right = (LONG)local_c;
    local_28 = 0;
    pcVar1 = *(code **)(*param_1 + 0x41c);
    local_24.bottom = local_24.top;
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      ppvVar4 = local_38;
      this = (void *)(*pcVar1)();
      FUN_004390e0(this,ppvVar4);
    }
    if (local_38[0] == (HGDIOBJ)0x0) {
      local_38[0] = DAT_004dae34;
    }
    sVar3 = 0;
    h = SelectObject(DAT_004da398,local_38[0]);
    if (((lpchText != (LPCSTR)0x0) && (0 < local_8)) && (lpchText[local_8 + -1] == '\r')) {
      GetTextMetricsA(DAT_004da398,&local_70);
      sVar3 = (short)local_70.tmHeight;
    }
    DrawTextA(DAT_004da398,lpchText,local_8,&local_24,
              (uint)(local_28 == 1) | -(uint)(local_28 == -1) & 2 | 0xc50);
    GlobalUnlock(local_14);
    SelectObject(DAT_004da398,h);
    local_24.top._0_2_ = ((short)local_24.bottom - sVar3) - (short)local_24.top;
    if ((short)local_24.top < 0) {
      local_24.top._0_2_ = 0;
    }
  }
  return (int)(short)local_24.top;
}


