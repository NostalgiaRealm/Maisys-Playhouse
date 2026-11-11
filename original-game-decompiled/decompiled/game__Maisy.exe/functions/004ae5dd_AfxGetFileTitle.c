
/* ==== AfxGetFileTitle @ 004ae5dd ==== 
 * signature: uint __stdcall AfxGetFileTitle(char * param_1, char * param_2, uint param_3)
 * body: 004ae5dd-004ae636
 * note: Library Function - Single Match  unsigned int __stdcall AfxGetFileTitle(char const *,char *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    unsigned int __stdcall AfxGetFileTitle(char const *,char *,unsigned int)
   
   Library: Visual Studio 1998 Release */

uint AfxGetFileTitle(char *param_1,char *param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  LPCSTR Buf;
  CHAR local_108 [260];
  
  Buf = param_2;
  if (param_2 == (char *)0x0) {
    param_3 = 0x104;
    Buf = local_108;
  }
  sVar1 = GetFileTitleA(param_1,Buf,(WORD)param_3);
  if (sVar1 == 0) {
    uVar2 = 0;
    if (param_2 == (char *)0x0) {
      iVar3 = lstrlenA(Buf);
      uVar2 = iVar3 + 1;
    }
  }
  else {
    uVar2 = AfxGetFileName(param_1,param_2,param_3);
  }
  return uVar2;
}


