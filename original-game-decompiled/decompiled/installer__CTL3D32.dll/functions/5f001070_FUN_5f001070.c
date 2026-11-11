
/* ==== FUN_5f001070 @ 5f001070 ==== 
 * signature: undefined __cdecl FUN_5f001070(HWND param_1, LONG param_2)
 * body: 5f001070-5f001154
 */

void __cdecl FUN_5f001070(HWND param_1,LONG param_2)

{
  HANDLE pvVar1;
  BOOL BVar2;
  CHAR local_10 [16];
  
  pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005138);
  if (pvVar1 == (HANDLE)0x0) {
    pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
    if (pvVar1 == (HANDLE)0x0) {
      pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005142);
      if (pvVar1 == (HANDLE)0x0) {
        pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f00513c);
        if (pvVar1 == (HANDLE)0x0) {
          pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005140);
          if (pvVar1 == (HANDLE)0x0) {
            pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f00513a);
            if (pvVar1 == (HANDLE)0x0) {
              pvVar1 = FUN_5f001000(param_1);
              if (pvVar1 == (HANDLE)0x0) {
                if (DAT_5f00a235 != '\0') {
                  BVar2 = IsWindowUnicode(param_1);
                  if (BVar2 == 0) {
                    GetClassNameA(param_1,local_10,0x10);
                    lstrcmpiA(local_10,&DAT_5f00c000);
                  }
                }
                pvVar1 = (HANDLE)SetWindowLongA(param_1,-4,param_2);
                SetPropA(param_1,(LPCSTR)(uint)DAT_5f00513e,pvVar1);
              }
            }
          }
        }
      }
    }
  }
  return;
}


