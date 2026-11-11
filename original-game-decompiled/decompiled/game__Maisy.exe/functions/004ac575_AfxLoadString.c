
/* ==== AfxLoadString @ 004ac575 ==== 
 * signature: int __stdcall AfxLoadString(uint param_1, char * param_2, uint param_3)
 * body: 004ac575-004ac59b
 * note: Library Function - Single Match  int __stdcall AfxLoadString(unsigned int,char *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxLoadString(unsigned int,char *,unsigned int)
   
   Library: Visual Studio 1998 Release */

int AfxLoadString(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  char *lpBuffer;
  
  lpBuffer = param_2;
  iVar1 = FUN_004bafca();
  iVar1 = LoadStringA(*(HINSTANCE *)(iVar1 + 0xc),param_1,lpBuffer,param_3);
  if (iVar1 == 0) {
    *param_2 = '\0';
  }
  return iVar1;
}


