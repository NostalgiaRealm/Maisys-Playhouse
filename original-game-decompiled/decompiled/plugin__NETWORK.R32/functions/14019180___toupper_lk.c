
/* ==== __toupper_lk @ 14019180 ==== 
 * signature: uint __cdecl __toupper_lk(uint param_1)
 * body: 14019180-14019264
 * note: Library Function - Single Match  __toupper_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __toupper_lk
   
   Library: Visual Studio 1998 Release */

uint __cdecl __toupper_lk(uint param_1)

{
  uint uVar1;
  int iVar2;
  WCHAR local_8 [2];
  byte local_4;
  byte local_3;
  undefined1 local_2;
  
  if (DAT_140272c0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      param_1 = param_1 - 0x20;
    }
    return param_1;
  }
  if ((int)param_1 < 0x100) {
    if (DAT_1402707c < 2) {
      uVar1 = *(ushort *)(PTR_DAT_14026e70 + param_1 * 2) & 2;
    }
    else {
      uVar1 = __isctype(param_1,2);
    }
    if (uVar1 == 0) {
      return param_1;
    }
  }
  local_4 = (byte)(param_1 >> 8);
  if ((PTR_DAT_14026e70[(uint)local_4 * 2 + 1] & 0x80) == 0) {
    iVar2 = 1;
    local_3 = 0;
    local_4 = (byte)param_1;
  }
  else {
    iVar2 = 2;
    local_2 = 0;
    local_3 = (byte)param_1;
  }
  iVar2 = FUN_1401a9c0(DAT_140272c0,0x200,(char *)&local_4,iVar2,local_8,3,0);
  if (iVar2 == 0) {
    return param_1;
  }
  if (iVar2 == 1) {
    return (uint)(byte)local_8[0];
  }
  return (uint)(ushort)local_8[0];
}


