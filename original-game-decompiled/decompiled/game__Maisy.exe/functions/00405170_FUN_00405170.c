
/* ==== FUN_00405170 @ 00405170 ==== 
 * signature: undefined __thiscall FUN_00405170(void * this, byte * param_1, int * param_2)
 * body: 00405170-00405290
 */

void __thiscall FUN_00405170(void *this,byte *param_1,int *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *local_24;
  short local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined1 local_12;
  int local_8;
  
  if ((*(int *)((int)this + 0x162) == 0) || ((*(byte *)((int)param_2 + 0x1e) & 4) == 0)) {
    if (((*(char *)((int)this + 0xa4) == '\0') ||
        ((((short)param_2[0x18] == 0 && ((*(byte *)((int)param_2 + 0x21) & 0x40) == 0)) &&
         (*(short *)((int)param_2 + 0x22) != 0x43)))) || (*(char *)((int)this + 0xaf) != '\0')) {
      *(undefined1 *)((int)this + 0xa7) = 1;
    }
    else {
      uVar2 = FUN_00430570(*(void **)((int)this + 0x5a),(int)param_2);
      if ((char)uVar2 == '\0') {
        FUN_004306b0(*(void **)((int)this + 0x5a),param_2);
      }
      if ((*param_1 & 0x80) != 0) {
        FUN_00406bb0(this,3,param_2,(undefined4 *)0x0);
        return;
      }
    }
  }
  else {
    local_20 = FUN_00406440(this,param_2);
    if (local_20 != -1) {
      local_1e = FUN_00430190(*(int *)((int)this + 0x52));
      local_12 = *(undefined1 *)((int)this + 0xa4);
      local_1a = *(undefined4 *)(*(int *)((int)this + 0x52) + 0x26);
      local_24 = param_2;
      local_16 = 0x1a;
      pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x162),(int)*(short *)((int)this + 0x166),
                                    (int)*(short *)((int)this + 0x168),&local_8);
      DAT_004e34cc = (*pcVar1)(local_8,&local_24);
      FUN_004301f0(*(int *)((int)this + 0x52));
      if ((*param_1 & 0x80) != 0) {
        FUN_00406bb0(this,3,param_2,(undefined4 *)0x0);
        return;
      }
    }
  }
  return;
}


