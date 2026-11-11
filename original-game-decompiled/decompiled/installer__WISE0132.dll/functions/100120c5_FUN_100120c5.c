
/* ==== FUN_100120c5 @ 100120c5 ==== 
 * signature: undefined __cdecl FUN_100120c5(LPCSTR param_1, int param_2, LPCSTR param_3)
 * body: 100120c5-100121d3
 */

void __cdecl FUN_100120c5(LPCSTR param_1,int param_2,LPCSTR param_3)

{
  char *pcVar1;
  char *pcVar2;
  BOOL BVar3;
  int iVar4;
  HANDLE pvVar5;
  char local_104;
  char local_103;
  char local_102 [254];
  
  if (DAT_100241e8 != 0) {
    if (param_2 == 8) {
      param_3[0x104] = -1;
      param_3[0x105] = -1;
      param_3[0x106] = -1;
      param_3[0x107] = -1;
      *param_3 = '\0';
      lstrcpyA(&local_104,param_1);
      pcVar2 = &local_104;
      if (local_104 != '\\') goto LAB_1001213f;
      if (local_103 != '\\') goto LAB_1001213f;
      pcVar2 = local_102;
      while ((local_102[0] != '\0' && (local_102[0] != '\\'))) {
        pcVar1 = pcVar2 + 1;
        pcVar2 = pcVar2 + 1;
        local_102[0] = *pcVar1;
      }
      if (*pcVar2 != '\\') goto LAB_1001213f;
      do {
        pcVar2 = pcVar2 + 1;
LAB_1001213f:
      } while ((*pcVar2 != '\0') && (*pcVar2 != '\\'));
      if (*pcVar2 == '\\') {
        pcVar2 = pcVar2 + 1;
      }
      *pcVar2 = '\0';
      BVar3 = GetVolumeInformationA
                        (&local_104,param_3,0x20,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPSTR)0x0,0
                        );
      if (BVar3 == 0) {
        *param_3 = '\0';
      }
      iVar4 = lstrlenA(param_3);
      if (8 < iVar4) {
        lstrcpyA(&local_104,param_3 + 8);
        param_3[8] = '.';
        lstrcpyA(param_3 + 9,&local_104);
      }
    }
    else {
      pvVar5 = FindFirstFileA(param_1,(LPWIN32_FIND_DATAA)(param_3 + 0x108));
      *(HANDLE *)(param_3 + 0x104) = pvVar5;
      if (pvVar5 != (HANDLE)0xffffffff) {
        lstrcpyA(param_3,param_3 + 0x134);
        *(DWORD *)(param_3 + 0x100) = ((LPWIN32_FIND_DATAA)(param_3 + 0x108))->dwFileAttributes;
      }
    }
  }
  return;
}


