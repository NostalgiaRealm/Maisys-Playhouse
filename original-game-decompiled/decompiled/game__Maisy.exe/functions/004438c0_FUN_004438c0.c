
/* ==== FUN_004438c0 @ 004438c0 ==== 
 * signature: undefined __cdecl FUN_004438c0(int param_1)
 * body: 004438c0-004439d9
 */

void __cdecl FUN_004438c0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int local_8;
  
  cVar4 = '\x01';
  local_8 = 0;
  iVar1 = param_1 * 0x1a;
  *(undefined4 *)(&DAT_004db7be + iVar1) = 0;
  if (DAT_004db86c != '\0') {
    iVar5 = 0;
    if (0 < DAT_004db792) {
      pcVar6 = &DAT_004db5a2;
      do {
        if ((*pcVar6 == '\0') && (pcVar6[0x3c] != '\0')) {
          iVar2 = FUN_004439e0(param_1,iVar5,cVar4,0);
          if (iVar2 != 0) {
            cVar4 = '\0';
          }
          if (local_8 < iVar2) {
            local_8 = iVar2;
          }
        }
        pcVar6 = pcVar6 + 0x3e;
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_004db792);
    }
    FUN_004434b0();
  }
  iVar5 = 0;
  cVar3 = DAT_004db86c;
  if (0 < DAT_004db792) {
    pcVar6 = &DAT_004db5a2;
    do {
      if ((*pcVar6 == '\0') && ((cVar3 == '\0' || (pcVar6[0x3c] == '\0')))) {
        iVar2 = FUN_004439e0(param_1,iVar5,cVar4,0);
        if (iVar2 != 0) {
          cVar4 = '\0';
        }
        cVar3 = DAT_004db86c;
        if (local_8 < iVar2) {
          local_8 = iVar2;
        }
      }
      pcVar6 = pcVar6 + 0x3e;
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_004db792);
  }
  iVar5 = 0;
  if ((cVar3 != '\0') && (0 < DAT_004db792)) {
    pcVar6 = &DAT_004db5de;
    do {
      if ((pcVar6[-0x3c] == '\0') && (*pcVar6 != '\0')) {
        *pcVar6 = '\0';
      }
      pcVar6 = pcVar6 + 0x3e;
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_004db792);
  }
  *(undefined4 *)(&DAT_004db7c2 + iVar1) = 0;
  *(int *)(&DAT_004db7be + iVar1) = local_8;
  return;
}


