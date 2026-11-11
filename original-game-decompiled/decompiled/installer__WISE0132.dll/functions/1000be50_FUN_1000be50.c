
/* ==== FUN_1000be50 @ 1000be50 ==== 
 * signature: undefined4 __stdcall FUN_1000be50(void)
 * body: 1000be50-1000bf61
 */

undefined4 FUN_1000be50(void)

{
  int iVar1;
  char *pcVar2;
  LPCSTR _Source;
  char *_Dest;
  size_t _Count;
  
  _Dest = DAT_10023ee4;
  iVar1 = FUN_1000a7dc();
  if (iVar1 != 0) {
    return 1;
  }
  while( true ) {
    if (*(int *)(DAT_1002392c + 0x1c) != 0) {
      return 0;
    }
    if (*(char *)(DAT_1002392c + 0x20) != '\0') break;
    if (*DAT_10023310 == '?') {
      return 0;
    }
    if (*DAT_10023310 == '\0') {
      pcVar2 = FUN_1000bc0e(DAT_10023310 + 0x2b);
      for (iVar1 = DAT_10024020; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2 = FUN_1000bc0e(pcVar2);
      }
      if ((((DAT_10023310[1] & 4U) == 0) && (*pcVar2 == '\0')) &&
         (((DAT_100238dc._2_1_ & 0x40) == 0 || ((DAT_10023310[2] & 8U) != 0)))) {
        _Count = 0x14;
        _Source = FUN_1000b94f(DAT_10023310 + 0x2b);
        _strncpy(_Dest,_Source,_Count);
        _Dest[0x13] = '\0';
        iVar1 = *(int *)(DAT_10023310 + 3);
        *(int *)(_Dest + 0x14) = iVar1;
        *(int *)(_Dest + 0x18) = *(int *)(DAT_10023310 + 7) - iVar1;
        *(undefined4 *)(_Dest + 0x20) = *(undefined4 *)(DAT_10023310 + 0xb);
        *(undefined4 *)(_Dest + 0x24) = *(undefined4 *)(DAT_10023310 + 0xd);
        *(undefined4 *)(_Dest + 0x1c) = *(undefined4 *)(DAT_10023310 + 0xf);
        _Dest[0x28] = DAT_10023310[1];
        DAT_10023eb8 = DAT_10023eb8 + 1;
        if (0x3ff < DAT_10023eb8) {
          return 0;
        }
        _Dest = _Dest + 0x2c;
      }
    }
    FUN_10009ea4();
  }
  return 0;
}


