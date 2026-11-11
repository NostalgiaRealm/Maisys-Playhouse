
/* ==== FUN_00443730 @ 00443730 ==== 
 * signature: int __stdcall FUN_00443730(void)
 * body: 00443730-00443754
 */

int FUN_00443730(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  if (0 < DAT_004db792) {
    pcVar2 = &DAT_004db5df;
    do {
      if (*pcVar2 != '\0') {
        return iVar1;
      }
      pcVar2 = pcVar2 + 0x3e;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_004db792);
  }
  return CONCAT22((short)((uint)iVar1 >> 0x10),0xffff);
}


