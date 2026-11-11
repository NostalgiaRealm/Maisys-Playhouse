
/* ==== FUN_00481660 @ 00481660 ==== 
 * signature: uint __thiscall FUN_00481660(void * this, int * param_1)
 * body: 00481660-00481793
 */

uint __thiscall FUN_00481660(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  
  bVar5 = false;
  iVar1 = *(int *)this;
  cVar4 = (**(code **)(iVar1 + 0x10c))();
  if (cVar4 != '\0') {
    (**(code **)(iVar1 + 0x130))(&local_14,0xe);
    *(undefined4 *)((int)this + 0x134) = local_14;
    *(undefined4 *)((int)this + 0x138) = local_10;
    *(undefined4 *)((int)this + 0x13c) = local_c;
    *(undefined2 *)((int)this + 0x140) = local_8;
    if ((*(byte *)((int)this + 0x15a) & 1) != 0) {
      uVar2 = *(uint *)((int)this + 0x136);
      uVar3 = *(uint *)((int)this + 0x13a);
      *(uint *)((int)this + 0x136) =
           (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
      uVar2 = *(uint *)((int)this + 0x13e);
      *(uint *)((int)this + 0x13a) =
           (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8;
      *(uint *)((int)this + 0x13e) =
           (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
    }
    bVar5 = *(int *)((int)this + 0x136) == -0x55aa5a5b;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = *(int *)((int)this + 0x134);
    param_1[1] = *(int *)((int)this + 0x138);
    param_1[2] = *(int *)((int)this + 0x13c);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)((int)this + 0x140);
  }
  return -(uint)!bVar5 & 0x10000;
}


