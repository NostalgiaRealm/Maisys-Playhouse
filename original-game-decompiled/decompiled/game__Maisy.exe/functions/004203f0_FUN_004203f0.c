
/* ==== FUN_004203f0 @ 004203f0 ==== 
 * signature: undefined4 __thiscall FUN_004203f0(void * this, short param_1)
 * body: 004203f0-0042052c
 */

uint __thiscall FUN_004203f0(void *this,short param_1)

{
  SIZE_T SVar1;
  undefined4 in_EAX;
  HLOCAL hMem;
  HPSTR pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_1c;
  undefined4 local_1a;
  int local_12;
  SIZE_T local_e;
  LONG local_8;
  
  if (param_1 == 2) {
    FUN_0040e180(this,(HPSTR)&local_38,0x2e);
    *(undefined4 *)((int)this + 0x16a) = local_38;
    *(undefined4 *)((int)this + 0x16e) = local_34;
    *(undefined4 *)((int)this + 0x172) = local_30;
    *(undefined2 *)((int)this + 0x186) = local_1c;
    *(undefined4 *)((int)this + 0xb8) = local_34;
    *(undefined4 *)((int)this + 0xbc) = local_30;
    *(undefined2 *)((int)this + 0x176) = local_2c;
    *(undefined4 *)((int)this + 0x188) = local_1a;
    FUN_0040e110(this,&local_8);
    if (*(int *)((int)this + 0x188) != 0) {
      hMem = FUN_0043f6f0(local_e);
      if (hMem == (HLOCAL)0x0) {
        FUN_004a3538();
      }
      FUN_0040e0e0(this,*(int *)((int)this + 0x74) + local_12);
      pcVar2 = LocalLock(hMem);
      FUN_0040e180(this,pcVar2,local_e);
      LocalUnlock(hMem);
      *(HLOCAL *)((int)this + 0x18c) = hMem;
      FUN_0040e0e0(this,local_8);
    }
    FUN_0040e110(this,&local_8);
    SVar1 = *(short *)((int)this + 0x176) * 0x3a;
    iVar3 = FUN_00434920(DAT_004d99ac,SVar1,0);
    *(int *)((int)this + 0x152) = iVar3;
    *(SIZE_T *)((int)this + 0x156) = SVar1;
    if (iVar3 == 0) {
      FUN_004a3538();
    }
    uVar4 = FUN_00420530(this,*(undefined4 **)((int)this + 0x152),(int)*(short *)((int)this + 0x176)
                        );
    return uVar4 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


