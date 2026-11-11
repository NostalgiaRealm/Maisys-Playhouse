
/* ==== FUN_10009a39 @ 10009a39 ==== 
 * signature: undefined __cdecl FUN_10009a39(HWND param_1, char * param_2, byte * param_3)
 * body: 10009a39-10009b1c
 */

void __cdecl FUN_10009a39(HWND param_1,char *param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  HWND hWnd;
  int iVar5;
  CHAR local_204 [256];
  CHAR local_104 [256];
  
  pbVar3 = param_3;
  pcVar2 = param_2;
  if ((*param_2 == '\0') && (param_2[4] == '\0')) {
    param_2 = (char *)0x0;
    bVar1 = *param_3;
    if (bVar1 == 0) {
      pbVar3 = param_3 + 1;
    }
    else {
      param_3 = (byte *)FUN_10016190(param_3);
      pbVar3 = FUN_10009b1d(pbVar3,(int *)&param_2);
    }
    if (*pbVar3 == 0) {
      if (bVar1 == 0) {
        return;
      }
      param_2 = param_2 + -(int)param_3;
    }
    else {
      FUN_1001054d((LPCSTR)pbVar3,local_104);
      uVar4 = FUN_1001337f(local_104,0);
      param_2 = (char *)(uVar4 - (int)param_2);
    }
    wsprintfA(local_104,s__ld_k_1001f6d0,param_2);
    hWnd = GetDlgItem(param_1,(uint)(byte)pcVar2[1]);
    GetWindowTextA(hWnd,local_204,0x100);
    iVar5 = lstrcmpA(local_204,local_104);
    if (iVar5 != 0) {
      SetWindowTextA(hWnd,local_104);
    }
  }
  return;
}


