
/* ==== FUN_1000d242 @ 1000d242 ==== 
 * signature: undefined __stdcall FUN_1000d242(void)
 * body: 1000d242-1000d3cb
 */

void FUN_1000d242(void)

{
  char *pcVar1;
  LSTATUS LVar2;
  int iVar3;
  HSZ pHVar4;
  HCONV hConv;
  HDDEDATA hData;
  LPBYTE lpString1;
  char local_374 [256];
  byte local_274;
  BYTE local_12c [256];
  char local_2c [32];
  int local_c;
  int local_8;
  
  *DAT_10024170 = '\0';
  if (DAT_10023930 != 0) {
    local_c = 0;
    local_8 = 0;
    lpString1 = DAT_10024170;
    do {
      if (local_8 == 0) {
        pcVar1 = s_Programs_1001fbb8;
      }
      else {
        if ((local_8 != 1) || (DAT_100238b8 == 0)) goto LAB_1000d351;
        pcVar1 = s_Common_Programs_1001fbc4;
      }
      LVar2 = FUN_10004d80((HKEY)((local_8 != 0) + 1),s_Software_Microsoft_Windows_Curre_1001fb74,
                           local_12c,pcVar1,local_2c,0x100,0);
      if (LVar2 == 0) {
        lstrcatA((LPSTR)local_12c,&DAT_1001f568);
        iVar3 = FUN_100120c5((LPCSTR)local_12c,0x11,local_374);
        while (iVar3 == 0) {
          if (((local_274 & 0x10) != 0) && (local_374[0] != '.')) {
            lstrcpyA((LPSTR)lpString1,local_374);
            lstrcatA((LPSTR)lpString1,&DAT_1001f3a4);
            iVar3 = lstrlenA((LPCSTR)lpString1);
            lpString1 = lpString1 + iVar3;
            local_c = 1;
          }
          iVar3 = FUN_100121d4(local_374);
        }
        FUN_1001221a((int)local_374);
      }
      local_8 = local_8 + 1;
    } while( true );
  }
LAB_1000d356:
  if (DAT_1002391c != 0) {
    pHVar4 = DdeCreateStringHandleA(DAT_1002391c,s_PROGMAN_1001f3f0,0x3ec);
    hConv = DdeConnect(DAT_1002391c,pHVar4,pHVar4,(PCONVCONTEXT)0x0);
    if (hConv != (HCONV)0x0) {
      pHVar4 = DdeCreateStringHandleA(DAT_1002391c,s_GROUPS_1001fb6c,0x3ec);
      hData = DdeClientTransaction((LPBYTE)0x0,0,hConv,pHVar4,1,0x20b0,5000,(LPDWORD)0x0);
      if (hData != (HDDEDATA)0x0) {
        DdeGetData(hData,DAT_10024170,0x7800,0);
      }
      DdeDisconnect(hConv);
    }
  }
  return;
LAB_1000d351:
  if (local_c != 0) {
    return;
  }
  goto LAB_1000d356;
}


