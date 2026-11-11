
/* ==== FUN_100134fe @ 100134fe ==== 
 * signature: undefined4 __cdecl FUN_100134fe(int param_1, int param_2, CHAR * param_3, LPCSTR param_4)
 * body: 100134fe-1001373a
 */

undefined4 __cdecl FUN_100134fe(int param_1,int param_2,CHAR *param_3,LPCSTR param_4)

{
  int iVar1;
  HANDLE hObject;
  DWORD DVar2;
  undefined4 uVar3;
  LPCSTR pCVar4;
  CHAR local_704 [512];
  CHAR local_504 [256];
  char local_404 [512];
  CHAR local_204 [256];
  byte local_104 [256];
  
  if ((DAT_100238dc._1_1_ & 0x20) == 0) {
LAB_10013734:
    uVar3 = 0;
  }
  else {
    if (param_1 != 0) {
      iVar1 = FUN_1001373b(param_3,param_4,(uint *)0x0);
      if (iVar1 == 0) goto LAB_10013734;
      if (param_2 != 0) {
        FUN_1001393a(local_504,param_4);
        iVar1 = FUN_1000b673(param_3,local_504,0,0,0,(undefined4 *)0x0,(int *)0x0);
        if (iVar1 != 0) {
          wsprintfA(local_704,*(LPCSTR *)(DAT_100240b8 + 0x68),param_3);
          FUN_1000b352(local_704);
          return 0xfffffffe;
        }
      }
    }
    if ((param_1 != 0) && (param_2 != 0)) {
      param_3 = local_504;
    }
    lstrcpyA(local_204,param_3);
    lstrcpyA((LPSTR)local_104,param_4);
    FUN_10012386(local_204,0);
    FUN_10012386((LPCSTR)local_104,0);
    uVar3 = 1;
    if (DAT_100238b8 == 0) {
      if (DAT_10024168 == 0) {
        DAT_10023900 = 1;
        pCVar4 = FUN_1000b94f((LPCSTR)local_104);
        wsprintfA(local_404,s_del__s_rename__s__s_1001fd6c,local_104,local_204,pCVar4);
        lstrcpyA((LPSTR)local_104,s__WIN___MSSETUP_BAT_1001fd58);
        FUN_10009eff(local_104,local_104);
        hObject = (HANDLE)FUN_1001223a((LPCSTR)local_104,1,0);
        if (hObject == (HANDLE)0xffffffff) {
          hObject = (HANDLE)FUN_1001223a((LPCSTR)local_104,1,1);
        }
        else {
          FUN_10012303(hObject,0,2);
        }
        if (hObject != (HANDLE)0xffffffff) {
          DVar2 = lstrlenA(local_404);
          FileWrite(hObject,local_404,DVar2);
          CloseHandle(hObject);
        }
      }
      else {
        WritePrivateProfileStringA
                  (s_rename_1001fd84,(LPCSTR)local_104,local_204,s_WININIT_INI_1001fd8c);
      }
      FUN_1001054d(s_RESTART_1001fa74,local_404);
      if (local_404[0] == 'S') {
        return 1;
      }
      if (local_404[0] == 'E') {
        return 1;
      }
      pCVar4 = &DAT_1001fb28;
    }
    else {
      if (DAT_100241e8 == 0) {
        return 1;
      }
      MoveFileExA(local_204,param_4,5);
      pCVar4 = &DAT_1001fa7c;
    }
    FUN_100105d2(s_RESTART_1001fa74,pCVar4);
  }
  return uVar3;
}


