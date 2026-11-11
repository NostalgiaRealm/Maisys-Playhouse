
/* ==== FUN_0042a3b0 @ 0042a3b0 ==== 
 * signature: undefined __thiscall FUN_0042a3b0(void * this, int param_1, int param_2)
 * body: 0042a3b0-0042a439
 */

void __thiscall FUN_0042a3b0(void *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x11,&local_c);
  DAT_004e34cc = (*pcVar1)(local_c,*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_2 + 0xe),
                           (undefined4 *)(param_2 + 8));
  if (DAT_004e34cc != 0) {
    *(undefined4 *)(param_2 + 8) = 0;
  }
  piVar3 = &local_8;
  iVar2 = FUN_00429b00((int)this);
  iVar2 = FUN_00435900(DAT_004dae3c,(ushort)iVar2,piVar3);
  if (iVar2 == 0) {
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(local_8 + 0x46);
    return;
  }
  *(undefined2 *)(param_2 + 0xc) = 0;
  return;
}


