
/* ==== FUN_00436690 @ 00436690 ==== 
 * signature: undefined __thiscall FUN_00436690(void * this, int param_1, ushort param_2)
 * body: 00436690-004366e5
 */

void __thiscall FUN_00436690(void *this,int param_1,ushort param_2)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = *(LPVOID *)(param_1 + -8);
  iVar2 = *(int *)((int)this + (short)(param_2 >> 8 & 0x8f) * 0x124 + 0x13c) +
          (param_2 & 0xff) * 0x80;
  FUN_00436620(this,(int)pvVar1,iVar2,*(short *)(iVar2 + 0x50));
  FUN_00434950(pvVar1);
  return;
}


