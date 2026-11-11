
/* ==== FUN_004b5491 @ 004b5491 ==== 
 * signature: uint __thiscall FUN_004b5491(void * this, char * param_1, LPCSTR param_2, BYTE * param_3, uint param_4)
 * body: 004b5491-004b5548
 */

uint __thiscall FUN_004b5491(void *this,char *param_1,LPCSTR param_2,BYTE *param_3,uint param_4)

{
  HKEY__ *hKey;
  uint uVar1;
  LSTATUS LVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  
  if (*(int *)((int)this + 0x74) == 0) {
    pcVar3 = (char *)FUN_004a5fed(param_4 * 2 + 1);
    uVar1 = 0;
    pcVar4 = pcVar3;
    if (param_4 != 0) {
      do {
        pbVar5 = param_3 + uVar1;
        uVar1 = uVar1 + 1;
        *pcVar4 = (*pbVar5 & 0xf) + 0x41;
        pcVar4[1] = (*pbVar5 >> 4) + 0x41;
        pcVar4 = pcVar4 + 2;
      } while (uVar1 < param_4);
    }
    pcVar3[uVar1 * 2] = '\0';
    uVar1 = CWinApp::WriteProfileStringA(this,param_1,param_2,pcVar3);
    FUN_004a602d(pcVar3);
  }
  else {
    hKey = CWinApp::GetSectionKey(this,param_1);
    if (hKey == (HKEY__ *)0x0) {
      uVar1 = 0;
    }
    else {
      LVar2 = RegSetValueExA(hKey,param_2,0,3,param_3,param_4);
      RegCloseKey(hKey);
      uVar1 = (uint)(LVar2 == 0);
    }
  }
  return uVar1;
}


