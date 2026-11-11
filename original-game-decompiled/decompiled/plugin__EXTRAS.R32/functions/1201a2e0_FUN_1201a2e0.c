
/* ==== FUN_1201a2e0 @ 1201a2e0 ==== 
 * signature: undefined4 * __thiscall FUN_1201a2e0(void * this, undefined4 param_1, void * param_2)
 * body: 1201a2e0-1201a329
 */

undefined4 * __thiscall FUN_1201a2e0(void *this,undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  
  *(undefined4 *)this = param_1;
  *(void **)((int)this + 4) = param_2;
  iVar2 = FUN_12004bf0(param_2,FUN_1201a2d0,this);
  sVar4 = 0x2f;
  *(int *)((int)this + 8) = iVar2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 500) = 0;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 0x14);
  puVar3 = (undefined4 *)((int)this + 0x14);
  do {
    sVar4 = sVar4 + -1;
    puVar1 = (undefined4 *)((int)puVar3 + 10);
    *puVar3 = puVar1;
    puVar3 = puVar1;
  } while (sVar4 != 0);
  *puVar1 = 0;
  return this;
}


