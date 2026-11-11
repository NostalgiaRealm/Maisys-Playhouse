
/* ==== FUN_004ac860 @ 004ac860 ==== 
 * signature: undefined4 __thiscall FUN_004ac860(void * this, LPCSTR param_1)
 * body: 004ac860-004ac8bb
 */

undefined4 __thiscall FUN_004ac860(void *this,LPCSTR param_1)

{
  HMODULE hModule;
  int iVar1;
  undefined4 uVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  DLGTEMPLATE *pDVar3;
  DWORD DVar4;
  
  iVar1 = FUN_004bafca();
  hModule = *(HMODULE *)(iVar1 + 0xc);
  if (hModule == (HMODULE)0x0) {
    uVar2 = 0;
  }
  else {
    hResInfo = FindResourceA(hModule,param_1,&DAT_00000005);
    uVar2 = 0;
    if (hResInfo != (HRSRC)0x0) {
      hResData = LoadResource(hModule,hResInfo);
      pDVar3 = LockResource(hResData);
      DVar4 = SizeofResource(hModule,hResInfo);
      CDialogTemplate::SetTemplate(this,pDVar3,DVar4);
      uVar2 = 1;
    }
  }
  return uVar2;
}


