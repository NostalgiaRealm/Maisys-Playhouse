
/* ==== FUN_100138b1 @ 100138b1 ==== 
 * signature: undefined4 __cdecl FUN_100138b1(LPCSTR param_1)
 * body: 100138b1-10013939
 */

undefined4 __cdecl FUN_100138b1(LPCSTR param_1)

{
  HANDLE hObject;
  undefined4 uVar1;
  LONG local_8;
  
  uVar1 = 0;
  if (DAT_100241e8 != 0) {
    hObject = (HANDLE)FUN_1001223a(param_1,0,0);
    if (-1 < (int)hObject) {
      FUN_100122b9(hObject,(LPVOID)((int)&param_1 + 2),2);
      if (param_1._2_2_ == 0x5a4d) {
        FUN_10012303(hObject,0x3c,0);
        FUN_100122b9(hObject,&local_8,4);
        FUN_10012303(hObject,local_8,0);
        FUN_100122b9(hObject,(LPVOID)((int)&param_1 + 2),2);
        if (param_1._2_2_ == 0x4550) {
          uVar1 = 1;
        }
      }
      CloseHandle(hObject);
    }
  }
  return uVar1;
}


