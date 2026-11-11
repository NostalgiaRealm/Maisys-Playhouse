
/* ==== f33 @ 1000fee0 ==== 
 * signature: undefined4 __stdcall f33(uint param_1)
 * body: 1000fee0-10010257
 */

undefined4 f33(uint param_1)

{
  char cVar1;
  char *pcVar2;
  HANDLE hObject;
  size_t _Count;
  DWORD DVar3;
  DWORD DVar4;
  char *pcVar5;
  char *pcVar6;
  HANDLE hObject_00;
  CHAR local_550 [512];
  char local_350 [256];
  byte local_250 [256];
  CHAR local_150 [256];
  char local_50 [32];
  byte local_30 [32];
  HANDLE local_10;
  char *local_c;
  byte local_5;
  
                    /* 0xfee0  37  f33 */
  local_c = FUN_1000bc0e((char *)(DAT_10023310 + 2));
  local_c = FUN_1000bc0e(local_c);
  local_c = FUN_1000bc0e(local_c);
  local_c = FUN_1000bc0e(local_c);
  FUN_1000b97c((int *)&local_c,1);
  local_c = FUN_10010950((char *)local_250,local_c);
  local_c = FUN_10010950((char *)local_250,local_c);
  local_c = FUN_10010950((char *)local_250,local_c);
  pcVar2 = FUN_10010950((char *)local_250,*(char **)(param_1 + 0x20));
  local_5 = FUN_10016230(local_250);
  pcVar2 = FUN_10010950(local_50,pcVar2);
  pcVar2 = FUN_10010950(local_350,pcVar2);
  if (*local_c == ' ') {
    hObject_00 = (HANDLE)0x0;
    hObject = (HANDLE)FUN_1001223a(local_350,0,0);
    local_10 = hObject;
    if ((int)hObject < 0) {
      wsprintfA(local_550,*(LPCSTR *)(DAT_100240b8 + 0x68),local_350);
      FUN_1000b352(local_550);
      *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
      return 0;
    }
    local_150[0] = '\0';
    param_1 = CONCAT13(local_5,(undefined3)param_1) & 0x1ffffff;
    if ((local_5 & 1) != 0) {
      FUN_1001393a(local_150,local_350);
      hObject_00 = (HANDLE)FUN_1001223a(local_150,1,1);
      if ((int)hObject_00 < 0) {
        CloseHandle(hObject);
LAB_1001023c:
        FUN_1000b352(*(char **)(DAT_100240b8 + 8));
        *(undefined1 *)(DAT_1002392c + 0x20) = 1;
        return 0;
      }
    }
    wsprintfA(local_550,&DAT_1001fcc0,hObject,hObject_00,local_150);
    _Count = lstrlenA(local_550);
    _strncpy(local_c,local_550,_Count);
  }
  else {
    pcVar2 = FUN_10010950((char *)local_30,pcVar2);
    local_10 = (HANDLE)FUN_10016190(local_30);
    pcVar2 = FUN_10010950((char *)local_30,pcVar2);
    hObject_00 = (HANDLE)FUN_10016190(local_30);
    FUN_10010950(local_150,pcVar2);
    param_1 = CONCAT13(local_5,(undefined3)param_1) & 0x1ffffff;
    if ((local_5 & 1) != 0) {
      FUN_1001054d(local_50,DAT_10023e94);
      lstrcatA(DAT_10023e94,&DAT_1001f3a4);
      DVar3 = lstrlenA(DAT_10023e94);
      DVar4 = FileWrite(hObject_00,DAT_10023e94,DVar3);
      if (DVar4 != DVar3) {
        CloseHandle(local_10);
        CloseHandle(hObject_00);
        goto LAB_1001023c;
      }
    }
  }
  DVar3 = FUN_100122b9(local_10,DAT_10023e94,0x40);
  if ((int)DVar3 < 1) {
    CloseHandle(local_10);
    if (param_1._3_1_ != '\0') {
      CloseHandle(hObject_00);
    }
    *local_c = ' ';
    if (param_1._3_1_ != '\0') {
      FUN_10010ec8(local_350,local_150,(ushort)((byte)~local_5 >> 1 & 1));
    }
    return 0;
  }
  DAT_10023e94[DVar3] = '\0';
  pcVar2 = DAT_10023e94;
  while( true ) {
    cVar1 = *pcVar2;
    pcVar5 = pcVar2;
    while (((cVar1 != '\0' && (cVar1 != '\r')) && (cVar1 != '\n'))) {
      pcVar6 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar6;
    }
    if (*pcVar5 != '\0') break;
    pcVar2 = pcVar2 + DVar3;
    DVar3 = FUN_100122b9(local_10,pcVar2,0x40);
    pcVar2[DVar3] = '\0';
    pcVar6 = pcVar5;
    if ((int)DVar3 < 1) {
LAB_10010122:
      FUN_10012303(local_10,(LONG)(pcVar6 + (-DVar3 - (int)pcVar2)),1);
      FUN_100105d2(local_50,DAT_10023e94);
      return 1;
    }
  }
  *pcVar5 = '\0';
  cVar1 = pcVar5[1];
  pcVar6 = pcVar5 + 1;
  if (cVar1 == '\0') {
    DVar4 = FUN_100122b9(local_10,(LPVOID)((int)&param_1 + 2),1);
    if ((DVar4 == 1) && (param_1._2_1_ != '\n')) {
      pcVar6 = pcVar5;
    }
  }
  else if ((cVar1 == '\r') || (cVar1 == '\n')) {
    pcVar6 = pcVar5 + 2;
  }
  goto LAB_10010122;
}


