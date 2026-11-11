
/* ==== FUN_10004d00 @ 10004d00 ==== 
 * signature: int __cdecl FUN_10004d00(DWORD param_1, HKEY param_2, LPCSTR param_3, int param_4, BYTE * param_5, DWORD param_6, int param_7)
 * body: 10004d00-10004d7f
 */

int __cdecl
FUN_10004d00(DWORD param_1,HKEY param_2,LPCSTR param_3,int param_4,BYTE *param_5,DWORD param_6,
            int param_7)

{
  LSTATUS LVar1;
  int iVar2;
  
  iVar2 = 1;
  LVar1 = RegCreateKeyExA(*(HKEY *)(&DAT_1001f160 + param_1 * 4),(LPCSTR)param_2,0,(LPSTR)0x0,0,6,
                          (LPSECURITY_ATTRIBUTES)0x0,&param_2,&param_1);
  if (LVar1 != 0) goto LAB_10004d60;
  if (param_3 == (LPCSTR)0x0) {
LAB_10004d55:
    iVar2 = 0;
  }
  else {
    LVar1 = RegSetValueExA(param_2,param_3,0,(&DAT_1001f178)[param_4],param_5,param_6);
    if (LVar1 == 0) goto LAB_10004d55;
  }
  RegCloseKey(param_2);
LAB_10004d60:
  if ((iVar2 != 0) && (param_7 != 0)) {
    FUN_1000b352(*(char **)(DAT_100240b8 + 0xb0));
  }
  return iVar2;
}


