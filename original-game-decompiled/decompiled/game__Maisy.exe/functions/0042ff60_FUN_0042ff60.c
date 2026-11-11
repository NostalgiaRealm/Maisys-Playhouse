
/* ==== FUN_0042ff60 @ 0042ff60 ==== 
 * signature: uint __thiscall FUN_0042ff60(void * this, int param_1, void * param_2)
 * body: 0042ff60-0042fff9
 */

uint __thiscall FUN_0042ff60(void *this,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  HLOCAL hMem;
  uint uVar3;
  LPVOID pvVar4;
  
  uVar3 = *(int *)((int)this + 0x26) + 1;
  if (((int)uVar3 < param_1) || (param_1 < 1)) {
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    FUN_004303d0(this,uVar3,0);
    iVar1 = *(int *)((int)this + 0x32);
    iVar2 = *(int *)((int)this + 0x26);
    hMem = *(HLOCAL *)((int)this + 0x36);
    pvVar4 = LocalLock(hMem);
    FUN_0043f500((void *)(param_1 * iVar1 + (int)pvVar4),
                 (void *)((param_1 + -1) * iVar1 + (int)pvVar4),(iVar2 - param_1) * iVar1);
    LocalUnlock(hMem);
    uVar3 = FUN_0042ff10(this,param_1,param_2);
    if ((char)uVar3 == '\0') {
      *(int *)((int)this + 0x26) = *(int *)((int)this + 0x26) + -1;
      return uVar3;
    }
  }
  return uVar3;
}


