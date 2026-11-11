
/* ==== FUN_00481030 @ 00481030 ==== 
 * signature: undefined4 __thiscall FUN_00481030(void * this, short * param_1)
 * body: 00481030-00481075
 */

undefined4 __thiscall FUN_00481030(void *this,short *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  iVar1 = FUN_00455c10(param_1,&local_8,(int *)0x0);
  if ((iVar1 == 0) && (*(int *)(*(int *)((int)this + 0x5a) + 0x7e) != 0)) {
    uVar2 = FUN_0048d143();
    return uVar2;
  }
  return 0;
}


