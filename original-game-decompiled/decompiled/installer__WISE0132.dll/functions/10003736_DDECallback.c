
/* ==== DDECallback @ 10003736 ==== 
 * signature: HDDEDATA __stdcall DDECallback(uint param_1, int param_2, undefined4 param_3, HSZ param_4, HSZ param_5, HDDEDATA param_6)
 * body: 10003736-100039fc
 */

HDDEDATA DDECallback(uint param_1,int param_2,undefined4 param_3,HSZ param_4,HSZ param_5,
                    HDDEDATA param_6)

{
  int iVar1;
  int iVar2;
  DWORD cb;
  HDDEDATA pHVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  LPBYTE pSrc;
  DWORD cbOff;
  UINT wFmt;
  UINT afCmd;
  BYTE local_304 [256];
  char local_204;
  CHAR local_203 [255];
  BYTE local_104;
  byte local_103 [255];
  
                    /* 0x3736  3  DDECallback */
  if (param_1 == 0x1062) {
    return (HDDEDATA)0x1;
  }
  if ((param_1 != 0x20b0) || (param_2 != 1)) {
    if (param_1 == 0x4050) {
      DdeQueryStringA(DAT_1002391c,param_4,local_203,0x100,0x3ec);
      iVar2 = lstrcmpiA(local_203,s_CANCEL_1001f3d4);
      if (iVar2 == 0) {
        *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
      }
      else {
        DdeGetData(param_6,&local_104,0xff,0);
        FUN_100105d2(local_203,(LPCSTR)&local_104);
      }
      return (HDDEDATA)0x8000;
    }
    return (HDDEDATA)0x0;
  }
  DdeQueryStringA(DAT_1002391c,param_4,&local_204,0xff,0x3ec);
  if (local_204 == '*') {
    DdeQueryStringA(DAT_1002391c,param_5,(LPSTR)&local_104,0xff,0x3ec);
    local_304[0] = '\0';
    if (local_104 == '*') {
      wsprintfA((LPSTR)local_304,s__c_ld_1001f3dc,(-(uint)(DAT_10024044 != 0) & 0x33) + 0x20,
                DAT_10023310 - DAT_10023fa8);
      if (DAT_10023f18 != 0) {
        local_304[0] = 'E';
      }
    }
    else if (local_104 == 'E') {
      *(undefined4 *)(DAT_1002392c + 0x1c) = 4;
      DAT_10023f18 = 1;
      DAT_10024044 = 0;
      if (DAT_10024184 != (HWND)0x0) {
        PostMessageA(DAT_10024184,0x10,0,0);
      }
      param_1 = (uint)DAT_100238fc;
      if (-1 < (int)(param_1 - 1)) {
        puVar5 = &DAT_10023fe0 + (param_1 - 1);
        do {
          PostMessageA((HWND)*puVar5,0x10,0,0);
          puVar5 = puVar5 + -1;
          param_1 = param_1 - 1;
        } while (param_1 != 0);
      }
    }
    else if (local_104 == 'G') {
      DAT_10024044 = 0;
    }
    else if (local_104 == 'B') {
      if (DAT_10023fa0 != (undefined *)0x0) {
        FUN_10015a50(DAT_10023fa0);
      }
      DAT_10023fa0 = (undefined *)0x0;
      if (local_103[0] != 0) {
        DAT_10023fa0 = (undefined *)FUN_10015d50(0x400);
        iVar2 = 0;
        pbVar4 = local_103;
        while (local_103[0] != 0) {
          iVar1 = FUN_10016190(pbVar4);
          *(int *)(DAT_10023fa0 + iVar2 * 4) = iVar1;
          for (; *pbVar4 == 0x20; pbVar4 = pbVar4 + 1) {
          }
          for (; (*pbVar4 != 0 && (*pbVar4 != 0x20)); pbVar4 = pbVar4 + 1) {
          }
          iVar2 = iVar2 + 1;
          local_103[0] = *pbVar4;
        }
        *(undefined4 *)(DAT_10023fa0 + iVar2 * 4) = 0xffffffff;
      }
    }
    else {
      if (local_104 == 'N') {
        cb = (uint)DAT_1002402c * 0x11;
        afCmd = 0;
        wFmt = 1;
        cbOff = 0;
        pSrc = DAT_10023efc;
        goto LAB_10003966;
      }
      if (local_104 == 'V') {
        afCmd = 0;
        wFmt = 1;
        cb = (uint)DAT_1002402c << 8;
        cbOff = 0;
        pSrc = DAT_100238f8;
        goto LAB_10003966;
      }
    }
  }
  else {
    FUN_1001054d(&local_204,(LPSTR)local_304);
  }
  afCmd = 0;
  wFmt = 1;
  cbOff = 0;
  iVar2 = lstrlenA((LPCSTR)local_304);
  cb = iVar2 + 1;
  pSrc = local_304;
LAB_10003966:
  pHVar3 = DdeCreateDataHandle(DAT_1002391c,pSrc,cb,cbOff,param_5,wFmt,afCmd);
  return pHVar3;
}


