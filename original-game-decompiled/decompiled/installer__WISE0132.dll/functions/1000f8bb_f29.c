
/* ==== f29 @ 1000f8bb ==== 
 * signature: undefined4 __stdcall f29(int param_1)
 * body: 1000f8bb-1000f94a
 */

undefined4 f29(int param_1)

{
  char *pcVar1;
  HWND hWndParent;
  code *lpDialogFunc;
  LPARAM dwInitParam;
  char local_104 [256];
  
                    /* 0xf8bb  33  f29 */
  pcVar1 = FUN_10010950(local_104,*(char **)(param_1 + 0x20));
  FUN_10010950(&DAT_10023bc0,pcVar1);
  if (local_104[0] == '1') {
    FUN_100158d2(&DAT_10023bc0);
  }
  else if (((DAT_10023bc0 == '\0') || (*(int *)(DAT_1002392c + 0x30) != 0)) || (DAT_10024188 == 0))
  {
    FUN_10006a8b();
  }
  else {
    FUN_1000bb6a();
    dwInitParam = 0;
    lpDialogFunc = SearchDlg;
    DAT_10023e34 = 2;
    hWndParent = (HWND)FUN_100157cf();
    DialogBoxParamA(DAT_10024178,(LPCSTR)0x67,hWndParent,lpDialogFunc,dwInitParam);
  }
  return 0;
}


