
/* ==== FUN_00408e33 @ 00408e33 ==== 
 * signature: DWORD __cdecl FUN_00408e33(HINSTANCE param_1, UINT param_2, char * param_3, DWORD param_4)
 * body: 00408e33-00408ee3
 */

DWORD __cdecl FUN_00408e33(HINSTANCE param_1,UINT param_2,char *param_3,DWORD param_4)

{
  DWORD DVar1;
  LPSTR lpString1;
  CHAR local_224 [512];
  CHAR local_24 [32];
  
  wsprintfA(local_24,s_Msg_d_00410718,param_2);
  DVar1 = GetPrivateProfileStringA
                    (s_Language_00410708,local_24,&DAT_00410714,param_3,param_4,DAT_00413bf4);
  if ((*param_3 == '\x7f') && (DVar1 == 1)) {
    LoadStringA(param_1,param_2,param_3,param_4);
  }
  else {
    lpString1 = _strchr(param_3,0x7c);
    while (lpString1 != (LPSTR)0x0) {
      lstrcpyA(local_224,lpString1 + 1);
      lstrcpyA(lpString1,&DAT_00410704);
      lstrcpyA(lpString1 + 2,local_224);
      lpString1 = _strchr(param_3,0x7c);
    }
  }
  return DVar1;
}


