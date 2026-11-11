
/* ==== FUN_0044fd70 @ 0044fd70 ==== 
 * signature: undefined __thiscall FUN_0044fd70(void * this, int param_1)
 * body: 0044fd70-0044fe10
 */

void __thiscall FUN_0044fd70(void *this,int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044fe11;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412d60(this,param_1);
  puVar2 = FUN_00412c20(0x4a);
  local_8 = 0;
  this_00 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    this_00 = FUN_0042f8d0(puVar2);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x26) = this_00;
  FUN_0042fb50(this_00,0x10,4,'\0',0);
  *(undefined4 *)((int)this + 0x2a) = 0xffffffff;
  bVar1 = *(byte *)((int)this + 0x30);
  *(byte *)((int)this + 0x30) = bVar1 & 0xfe;
  *(byte *)((int)this + 0x30) = bVar1 & 0xfe | 2;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(byte *)((int)this + 0x30) = bVar1 & 0xfa | 2;
  *(byte *)((int)this + 0x30) = bVar1 & 0xfa | 10;
  *(byte *)((int)this + 0x30) = bVar1 & 0xea | 10;
  *unaff_FS_OFFSET = local_10;
  return;
}


