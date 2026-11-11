
/* ==== FUN_0044cce0 @ 0044cce0 ==== 
 * signature: undefined __thiscall FUN_0044cce0(void * this, int param_1)
 * body: 0044cce0-0044ce23
 */

void __thiscall FUN_0044cce0(void *this,int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044ce3e;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412d60(this,param_1);
  puVar2 = FUN_00412c20(0x4a);
  local_8 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = FUN_0042f8d0(puVar2);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x30) = puVar3;
  FUN_0042fb50(puVar3,0x1a,0,'\0',0);
  puVar2 = FUN_00412c20(0x4a);
  local_8 = 1;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = FUN_0042f8d0(puVar2);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x34) = puVar3;
  FUN_0042fb50(puVar3,1,0,'\0',0);
  puVar3 = (undefined4 *)FUN_004a5fed(0xe);
  puVar2 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &PTR_FUN_004be070;
    puVar2 = puVar3;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x60) = puVar2;
  FUN_00430500(puVar2,0);
  *(undefined2 *)((int)this + 0x2a) = 0;
  bVar1 = *(byte *)((int)this + 0x46);
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(byte *)((int)this + 0x46) = bVar1 | 4;
  *(byte *)((int)this + 0x46) = bVar1 | 0xc;
  bVar1 = bVar1 & 0xef;
  *(byte *)((int)this + 0x46) = bVar1 | 0xc;
  *(undefined4 *)((int)this + 0x42) = 0;
  *(undefined4 *)((int)this + 0x3e) = 1;
  *(byte *)((int)this + 0x46) = bVar1 | 0xd;
  *(byte *)((int)this + 0x46) = bVar1 | 0xf;
  if (DAT_004dbdc0 != '\0') {
    FUN_0044d560((int)this);
  }
  *(undefined2 *)((int)this + 0x5e) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}


