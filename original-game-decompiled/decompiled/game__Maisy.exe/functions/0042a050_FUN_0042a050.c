
/* ==== FUN_0042a050 @ 0042a050 ==== 
 * signature: undefined __thiscall FUN_0042a050(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 0042a050-0042a112
 */

void __thiscall FUN_0042a050(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  void *this_00;
  code *pcVar4;
  short sVar5;
  int local_8;
  
  cVar1 = (**(code **)(*(int *)this + 0x24c))();
  if (((cVar1 != '\0') && (*(int *)((int)this + 0x2a) != 0)) && (*(int *)((int)this + 4) != 0)) {
    iVar3 = FUN_00466a80(*(int *)((int)this + 4));
    if ((iVar3 != 0) && ((*(byte *)((int)this + 0x29) & 0x80) == 0)) {
      bVar2 = FUN_00437430(param_1,(int *)s_value_004d9864);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        sVar5 = *(short *)((int)this + 0x36);
        iVar3 = *(int *)((int)this + 0x2a);
        this_00 = (void *)FUN_00466a80(*(int *)((int)this + 4));
        FUN_00450cd0(this_00,iVar3,sVar5,param_2,param_3);
        return;
      }
    }
  }
  pcVar4 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x17,&local_8);
  DAT_004e34cc = (*pcVar4)(local_8,param_1,param_2,param_3);
  if ((DAT_004e34cc == 0x10000) || (DAT_004e34cc == 0x40001)) {
    FUN_0042cac0(this,param_1,param_2,param_3);
  }
  return;
}


