
/* ==== AfxGetRoot @ 004ae421 ==== 
 * signature: void __stdcall AfxGetRoot(char * param_1, CString * param_2)
 * body: 004ae421-004ae509
 * note: Library Function - Single Match  void __stdcall AfxGetRoot(char const *,class CString &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxGetRoot(char const *,class CString &)
   
   Library: Visual Studio 1998 Release */

void AfxGetRoot(char *param_1,CString *param_2)

{
  uchar uVar1;
  uchar *_Ptr;
  uchar *_Ptr_00;
  
  _Ptr = (uchar *)FUN_004ac16a(param_2,0x104);
  _memset(_Ptr,0,0x104);
  lstrcpynA((LPSTR)_Ptr,param_1,0x104);
  uVar1 = *_Ptr;
  _Ptr_00 = _Ptr;
  while ((uVar1 != '\0' &&
         (((*_Ptr_00 != '\\' && (*_Ptr_00 != '/')) || ((_Ptr_00[1] != '\\' && (_Ptr_00[1] != '/'))))
         ))) {
    _Ptr_00 = __mbsinc(_Ptr_00);
    uVar1 = *_Ptr_00;
  }
  if (*_Ptr_00 == '\0') {
    uVar1 = *_Ptr;
    while (((uVar1 != '\0' && (*_Ptr != '\\')) && (*_Ptr != '/'))) {
      _Ptr = __mbsinc(_Ptr);
      uVar1 = *_Ptr;
    }
  }
  else {
    _Ptr = _Ptr_00 + 2;
    if (*_Ptr != '\0') {
      do {
        if ((*_Ptr == '\\') || (*_Ptr == '/')) break;
        _Ptr = __mbsinc(_Ptr);
      } while (*_Ptr != '\0');
      if (*_Ptr == '\0') goto LAB_004ae4f1;
      _Ptr = __mbsinc(_Ptr);
    }
    if (*_Ptr == '\0') goto LAB_004ae4fa;
    do {
      if ((*_Ptr == '\\') || (*_Ptr == '/')) break;
      _Ptr = __mbsinc(_Ptr);
    } while (*_Ptr != '\0');
  }
LAB_004ae4f1:
  if (*_Ptr != '\0') {
    _Ptr[1] = '\0';
  }
LAB_004ae4fa:
  CString::ReleaseBuffer(param_2,-1);
  return;
}


