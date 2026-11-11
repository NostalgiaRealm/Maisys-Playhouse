
/* ==== CToolTipCtrl::OnAddTool @ 004a2c35 ==== 
 * signature: long __thiscall OnAddTool(CToolTipCtrl * this, uint param_1, long param_2)
 * body: 004a2c35-004a2cac
 * note: Library Function - Single Match  protected: long __thiscall CToolTipCtrl::OnAddTool(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: long __thiscall CToolTipCtrl::OnAddTool(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long __thiscall CToolTipCtrl::OnAddTool(CToolTipCtrl *this,uint param_1,long param_2)

{
  CMapStringToPtr *this_00;
  void **ppvVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_30 [8];
  int local_10;
  char *local_c;
  void *local_8;
  
  puVar4 = local_30;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *(undefined4 *)param_2;
    param_2 = (long)(param_2 + 4);
    puVar4 = puVar4 + 1;
  }
  if (((local_10 == 0) && (local_c != (char *)0xffffffff)) && (local_c != (char *)0x0)) {
    this_00 = (CMapStringToPtr *)(this + 0x3c);
    iVar3 = CMapStringToPtr::Lookup(this_00,local_c,&local_8);
    if (iVar3 == 0) {
      ppvVar1 = CMapStringToPtr::operator[](this_00,local_c);
      *ppvVar1 = (void *)0x0;
    }
    CMapStringToPtr::LookupKey(this_00,local_c,&local_c);
  }
  lVar2 = (**(code **)(*(int *)this + 0xa4))(0x404,param_1,local_30);
  return lVar2;
}


