
/* ==== FUN_1200ef60 @ 1200ef60 ==== 
 * signature: undefined4 __cdecl FUN_1200ef60(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1200ef60-1200f045
 */

undefined4 __cdecl FUN_1200ef60(int param_1,int param_2,undefined4 param_3,short param_4)

{
  BOOL BVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  void **ppvVar5;
  int local_70;
  int iStack_6c;
  tagOFNA local_68;
  
  pcVar4 = s_Bitmap_File___BMP____bmp__1203760c;
  ppvVar5 = &local_68.pvReserved;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppvVar5 = *(void **)pcVar4;
    pcVar4 = pcVar4 + 4;
    ppvVar5 = ppvVar5 + 1;
  }
  *(undefined2 *)ppvVar5 = *(undefined2 *)pcVar4;
  if (param_4 == 0xd) {
    local_68.lpstrFilter = (LPCSTR)&local_68.pvReserved;
    local_68.hwndOwner = (HWND)0x0;
    local_68.lStructSize = 0x4c;
    local_68.lpstrFile = *(LPSTR *)(param_1 + 0x28);
    local_68.nMaxFile = *(DWORD *)(param_1 + 0x20);
    local_68.lpstrFileTitle = (LPSTR)0x0;
    local_68.nMaxFileTitle = 0;
    local_68.lpstrInitialDir = (LPCSTR)0x0;
    local_68.nFilterIndex = 1;
    local_68.Flags = 0x1810;
    BVar1 = GetOpenFileNameA(&local_68);
    if (BVar1 != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_70);
      DAT_12039a9c = (*pcVar2)(local_70,param_1 + 0x24,*(undefined4 *)(param_1 + 0x28));
      pcVar2 = (code *)FUN_12027370(param_2,1,0,&iStack_6c);
      DAT_12039a9c = (*pcVar2)(iStack_6c,0xe,param_1 + 0x1a);
    }
  }
  return 0;
}


