
/* ==== FUN_1101e9d0 @ 1101e9d0 ==== 
 * signature: uint __stdcall FUN_1101e9d0(void)
 * body: 1101e9d0-1101ea3a
 */

/* WARNING: Removing unreachable block (ram,0x1101ea1b) */

uint FUN_1101e9d0(void)

{
  undefined4 *puVar1;
  undefined4 in_EAX;
  undefined4 extraout_EAX;
  _union_530 local_2c [6];
  uint local_14;
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_11036558 == 0xffffffff) {
    DAT_11036558 = 0;
    GetSystemInfo((LPSYSTEM_INFO)&local_2c[0].s);
    in_EAX = extraout_EAX;
    if ((local_2c[0].s.wProcessorArchitecture == 0) && (0x249 < local_14)) {
      puVar1 = (undefined4 *)cpuid_Version_info(1);
      in_EAX = *puVar1;
      DAT_11036558 = puVar1[2];
      if ((DAT_11036558 & 0x800000) != 0) {
        DAT_11036558 = 1;
      }
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)DAT_11036558);
}


