
/* ==== FUN_00469c30 @ 00469c30 ==== 
 * signature: char __fastcall FUN_00469c30(int * param_1)
 * body: 00469c30-00469cd1
 */

char __fastcall FUN_00469c30(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  void *this;
  uint local_c [2];
  
  if (((*(uint *)((int)param_1 + 0x7e) != 0) && ((*(byte *)(param_1 + 0x12) & 1) != 0)) &&
     ((*(uint *)((int)param_1 + 0x7e) & 0x80000000) == 0)) {
    this = (void *)0x0;
    iVar1 = *param_1;
    iVar3 = (**(code **)(iVar1 + 0x10))();
    if (*(short *)(param_1[1] + 0x22) == 0x6b) {
      cVar2 = (**(code **)(iVar1 + 0x210))();
      if (cVar2 != '\0') {
        return '\0';
      }
      (**(code **)(iVar1 + 0x28))(local_c);
      return '\x01' - ((local_c[0] & 0x8000000) == 0);
    }
    if (iVar3 != 0) {
      this = *(void **)(iVar3 + 0x82);
    }
    if (this == (void *)0x0) {
      return '\0';
    }
    uVar4 = FUN_00403790(this,param_1,'\x01');
    if ((char)uVar4 == '\0') {
      return '\x01';
    }
  }
  return '\0';
}


