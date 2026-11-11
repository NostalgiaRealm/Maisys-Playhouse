
/* ==== FUN_12003880 @ 12003880 ==== 
 * signature: undefined __thiscall FUN_12003880(void * this, undefined4 param_1)
 * body: 12003880-120038fd
 */

void __thiscall FUN_12003880(void *this,undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_10;
  uint local_c;
  
  *(undefined4 *)((int)this + 0x2e) = param_1;
  FUN_12011340(param_1,*(int *)((int)this + 0x26) << 10,&local_10);
  uVar2 = *(uint *)((int)this + 0x22);
  for (iVar3 = *(int *)((int)this + 0x1e); (local_10 != 0 || (iVar3 != 0)); iVar3 = iVar3 >> 1) {
    uVar1 = local_10 << 0x1f;
    local_10 = local_10 >> 1;
    local_c = uVar1 | local_c >> 1;
    uVar2 = iVar3 << 0x1f | uVar2 >> 1;
  }
  *(uint *)((int)this + 0x32) = local_c / uVar2;
  return;
}


