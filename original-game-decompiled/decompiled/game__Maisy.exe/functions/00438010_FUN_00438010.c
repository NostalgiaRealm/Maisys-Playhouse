
/* ==== FUN_00438010 @ 00438010 ==== 
 * signature: undefined __thiscall FUN_00438010(void * this, int * param_1, undefined4 param_2)
 * body: 00438010-00438102
 */

void __thiscall FUN_00438010(void *this,int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  char *pcVar2;
  int iVar3;
  SIZE_T SVar4;
  SIZE_T SVar5;
  int *piVar6;
  int local_10;
  int local_c;
  
  local_c = 1;
  SVar4 = 0x10;
  if (1 < *(int *)((int)this + 0x7236)) {
    piVar6 = (int *)((int)this + 0x25c);
    do {
      local_10 = 0;
      if (0 < *piVar6) {
        iVar3 = 0;
        SVar5 = SVar4;
        do {
          bVar1 = FUN_00437430((int *)(piVar6[1] + iVar3 + 0x14),(int *)&DAT_004da40c);
          SVar4 = SVar5;
          if ((CONCAT31(extraout_var,bVar1) == 0) &&
             (SVar4 = SVar5 + 0x14, (*(byte *)(piVar6[1] + 0x78 + iVar3) & 8) == 0)) {
            SVar4 = SVar5 + 0x54;
          }
          iVar3 = iVar3 + 0x80;
          local_10 = local_10 + 1;
          *(undefined4 *)(piVar6[1] + -4 + iVar3) = 0;
          SVar5 = SVar4;
        } while (local_10 < *piVar6);
      }
      piVar6 = piVar6 + 0x49;
      local_c = local_c + 1;
    } while (local_c < *(int *)((int)this + 0x7236));
  }
  if (param_2._3_1_ == '\0') {
    iVar3 = (int)this + 0x7240;
    *(int **)((int)this + 0x723c) = param_1;
  }
  else {
    iVar3 = (int)this + 0x7248;
    *(int **)((int)this + 0x7244) = param_1;
  }
  (**(code **)(*param_1 + 0x144))(iVar3);
  pcVar2 = (char *)FUN_00434920(DAT_004d99ac,SVar4,1);
  if (pcVar2 == (char *)0x0) {
    FUN_004a3538();
  }
  FUN_00486d80(param_1,pcVar2,SVar4);
  FUN_00434950(pcVar2);
  return;
}


