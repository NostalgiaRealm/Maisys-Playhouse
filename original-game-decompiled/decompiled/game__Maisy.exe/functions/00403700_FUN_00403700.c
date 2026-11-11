
/* ==== FUN_00403700 @ 00403700 ==== 
 * signature: undefined __thiscall FUN_00403700(void * this, int * param_1)
 * body: 00403700-00403754
 */

void __thiscall FUN_00403700(void *this,int *param_1)

{
  HPALETTE pHVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x8a) != 0) {
    pHVar1 = (HPALETTE)FUN_00411dc0(param_1);
    if (param_1 == (int *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x150))();
    }
    FUN_0047bdb0(*(void **)((int)this + 0x8a),uVar2,pHVar1);
    FUN_0047bdb0(DAT_004da388,uVar2,pHVar1);
  }
  return;
}


