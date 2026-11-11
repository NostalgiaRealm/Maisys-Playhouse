
/* ==== FUN_004221e0 @ 004221e0 ==== 
 * signature: undefined __thiscall FUN_004221e0(void * this, int * param_1, uint param_2, undefined4 * param_3)
 * body: 004221e0-00422467
 */

void __thiscall FUN_004221e0(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  HLOCAL hMem;
  LPVOID pvVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 local_e8 [19];
  undefined4 local_9c;
  undefined4 local_94 [18];
  SIZE_T local_4c;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  short local_2c;
  undefined2 local_1c;
  undefined4 local_1a;
  SIZE_T local_e;
  undefined4 local_a;
  
  if (*(short *)(param_3 + 1) != 0) {
    FUN_00486dd0(param_1,local_e8,param_3,0x54);
    FUN_0041e660(this,param_1,(int)local_e8,param_2);
    FUN_0041e7a0(this,param_1,(int)local_e8);
    if ((param_2 & 0x40) != 0) {
      iVar2 = *(int *)this;
      uVar5 = 0;
      uVar1 = FUN_00486c30(param_1);
      uVar1 = (**(code **)(*param_1 + 0x110))(uVar1,local_9c,uVar5);
      (**(code **)(iVar2 + 0x138))(uVar1);
      (**(code **)(iVar2 + 0x160))(0,1);
      *(undefined4 *)((int)this + 0x52) = 0xffffffff;
      FUN_00486d60(param_1,local_48,0xe);
      FUN_00486d60(param_1,&local_38,0x32);
      *(undefined4 *)((int)this + 0x16a) = local_38;
      *(undefined4 *)((int)this + 0x16e) = local_34;
      *(undefined4 *)((int)this + 0x172) = local_30;
      *(short *)((int)this + 0x176) = local_2c;
      *(undefined4 *)((int)this + 0xb8) = local_34;
      *(undefined2 *)((int)this + 0x186) = local_1c;
      *(undefined4 *)((int)this + 0xbc) = local_30;
      *(undefined4 *)((int)this + 0x188) = local_1a;
      *(undefined4 *)((int)this + 400) = local_a;
      iVar2 = FUN_00434920(DAT_004d99ac,local_2c * 0x3a,0);
      *(int *)((int)this + 0x152) = iVar2;
      *(int *)((int)this + 0x156) = local_2c * 0x3a;
      if (iVar2 == 0) {
        FUN_004a3538();
      }
      FUN_00420530(this,*(undefined4 **)((int)this + 0x152),(int)*(short *)((int)this + 0x176));
      *(undefined1 *)(*(int *)((int)this + 0x152) + 0x17) = 1;
      *(undefined4 *)(*(int *)((int)this + 0x152) + 0x2c) = 0;
      if ((*(int *)((int)this + 0x188) == 0) || (*(int *)((int)this + 0x188) == 0x2e524c45)) {
        *(undefined4 *)((int)this + 0x18c) = 0;
        if (local_e != 0) {
          uVar1 = FUN_00434920(DAT_004d99ac,0x400,0);
          *(undefined4 *)(*(int *)((int)this + 0x152) + 0x2c) = uVar1;
          FUN_00486d60(param_1,*(undefined4 *)(*(int *)((int)this + 0x152) + 0x2c),0x400);
        }
      }
      else {
        hMem = FUN_0043f6f0(local_e);
        if (hMem == (HLOCAL)0x0) {
          FUN_004a3538();
        }
        local_4c = local_e;
        pvVar3 = LocalLock(hMem);
        FUN_00486d60(param_1,pvVar3,local_4c);
        LocalUnlock(hMem);
        *(HLOCAL *)((int)this + 0x18c) = hMem;
      }
      if ((*(byte *)((int)this + 0x16d) & 0x20) != 0) {
        FUN_00422470(this);
      }
      sVar4 = 0;
      if (0 < *(short *)((int)this + 0x176)) {
        do {
          iVar2 = (int)sVar4;
          sVar4 = sVar4 + 1;
          *(undefined4 *)(*(int *)((int)this + 0x152) + 0x32 + iVar2 * 0x3a) = 0;
          *(undefined4 *)(*(int *)((int)this + 0x152) + 0x2c + iVar2 * 0x3a) =
               *(undefined4 *)(*(int *)((int)this + 0x152) + 0x2c);
        } while (sVar4 < *(short *)((int)this + 0x176));
      }
    }
    return;
  }
  FUN_00486dd0(param_1,local_94,param_3,0x4c);
  FUN_0041e660(this,param_1,(int)local_94,param_2);
  FUN_0041e7a0(this,param_1,(int)local_94);
  return;
}


