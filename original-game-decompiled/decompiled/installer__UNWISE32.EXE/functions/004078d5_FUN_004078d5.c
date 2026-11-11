
/* ==== FUN_004078d5 @ 004078d5 ==== 
 * signature: undefined __cdecl FUN_004078d5(int param_1)
 * body: 004078d5-00407b3d
 */

void __cdecl FUN_004078d5(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char *_Str;
  int iVar5;
  char local_408 [256];
  char local_308 [256];
  char local_208 [256];
  BYTE local_108 [256];
  int local_8;
  
  if (*DAT_004138e4 != 0) {
    local_8 = 0;
    piVar4 = DAT_004138e4;
    do {
      if (**(char **)((int)piVar4 + local_8) == '\"') {
        _Str = *(char **)((int)piVar4 + local_8) + 1;
        pcVar1 = _strchr(_Str,0x22);
        piVar4 = DAT_004138e4;
        if (pcVar1 != (char *)0x0) {
          _strncpy(local_208,_Str,(int)pcVar1 - (int)_Str);
          (local_208 + (int)pcVar1)[-(int)_Str] = '\0';
          for (; (*_Str != '\0' && (*_Str != '\r')); _Str = _Str + 1) {
          }
          while( true ) {
            pcVar1 = _Str;
            if (*_Str != '\0') {
              pcVar1 = _Str + 2;
            }
            piVar4 = DAT_004138e4;
            if (*pcVar1 == '\0') break;
            _Str = pcVar1;
            if (*pcVar1 == '\"') {
              _Str = pcVar1 + 1;
              pcVar2 = _strchr(_Str,0x22);
              if (pcVar2 != (char *)0x0) {
                _strncpy(local_308,_Str,(int)pcVar2 - (int)_Str);
                iVar3 = -(int)_Str;
                _Str = pcVar2 + 1;
                (local_308 + (int)pcVar2)[iVar3] = '\0';
                if ((*_Str == ',') && (pcVar2[2] == '\"')) {
                  _Str = pcVar2 + 3;
                  pcVar2 = _strchr(_Str,0x22);
                  if (pcVar2 != (char *)0x0) {
                    _strncpy(local_408,_Str,(int)pcVar2 - (int)_Str);
                    (local_408 + (int)pcVar2)[-(int)_Str] = '\0';
                    iVar5 = param_1 * 4;
                    iVar3 = lstrcmpiA(local_408,(LPCSTR)(*(int *)(DAT_00413898 + iVar5) + 0x200));
                    if ((iVar3 == 0) ||
                       ((iVar3 = lstrcmpiA(local_208,*(LPCSTR *)(DAT_00413898 + iVar5)), iVar3 == 0
                        && (iVar3 = lstrcmpiA(local_308,
                                              (LPCSTR)(*(int *)(DAT_00413898 + iVar5) + 0x100)),
                           iVar3 == 0)))) {
                      *pcVar1 = '*';
                      wsprintfA((LPSTR)local_108,s__ShowGroup__s_2___004105c4,local_208);
                      FUN_00407b3e(local_108);
                      wsprintfA((LPSTR)local_108,s__ShowGroup__s_1___004105b0,local_208);
                      FUN_00407b3e(local_108);
                      wsprintfA((LPSTR)local_108,s__DeleteItem__s___0041059c,local_308);
                      FUN_00407b3e(local_108);
                      iVar3 = FUN_00407b85(*(char **)((int)DAT_004138e4 + local_8));
                      if ((iVar3 != 0) &&
                         (iVar3 = lstrcmpiA(local_208,s_STARTUP_00410594), iVar3 != 0)) {
                        wsprintfA((LPSTR)local_108,s__DeleteGroup__s___00410580,local_208);
                        FUN_00407b3e(local_108);
                      }
                    }
                  }
                }
              }
            }
            for (; (*_Str != '\0' && (*_Str != '\r')); _Str = _Str + 1) {
            }
          }
        }
      }
      local_8 = local_8 + 4;
    } while (*(int *)((int)piVar4 + local_8) != 0);
  }
  return;
}


