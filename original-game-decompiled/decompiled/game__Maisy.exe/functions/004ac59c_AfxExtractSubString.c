
/* ==== AfxExtractSubString @ 004ac59c ==== 
 * signature: int __stdcall AfxExtractSubString(CString * param_1, char * param_2, int param_3, char param_4)
 * body: 004ac59c-004ac608
 * note: Library Function - Single Match  int __stdcall AfxExtractSubString(class CString &,char const *,int,char)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxExtractSubString(class CString &,char const *,int,char)
   
   Library: Visual Studio 1998 Release */

int AfxExtractSubString(CString *param_1,char *param_2,int param_3,char param_4)

{
  uchar *puVar1;
  size_t _Size;
  char *_Dst;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
LAB_004ac602:
    iVar2 = 0;
  }
  else {
    while( true ) {
      if (param_3 == 0) break;
      puVar1 = __mbschr((uchar *)param_2,(int)param_4);
      if (puVar1 == (uchar *)0x0) {
        FUN_004abc24(param_1);
        goto LAB_004ac602;
      }
      param_2 = (char *)(puVar1 + 1);
      param_3 = param_3 + -1;
    }
    puVar1 = __mbschr((uchar *)param_2,(int)param_4);
    if (puVar1 == (uchar *)0x0) {
      _Size = lstrlenA(param_2);
    }
    else {
      _Size = (int)puVar1 - (int)param_2;
    }
    _Dst = CString::GetBufferSetLength(param_1,_Size);
    FID_conflict__memcpy(_Dst,param_2,_Size);
    iVar2 = 1;
  }
  return iVar2;
}


