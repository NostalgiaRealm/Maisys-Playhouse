
/* ==== FUN_00440d30 @ 00440d30 ==== 
 * signature: undefined __thiscall FUN_00440d30(void * this, char param_1)
 * body: 00440d30-00440e1e
 */

void __thiscall FUN_00440d30(void *this,char param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  short local_c [4];
  
  cVar2 = FUN_004413d0((int)this);
  if (cVar2 != '\0') {
    if (param_1 != '\0') {
      cVar2 = FUN_00441b40((int)this);
      if (cVar2 != '\0') {
        FUN_0043fdc0(this);
        goto LAB_00440dfe;
      }
    }
    iVar3 = FUN_00441580(this);
    if (iVar3 == 0) {
      FUN_0043fe00(this);
    }
    goto LAB_00440dfe;
  }
  if (param_1 != '\0') {
    cVar2 = FUN_00440230(this,0x1000);
    if (cVar2 != '\0') {
      FUN_0043fdc0(this);
      goto LAB_00440dfe;
    }
  }
  iVar3 = FUN_00441580(this);
  if (iVar3 == 0) {
LAB_00440da6:
    FUN_0043fe00(this);
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x244);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      iVar3 = (*pcVar1)();
      if (*(int *)(iVar3 + 0x156) != 0x6e705453) {
        iVar3 = (*pcVar1)();
        if (*(int *)(iVar3 + 0x156) != 0x616e7473) goto LAB_00440dad;
      }
      goto LAB_00440da6;
    }
  }
LAB_00440dad:
  local_c[0] = -0x3e9;
  local_c[1] = 0xfc17;
  local_c[2] = 0xfc18;
  local_c[3] = 0xfc18;
  FUN_00441c20(this,local_c);
LAB_00440dfe:
  FUN_004401e0(this,0x800,param_1);
  if (param_1 != '\0') {
    FUN_00441290(this);
  }
  return;
}


