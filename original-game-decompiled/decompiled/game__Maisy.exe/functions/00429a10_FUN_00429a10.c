
/* ==== FUN_00429a10 @ 00429a10 ==== 
 * signature: int * __thiscall FUN_00429a10(void * this, int param_1)
 * body: 00429a10-00429a8e
 */

int * __thiscall FUN_00429a10(void *this,int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  pvVar4 = this;
  piVar2 = (int *)(**(code **)(*(int *)this + 0x94))();
  piVar2 = FUN_00436b80(DAT_004dae3c,param_1,piVar2,(int)pvVar4,piVar5);
  iVar3 = FUN_00466a80(param_1);
  if ((*(byte *)(iVar3 + 0x30) & 1) != 0) {
    iVar3 = FUN_00466a80(param_1);
    *(byte *)(iVar3 + 0x30) = *(byte *)(iVar3 + 0x30) & 0xfe;
    *(byte *)(piVar2 + 0xe) = *(byte *)(piVar2 + 0xe) | 4;
  }
  pcVar1 = *(code **)(*piVar2 + 0x24);
  iVar3 = *(int *)((int)this + 4) - param_1;
  (*pcVar1)(CONCAT31((int3)((uint)iVar3 >> 8),'\x01' - (iVar3 == 0)));
  (**(code **)(*piVar2 + 0xe4))(this);
  (*pcVar1)(0);
  *(byte *)(piVar2 + 0xe) = *(byte *)(piVar2 + 0xe) & 0xfb;
  return piVar2;
}


