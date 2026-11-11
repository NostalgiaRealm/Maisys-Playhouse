
/* ==== SetRegKey @ 004bd068 ==== 
 * signature: int __stdcall SetRegKey(char * param_1, char * param_2, char * param_3)
 * body: 004bd068-004bd0ee
 * note: Library Function - Single Match  int __stdcall SetRegKey(char const *,char const *,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall SetRegKey(char const *,char const *,char const *)
   
   Library: Visual Studio 1998 Release */

int SetRegKey(char *param_1,char *param_2,char *param_3)

{
  DWORD cbData;
  LSTATUS LVar1;
  int iVar2;
  LSTATUS LVar3;
  uint uVar4;
  HKEY local_8;
  
  if (param_3 == (char *)0x0) {
    cbData = lstrlenA(param_2);
    LVar1 = RegSetValueA((HKEY)0x80000000,param_1,1,param_2,cbData);
    uVar4 = (uint)(LVar1 == 0);
  }
  else {
    LVar1 = RegCreateKeyA((HKEY)0x80000000,param_1,&local_8);
    if (LVar1 == 0) {
      iVar2 = lstrlenA(param_2);
      LVar1 = RegSetValueExA(local_8,param_3,0,1,(BYTE *)param_2,iVar2 + 1);
      LVar3 = RegCloseKey(local_8);
      if ((LVar3 == 0) && (LVar1 == 0)) {
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


