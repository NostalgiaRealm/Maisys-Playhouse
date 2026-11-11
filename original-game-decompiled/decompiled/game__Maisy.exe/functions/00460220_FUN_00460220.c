
/* ==== FUN_00460220 @ 00460220 ==== 
 * signature: undefined __thiscall FUN_00460220(void * this, int param_1, undefined2 param_2, undefined2 param_3)
 * body: 00460220-0046037e
 */

void __thiscall FUN_00460220(void *this,int param_1,undefined2 param_2,undefined2 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  int iVar3;
  short sVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_12 [2];
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0046037f;
  *unaff_FS_OFFSET = &local_10;
  sVar4 = 0;
  FUN_0043bd50(local_12,'\x01','\0');
  local_8 = 0;
  FUN_00469760(this,param_1,CONCAT22(extraout_var,param_2),param_3);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 4;
  *(undefined4 *)((int)this + 0x120) = DAT_004da338;
  *(undefined4 *)((int)this + 0x124) = DAT_004da334;
  uVar2 = DAT_004da338;
  *(undefined2 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x128) = uVar2;
  *(byte *)((int)this + 0x9c) = *(byte *)((int)this + 0x9c) & 0xfd;
  *(undefined2 *)((int)this + 0x92) = 0xffff;
  *(undefined4 *)((int)this + 0x13e) = 0;
  *(undefined4 *)((int)this + 0x94) = 6000000;
  do {
    iVar3 = (int)sVar4;
    sVar4 = sVar4 + 1;
    *(undefined4 *)((int)this + iVar3 * 4 + 0x12e) = 0;
  } while (sVar4 < 2);
  bVar1 = *(byte *)((int)this + 0x9c);
  *(undefined2 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0x136) = 0;
  *(byte *)((int)this + 0x9c) = bVar1 & 0xfb;
  *(undefined1 *)((int)this + 0xca) = 0;
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x1000;
  *(undefined2 *)((int)this + 0xb6) = 0;
  *(byte *)((int)this + 0x9c) = bVar1 & 0xdb;
  *(undefined2 *)((int)this + 0xb8) = 0;
  *(undefined2 *)((int)this + 0xb4) = 0;
  *(byte *)((int)this + 0x9c) = bVar1 & 0xdb | 8;
  *(undefined2 *)((int)this + 0xb2) = 0;
  *(byte *)((int)this + 0x9c) = bVar1 & 0xcb | 8;
  *(undefined4 *)((int)this + 0x142) = 0;
  *(undefined4 *)((int)this + 0x13a) = 0;
  *(byte *)((int)this + 0x9c) = bVar1 & 0x8b | 8;
  *(undefined1 *)((int)this + 0x146) = 1;
  *(byte *)((int)this + 0x9c) = bVar1 & 0xb | 8;
  iVar3 = *(int *)this;
  (**(code **)(iVar3 + 0x208))();
  (**(code **)(iVar3 + 0x3ac))();
  local_8 = 0xffffffff;
  *(undefined4 *)((int)this + 0x11c) = 0;
  FUN_00460389();
  *unaff_FS_OFFSET = local_10;
  return;
}


