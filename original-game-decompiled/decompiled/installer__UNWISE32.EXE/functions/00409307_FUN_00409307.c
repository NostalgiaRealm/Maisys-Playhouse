
/* ==== FUN_00409307 @ 00409307 ==== 
 * signature: undefined __stdcall FUN_00409307(void)
 * body: 00409307-00409536
 */

void FUN_00409307(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  UINT uBytes;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  CHAR local_148 [256];
  CHAR local_48 [64];
  char *local_8;
  
  if (DAT_00413920 != '\0') {
    GetWindowsDirectoryA(local_148,0x100);
    iVar2 = lstrlenA(local_148);
    if (local_148[iVar2 + -1] != '\\') {
      lstrcatA(local_148,&DAT_004100cc);
    }
    lstrcatA(local_148,&DAT_00413920);
    local_8 = (char *)_lcreat(local_148,0);
    if (local_8 != (char *)0xffffffff) {
      DVar3 = GetPrivateProfileStringA
                        (s_Language_00410708,s_Msg1000_00410dc4,&DAT_00410714,DAT_00413c50,0x4000,
                         DAT_00413bf4);
      if ((*DAT_00413c50 == '\x7f') && (DVar3 == 1)) {
        lstrcpyA(DAT_00413c50,s_START_COMPONENT_NAME____WORKSTAT_004107dc);
      }
      else {
        while (pcVar6 = _strchr(DAT_00413c50,0x5e), pcVar6 != (char *)0x0) {
          cVar1 = *pcVar6;
          pcVar5 = pcVar6;
          while (cVar1 != '\0') {
            pcVar5 = pcVar5 + 1;
            cVar1 = *pcVar5;
          }
          for (; pcVar6 <= pcVar5; pcVar5 = pcVar5 + -1) {
            pcVar5[1] = *pcVar5;
          }
          *pcVar6 = '\r';
          pcVar6[1] = '\n';
        }
      }
      FUN_00409537(local_48);
      cVar1 = *DAT_00413c50;
      pcVar5 = DAT_00413c50;
      pcVar6 = local_8;
      while (cVar1 != '\0') {
        if ((((cVar1 == '%') && (cVar1 = pcVar5[1], '0' < cVar1)) && (cVar1 < '9')) &&
           (pcVar5[2] == '%')) {
          if (cVar1 < '5') {
            pcVar6 = &DAT_00413920 + (cVar1 + -0x30) * 0x80;
          }
          else if (cVar1 == '5') {
            if (DAT_004138c8 == 0) {
              pcVar6 = s_Uninstall_004107c4;
            }
            else {
              pcVar6 = s_Rollback_004107d0;
            }
          }
          else if (cVar1 == '6') {
            pcVar6 = local_48;
          }
          else if (cVar1 == '7') {
            if (DAT_0041388c == 0) {
              pcVar6 = s_Success_004107b4;
            }
            else {
              pcVar6 = s_Failed_004107bc;
            }
          }
          else if ((cVar1 == '8') && (pcVar6 = s_Canceled_by_user_004107a0, DAT_0041388c == 0)) {
            pcVar6 = &DAT_00413420;
          }
          iVar2 = lstrlenA(pcVar6);
          iVar2 = iVar2 + -3;
          if (iVar2 < 1) {
            if (iVar2 < 0) {
              for (pcVar4 = pcVar5 + 3; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
                pcVar4[iVar2] = *pcVar4;
              }
              pcVar4[iVar2] = '\0';
            }
          }
          else {
            for (pcVar4 = pcVar5 + 3; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
            }
            for (; pcVar5 + 3 <= pcVar4; pcVar4 = pcVar4 + -1) {
              pcVar4[iVar2] = *pcVar4;
            }
          }
          for (; *pcVar6 != '\0'; pcVar6 = pcVar6 + 1) {
            *pcVar5 = *pcVar6;
            pcVar5 = pcVar5 + 1;
          }
          pcVar5 = pcVar5 + -1;
        }
        pcVar4 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar4;
      }
      uBytes = lstrlenA(DAT_00413c50);
      _lwrite((HFILE)local_8,DAT_00413c50,uBytes);
      _lclose((HFILE)local_8);
    }
  }
  return;
}


