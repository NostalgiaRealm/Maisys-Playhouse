
/* ==== FUN_004b8240 @ 004b8240 ==== 
 * signature: undefined4 __thiscall FUN_004b8240(void * this, char * param_1, char * param_2, ulong param_3, int * param_4, int param_5, LPCSTR param_6, ulong param_7, void * param_8)
 * body: 004b8240-004b82db
 */

undefined4 __thiscall
FUN_004b8240(void *this,char *param_1,char *param_2,ulong param_3,int *param_4,int param_5,
            LPCSTR param_6,ulong param_7,void *param_8)

{
  int iVar1;
  HWND__ *pHVar2;
  undefined4 uVar3;
  HMENU hMenu;
  
  hMenu = (HMENU)0x0;
  if (param_6 != (LPCSTR)0x0) {
    iVar1 = FUN_004bafca();
    hMenu = LoadMenuA(*(HINSTANCE *)(iVar1 + 0xc),param_6);
    if (hMenu == (HMENU)0x0) {
      (**(code **)(*(int *)this + 0xa8))();
      return 0;
    }
  }
  CString::operator=((CString *)((int)this + 0xac),param_2);
  if (param_5 == 0) {
    pHVar2 = (HWND__ *)0x0;
  }
  else {
    pHVar2 = *(HWND__ **)(param_5 + 0x1c);
  }
  iVar1 = CWnd::CreateEx(this,param_7,param_1,param_2,param_3,*param_4,param_4[1],
                         param_4[2] - *param_4,param_4[3] - param_4[1],pHVar2,hMenu,param_8);
  if (iVar1 == 0) {
    if (hMenu != (HMENU)0x0) {
      DestroyMenu(hMenu);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


