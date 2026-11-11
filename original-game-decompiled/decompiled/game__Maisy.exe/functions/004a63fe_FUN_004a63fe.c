
/* ==== FUN_004a63fe @ 004a63fe ==== 
 * signature: undefined __thiscall FUN_004a63fe(void * this, LPCSTR param_1, CWnd * param_2)
 * body: 004a63fe-004a644c
 */

void __thiscall FUN_004a63fe(void *this,LPCSTR param_1,CWnd *param_2)

{
  HMODULE hModule;
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL pvVar2;
  
  *(LPCSTR *)((int)this + 0x40) = param_1;
  if (((short)((uint)param_1 >> 0x10) == 0) && (*(int *)((int)this + 0x3c) == 0)) {
    *(uint *)((int)this + 0x3c) = (uint)param_1 & 0xffff;
  }
  iVar1 = FUN_004bafca();
  hModule = *(HMODULE *)(iVar1 + 0xc);
  hResInfo = FindResourceA(hModule,param_1,&DAT_00000005);
  pvVar2 = LoadResource(hModule,hResInfo);
  CDialog::CreateIndirect(this,pvVar2,param_2,hModule);
  return;
}


