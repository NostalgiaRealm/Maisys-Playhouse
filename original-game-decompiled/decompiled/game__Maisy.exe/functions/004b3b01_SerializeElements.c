
/* ==== SerializeElements @ 004b3b01 ==== 
 * signature: void __stdcall SerializeElements(CArchive * param_1, CString * param_2, int param_3)
 * body: 004b3b01-004b3b4d
 * note: Library Function - Single Match  void __stdcall SerializeElements(class CArchive &,class CString *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall SerializeElements(class CArchive &,class CString *,int)
   
   Library: Visual Studio 1998 Release */

void SerializeElements(CArchive *param_1,CString *param_2,int param_3)

{
  if (((byte)param_1[0x14] & 1) == 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      operator<<(param_1,param_2);
      param_2 = param_2 + 4;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      FUN_004b39c8(param_1,param_2);
      param_2 = param_2 + 4;
    }
  }
  return;
}


