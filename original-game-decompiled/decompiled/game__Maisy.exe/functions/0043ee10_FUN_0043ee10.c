
/* ==== FUN_0043ee10 @ 0043ee10 ==== 
 * signature: undefined1 __cdecl FUN_0043ee10(undefined4 param_1, undefined4 param_2, char param_3)
 * body: 0043ee10-0043ee90
 */

undefined1 __cdecl FUN_0043ee10(undefined4 param_1,undefined4 param_2,char param_3)

{
  MCIERROR MVar1;
  undefined1 uVar2;
  undefined1 local_24 [4];
  MCIDEVICEID local_20;
  char *local_1c;
  undefined1 local_10 [8];
  MCIDEVICEID local_8;
  
  uVar2 = 1;
  FUN_0040ff40(DAT_004d99a8);
  local_1c = s_cdaudio_004db568;
  MVar1 = mciSendCommandA(0,0x803,0x2000,(DWORD_PTR)local_24);
  if (MVar1 == 0) {
    MVar1 = mciSendCommandA(local_20,0x80d,(-(uint)(param_3 == '\0') & 0x100) + 0x100,
                            (DWORD_PTR)local_10);
    local_8 = local_20;
    if (MVar1 != 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  MVar1 = mciSendCommandA(local_8,0x804,0,0);
  if (MVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}


