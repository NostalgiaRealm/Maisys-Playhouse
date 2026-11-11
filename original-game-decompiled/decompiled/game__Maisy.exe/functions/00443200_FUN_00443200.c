
/* ==== FUN_00443200 @ 00443200 ==== 
 * signature: undefined __cdecl FUN_00443200(short param_1)
 * body: 00443200-00443292
 */

void __cdecl FUN_00443200(short param_1)

{
  bool bVar1;
  longlong lVar2;
  
  DAT_004db860 = (int)param_1;
  bVar1 = DAT_004db5a0 == '\0';
  if (bVar1) {
    FUN_00442c30();
  }
  if (DAT_004db5a0 != '\0') {
    lVar2 = __ftol();
    if ((DAT_004db835 & 0x80) != 0) {
      waveOutSetVolume(DAT_004db846,(uint)lVar2 & 0xffff | (uint)lVar2 << 0x10);
    }
  }
  if (bVar1) {
    FUN_004442e0();
  }
  return;
}


