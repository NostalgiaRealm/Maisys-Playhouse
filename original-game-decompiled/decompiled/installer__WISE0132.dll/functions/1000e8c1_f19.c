
/* ==== f19 @ 1000e8c1 ==== 
 * signature: undefined4 __stdcall f19(int param_1)
 * body: 1000e8c1-1000ea9a
 */

undefined4 f19(int param_1)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  HMODULE pHVar4;
  HANDLE hObject;
  int iVar5;
  INT_PTR IVar6;
  undefined4 uVar7;
  uint uVar8;
  CHAR local_44c [256];
  byte local_34c;
  byte local_204 [512];
  
                    /* 0xe8c1  24  f19 */
  pcVar3 = FUN_10010950((char *)local_204,*(char **)(param_1 + 0x20));
  bVar1 = FUN_10016230(local_204);
  pcVar3 = FUN_10010950((char *)local_204,pcVar3);
  uVar8 = 0;
  SetErrorMode(0x8001);
  bVar2 = bVar1 & 0xc1;
  if (bVar2 < 2) {
    uVar8 = FUN_10012539((LPCSTR)local_204);
    if ((bVar1 & 1) == 0) {
      uVar8 = (uint)(uVar8 == 0);
    }
  }
  else if (0x3f < bVar2) {
    if (bVar2 < 0x42) {
      iVar5 = FUN_100120c5((LPCSTR)local_204,0x17,local_44c);
      if (iVar5 == 0) {
        if (((bVar1 & 1) == 0) && ((local_34c & 0x10) == 0)) {
          uVar8 = 1;
        }
        if (((bVar1 & 1) != 0) && ((local_34c & 0x10) != 0)) {
          uVar8 = 1;
        }
      }
    }
    else if (bVar2 == 0x80) {
      lstrcatA((LPSTR)local_204,&DAT_1001f314);
      lstrcatA((LPSTR)local_204,PTR_s_GLBSINST____1001f040);
      lstrcatA((LPSTR)local_204,&DAT_1001f5c0);
      hObject = (HANDLE)FUN_1001223a((LPCSTR)local_204,1,1);
      if ((int)hObject < 0) {
        uVar8 = 1;
      }
      else {
        CloseHandle(hObject);
        DeleteFileA((LPCSTR)local_204);
      }
    }
    else if (bVar2 == 0x81) {
      pHVar4 = GetModuleHandleA((LPCSTR)local_204);
      uVar8 = (uint)(pHVar4 != (HMODULE)0x0);
    }
  }
  SetErrorMode(0x8000);
  if (uVar8 == 0) {
    uVar7 = 0;
  }
  else {
    pcVar3 = FUN_10010950((char *)local_204,pcVar3);
    if (local_204[0] != 0) {
      FUN_10010950(&DAT_10023bc0,pcVar3);
      IVar6 = FUN_1001277f((HWND)0x0,(char *)local_204,&DAT_10023bc0,-(uint)((bVar1 & 6) != 6) & 2);
      if (IVar6 == 2) {
        *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}


