
/* ==== FUN_004583d0 @ 004583d0 ==== 
 * signature: undefined __thiscall FUN_004583d0(void * this, short * param_1)
 * body: 004583d0-00458430
 */

void __thiscall FUN_004583d0(void *this,short *param_1)

{
  HLOCAL pvVar1;
  int iVar2;
  LPVOID pvVar3;
  SIZE_T local_8;
  
  if (*param_1 == 0x66) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 7);
    return;
  }
  local_8 = 4;
  pvVar1 = FUN_0043f6f0(4);
  *(HLOCAL *)this = pvVar1;
  iVar2 = FUN_00457d30(param_1,*(HLOCAL *)this,&local_8,(int *)0x0);
  *(int *)((int)this + 8) = iVar2;
  if (iVar2 == 0) {
    pvVar3 = LocalLock(*(HLOCAL *)this);
    *(LPVOID *)((int)this + 4) = pvVar3;
  }
  return;
}


