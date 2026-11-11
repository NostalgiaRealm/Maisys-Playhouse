
/* ==== FUN_00472500 @ 00472500 ==== 
 * signature: undefined __thiscall FUN_00472500(void * this, int param_1)
 * body: 00472500-0047254e
 */

void __thiscall FUN_00472500(void *this,int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_8;
  
  if ((*(int *)((int)this + 0x52) != param_1) && (*(int *)((int)this + 0x15e) != 0)) {
    pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x15e),1,2,&local_8);
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x166);
    }
    DAT_004e34cc = (*pcVar1)(local_8,uVar2);
  }
  return;
}


