
/* ==== FUN_00439900 @ 00439900 ==== 
 * signature: uint __stdcall FUN_00439900(void)
 * body: 00439900-0043996a
 */

/* WARNING: Removing unreachable block (ram,0x0043994b) */

uint FUN_00439900(void)

{
  undefined4 *puVar1;
  undefined4 in_EAX;
  undefined4 extraout_EAX;
  _union_530 local_2c [6];
  uint local_14;
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_004db4fc == 0xffffffff) {
    DAT_004db4fc = 0;
    GetSystemInfo((LPSYSTEM_INFO)&local_2c[0].s);
    in_EAX = extraout_EAX;
    if ((local_2c[0].s.wProcessorArchitecture == 0) && (0x249 < local_14)) {
      puVar1 = (undefined4 *)cpuid_Version_info(1);
      in_EAX = *puVar1;
      DAT_004db4fc = puVar1[2];
      if ((DAT_004db4fc & 0x800000) != 0) {
        DAT_004db4fc = 1;
      }
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)DAT_004db4fc);
}


