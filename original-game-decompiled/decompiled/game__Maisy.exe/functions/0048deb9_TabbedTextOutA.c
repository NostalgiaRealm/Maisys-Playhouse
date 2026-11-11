
/* ==== CDC::TabbedTextOutA @ 0048deb9 ==== 
 * signature: CSize __thiscall TabbedTextOutA(CDC * this, int param_1, int param_2, char * param_3, int param_4, int param_5, int * param_6, int param_7)
 * body: 0048deb9-0048def1
 * note: Library Function - Single Match  public: virtual class CSize __thiscall CDC::TabbedTextOutA(int,int,char const *,int,int,int *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual class CSize __thiscall CDC::TabbedTextOutA(int,int,char const *,int,int,int
   *,int)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CDC::TabbedTextOutA(CDC *this,int param_1,int param_2,char *param_3,int param_4,int param_5,
                   int *param_6,int param_7)

{
  LONG LVar1;
  int in_stack_00000020;
  
  LVar1 = ::TabbedTextOutA(*(HDC *)(this + 4),param_2,(int)param_3,(LPCSTR)param_4,param_5,
                           (int)param_6,(INT *)param_7,in_stack_00000020);
  *(int *)param_1 = (int)(short)LVar1;
  *(int *)(param_1 + 4) = (int)(short)((uint)LVar1 >> 0x10);
  return param_1;
}


