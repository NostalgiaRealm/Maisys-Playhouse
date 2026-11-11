
/* ==== CDC::ExtTextOutA @ 0048de93 ==== 
 * signature: int __thiscall ExtTextOutA(CDC * this, int param_1, int param_2, uint param_3, tagRECT * param_4, char * param_5, uint param_6, int * param_7)
 * body: 0048de93-0048deb8
 * note: Library Function - Single Match  public: virtual int __thiscall CDC::ExtTextOutA(int,int,unsigned int,struct tagRECT const *,char const *,unsigned int,int *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDC::ExtTextOutA(int,int,unsigned int,struct tagRECT const *,char
   const *,unsigned int,int *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CDC::ExtTextOutA(CDC *this,int param_1,int param_2,uint param_3,tagRECT *param_4,char *param_5,
                uint param_6,int *param_7)

{
  BOOL BVar1;
  
  BVar1 = ::ExtTextOutA(*(HDC *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return BVar1;
}


