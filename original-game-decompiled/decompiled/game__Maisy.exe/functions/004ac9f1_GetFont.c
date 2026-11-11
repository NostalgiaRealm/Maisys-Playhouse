
/* ==== CDialogTemplate::GetFont @ 004ac9f1 ==== 
 * signature: int __cdecl GetFont(DLGTEMPLATE * param_1, CString * param_2, ushort * param_3)
 * body: 004ac9f1-004aca73
 * note: Library Function - Single Match  public: static int __cdecl CDialogTemplate::GetFont(struct DLGTEMPLATE const *,class CString &,unsigned short &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static int __cdecl CDialogTemplate::GetFont(struct DLGTEMPLATE const *,class CString
   &,unsigned short &)
   
   Library: Visual Studio 1998 Release */

int __cdecl CDialogTemplate::GetFont(DLGTEMPLATE *param_1,CString *param_2,ushort *param_3)

{
  short sVar1;
  uint uVar2;
  ushort *puVar3;
  char *lpMultiByteStr;
  bool bVar4;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  
  if (*(short *)((int)&param_1->style + 2) == -1) {
    uVar2._0_2_ = param_1->y;
    uVar2._2_2_ = param_1->cx;
  }
  else {
    uVar2 = param_1->style;
  }
  bVar4 = (uVar2 & 0x40) != 0;
  if (bVar4) {
    puVar3 = (ushort *)GetFontSizeField(param_1);
    *param_3 = *puVar3;
    sVar1 = *(short *)((int)&param_1->style + 2);
    lpUsedDefaultChar = (LPBOOL)0x0;
    lpDefaultChar = (LPCSTR)0x0;
    cbMultiByte = 0x20;
    lpMultiByteStr = CString::GetBufferSetLength(param_2,0x20);
    WideCharToMultiByte(0,0,(LPCWSTR)(puVar3 + (-(uint)(sVar1 != -1) & 0xfffffffe) + 3),-1,
                        lpMultiByteStr,cbMultiByte,lpDefaultChar,lpUsedDefaultChar);
    CString::ReleaseBuffer(param_2,-1);
  }
  return (uint)bVar4;
}


