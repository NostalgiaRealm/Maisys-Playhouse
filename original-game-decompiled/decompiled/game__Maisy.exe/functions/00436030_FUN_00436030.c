
/* ==== FUN_00436030 @ 00436030 ==== 
 * signature: undefined __thiscall FUN_00436030(void * this, int param_1, int * param_2, int param_3)
 * body: 00436030-004360a1
 */

void __thiscall FUN_00436030(void *this,int param_1,int *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  
  *(int *)(param_3 + *param_2 * 4) = *(int *)(param_1 + 0x52) + 8;
  sVar1 = *(short *)(param_1 + 0x4a);
  while( true ) {
    if (sVar1 == -1) {
      return;
    }
    iVar2 = *param_2;
    *param_2 = iVar2 + 1;
    if ((*(short *)(param_1 + 0x4e) == *(short *)(param_1 + 0x4a)) &&
       (*(short *)(param_1 + 0x48) == *(short *)(param_1 + 0x4c))) break;
    param_1 = *(int *)((int)this + *(short *)(param_1 + 0x48) * 0x124 + 0x13c) +
              *(short *)(param_1 + 0x4a) * 0x80;
    *(int *)(param_3 + (iVar2 + 1) * 4) = *(int *)(param_1 + 0x52) + 8;
    sVar1 = *(short *)(param_1 + 0x4a);
  }
  return;
}


