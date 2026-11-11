
/* ==== FUN_00421300 @ 00421300 ==== 
 * signature: SIZE_T __thiscall FUN_00421300(void * this, int param_1)
 * body: 00421300-0042141b
 */

SIZE_T __thiscall FUN_00421300(void *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  HGLOBAL pvVar3;
  SIZE_T SVar4;
  uint uVar5;
  int local_10;
  int local_c;
  SIZE_T local_8;
  
  local_8 = 0;
  iVar2 = *(int *)((int)this + 0x152);
  if (((iVar2 != 0) && (-1 < param_1)) && (param_1 < *(short *)((int)this + 0x176))) {
    pvVar3 = *(HGLOBAL *)(iVar2 + 0x32 + param_1 * 0x3a);
    puVar1 = (undefined1 *)(iVar2 + 0x18 + param_1 * 0x3a);
    if (pvVar3 != (HGLOBAL)0x0) {
      local_8 = GlobalSize(pvVar3);
      FUN_0043f7a0(*(HGLOBAL *)(puVar1 + 0x1a));
      *(undefined4 *)(puVar1 + 0x1a) = 0;
      *puVar1 = 0;
    }
    if ((*(int *)((int)this + 0x15a) != 0) &&
       (pvVar3 = *(HGLOBAL *)(*(int *)((int)this + 0x15a) + param_1 * 4), pvVar3 != (HGLOBAL)0x0)) {
      SVar4 = GlobalSize(pvVar3);
      local_8 = local_8 + SVar4;
      FUN_0043f7a0(*(HGLOBAL *)(*(int *)((int)this + 0x15a) + param_1 * 4));
      *(undefined4 *)(*(int *)((int)this + 0x15a) + param_1 * 4) = 0;
    }
    if (*(int *)((int)this + 0x166) != 0) {
      *(undefined1 *)(param_1 + *(int *)((int)this + 0x166)) = 0;
    }
    if ((*(int *)((int)this + 0x15e) != 0) &&
       (uVar5 = 1, *(int *)(*(int *)((int)this + 0x15e) + 0x26) != 0)) {
      do {
        local_c = 0;
        local_10 = 0;
        FUN_00430370(*(void **)((int)this + 0x15e),uVar5,&local_10);
        if ((param_1 < local_10) || (local_c < param_1)) {
          uVar5 = uVar5 + 1;
        }
        else {
          FUN_00430090(*(void **)((int)this + 0x15e),uVar5);
        }
      } while (uVar5 <= *(uint *)(*(int *)((int)this + 0x15e) + 0x26));
    }
  }
  return local_8;
}


