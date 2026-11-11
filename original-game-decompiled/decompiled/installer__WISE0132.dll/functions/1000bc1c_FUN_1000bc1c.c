
/* ==== FUN_1000bc1c @ 1000bc1c ==== 
 * signature: undefined4 __cdecl FUN_1000bc1c(LPCSTR param_1, LPCSTR param_2, int param_3, int param_4)
 * body: 1000bc1c-1000bd4a
 */

undefined4 __cdecl FUN_1000bc1c(LPCSTR param_1,LPCSTR param_2,int param_3,int param_4)

{
  HANDLE pvVar1;
  DWORD DVar2;
  ushort uVar3;
  undefined2 extraout_var;
  CHAR local_214 [39];
  CHAR local_1ed [473];
  undefined4 local_14;
  ushort local_e;
  ushort local_c [3];
  ushort local_6;
  
  pvVar1 = (HANDLE)FUN_1001223a(param_1,0,0);
  if (pvVar1 != (HANDLE)0xffffffff) {
    FUN_1001234f(pvVar1,&local_6,&local_e);
    CloseHandle(pvVar1);
    if (((*(byte *)(DAT_10023310 + 1) & 0x40) == 0) || (param_3 != 0)) {
      local_14 = CONCAT22(extraout_var,*(short *)(DAT_10023310 + 0xb));
      local_c[0] = *(ushort *)(DAT_10023310 + 0xd);
      if ((param_3 != 0) && (*(short *)(DAT_10023310 + 0xb) == 0)) {
        return 0;
      }
    }
    else {
      pvVar1 = (HANDLE)FUN_1001223a(param_2,0,0);
      if (pvVar1 == (HANDLE)0xffffffff) {
        return 0;
      }
      FUN_1001234f(pvVar1,(LPWORD)&local_14,local_c);
      CloseHandle(pvVar1);
    }
    uVar3 = (ushort)local_14;
    if (((uVar3 < local_6) || ((local_6 == uVar3 && (local_c[0] <= local_e)))) &&
       ((local_6 != uVar3 || ((local_e != local_c[0] || ((*(byte *)(DAT_10023310 + 1) & 8) == 0)))))
       ) {
      if ((DAT_1001f030 != (HANDLE)0xffffffff) && (DAT_10023edc == 0)) {
        lstrcpyA(local_214,s_Date_Time__Following_file_not_co_1001fa3c);
        if (param_4 == 0) {
          wsprintfA(local_1ed,s_File_Copy___s_1001fa28,param_1);
        }
        DVar2 = lstrlenA(local_214);
        FileWrite(DAT_1001f030,local_214,DVar2);
      }
      return 1;
    }
  }
  return 0;
}


