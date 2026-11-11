
/* ==== FUN_0040fec0 @ 0040fec0 ==== 
 * signature: undefined __stdcall FUN_0040fec0(void)
 * body: 0040fec0-0040ff06
 */

void FUN_0040fec0(void)

{
  MCIDEVICEID MVar1;
  undefined1 local_8 [4];
  
  if (DAT_004d99b8 != '\0') {
    MVar1 = mciGetDeviceIDA(s_avivideo_004d9abc);
    mciSendCommandA(MVar1 & 0xffff,0x804,0,(DWORD_PTR)local_8);
    FreeLibrary(DAT_004d99bc);
    DAT_004d99b8 = '\0';
  }
  return;
}


