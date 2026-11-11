
/* ==== CopyElements @ 004a4db2 ==== 
 * signature: void __stdcall CopyElements(CString * param_1, CString * param_2, int param_3)
 * body: 004a4db2-004a4dde
 * note: Library Function - Single Match  void __stdcall CopyElements(class CString *,class CString const *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall CopyElements(class CString *,class CString const *,int)
   
   Library: Visual Studio 1998 Release */

void CopyElements(CString *param_1,CString *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    CString::operator=(param_1,param_2);
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  return;
}


