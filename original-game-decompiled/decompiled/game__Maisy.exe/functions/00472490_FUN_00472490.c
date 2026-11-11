
/* ==== FUN_00472490 @ 00472490 ==== 
 * signature: int __thiscall FUN_00472490(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 00472490-004724ff
 */

int __thiscall FUN_00472490(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  if (*(int *)((int)this + 0x15e) == 0) {
    return 0;
  }
  pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x15e),0,0x17,&local_8);
  DAT_004e34cc = (*pcVar1)(local_8,param_1,param_2,param_3);
  if (DAT_004e34cc != 0) {
    iVar2 = FUN_00464a90(this,param_1,param_2,param_3);
    return iVar2;
  }
  return 0;
}


