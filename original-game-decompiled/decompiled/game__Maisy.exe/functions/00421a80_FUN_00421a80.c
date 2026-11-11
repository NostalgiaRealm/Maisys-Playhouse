
/* ==== FUN_00421a80 @ 00421a80 ==== 
 * signature: undefined __thiscall FUN_00421a80(void * this, short param_1, undefined4 param_2, undefined4 param_3, short * param_4, undefined4 param_5, short * param_6, byte * param_7, undefined4 param_8, int * param_9, short * param_10)
 * body: 00421a80-00421d4d
 */

void __thiscall
FUN_00421a80(void *this,short param_1,undefined4 param_2,undefined4 param_3,short *param_4,
            undefined4 param_5,short *param_6,byte *param_7,undefined4 param_8,int *param_9,
            short *param_10)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  HGLOBAL pvVar5;
  SIZE_T *pSVar6;
  SIZE_T SVar7;
  undefined4 uVar8;
  void *local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  char local_14;
  undefined1 local_13;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  (**(code **)(*(int *)this + 0x114))();
  if ((*(byte *)((int)this + 0x6a) & 0x20) == 0) {
    if (((param_1 < *(short *)((int)this + 0x176)) &&
        (cVar1 = (**(code **)(*(int *)this + 0xec))(), cVar1 != '\0')) &&
       (iVar4 = *(int *)((int)this + 0x152), iVar4 != 0)) {
      local_8 = (int)param_1;
      local_c = *(undefined4 *)(iVar4 + 8 + local_8 * 0x3a);
      local_10 = *(undefined4 *)(iVar4 + local_8 * 0x3a + 4);
      if (param_10 != (short *)0x0) {
        iVar4 = (**(code **)(*(int *)this + 0x10))();
        sVar2 = FUN_00403850(*(int *)(iVar4 + 0x82));
        if (((((int)*(short *)((int)this + 0xbc) - (int)param_4[2]) + (int)*param_4 !=
              (int)*(short *)((int)this + 0xb8)) ||
            (((int)*(short *)((int)this + 0xbe) - (int)param_4[3]) + (int)param_4[1] !=
             (int)*(short *)((int)this + 0xba))) ||
           (sVar3 = (**(code **)(*(int *)this + 0x1d8))(), sVar3 != sVar2)) {
          param_10 = (short *)0x0;
        }
      }
      if (param_10 == (short *)0x0) {
        (**(code **)(*(int *)this + 0x1e8))(&local_10,param_4,1);
      }
      else {
        sVar3 = param_4[1] - *(short *)((int)this + 0xba);
        sVar2 = *param_4 - *(short *)((int)this + 0xb8);
        local_10 = CONCAT22(local_10._2_2_ + sVar3,(short)local_10 + sVar2);
        local_c = CONCAT22(local_c._2_2_ + sVar3,(short)local_c + sVar2);
      }
      uVar8 = 0;
      local_30 = *(undefined4 *)((int)this + 0x74);
      local_2c = (int)this + 0x16a;
      local_18 = param_2;
      local_28 = *(undefined4 *)((int)this + 0x152);
      local_1c = (int)this + 0x1a6;
      local_24 = *(undefined4 *)((int)this + 0x15a);
      local_20 = param_3;
      local_34 = this;
      if (((DAT_004da3ac == (int *)0x0) || ((*(byte *)(DAT_004da3ac + 8) & 0x40) == 0)) ||
         (DAT_004da3a0 != this)) {
        local_14 = '\0';
      }
      else {
        sVar2 = FUN_00412fe0((int)DAT_004da3ac);
        local_14 = 0x18 < sVar2;
        cVar1 = (**(code **)(*DAT_004da3ac + 0x138))();
        local_13 = cVar1 != '\0';
        cVar1 = (**(code **)(*DAT_004da3ac + 0x49c))();
        if (cVar1 == '\0') {
          uVar8 = 0xffff;
          (**(code **)(*DAT_004da3ac + 0x348))();
        }
      }
      if (((local_14 == '\0') && (param_10 != (short *)0x0)) && (*(int *)((int)this + 0x1ca) == 0))
      {
        SVar7 = 0;
        if (0 < *(short *)((int)this + 0x176)) {
          iVar4 = (int)*(short *)((int)this + 0x176);
          pSVar6 = (SIZE_T *)(*(int *)((int)this + 0x152) + 0x12);
          do {
            if ((int)SVar7 < (int)*pSVar6) {
              SVar7 = *pSVar6;
            }
            pSVar6 = (SIZE_T *)((int)pSVar6 + 0x3a);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        pvVar5 = FUN_0043f770(SVar7);
        *(HGLOBAL *)((int)this + 0x1ca) = pvVar5;
      }
      *(undefined1 *)((int)this + 0x1df) = 1;
      if (param_10 == (short *)0x0) {
        FUN_00426940((int *)&local_34,local_8,(short *)&local_10,'\0',param_7,param_8,param_9,uVar8,
                     0,param_6);
      }
      else {
        FUN_004273e0((int *)&local_34,local_8,(short *)&local_10,'\0',param_7,param_8,param_9,uVar8,
                     param_10,param_6);
      }
      *(undefined1 *)((int)this + 0x1df) = 0;
      *(undefined4 *)param_6 = local_10;
      *(undefined4 *)(param_6 + 2) = local_c;
      (**(code **)(*(int *)this + 0xc4))(0,1);
    }
  }
  else if (*(char *)((int)this + 0xd0) != '\0') {
    (**(code **)(*(int *)this + 0x168))(param_6,0);
    return;
  }
  return;
}


