
/* ==== FUN_1001277f @ 1001277f ==== 
 * signature: INT_PTR __cdecl FUN_1001277f(HWND param_1, char * param_2, undefined4 param_3, uint param_4)
 * body: 1001277f-10012884
 */

INT_PTR __cdecl FUN_1001277f(HWND param_1,char *param_2,undefined4 param_3,uint param_4)

{
  INT_PTR IVar1;
  INT_PTR IVar2;
  
  if (*(int *)(DAT_1002392c + 0x30) == 0) {
    if (((param_1 == (HWND)0x0) && (param_1 = DAT_100238cc, DAT_100238cc == (HWND)0x0)) &&
       (param_1 = DAT_10023fac, DAT_10023fac == (HWND)0x0)) {
      param_1 = DAT_100238d8;
    }
    while( true ) {
      DAT_1002418c = param_4;
      DAT_10023dc4 = param_3;
      DAT_10023e88 = param_2;
      IVar1 = DialogBoxParamA(DAT_10024178,(LPCSTR)0x72,param_1,MessageBoxDlg,0);
      DAT_10024184 = 0;
      if (*(int *)(DAT_1002392c + 0x1c) == 4) break;
      if (((IVar1 == 2) && ((param_4 & 0xc0) == 0)) && (**(char **)(DAT_100240b8 + 0x7c) != '\0')) {
        DAT_10023dc4 = *(undefined4 *)(DAT_100240b8 + 0x48);
        DAT_1002418c = 0x10f;
        DAT_10023e88 = *(char **)(DAT_100240b8 + 0x7c);
        IVar2 = DialogBoxParamA(DAT_10024178,(LPCSTR)0x72,param_1,MessageBoxDlg,0);
        if (IVar2 == 3) {
          return 2;
        }
      }
      if (IVar1 != 2) {
        return IVar1;
      }
      if ((param_4 & 0xc0) != 0) {
        return 2;
      }
    }
  }
  return 1;
}


