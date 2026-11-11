
/* ==== DDX_Text @ 004b482f ==== 
 * signature: void __stdcall DDX_Text(CDataExchange * param_1, int param_2, uchar * param_3)
 * body: 004b482f-004b48a6
 * note: Library Function - Single Match  void __stdcall DDX_Text(class CDataExchange *,int,unsigned char &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall DDX_Text(class CDataExchange *,int,unsigned char &)
   
   Library: Visual Studio 1998 Release */

void DDX_Text(CDataExchange *param_1,int param_2,uchar *param_3)

{
  uint local_8;
  
  local_8 = (uint)*param_3;
  if (*(int *)param_1 == 0) {
    DDX_TextWithFormat(param_1,param_2,"%u",0xf116,local_8);
  }
  else {
    DDX_TextWithFormat(param_1,param_2,"%u",0xf116,&local_8);
    if (0xff < (int)local_8) {
      AfxMessageBox(0xf116,0,0xffffffff);
      CDataExchange::Fail(param_1);
    }
    *param_3 = (uchar)local_8;
  }
  return;
}


