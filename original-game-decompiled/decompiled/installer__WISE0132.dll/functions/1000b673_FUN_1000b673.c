
/* ==== FUN_1000b673 @ 1000b673 ==== 
 * signature: int __cdecl FUN_1000b673(LPCSTR param_1, LPCSTR param_2, int param_3, int param_4, int param_5, undefined4 * param_6, int * param_7)
 * body: 1000b673-1000b94e
 */

int __cdecl
FUN_1000b673(LPCSTR param_1,LPCSTR param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
            int *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  LPCSTR lpString2;
  int iVar3;
  char *pcVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  CHAR local_10c [256];
  WORD local_c;
  WORD local_a;
  HANDLE local_8;
  
  if (param_6 != (undefined4 *)0x0) {
    uVar2 = (**(code **)(DAT_1002392c + 0x94))(0,0);
    *param_6 = uVar2;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  local_8 = (HANDLE)FUN_1001223a(param_1,0,0);
  if (local_8 == (HANDLE)0xffffffff) {
    iVar7 = 1;
  }
  else {
    if (param_2 == (LPCSTR)0x0) {
      lpString2 = FUN_1000b94f(param_1);
      lstrcpyA(local_10c,(LPCSTR)((uint)DAT_100239ac * 0x100 + DAT_100238f8));
      lstrcatA(local_10c,&DAT_1001f314);
      lstrcatA(local_10c,lpString2);
      iVar7 = 0;
      do {
        if (iVar7 != 0) {
          iVar3 = lstrlenA(local_10c);
          pcVar1 = local_10c + iVar3;
          pcVar4 = pcVar1;
          if (local_10c < pcVar1) {
            do {
              if ((*pcVar4 == '\\') || (*pcVar4 == '.')) break;
              pcVar4 = pcVar4 + -1;
            } while (local_10c < pcVar4);
          }
          if (*pcVar4 != '.') {
            pcVar4 = pcVar1;
          }
          wsprintfA(pcVar4,s___03d_1001fa14,iVar7);
        }
        iVar7 = iVar7 + 1;
      } while ((iVar7 < 1000) && (iVar3 = FUN_10012539(local_10c), iVar3 == 0));
    }
    else {
      lstrcpyA(local_10c,param_2);
    }
    FUN_1000b5ca(local_10c);
    if (param_3 != 0) {
      lstrcpyA(param_1,local_10c);
    }
    SetFileAttributesA(local_10c,0);
    param_1 = (LPCSTR)0xffffffff;
    if ((param_5 != 0) &&
       (param_1 = (LPCSTR)FUN_1001223a(local_10c,1,0), param_1 != (LPCSTR)0xffffffff)) {
      FUN_10012303(param_1,0,2);
    }
    if ((param_1 == (LPCSTR)0xffffffff) &&
       (param_1 = (LPCSTR)FUN_1001223a(local_10c,1,1), param_1 == (LPCSTR)0xffffffff)) {
      CloseHandle(local_8);
      iVar7 = FUN_10012539(local_10c);
      iVar7 = 2 - (uint)(iVar7 != 0);
    }
    else {
      DVar5 = FUN_100122b9(local_8,DAT_10024170,0x7800);
      while (((0 < (int)DVar5 && (*(int *)(DAT_1002392c + 0x1c) == 0)) &&
             (*(char *)(DAT_1002392c + 0x20) == '\0'))) {
        if (param_7 != (int *)0x0) {
          *param_7 = *param_7 + DVar5;
        }
        if (param_6 != (undefined4 *)0x0) {
          uVar2 = (**(code **)(DAT_1002392c + 0x94))(DAT_10024170,DVar5);
          *param_6 = uVar2;
        }
        if (param_4 < (int)DVar5) {
          *(int *)(DAT_1002392c + 0x14) = *(int *)(DAT_1002392c + 0x14) + param_4;
          param_4 = 0;
        }
        else {
          *(int *)(DAT_1002392c + 0x14) = *(int *)(DAT_1002392c + 0x14) + DVar5;
          param_4 = param_4 - DVar5;
        }
        DVar6 = FileWrite(param_1,DAT_10024170,DVar5);
        if (DVar6 != DVar5) {
          *(undefined1 *)(DAT_1002392c + 0x20) = 1;
        }
        UpdateScreen((uint)(0 < param_4));
        DVar5 = FUN_100122b9(local_8,DAT_10024170,0x7800);
      }
      *(int *)(DAT_1002392c + 0x14) = *(int *)(DAT_1002392c + 0x14) + param_4;
      FUN_1001234f(local_8,&local_a,&local_c);
      FUN_10012318(param_1,local_a,local_c);
      CloseHandle(local_8);
      CloseHandle(param_1);
      if ((*(int *)(DAT_1002392c + 0x1c) != 0) || (*(char *)(DAT_1002392c + 0x20) != '\0')) {
        DeleteFileA(local_10c);
      }
      iVar7 = 0;
    }
  }
  return iVar7;
}


