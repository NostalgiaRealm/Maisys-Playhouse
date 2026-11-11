
/* ==== FUN_00429e90 @ 00429e90 ==== 
 * signature: undefined __thiscall FUN_00429e90(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00429e90-00429fec
 */

void __thiscall FUN_00429e90(void *this,int *param_1,short *param_2,short *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  void *this_00;
  code *pcVar4;
  undefined3 extraout_var_00;
  undefined4 *puVar5;
  undefined3 extraout_var_01;
  short sVar6;
  char local_1c [13];
  code *local_f;
  int local_8;
  
  local_f = *(code **)(*(int *)this + 0x24c);
  cVar1 = (*local_f)();
  if (((((cVar1 != '\0') && (*(int *)((int)this + 0x2a) != 0)) && (*(int *)((int)this + 4) != 0)) &&
      ((iVar3 = FUN_00466a80(*(int *)((int)this + 4)), iVar3 != 0 &&
       ((*(byte *)((int)this + 0x29) & 0x80) == 0)))) &&
     (bVar2 = FUN_00437430(param_1,(int *)s_value_004d9864), CONCAT31(extraout_var,bVar2) != 0)) {
    sVar6 = *(short *)((int)this + 0x36);
    iVar3 = *(int *)((int)this + 0x2a);
    this_00 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    FUN_00450be0(this_00,iVar3,sVar6,param_2,param_3);
    return;
  }
  pcVar4 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x16,&local_8);
  DAT_004e34cc = (*pcVar4)(local_8,param_1,param_2,param_3);
  if ((DAT_004e34cc == 0x10000) || (DAT_004e34cc == 0x40001)) {
    bVar2 = FUN_00437430(param_1,(int *)s_classid_004d9988);
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x94))();
      FUN_00437520((undefined4 *)local_1c,puVar5);
      FUN_00455210(0xffffffff,param_3,local_1c);
      return;
    }
    bVar2 = FUN_00437430(param_1,(int *)s_classtype_004d9974);
    if (CONCAT31(extraout_var_01,bVar2) != 0) {
      cVar1 = (*local_f)();
      if (cVar1 == '\0') {
        FUN_00455210(0xffffffff,param_3,s_modifier_004d9b4c);
        return;
      }
      FUN_00455210(0xffffffff,param_3,s_variable_004da400);
      return;
    }
    FUN_0042ca70(this,param_1,param_2,param_3);
  }
  return;
}


