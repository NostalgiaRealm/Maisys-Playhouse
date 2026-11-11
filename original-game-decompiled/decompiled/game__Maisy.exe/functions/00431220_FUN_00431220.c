
/* ==== FUN_00431220 @ 00431220 ==== 
 * signature: undefined __thiscall FUN_00431220(void * this, int * param_1)
 * body: 00431220-00431289
 */

void __thiscall FUN_00431220(void *this,int *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  DWORD DVar4;
  
  cVar3 = '\x01';
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x114))();
  cVar2 = (**(code **)(iVar1 + 0xec))();
  if (cVar2 != '\0') {
    if (*param_1 != 0) {
      cVar3 = FUN_00444560(*param_1);
    }
    if (cVar3 == '\0') {
      DAT_004da36c = DAT_004da36c + 1;
      *(undefined1 *)((int)param_1 + 0x26) = 0;
      DVar4 = timeGetTime();
      *(uint *)((int)param_1 + 0x1a) = (DVar4 * 6) / 100;
      *(short *)((int)this + 0xc0) = *(short *)((int)this + 0xc0) + 1;
    }
  }
  return;
}


