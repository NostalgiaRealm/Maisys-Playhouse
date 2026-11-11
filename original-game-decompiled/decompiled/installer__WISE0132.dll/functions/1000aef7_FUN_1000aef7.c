
/* ==== FUN_1000aef7 @ 1000aef7 ==== 
 * signature: undefined __cdecl FUN_1000aef7(LPCSTR param_1, LPCSTR param_2, char * param_3, char * param_4, char * param_5)
 * body: 1000aef7-1000b351
 */

void __cdecl FUN_1000aef7(LPCSTR param_1,LPCSTR param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  HANDLE hObject;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  LPCSTR pCVar7;
  char *pcVar8;
  CHAR *lpString2;
  CHAR local_520 [256];
  CHAR local_420 [1024];
  uint local_20;
  uint local_1c;
  
  if (DAT_1001f030 == (HANDLE)0xffffffff) {
    return;
  }
  if (DAT_10023edc != 0) {
    return;
  }
  cVar1 = *DAT_10023310;
  pCVar7 = param_1;
  if (cVar1 == '\0') {
LAB_1000b192:
    if (param_2 == (LPCSTR)0x0) {
      if (DAT_10023f00 == 0) {
        pcVar8 = s_Overwrite_1001f854;
        if (param_3 == (char *)0x0) {
          pcVar8 = &DAT_1001f84c;
        }
        wsprintfA(local_420,s_File__s___s_1001f840,pcVar8,param_1);
        if (((byte)DAT_10024198 & 0x20) == 0) goto LAB_1000b316;
        hObject = (HANDLE)FUN_1001223a(param_1,0,0);
        if (hObject == (HANDLE)0xffffffff) {
          pcVar8 = s_______1001f810;
        }
        else {
          FUN_1001234f(hObject,(LPWORD)((int)&param_5 + 2),(LPWORD)((int)&param_2 + 2));
          CloseHandle(hObject);
          uVar5 = ((param_5._2_2_ >> 9) + 0x50) % 100;
          if ((ushort)uVar5 < 0x3c) {
            iVar6 = uVar5 + 2000;
          }
          else {
            iVar6 = uVar5 + 0x76c;
          }
          wsprintfA(local_520,s____02d__02d__04d____02d__02d__02_1001f818,param_5._2_2_ >> 5 & 0xf,
                    param_5._2_2_ & 0x1f,iVar6,(uint)(param_2._2_2_ >> 0xb),
                    param_2._2_2_ >> 5 & 0x3f,(param_2._2_2_ & 0x1f) << 1);
          pcVar8 = local_520;
        }
        lstrcatA(local_420,pcVar8);
        lstrcpyA(local_520,param_1);
        FUN_10012386(local_520,0);
        iVar6 = FUN_100137b1(local_520,&local_20);
        if (iVar6 != 0) goto LAB_1000b316;
        wsprintfA(local_520,s__d__d__d__d_1001f800,local_20 >> 0x10,local_20 & 0xffff,
                  local_1c >> 0x10,local_1c & 0xffff);
        lpString2 = local_520;
LAB_1000b2f3:
        lstrcatA(local_420,lpString2);
        goto LAB_1000b316;
      }
      pcVar8 = s_In_Use___s_Not_Copied_1001f860;
    }
    else {
      pcVar8 = s_Backup_Copy___s_1001f7f0;
    }
  }
  else if (cVar1 == '\x04') {
    if (param_1[1] == 'A') {
      pCVar7 = FUN_100147fa(param_1,0x28);
      pCVar2 = FUN_100147fa(param_1,0x2c);
      *pCVar2 = '\0';
      pCVar3 = FUN_100147fa(pCVar2 + 1,0x2c);
      *pCVar3 = '\0';
      wsprintfA(local_420,s_Icon_Name___s_Icon_Cmd___s_1001f888,pCVar2 + 1,pCVar7 + 1);
      goto LAB_1000b316;
    }
    if (param_1[1] != 'C') {
      return;
    }
    pCVar7 = FUN_100147fa(param_1,0x28);
    pCVar7 = pCVar7 + 1;
    pCVar2 = FUN_100147fa(param_1,0x29);
    *pCVar2 = '\0';
    pCVar2 = FUN_100147fa(pCVar7,0x2c);
    if (pCVar2 != (LPCSTR)0x0) {
      *pCVar2 = '\0';
    }
    pcVar8 = s_Icon_Group___s_1001f878;
  }
  else {
    if (cVar1 == '\x05') {
      wsprintfA(local_420,s_INI_File___s_INI_Sect___s_INI_It_1001f8b0,param_1,param_2,param_3,
                param_5);
      lpString2 = param_4;
      if (*param_4 == '\0') goto LAB_1000b316;
      lstrcatA(local_420,s_INI_Old__1001f8a4);
      goto LAB_1000b2f3;
    }
    if (cVar1 != '\n') {
      if (cVar1 != '\x12') goto LAB_1000b316;
      goto LAB_1000b192;
    }
    if ((DAT_10023310[1] & 0x80U) == 0) {
      wsprintfA(local_420,s_RegDB_Key___s_RegDB_Val__1001f92c,param_1);
      DVar4 = lstrlenA(local_420);
      FileWrite(DAT_1001f030,local_420,DVar4);
      DVar4 = lstrlenA(param_2);
      FileWrite(DAT_1001f030,param_2,DVar4);
      local_420[0] = '\0';
      if (*param_4 != '\0') {
        lstrcatA(local_420,s_RegDB_Name__1001f91c);
        lstrcatA(local_420,param_4);
      }
      if (*param_5 != '0') {
        lstrcatA(local_420,s_RegDB_Type__1001f90c);
        lstrcatA(local_420,param_5);
      }
      if (DAT_10023310[1] != '\0') {
        lstrcatA(local_420,s_RegDB_Root__1001f8fc);
        uVar5 = (byte)DAT_10023310[1] & 0x1f;
        pCVar7 = &DAT_1001f8f8;
        iVar6 = lstrlenA(local_420);
        wsprintfA(local_420 + iVar6,pCVar7,uVar5);
      }
      lstrcatA(local_420,&DAT_1001f3a4);
      DVar4 = lstrlenA(local_420);
      FileWrite(DAT_1001f030,local_420,DVar4);
      pcVar8 = param_3;
      do {
        if (*pcVar8 == '\0') break;
        wsprintfA(local_420,s_RegDB_Old___s_1001f8e8,pcVar8);
        DVar4 = lstrlenA(local_420);
        FileWrite(DAT_1001f030,local_420,DVar4);
        for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
        }
        pcVar8 = pcVar8 + 1;
      } while (*param_5 == '2');
      local_420[0] = '\0';
      goto LAB_1000b316;
    }
    pcVar8 = s_Remove_Key___s_1001f948;
  }
  wsprintfA(local_420,pcVar8,pCVar7);
LAB_1000b316:
  if (local_420[0] != '\0') {
    lstrcatA(local_420,&DAT_1001f3a4);
    DVar4 = lstrlenA(local_420);
    FileWrite(DAT_1001f030,local_420,DVar4);
  }
  return;
}


