
/* ==== FUN_10009f15 @ 10009f15 ==== 
 * signature: undefined __cdecl FUN_10009f15(byte * param_1, byte * param_2, size_t param_3)
 * body: 10009f15-1000a081
 */

void __cdecl FUN_10009f15(byte *param_1,byte *param_2,size_t param_3)

{
  byte *pbVar1;
  byte *_Dest;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  LPCSTR lpString;
  byte *pbVar7;
  byte *local_8;
  
  if (param_1 != param_2) {
    _strncpy((char *)param_1,(char *)param_2,param_3);
    param_1[param_3 - 1] = 0;
  }
  _Dest = (byte *)FUN_100147fa((LPCSTR)param_1,0x25);
  local_8 = param_1;
  do {
    if (_Dest == (byte *)0x0) {
      return;
    }
    uVar4 = 0;
    pbVar7 = _Dest;
    if (DAT_1002402c == 0) {
LAB_1000a042:
      do {
        pbVar1 = pbVar7;
        pbVar7 = pbVar1 + 1;
        if (*pbVar7 == 0) break;
      } while (*pbVar7 != 0x25);
      if (*pbVar7 == 0x25) {
        pbVar7 = pbVar1 + 2;
      }
      iVar2 = lstrlenA((LPCSTR)pbVar7);
      FUN_10016690((undefined4 *)_Dest,(undefined4 *)pbVar7,iVar2 + 1);
    }
    else {
      do {
        iVar5 = (uint)uVar4 * 0x11;
        iVar2 = lstrlenA((LPCSTR)(DAT_10023efc + iVar5));
        iVar2 = FUN_1001b090(_Dest,(char *)(DAT_10023efc + iVar5),iVar2);
        if ((iVar2 == 0) && (*(char *)(DAT_10023efc + iVar5) != '\0')) break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_1002402c);
      if (DAT_1002402c <= uVar4) goto LAB_1000a042;
      iVar2 = lstrlenA((LPCSTR)((uint)uVar4 * 0x11 + DAT_10023efc));
      iVar5 = lstrlenA((LPCSTR)(_Dest + iVar2));
      iVar6 = (uint)uVar4 * 0x100;
      iVar3 = lstrlenA((LPCSTR)(DAT_100238f8 + iVar6));
      pbVar7 = (byte *)(iVar5 + 1U);
      if ((int)(param_1 + (param_3 - (int)(_Dest + iVar3))) < (int)(iVar5 + 1U)) {
        pbVar7 = param_1 + (param_3 - (int)(_Dest + iVar3));
      }
      if (0 < (int)pbVar7) {
        FUN_10016690((undefined4 *)(_Dest + iVar3),(undefined4 *)(_Dest + iVar2),(uint)pbVar7);
      }
      lpString = (LPCSTR)(iVar6 + DAT_100238f8);
      local_8 = (byte *)lstrlenA(lpString);
      if ((int)(param_1 + (param_3 - (int)_Dest) + -1) < (int)local_8) {
        param_1[param_3 - 1] = 0;
        local_8 = param_1 + (param_3 - (int)_Dest) + -1;
      }
      if (0 < (int)local_8) {
        _strncpy((char *)_Dest,lpString,(size_t)local_8);
      }
      local_8 = _Dest + (int)local_8;
    }
    _Dest = (byte *)FUN_100147fa((LPCSTR)local_8,0x25);
  } while( true );
}


