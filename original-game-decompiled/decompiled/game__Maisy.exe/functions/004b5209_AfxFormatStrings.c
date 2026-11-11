
/* ==== AfxFormatStrings @ 004b5209 ==== 
 * signature: void __stdcall AfxFormatStrings(CString * param_1, uint param_2, char * * param_3, int param_4)
 * body: 004b5209-004b5244
 * note: Library Function - Single Match  void __stdcall AfxFormatStrings(class CString &,unsigned int,char const * const *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxFormatStrings(class CString &,unsigned int,char const * const *,int)
   
   Library: Visual Studio 1998 Release */

void AfxFormatStrings(CString *param_1,uint param_2,char **param_3,int param_4)

{
  int iVar1;
  byte local_104 [256];
  
  iVar1 = AfxLoadString(param_2,(char *)local_104,0x100);
  if (iVar1 != 0) {
    FUN_004b5245(param_1,local_104,(int)param_3,param_4);
  }
  return;
}


