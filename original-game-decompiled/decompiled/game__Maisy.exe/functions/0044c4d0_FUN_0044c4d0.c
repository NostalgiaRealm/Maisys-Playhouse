
/* ==== FUN_0044c4d0 @ 0044c4d0 ==== 
 * signature: undefined __thiscall FUN_0044c4d0(void * this, char param_1)
 * body: 0044c4d0-0044c561
 */

void __thiscall FUN_0044c4d0(void *this,char param_1)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  
  cVar2 = FUN_0044c5d0((int)this);
  if (cVar2 == param_1) {
    return;
  }
  cVar2 = FUN_0044bd00(this,1);
  if (cVar2 != '\0') {
    bVar1 = true;
    cVar2 = FUN_0044bd00(this,2);
    if (cVar2 == '\0') goto LAB_0044c4ff;
  }
  bVar1 = false;
LAB_0044c4ff:
  if (bVar1) {
    FUN_0044bb40(this);
  }
  if (param_1 == '\0') {
    FUN_0044c570(this,0);
    FUN_0044c470((int)this);
    FUN_0044c130(this);
  }
  else {
    FUN_0044c280(this);
    cVar2 = FUN_0044c5d0((int)this);
    if (cVar2 != '\0') {
      pcVar3 = DAT_004d99c0;
      if (DAT_004d99c0 == (code *)0x0) {
        pcVar3 = FUN_004145e0;
      }
      FUN_0044c570(this,(int)pcVar3);
    }
  }
  if (bVar1) {
    FUN_0044bbb0(this);
  }
  return;
}


