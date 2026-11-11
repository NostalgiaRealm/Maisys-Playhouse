
/* ==== FUN_1001254f @ 1001254f ==== 
 * signature: undefined4 __cdecl FUN_1001254f(byte param_1)
 * body: 1001254f-1001265e
 */

undefined4 __cdecl FUN_1001254f(byte param_1)

{
  int iVar1;
  HWND hWndParent;
  INT_PTR IVar2;
  code *lpDialogFunc;
  LPARAM dwInitParam;
  
  if (((param_1 & 0x80) != 0) && ((*DAT_10023ed8 != '\0' || ((DAT_10024198 & 1) != 0)))) {
    FUN_1001054d(s_PASSWORD_1001fd48,(LPSTR)DAT_10024034);
    iVar1 = FUN_1001265f(DAT_10024034);
    while (iVar1 != 0) {
      if (*DAT_10024034 != 0) {
        FUN_1001277f((HWND)0x0,*(char **)(DAT_100240b8 + 0x88),*(undefined4 *)(DAT_100240b8 + 0x44),
                     2);
      }
      lstrcpyA(DAT_10023fb4,*(LPCSTR *)(DAT_100240b8 + 0x80));
      lstrcpyA(DAT_10023908,DAT_10023fb4);
      lstrcatA(DAT_10023908,&DAT_1001fd44);
      lstrcpyA(DAT_10023ef8,*(LPCSTR *)(DAT_100240b8 + 0x84));
      dwInitParam = 0;
      lpDialogFunc = PathNameDlg;
      hWndParent = (HWND)FUN_100157cf();
      IVar2 = DialogBoxParamA(DAT_10024178,&DAT_00000603,hWndParent,lpDialogFunc,dwInitParam);
      if (IVar2 == 2) {
        return 1;
      }
      FUN_100105d2(s_PASSWORD_1001fd48,(LPCSTR)DAT_10024034);
      iVar1 = FUN_1001265f(DAT_10024034);
    }
    DAT_10024198 = DAT_10024198 & 0xfffffffe;
  }
  return 0;
}


