
/* ==== FUN_004723e0 @ 004723e0 ==== 
 * signature: undefined4 __thiscall FUN_004723e0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 004723e0-0047248c
 */

undefined4 __thiscall FUN_004723e0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  code *pcVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  char local_18 [13];
  int local_b;
  
  if (*(int *)((int)this + 0x15e) == 0) {
    return 0;
  }
  pcVar2 = (code *)FUN_0048b580(*(int *)((int)this + 0x15e),0,0x16,&local_b);
  DAT_004e34cc = (*pcVar2)(local_b,param_1,param_2,param_3);
  if (DAT_004e34cc != 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      FUN_00437520((undefined4 *)local_18,(undefined4 *)((int)this + 0x14a));
      uVar3 = FUN_00455210(0xffffffff,param_3,local_18);
      return uVar3;
    }
    uVar3 = FUN_00464500(this,param_1,param_2,param_3);
    return uVar3;
  }
  return 0;
}


