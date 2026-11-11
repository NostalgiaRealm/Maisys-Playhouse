
/* ==== FUN_1001077d @ 1001077d ==== 
 * signature: bool __cdecl FUN_1001077d(LPCSTR param_1, int * param_2, char * param_3, int * param_4, LPSTR param_5)
 * body: 1001077d-100108e8
 */

bool __cdecl FUN_1001077d(LPCSTR param_1,int *param_2,char *param_3,int *param_4,LPSTR param_5)

{
  char *_Source;
  uint uVar1;
  int iVar2;
  HANDLE hObject;
  
  *param_3 = '\0';
  _Source = (char *)FUN_10015990((byte *)s_COMSPEC_1001f280);
  if (_Source != (char *)0x0) {
    if (DAT_100200d4 < 2) {
      uVar1 = *(ushort *)(PTR_DAT_1001fec8 + *_Source * 2) & 0x103;
    }
    else {
      uVar1 = FUN_10015ac0((int)*_Source,0x103);
    }
    if (((uVar1 != 0) && (_Source[1] == ':')) && (_Source[2] == '\\')) {
      _strncpy(param_3,_Source,3);
      param_3[3] = '\0';
    }
  }
  if (*param_3 == '\0') {
    lstrcpyA(param_3,&DAT_1001fccc);
  }
  uVar1 = FUN_10015b60((int)*param_3);
  *param_3 = (char)uVar1;
  lstrcatA(param_3,param_1);
  iVar2 = FUN_1001223a(param_3,0,0);
  *param_2 = iVar2;
  if (iVar2 < 0) {
    *param_3 = 'C';
    iVar2 = FUN_1001223a(param_3,0,0);
    *param_2 = iVar2;
    if (iVar2 < 0) {
      lstrcpyA(param_3 + 3,s__GLBS382_TMP_1001fb50);
      hObject = (HANDLE)FUN_1001223a(param_3,1,1);
      *param_4 = (int)hObject;
      if ((int)hObject < 0) {
        *param_3 = 'A';
        lstrcpyA(param_3 + 3,param_1);
        iVar2 = FUN_1001223a(param_3,0,0);
        *param_2 = iVar2;
        if (-1 < iVar2) goto LAB_100108b0;
        lstrcpyA(param_3 + 3,s__GLBS382_TMP_1001fb50);
        hObject = (HANDLE)FUN_1001223a(param_3,1,1);
        *param_4 = (int)hObject;
        if ((int)hObject < 0) {
          return true;
        }
      }
      CloseHandle(hObject);
    }
  }
LAB_100108b0:
  lstrcpyA(param_5,param_3);
  lstrcpyA(param_5 + 3,s__GLBS382_TMP_1001fb50);
  lstrcpyA(param_3 + 3,param_1);
  iVar2 = FUN_1001223a(param_5,1,1);
  *param_4 = iVar2;
  return iVar2 < 0;
}


