
/* ==== CWnd::CreateEx @ 004a8fc8 ==== 
 * signature: int __thiscall CreateEx(CWnd * this, ulong param_1, char * param_2, char * param_3, ulong param_4, int param_5, int param_6, int param_7, int param_8, HWND__ * param_9, HMENU__ * param_10, void * param_11)
 * body: 004a8fc8-004a908d
 * note: Library Function - Single Match  public: int __thiscall CWnd::CreateEx(unsigned long,char const *,char const *,unsigned long,int,int,int,int,struct HWND__ *,struct HMENU__ *,void *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::CreateEx(unsigned long,char const *,char const *,unsigned
   long,int,int,int,int,struct HWND__ *,struct HMENU__ *,void *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,int param_5,
              int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  HWND pHVar5;
  undefined3 extraout_var;
  void *local_34;
  HINSTANCE local_30;
  HMENU__ *local_2c;
  HWND__ *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  ulong local_14;
  char *local_10;
  char *local_c;
  ulong local_8;
  
  local_8 = param_1;
  local_c = param_2;
  local_10 = param_3;
  local_14 = param_4;
  local_18 = param_5;
  local_1c = param_6;
  local_20 = param_7;
  local_24 = param_8;
  local_28 = param_9;
  local_2c = param_10;
  iVar2 = FUN_004bafca();
  local_30 = *(HINSTANCE *)(iVar2 + 8);
  local_34 = param_11;
  iVar2 = *(int *)this;
  iVar3 = (**(code **)(iVar2 + 0x60))(&local_34);
  if (iVar3 == 0) {
    (**(code **)(iVar2 + 0xa8))();
    uVar4 = 0;
  }
  else {
    FUN_004a8f34((int)this);
    pHVar5 = CreateWindowExA(local_8,local_c,local_10,local_14,local_18,local_1c,local_20,local_24,
                             local_28,local_2c,local_30,local_34);
    bVar1 = FUN_004a8f79();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      (**(code **)(iVar2 + 0xa8))();
    }
    uVar4 = (uint)(pHVar5 != (HWND)0x0);
  }
  return uVar4;
}


