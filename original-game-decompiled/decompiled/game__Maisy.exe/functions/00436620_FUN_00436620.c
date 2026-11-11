
/* ==== FUN_00436620 @ 00436620 ==== 
 * signature: undefined __thiscall FUN_00436620(void * this, int param_1, int param_2, short param_3)
 * body: 00436620-0043668b
 */

void __thiscall FUN_00436620(void *this,int param_1,int param_2,short param_3)

{
  int iVar1;
  code *pcVar2;
  
  while( true ) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x66) + param_3 * 4) + param_1;
    *(int *)(param_1 + 0x14) = iVar1;
    pcVar2 = (code *)FUN_0048b4b0(0,iVar1,9);
    DAT_004e34cc = (*pcVar2)(iVar1);
    if (param_3 == 0) break;
    param_3 = param_3 + -1;
    param_2 = *(int *)((int)this + *(short *)(param_2 + 0x48) * 0x124 + 0x13c) +
              *(short *)(param_2 + 0x4a) * 0x80;
  }
  return;
}


