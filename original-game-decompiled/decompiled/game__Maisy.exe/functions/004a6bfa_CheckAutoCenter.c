
/* ==== CDialog::CheckAutoCenter @ 004a6bfa ==== 
 * signature: int __thiscall CheckAutoCenter(CDialog * this)
 * body: 004a6bfa-004a6c77
 * note: Library Function - Single Match  public: virtual int __thiscall CDialog::CheckAutoCenter(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDialog::CheckAutoCenter(void)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  HMODULE hModule;
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  uint *puVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  
  puVar2 = *(uint **)(this + 0x48);
  hResData = *(HGLOBAL *)(this + 0x44);
  if (*(int *)(this + 0x40) != 0) {
    iVar1 = FUN_004bafca();
    hModule = *(HMODULE *)(iVar1 + 0xc);
    hResInfo = FindResourceA(hModule,*(LPCSTR *)(this + 0x40),&DAT_00000005);
    hResData = LoadResource(hModule,hResInfo);
  }
  if (hResData != (HGLOBAL)0x0) {
    puVar2 = LockResource(hResData);
  }
  iVar1 = 1;
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
    if (*(short *)((int)puVar2 + 2) == -1) {
      sVar4 = *(short *)((int)puVar2 + 0x12);
      uVar3 = puVar2[3];
      sVar5 = (short)puVar2[5];
    }
    else {
      sVar4 = *(short *)((int)puVar2 + 10);
      sVar5 = (short)puVar2[3];
    }
    if ((((uVar3 & 0x1801) != 0) || (sVar4 != 0)) || (iVar1 = 1, sVar5 != 0)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


