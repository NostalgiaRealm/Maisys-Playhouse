
/* ==== AfxComparePath @ 004ae50a ==== 
 * signature: int __stdcall AfxComparePath(char * param_1, char * param_2)
 * body: 004ae50a-004ae5dc
 * note: Library Function - Single Match  int __stdcall AfxComparePath(char const *,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxComparePath(char const *,char const *)
   
   Library: Visual Studio 1998 Release */

int AfxComparePath(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  LCID Locale;
  WORD local_61c [260];
  WORD local_414 [260];
  WORD local_20c [260];
  
  iVar1 = lstrcmpiA(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = GetSystemMetrics(0x2a);
    if (iVar1 != 0) {
      iVar1 = lstrlenA(param_1);
      iVar2 = lstrlenA(param_2);
      if (iVar2 != iVar1) {
        return 0;
      }
      Locale = GetThreadLocale();
      GetStringTypeExA(Locale,1,param_1,-1,local_414);
      GetStringTypeExA(Locale,4,param_1,-1,local_61c);
      GetStringTypeExA(Locale,1,param_2,-1,local_20c);
      if (*param_1 != '\0') {
        iVar1 = 0;
        do {
          if (((*(byte *)((int)local_61c + iVar1) & 0x80) != 0) &&
             (*(short *)((int)local_20c + iVar1) != *(short *)((int)local_414 + iVar1))) {
            return 0;
          }
          iVar1 = iVar1 + 2;
          param_1 = (char *)__mbsinc((uchar *)param_1);
        } while (*param_1 != '\0');
      }
    }
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


