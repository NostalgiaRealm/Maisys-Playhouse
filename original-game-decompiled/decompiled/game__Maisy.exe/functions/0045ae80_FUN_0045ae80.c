
/* ==== FUN_0045ae80 @ 0045ae80 ==== 
 * signature: undefined __thiscall FUN_0045ae80(void * this, int * param_1, int * param_2)
 * body: 0045ae80-0045afec
 */

void __thiscall FUN_0045ae80(void *this,int *param_1,int *param_2)

{
  short sVar1;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 local_16;
  undefined2 uStack_14;
  byte local_12;
  byte bStack_11;
  undefined2 uStack_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  short sStack_c;
  short local_a;
  undefined2 uStack_6;
  
  if (*param_2 != 0x3eb) {
    sVar1 = (short)param_2[1];
    if (sVar1 == 1) {
      uStack_1e = (undefined2)*param_2;
      uStack_1c = (undefined2)((uint)*param_2 >> 0x10);
      uStack_1a = (undefined2)param_2[1];
      uStack_18 = (undefined2)((uint)param_2[1] >> 0x10);
      local_16 = (undefined2)param_2[2];
      uStack_14 = (undefined2)((uint)param_2[2] >> 0x10);
      local_12 = (byte)(short)param_2[3];
      bStack_11 = (byte)((ushort)(short)param_2[3] >> 8);
      (**(code **)(*param_1 + 0x138))(&uStack_1e,0x16);
      if (local_a == 0) {
        local_a = 8;
      }
      FUN_0045a390(this,CONCAT22(sStack_c,CONCAT11(uStack_d,uStack_e)),local_a);
      return;
    }
    if ((sVar1 == 2) || (sVar1 == 3)) {
      local_20 = (undefined2)*param_2;
      uStack_1e = (undefined2)((uint)*param_2 >> 0x10);
      uStack_1c = (undefined2)param_2[1];
      uStack_1a = (undefined2)((uint)param_2[1] >> 0x10);
      uStack_14 = (undefined2)param_2[3];
      uStack_18 = (undefined2)param_2[2];
      local_16 = (undefined2)((uint)param_2[2] >> 0x10);
      (**(code **)(*param_1 + 0x138))(&local_20,0x18);
      uStack_6 = (undefined2)(CONCAT13(uStack_d,CONCAT12(uStack_e,uStack_10)) >> 0x10);
      if (sStack_c == 0) {
        sStack_c = 8;
      }
      FUN_0045a390(this,CONCAT22(uStack_6,uStack_10),sStack_c);
      *(short *)((int)this + 0xb8) = local_a;
      if ((short)param_2[1] == 3) {
        *(byte *)((int)this + 0xbb) = local_12;
      }
      else {
        local_12 = 0;
      }
      *(byte *)((int)this + 0xba) = bStack_11;
      if (((local_12 & 2) != 0) && (DAT_004d99b0 == '\0')) {
        FUN_0043c5b0(0x23,(char *)0x0);
        FUN_004a3538();
      }
      if (((local_12 & 4) != 0) && (DAT_004d99b4 == '\0')) {
        FUN_0043c5b0(0x24,(char *)0x0);
        FUN_004a3538();
      }
      if (((local_12 & 1) != 0) && (DAT_004d99b8 == '\0')) {
        FUN_0043c5b0(0x25,(char *)0x0);
        FUN_004a3538();
      }
      FUN_00444b50(local_a,bStack_11);
    }
  }
  return;
}


