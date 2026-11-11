
/* ==== FUN_0041cca0 @ 0041cca0 ==== 
 * signature: undefined __thiscall FUN_0041cca0(void * this, int param_1)
 * body: 0041cca0-0041cdba
 */

void __thiscall FUN_0041cca0(void *this,int param_1)

{
  int iVar1;
  SIZE_T dwBytes;
  short sVar2;
  char cVar3;
  byte bVar4;
  HGLOBAL hMem;
  HPSTR pcVar5;
  SIZE_T SVar6;
  undefined4 local_c;
  short local_8;
  short sStack_6;
  
  if (*(char *)((int)this + 0xf2) == '\0') {
    iVar1 = *(int *)this;
    cVar3 = (**(code **)(iVar1 + 0x15c))(0xe);
    if (cVar3 == '\0') {
      if (param_1 != 0) {
        bVar4 = FUN_0047a240(param_1);
        if (bVar4 == 0) {
          local_c._2_2_ = (short)((uint)*(undefined4 *)((int)this + 0xb8) >> 0x10);
          sVar2 = local_c._2_2_;
          local_c._0_2_ = (short)*(undefined4 *)((int)this + 0xb8);
          local_8 = (short)*(undefined4 *)((int)this + 0xbc);
          local_8 = local_8 - (short)local_c;
          sStack_6 = (short)((uint)*(undefined4 *)((int)this + 0xbc) >> 0x10);
          local_c = 0;
          _local_8 = CONCAT22(sStack_6 - sVar2,local_8);
          (**(code **)(iVar1 + 0x214))(param_1,1,&local_c);
        }
      }
    }
    else {
      dwBytes = *(SIZE_T *)((int)this + 0x110);
      FUN_0040e0e0(this,*(LONG *)((int)this + 0x74));
      hMem = GlobalAlloc(2,dwBytes);
      *(HGLOBAL *)((int)this + 0x10c) = hMem;
      if (hMem != (HGLOBAL)0x0) {
        pcVar5 = GlobalLock(hMem);
        SVar6 = FUN_0040e180(this,pcVar5,dwBytes);
        if (SVar6 != dwBytes) {
          GlobalUnlock(*(HGLOBAL *)((int)this + 0x10c));
          GlobalFree(*(HGLOBAL *)((int)this + 0x10c));
          return;
        }
        GlobalUnlock(*(HGLOBAL *)((int)this + 0x10c));
        FUN_0041d1e0(this);
        SVar6 = *(SIZE_T *)((int)this + 0x110);
        *(SIZE_T *)((int)this + 0x110) = dwBytes;
        *(bool *)((int)this + 0xf2) = SVar6 == dwBytes;
      }
      (**(code **)(iVar1 + 0xc4))(0,1);
    }
    *(undefined2 *)((int)this + 0x24) = 1;
  }
  return;
}


