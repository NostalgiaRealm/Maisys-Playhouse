
/* ==== FUN_1001435d @ 1001435d ==== 
 * signature: undefined4 __cdecl FUN_1001435d(HKEY param_1, LPBYTE param_2)
 * body: 1001435d-10014711
 */

undefined4 __cdecl FUN_1001435d(HKEY param_1,LPBYTE param_2)

{
  byte bVar1;
  byte *pbVar2;
  LSTATUS LVar3;
  int iVar4;
  HKEY pHVar5;
  CHAR *lpString2;
  byte local_914 [1024];
  HKEY__ local_514 [128];
  CHAR local_314 [256];
  byte local_214 [256];
  char local_114 [256];
  char *local_14;
  DWORD local_10;
  CHAR local_c [4];
  HKEY local_8;
  
  if (DAT_10023e9c == '\x01') {
    return 0;
  }
  bVar1 = *(byte *)(DAT_10023310 + 1);
  pHVar5 = (HKEY)(bVar1 & 0x1f);
  FUN_10009f15((byte *)param_1,(byte *)(DAT_10023310 + 3),0x200);
  pbVar2 = (byte *)FUN_1000bc0e((char *)(DAT_10023310 + 3));
  FUN_10009f15(DAT_10024170,pbVar2,0x7800);
  pbVar2 = (byte *)FUN_1000bc0e((char *)pbVar2);
  FUN_10009eff(local_214,pbVar2);
  if ((*(byte *)(DAT_10023310 + 1) & 0x80) != 0) {
    if (((bVar1 & 0x1f) == 0) || (DAT_100241e8 != 0)) {
      if ((*(byte *)(DAT_10023310 + 1) & 0x40) == 0) {
        FUN_10004951(param_1,(int)pHVar5);
      }
      else {
        LVar3 = RegOpenKeyExA(*(HKEY *)(&DAT_1001f160 + (int)pHVar5 * 4),(LPCSTR)param_1,0,0x1f,
                              &local_8);
        if (LVar3 == 0) {
          RegDeleteValueA(local_8,(LPCSTR)local_214);
          RegCloseKey(local_8);
        }
      }
    }
    goto LAB_100146bd;
  }
  lstrcpyA(local_c,&DAT_1001f4b0);
  local_14 = (char *)FUN_10004d80(pHVar5,(LPCSTR)param_1,param_2,(char *)local_214,local_c,0x400,0);
  if (local_14 == (char *)0x0) {
    if ((*(byte *)(DAT_10023310 + 1) & 0x20) != 0) {
      return 0;
    }
  }
  else {
    local_c[0] = '0';
    *param_2 = '\0';
  }
  if (DAT_100241e8 == 0) {
    if (((bVar1 & 0x1f) == 0) && (*(char *)(DAT_10023310 + 2) == '\0')) {
      RegSetValueA((HKEY)0x80000000,(LPCSTR)param_1,1,(LPCSTR)DAT_10024170,0);
    }
    goto LAB_100146bd;
  }
  DAT_10023f60 = 1;
  FUN_10014712((int)*(char *)(DAT_10023310 + 2),DAT_10024170,(int *)&local_10);
  lpString2 = (CHAR *)(~-(uint)((*(byte *)(DAT_10023310 + 1) & 0x40) != 0) & (uint)local_214);
  iVar4 = FUN_10004d00((DWORD)pHVar5,param_1,lpString2,(int)*(char *)(DAT_10023310 + 2),DAT_10024170
                       ,local_10,1);
  if (iVar4 != 0) {
    return 1;
  }
  if ((*DAT_10023f30 != '\0') && (pHVar5 == (HKEY)0x1)) {
    iVar4 = (int)local_c[0];
    wsprintfA((LPSTR)local_514,s__s__s_Registry__s_1001fe9c,
              PTR_s_Software_Wise_Solutions_WAMUser_1001f054,DAT_10023f30,param_1);
    FUN_10004d00(2,local_514,lpString2,(int)*(char *)(DAT_10023310 + 2),DAT_10024170,local_10,0);
    if (lpString2 == (LPCSTR)0x0) {
LAB_10014625:
      local_8 = (HKEY)0x1;
    }
    else {
      wsprintfA(local_314,&DAT_1001fe94,lpString2);
      lstrcpyA(local_114,lpString2);
      if (local_114[0] == '*') {
        wsprintfA(local_114,&DAT_1001fe90,lpString2);
      }
      if (local_14 == (char *)0x0) {
        if (*lpString2 == '*') {
          lpString2 = local_114;
          local_14 = local_314;
        }
      }
      else {
        lpString2 = local_314;
        local_14 = local_114;
      }
      local_8 = (HKEY)0x0;
      LVar3 = FUN_10004d80((HKEY)0x1,(LPCSTR)local_514,local_914,lpString2,local_c,0x400,0);
      if ((LVar3 != 0) &&
         (LVar3 = FUN_10004d80((HKEY)0x1,(LPCSTR)local_514,local_914,local_14,local_c,0x400,0),
         LVar3 != 0)) goto LAB_10014625;
    }
    if (local_8 != (HKEY)0x0) {
      lstrcpyA((LPSTR)local_914,(LPCSTR)param_2);
      FUN_10014712(iVar4 + -0x30,local_914,(int *)&local_10);
      FUN_10004d00(1,local_514,lpString2,iVar4 + -0x30,local_914,local_10,0);
    }
    DAT_100239a8 = 1;
  }
  if (*(char *)(DAT_10023310 + 2) == '\x03') {
    wsprintfA((LPSTR)DAT_10024170,&DAT_1001f4ac,*(undefined4 *)DAT_10024170);
  }
LAB_100146bd:
  if ((*(byte *)(DAT_10023310 + 1) & 0x80) == 0) {
    if (*(char *)(DAT_10023310 + 2) == '\x04') {
      pbVar2 = (byte *)FUN_1000bc0e((char *)(DAT_10023310 + 3));
      FUN_10009f15(DAT_10024170,pbVar2,0x7800);
    }
    FUN_1000aef7((LPCSTR)param_1,(LPCSTR)DAT_10024170,(char *)param_2,(char *)local_214,local_c);
  }
  return 0;
}


