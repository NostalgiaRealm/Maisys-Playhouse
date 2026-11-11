
/* ==== FUN_10006e59 @ 10006e59 ==== 
 * signature: undefined4 __stdcall FUN_10006e59(void)
 * body: 10006e59-10007015
 */

undefined4 FUN_10006e59(void)

{
  char cVar1;
  int iVar2;
  char *lpString2;
  int iVar3;
  int iVar4;
  CHAR local_108 [256];
  uint local_8;
  
  if (*(int *)(DAT_1002392c + 0x30) != 0) {
    return 0;
  }
  if (*(char *)(DAT_10023310 + 0xd) != '\0') {
    lpString2 = FUN_1000bc0e((char *)(DAT_10023310 + 0xd));
    FUN_1001054d((LPCSTR)(DAT_10023310 + 0xd),local_108);
    iVar3 = lstrcmpiA(local_108,lpString2);
    if (iVar3 != 0) {
      return 0;
    }
  }
  FUN_1000bb6a();
  iVar3 = *(int *)(DAT_10023310 + 1);
  iVar4 = *(int *)(DAT_10023310 + 5);
  *(int *)(DAT_1002392c + 8) = iVar3 + DAT_100238bc;
  if (DAT_10023e8c != 0) {
    if (DAT_10024028 == *(int *)(DAT_1002392c + 8)) goto LAB_10006f96;
    if (DAT_10023e8c != 0) {
      FUN_10013e71(DAT_10024160);
    }
  }
  DAT_10023e8c = FUN_10013e57(*(SIZE_T *)(DAT_10023310 + 9),&DAT_10024160);
  DAT_10024028 = *(int *)(DAT_1002392c + 8);
  if (DAT_10023e8c == 0) {
    return 1;
  }
  iVar2 = *(int *)(DAT_1002392c + 0x18);
  FUN_1000bde0();
  *(int *)(DAT_1002392c + 0x8c) = DAT_10023e8c;
  DAT_10023f9c = 0;
  FUN_10013192(*(undefined4 *)(DAT_1002392c + 0x18),(HANDLE)0x0,iVar4 - iVar3,0);
  *(undefined4 *)(DAT_1002392c + 0x8c) = 0;
  if (iVar2 == -1) {
    _lclose(*(HFILE *)(DAT_1002392c + 0x18));
    *(undefined4 *)(DAT_1002392c + 0x18) = 0xffffffff;
  }
LAB_10006f96:
  local_8 = 0;
  iVar3 = 0;
  DAT_10023924 = 0;
  while( true ) {
    iVar4 = FUN_10007016(local_8);
    if (iVar4 < 0) {
      FUN_1000b352(PTR_s_Internal_Error_1001f048);
      return 1;
    }
    if (iVar4 == 0x400) break;
    if (iVar4 == 0x800) {
      return 0;
    }
    iVar4 = *(int *)(DAT_100240e0 + 1 + iVar4 * 4) + DAT_100240e0;
    cVar1 = *(char *)(iVar4 + 4);
    if (cVar1 == '\0') {
      if (iVar3 == 0) {
        return 0;
      }
      local_8 = (uint)(byte)local_108[iVar3 + -1];
      iVar3 = iVar3 + -1;
    }
    else {
      if (cVar1 == '\x01') {
        return 0;
      }
      if (cVar1 == '\x02') {
        cVar1 = *(char *)(iVar4 + 3);
        local_108[iVar3] = (CHAR)local_8;
        iVar3 = iVar3 + 1;
        local_8 = (int)cVar1;
      }
      else if (cVar1 == '\x03') {
        return 1;
      }
    }
  }
  return 1;
}


