
/* ==== FUN_00412c90 @ 00412c90 ==== 
 * signature: undefined4 * __thiscall FUN_00412c90(void * this, int param_1)
 * body: 00412c90-00412d29
 */

undefined4 * __thiscall FUN_00412c90(void *this,int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  DWORD DVar3;
  int iVar4;
  
  *(undefined ***)this = &PTR_FUN_004be8c8;
  DVar3 = timeGetTime();
  iVar4 = FUN_0043c420();
  *(uint *)((int)this + 0xc) = (DVar3 * 6) / 100 + iVar4;
  if (param_1 == 0) {
    DVar3 = timeGetTime();
    iVar4 = FUN_0043c420();
    *(uint *)((int)this + 8) = (DVar3 * 6) / 100 + iVar4;
  }
  else {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  }
  puVar1 = (undefined4 *)((int)this + 0x12);
  *(undefined2 *)((int)this + 0x22) = 0;
  *(int *)((int)this + 4) = param_1;
  bVar2 = *(byte *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x1e) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined4 **)((int)this + 0x16) = puVar1;
  *(undefined4 **)((int)this + 0x1a) = puVar1;
  *(byte *)((int)this + 0x10) = bVar2 & 0xfe;
  *puVar1 = 0;
  *(byte *)((int)this + 0x10) = bVar2 & 0xfe | 2;
  *(byte *)((int)this + 0x10) = bVar2 & 0xf6 | 2;
  *(byte *)((int)this + 0x10) = bVar2 & 0xe6 | 2;
  return this;
}


