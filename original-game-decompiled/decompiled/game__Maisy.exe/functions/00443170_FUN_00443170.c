
/* ==== FUN_00443170 @ 00443170 ==== 
 * signature: undefined4 __stdcall FUN_00443170(void)
 * body: 00443170-004431f8
 */

undefined4 FUN_00443170(void)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  DWORD local_8;
  
  uVar1 = DAT_004db860;
  bVar2 = DAT_004db5a0 == '\0';
  if (bVar2) {
    FUN_00442c30();
  }
  if ((DAT_004db5a0 != '\0') && ((DAT_004db835 & 0x80) != 0)) {
    local_8 = 0;
    waveOutGetVolume(DAT_004db846,&local_8);
    local_8 = ((local_8 & 0xffff) * 0xf) / 0xffff;
    lVar3 = __ftol();
    uVar1 = (undefined4)lVar3;
  }
  if (bVar2) {
    FUN_004442e0();
  }
  return uVar1;
}


