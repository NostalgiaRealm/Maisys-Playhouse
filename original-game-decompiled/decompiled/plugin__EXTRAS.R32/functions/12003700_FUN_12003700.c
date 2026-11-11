
/* ==== FUN_12003700 @ 12003700 ==== 
 * signature: undefined __thiscall FUN_12003700(void * this, int param_1)
 * body: 12003700-1200387b
 */

void __thiscall FUN_12003700(void *this,int param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int *this_00;
  void *this_01;
  
  iVar3 = *(int *)((int)this + 0x36);
  *(int *)((int)this + 0x36) = param_1;
  uVar4 = (param_1 - iVar3) * 0x400 + *(int *)((int)this + 0x3e);
  *(uint *)((int)this + 0x3e) = uVar4;
  while (*(uint *)((int)this + 0x32) <= uVar4) {
    *(int *)((int)this + 0x3a) = *(int *)((int)this + 0x3a) + 1;
    uVar4 = *(int *)((int)this + 0x3e) - *(uint *)((int)this + 0x32);
    *(uint *)((int)this + 0x3e) = uVar4;
  }
  *(int *)((int)this + 0x42) = param_1;
  if (((*(char *)((int)this + 0x62) == '\0') && (*(int *)((int)this + 0x6e) != 3)) &&
     (*(char *)((int)this + 0x1a) != '\0')) {
    if (*(char *)((int)this + 99) == '\0') {
      if (*(uint *)((int)this + 0x46) <= *(uint *)((int)this + 0x3a)) {
        *(undefined4 *)((int)this + 0x6e) = 3;
        FUN_12011500((int)this + 0x80);
        return;
      }
    }
    else if (*(uint *)((int)this + 0x4e) <= *(uint *)((int)this + 0x3a)) {
      sVar2 = *(short *)((int)this + 0x10);
      this_00 = *(int **)((int)this + 0x12);
      *(undefined4 *)((int)this + 0x3a) = *(undefined4 *)((int)this + 0x4a);
      while (sVar2 = sVar2 + -1, -1 < sVar2) {
        if (((char)this_00[9] == '\0') &&
           ((*(short *)(*this_00 + 0x66) == 0 || (*(char *)((int)this_00 + 0x25) != '\0')))) {
          FUN_120040a0(this_00);
        }
        puVar1 = (uint *)(this_00 + 3);
        FUN_12003e00(this_00,*(int *)((int)this + 0x16));
        if (*puVar1 < *(uint *)((int)this + 0x3a)) {
          do {
            FUN_120045a0((int *)puVar1);
          } while (*puVar1 < *(uint *)((int)this + 0x3a));
        }
        this_00 = this_00 + 0xf;
      }
    }
    if (*(int *)((int)this + 0x6e) == 1) {
      if (*(uint *)((int)this + 0x42) < *(uint *)((int)this + 0x74)) {
        *(char *)((int)this + 0x6d) =
             (char)((*(uint *)((int)this + 0x42) << 7) / *(uint *)((int)this + 0x74));
      }
      else {
        *(undefined1 *)((int)this + 0x6d) = 0x80;
        *(undefined4 *)((int)this + 0x6e) = 0;
      }
    }
    else if (*(int *)((int)this + 0x6e) == 2) {
      if (*(uint *)((int)this + 0x78) + *(int *)((int)this + 0x7c) <= *(uint *)((int)this + 0x42)) {
        *(undefined4 *)((int)this + 0x6e) = 3;
        FUN_12011500((int)this + 0x80);
        return;
      }
      *(char *)((int)this + 0x6d) =
           -0x80 - (char)(((*(uint *)((int)this + 0x42) - *(int *)((int)this + 0x7c)) * 0x80) /
                         *(uint *)((int)this + 0x78));
    }
    sVar2 = *(short *)((int)this + 0x10);
    this_01 = *(void **)((int)this + 0x12);
    while (sVar2 = sVar2 + -1, -1 < sVar2) {
      if (*(uint *)((int)this_01 + 0xc) <= *(uint *)((int)this + 0x3a)) {
        FUN_12004100(this_01,*(uint *)((int)this + 0x3a));
      }
      this_01 = (void *)((int)this_01 + 0x3c);
    }
  }
  return;
}


