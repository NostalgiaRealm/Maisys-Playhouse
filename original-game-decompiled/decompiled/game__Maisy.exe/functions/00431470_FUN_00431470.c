
/* ==== FUN_00431470 @ 00431470 ==== 
 * signature: undefined __thiscall FUN_00431470(void * this, undefined4 * param_1, char param_2)
 * body: 00431470-004314f6
 */

void __thiscall FUN_00431470(void *this,undefined4 *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  short sVar3;
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    cVar2 = FUN_00444810((undefined4 *)*param_1);
    if (cVar2 == '\0') {
      DAT_004da36c = DAT_004da36c + -1;
    }
    FUN_00444690((LPVOID)*param_1);
    *param_1 = 0;
    sVar3 = *(short *)((int)this + 0xc0) + -1;
    *(short *)((int)this + 0xc0) = sVar3;
    if (sVar3 == 0) {
      (**(code **)(*(int *)this + 0x80))(0x7fffffff,0x31);
    }
  }
  *(undefined1 *)((int)this + 0xf8) = 0;
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x19c))();
  if (param_2 != '\0') {
    (**(code **)(iVar1 + 0x80))(0x7fffffff,0x4b);
  }
  return;
}


