
/* ==== FUN_004b9f49 @ 004b9f49 ==== 
 * signature: CWinThread * __stdcall FUN_004b9f49(void)
 * body: 004b9f49-004ba024
 */

CWinThread * FUN_004b9f49(void)

{
  undefined4 uVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  int iVar5;
  CWinThread *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  CWinThread::CWinThread(this);
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this = &PTR_FUN_004caffc;
  *(undefined4 *)(this + 0x70) = uVar1;
  pAVar2 = AfxGetModuleThreadState();
  *(CWinThread **)(pAVar2 + 4) = this;
  pvVar3 = GetCurrentThread();
  *(HANDLE *)(this + 0x28) = pvVar3;
  DVar4 = GetCurrentThreadId();
  *(DWORD *)(this + 0x2c) = DVar4;
  iVar5 = FUN_004bafca();
  *(CWinThread **)(iVar5 + 4) = this;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined2 *)(this + 0xaa) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined2 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb0) = 0x200;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  *(undefined4 *)(this + 0x7c) = 0;
  *unaff_FS_OFFSET = uVar1;
  return this;
}


