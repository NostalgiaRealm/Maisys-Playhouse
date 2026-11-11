
/* ==== AfxFormatString2 @ 004b5338 ==== 
 * signature: void __stdcall AfxFormatString2(CString * param_1, uint param_2, char * param_3, char * param_4)
 * body: 004b5338-004b5361
 * note: Library Function - Single Match  void __stdcall AfxFormatString2(class CString &,unsigned int,char const *,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxFormatString2(class CString &,unsigned int,char const *,char const *)
   
   Library: Visual Studio 1998 Release */

void AfxFormatString2(CString *param_1,uint param_2,char *param_3,char *param_4)

{
  char *local_c;
  char *local_8;
  
  local_c = param_3;
  local_8 = param_4;
  AfxFormatStrings(param_1,param_2,&local_c,2);
  return;
}


