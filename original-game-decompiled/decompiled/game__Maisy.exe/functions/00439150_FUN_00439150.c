
/* ==== FUN_00439150 @ 00439150 ==== 
 * signature: undefined __thiscall FUN_00439150(void * this, void * param_1, uint param_2, undefined4 * param_3)
 * body: 00439150-00439212
 */

void __thiscall FUN_00439150(void *this,void *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *this_00;
  bool bVar3;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  short local_16;
  undefined4 local_14;
  undefined4 local_10;
  short local_8;
  
  FUN_0042da80(this,param_1,param_2,param_3);
  if (*(short *)((int)param_1 + 0x16c) < 1) {
    FUN_004390e0(this,local_28);
    bVar3 = local_16 != 0;
    uVar1 = FUN_0043c860((char *)&local_20,(char *)&DAT_004da334);
    uVar2 = FUN_0043c860((char *)&local_1c,(char *)&DAT_004da338);
    if ((bVar3 || (char)uVar1 == '\0') || (char)uVar2 == '\0') {
      this_00 = FUN_0041f760(DAT_004da380,*(int *)((int)this + 4),0x334);
      if (this_00 != (undefined4 *)0x0) {
        *(undefined4 **)((int)this + 0x3e) = this_00;
        FUN_0048bea0(this_00,&local_14);
        local_8 = local_16;
        local_14 = local_1c;
        local_10 = local_20;
        FUN_0048be40(this_00,&local_14);
      }
    }
  }
  return;
}


