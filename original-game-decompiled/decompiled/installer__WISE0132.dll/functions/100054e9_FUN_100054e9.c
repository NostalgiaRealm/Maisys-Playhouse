
/* ==== FUN_100054e9 @ 100054e9 ==== 
 * signature: int __cdecl FUN_100054e9(LPCSTR param_1, int param_2)
 * body: 100054e9-100057bc
 */

int __cdecl FUN_100054e9(LPCSTR param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LPSTR lpString1;
  char *lpString1_00;
  LPCSTR lpString1_01;
  undefined4 local_858 [10];
  CHAR local_82d [981];
  char local_458 [256];
  byte local_358;
  CHAR local_210 [256];
  byte local_110 [256];
  int local_10;
  char *local_c;
  uint local_8;
  
  iVar2 = FUN_100120c5(param_1,7,local_458);
  local_8 = (uint)(iVar2 == 0);
  do {
    if (((iVar2 != 0) || (*(char *)(DAT_1002392c + 0x20) != '\0')) ||
       (*(int *)(DAT_1002392c + 0x1c) != 0)) {
      FUN_1001221a((int)local_458);
      if ((*(byte *)((int)DAT_10023310 + 2) & 1) != 0) {
        lstrcpyA(local_210,param_1);
        FUN_10010cf9(local_210);
        lstrcatA(local_210,&DAT_1001f568);
        iVar2 = FUN_100120c5(local_210,0x17,local_458);
        while (((iVar2 == 0 && (*(char *)(DAT_1002392c + 0x20) == '\0')) &&
               (*(int *)(DAT_1002392c + 0x1c) == 0))) {
          lstrcpyA((LPSTR)local_110,param_1);
          lpString1_01 = FUN_10014834((LPCSTR)local_110,0x5c);
          if (*lpString1_01 == '\\') {
            lpString1_01 = lpString1_01 + 1;
          }
          lstrcpyA(lpString1_01,local_458);
          if (((local_358 & 0x10) != 0) && (local_458[0] != '.')) {
            local_8 = 0;
            lstrcatA((LPSTR)local_110,lpString1_01 + (int)param_1 + (-1 - (int)local_110));
            iVar2 = FUN_100054e9((LPCSTR)local_110,param_2);
            if (iVar2 != 0) {
              return iVar2;
            }
          }
          iVar2 = FUN_100121d4(local_458);
        }
        FUN_1001221a((int)local_458);
      }
      if (local_8 != 0) {
        lstrcpyA((LPSTR)local_110,(LPCSTR)((int)DAT_10023310 + 0x2b));
        lstrcatA((LPSTR)local_110,param_1 + param_2);
        FUN_10009eff(local_110,local_110);
        FUN_1000b5ca((LPCSTR)local_110);
      }
      return 0;
    }
    lstrcpyA((LPSTR)local_110,param_1);
    lpString1 = FUN_10014834((LPCSTR)local_110,0x5c);
    if (*lpString1 == '\\') {
      lpString1 = lpString1 + 1;
    }
    lstrcpyA(lpString1,local_458);
    if ((local_358 & 0x10) == 0) {
      local_8 = 0;
      FUN_10015e50(local_858,DAT_10023310,0x2b);
      lstrcpyA(local_210,(LPCSTR)((int)DAT_10023310 + 0x2b));
      lstrcatA(local_210,(LPCSTR)(local_110 + param_2));
      lstrcpyA(local_82d,local_210);
      lpString1_00 = FUN_1000bc0e(local_82d);
      local_c = FUN_1000bc0e((char *)((int)DAT_10023310 + 0x2b));
      if (DAT_10024020 != 0) {
        local_10 = DAT_10024020;
        do {
          lstrcpyA(lpString1_00,local_c);
          lpString1_00 = FUN_1000bc0e(lpString1_00);
          local_c = FUN_1000bc0e(local_c);
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      *lpString1_00 = '\0';
      lstrcpyA(lpString1_00 + 1,(LPCSTR)local_110);
      puVar1 = DAT_10023310;
      DAT_10023310 = local_858;
      iVar2 = FUN_100057bd();
      DAT_10023310 = puVar1;
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar2 = FUN_100121d4(local_458);
  } while( true );
}


