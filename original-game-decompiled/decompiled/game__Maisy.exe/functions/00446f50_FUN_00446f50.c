
/* ==== FUN_00446f50 @ 00446f50 ==== 
 * signature: char __thiscall FUN_00446f50(void * this, int param_1, int param_2, short * param_3, int * param_4)
 * body: 00446f50-00447001
 */

char __thiscall FUN_00446f50(void *this,int param_1,int param_2,short *param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  
  cVar2 = '\x01';
  if (param_1 == 0xcf) {
    pvVar3 = FUN_0046da90(this,'\x01','\x01');
    if (pvVar3 == (void *)0x0) {
      return '\0';
    }
    piVar5 = FUN_0046da90(this,'\x01','\x01');
    cVar1 = (**(code **)(*piVar5 + 0x220))();
    if (cVar1 == '\0') {
      FUN_0042e9f0(*(int **)((int)this + 0x5a));
    }
  }
  else if (param_1 == 0xdc) {
    if (*(int *)((int)this + 0x3a) != 0) {
      iVar4 = FUN_00409590(*(int *)((int)this + 0x3a));
      if ((iVar4 != 0) && (*(char *)(*(int *)((int)this + 0x5a) + 0x6c) != '\0')) {
        FUN_00408460(*(int *)((int)this + 0x3a));
        piVar5 = (int *)FUN_00409590(*(int *)((int)this + 0x3a));
        (**(code **)(*piVar5 + 300))();
      }
    }
  }
  else {
    cVar2 = '\0';
  }
  if (cVar2 == '\0') {
    cVar2 = FUN_00462d50(this,param_1,param_2,param_3,param_4);
  }
  return cVar2;
}


