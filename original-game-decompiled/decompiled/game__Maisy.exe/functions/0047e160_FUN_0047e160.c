
/* ==== FUN_0047e160 @ 0047e160 ==== 
 * signature: undefined __thiscall FUN_0047e160(void * this, int * param_1, short * param_2)
 * body: 0047e160-0047e246
 */

void __thiscall FUN_0047e160(void *this,int *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short local_40;
  int local_3e;
  int local_3a;
  void *local_10;
  int local_c;
  int local_8;
  
  local_10 = this;
  iVar1 = FUN_00441a90(*(void **)((int)this + 0x5a));
  local_c = 0;
  local_8 = iVar1;
  if (param_2 != (short *)0x0) {
    psVar3 = &local_40;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)psVar3 = *(undefined4 *)param_2;
      param_2 = param_2 + 2;
      psVar3 = psVar3 + 2;
    }
    *psVar3 = *param_2;
    if (local_40 != 0) {
      iVar2 = FUN_00414340(local_10,&local_40,1);
      if ((char)iVar2 == '\0') {
        iVar2 = FUN_00414340(local_10,&local_40,0x11);
        if (((((char)iVar2 != '\0') && (-1 < local_3a)) && (local_3e <= iVar1)) &&
           (local_3e <= local_3a)) {
          iVar2 = 0;
          if (0 < local_3e) {
            iVar2 = local_3e;
          }
          local_c = iVar1 + -1;
          if (iVar2 <= iVar1 + -1) {
            local_c = iVar2;
          }
          local_8 = local_c + 1;
          if (local_c + 1 <= local_3a) {
            local_8 = local_3a;
          }
          if (iVar1 <= local_8) {
            local_8 = iVar1;
          }
        }
      }
      else if ((-1 < local_3e) && (local_3e <= iVar1)) {
        iVar2 = 0;
        if (0 < local_3e) {
          iVar2 = local_3e;
        }
        local_c = iVar1 + -1;
        if (iVar2 <= iVar1 + -1) {
          local_c = iVar2;
        }
        local_8 = local_c + 1;
      }
    }
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  return;
}


