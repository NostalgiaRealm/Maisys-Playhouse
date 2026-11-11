
/* ==== FUN_100139c9 @ 100139c9 ==== 
 * signature: undefined __stdcall FUN_100139c9(void)
 * body: 100139c9-10013a96
 */

void FUN_100139c9(void)

{
  undefined4 uVar1;
  int iVar2;
  byte local_108 [256];
  uint local_8;
  
  if (DAT_1001f030 != (HANDLE)0xffffffff) {
    if (DAT_100238b8 != 0) {
      iVar2 = FUN_1000da65();
      if (iVar2 != 0) {
        FileWrite(DAT_1001f030,s_User_Rights__Admin_1001fdc4,0x14);
      }
    }
    CloseHandle(DAT_1001f030);
    FUN_10009eff(local_108,DAT_10023eb0);
    if (((local_108[0] != 0) && (DAT_10023e9c != '\x01')) && (DAT_10023edc == 0)) {
      uVar1 = *(undefined4 *)(DAT_1002392c + 0x1c);
      local_8 = (uint)*(byte *)(DAT_1002392c + 0x20);
      *(undefined1 *)(DAT_1002392c + 0x20) = 0;
      *(undefined4 *)(DAT_1002392c + 0x1c) = 0;
      FUN_1000b673(DAT_10023f20,(LPCSTR)local_108,0,0,1,(undefined4 *)0x0,(int *)0x0);
      *(undefined4 *)(DAT_1002392c + 0x1c) = uVar1;
      *(undefined1 *)(DAT_1002392c + 0x20) = (undefined1)local_8;
    }
    DeleteFileA(DAT_10023f20);
  }
  return;
}


