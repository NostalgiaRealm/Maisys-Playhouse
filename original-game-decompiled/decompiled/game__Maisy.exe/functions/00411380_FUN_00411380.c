
/* ==== FUN_00411380 @ 00411380 ==== 
 * signature: undefined __thiscall FUN_00411380(void * this, int * param_1)
 * body: 00411380-004113d4
 */

void __thiscall FUN_00411380(void *this,int *param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x114))();
  cVar2 = (**(code **)(iVar1 + 0xec))();
  if (cVar2 != '\0') {
    if (*param_1 != 0) {
      FUN_00444560(*param_1);
      *(undefined1 *)((int)param_1 + 0x26) = 0;
      DVar3 = timeGetTime();
      *(uint *)((int)param_1 + 0x1a) = (DVar3 * 6) / 100;
      *(short *)((int)this + 0xc0) = *(short *)((int)this + 0xc0) + 1;
    }
  }
  return;
}


