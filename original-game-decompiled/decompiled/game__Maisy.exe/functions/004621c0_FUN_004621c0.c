
/* ==== FUN_004621c0 @ 004621c0 ==== 
 * signature: undefined __thiscall FUN_004621c0(void * this, short * param_1)
 * body: 004621c0-0046225c
 */

void __thiscall FUN_004621c0(void *this,short *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if ((*(byte *)((int)this + 0x9c) & 4) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    piVar2 = *(int **)((int)this + 0x62);
    while (piVar2 != (int *)0x0) {
      if ((*(byte *)((int)piVar2 + 0x1e) & 4) == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        (**(code **)(*piVar2 + 0x398))(&local_c,0);
        *param_1 = *param_1 + local_c;
        param_1[1] = param_1[1] + local_a;
        piVar2 = *(int **)((int)piVar2 + 0x62);
      }
    }
    uVar1 = *(undefined4 *)param_1;
    *(byte *)((int)this + 0x9c) = *(byte *)((int)this + 0x9c) | 4;
    *(undefined4 *)((int)this + 0xc6) = uVar1;
  }
  else {
    *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0xc6);
  }
  if (*(void **)((int)this + 0x3a) != (void *)0x0) {
    FUN_004031b0(*(void **)((int)this + 0x3a),(undefined4 *)&local_8);
    *param_1 = *param_1 + local_8;
    param_1[1] = param_1[1] + local_6;
  }
  return;
}


