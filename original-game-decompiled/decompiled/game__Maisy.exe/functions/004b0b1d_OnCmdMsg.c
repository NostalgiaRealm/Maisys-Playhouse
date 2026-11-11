
/* ==== CDocument::OnCmdMsg @ 004b0b1d ==== 
 * signature: int __thiscall OnCmdMsg(CDocument * this, uint param_1, int param_2, void * param_3, AFX_CMDHANDLERINFO * param_4)
 * body: 004b0b1d-004b0b66
 * note: Library Function - Single Match  public: virtual int __thiscall CDocument::OnCmdMsg(unsigned int,int,void *,struct AFX_CMDHANDLERINFO *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDocument::OnCmdMsg(unsigned int,int,void *,struct
   AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CDocument::OnCmdMsg(CDocument *this,uint param_1,int param_2,void *param_3,
                   AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
  iVar1 = FUN_004a79cb(this,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    if ((*(int **)(this + 0x24) != (int *)0x0) &&
       (iVar1 = (**(code **)(**(int **)(this + 0x24) + 0x14))(param_1,param_2,param_3,param_4),
       iVar1 != 0)) {
      return 1;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


