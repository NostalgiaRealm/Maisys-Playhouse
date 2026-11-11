
/* ==== AfxGetFileName @ 004bd3ae ==== 
 * signature: uint __stdcall AfxGetFileName(char * param_1, char * param_2, uint param_3)
 * body: 004bd3ae-004bd408
 * note: Library Function - Single Match  unsigned int __stdcall AfxGetFileName(char const *,char *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    unsigned int __stdcall AfxGetFileName(char const *,char *,unsigned int)
   
   Library: Visual Studio 1998 Release */

uint AfxGetFileName(char *param_1,char *param_2,uint param_3)

{
  uchar uVar1;
  uchar *lpString2;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  lpString2 = (uchar *)param_1;
  while (uVar1 != '\0') {
    uVar1 = *param_1;
    if (((uVar1 == '\\') || (uVar1 == '/')) || (uVar1 == ':')) {
      lpString2 = __mbsinc((uchar *)param_1);
    }
    param_1 = (char *)__mbsinc((uchar *)param_1);
    uVar1 = *param_1;
  }
  if (param_2 == (char *)0x0) {
    iVar2 = lstrlenA((LPCSTR)lpString2);
    uVar3 = iVar2 + 1;
  }
  else {
    lstrcpynA(param_2,(LPCSTR)lpString2,param_3);
    uVar3 = 0;
  }
  return uVar3;
}


