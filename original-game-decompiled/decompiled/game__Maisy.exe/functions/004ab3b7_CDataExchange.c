
/* ==== CDataExchange::CDataExchange @ 004ab3b7 ==== 
 * signature: undefined __thiscall CDataExchange(CDataExchange * this, CWnd * param_1, int param_2)
 * body: 004ab3b7-004ab3cf
 * note: Library Function - Single Match  public: __thiscall CDataExchange::CDataExchange(class CWnd *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CDataExchange::CDataExchange(class CWnd *,int)
   
   Library: Visual Studio 1998 Release */

CDataExchange * __thiscall
CDataExchange::CDataExchange(CDataExchange *this,CWnd *param_1,int param_2)

{
  *(int *)this = param_2;
  *(CWnd **)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = 0;
  return this;
}


