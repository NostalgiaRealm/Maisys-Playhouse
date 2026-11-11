
/* ==== FUN_1000b9a2 @ 1000b9a2 ==== 
 * signature: undefined4 __cdecl FUN_1000b9a2(undefined4 param_1, int param_2)
 * body: 1000b9a2-1000ba4b
 */

undefined4 __cdecl FUN_1000b9a2(undefined4 param_1,int param_2)

{
  INT_PTR IVar1;
  CHAR local_204 [512];
  
  if (((param_2 != 0) && (*(int *)(DAT_1002392c + 0x1c) == 0)) && ((DAT_100238dc._1_1_ & 0x20) == 0)
     ) {
    wsprintfA(local_204,*(LPCSTR *)(DAT_100240b8 + 0x58),param_1);
    IVar1 = FUN_1001277f((HWND)0x0,local_204,*(undefined4 *)(DAT_100240b8 + 0x44),0x41);
    if (IVar1 == 3) {
      return 1;
    }
    if (IVar1 == 1) {
      *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
      _strncpy(DAT_100238d4,local_204,0x100);
      DAT_100238d4[0xff] = '\0';
    }
    else {
      DAT_10023f00 = 1;
    }
  }
  return 0;
}


