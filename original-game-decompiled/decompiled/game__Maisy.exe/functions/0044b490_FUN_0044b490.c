
/* ==== FUN_0044b490 @ 0044b490 ==== 
 * signature: undefined __thiscall FUN_0044b490(void * this, short * param_1)
 * body: 0044b490-0044b617
 */

void __thiscall FUN_0044b490(void *this,short *param_1)

{
  short sVar1;
  short sVar2;
  char cVar3;
  HRGN pHVar4;
  short *local_58;
  short *local_54;
  undefined4 *local_50;
  short *local_4c;
  undefined2 local_48;
  undefined1 local_46;
  HGDIOBJ local_42;
  undefined4 local_3e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar3 = (**(code **)(**(int **)((int)this + 0x3e) + 0x35c))();
  if (cVar3 == '\0') {
    *param_1 = 0;
    (**(code **)(**(int **)((int)this + 0x3e) + 0x38c))(&local_c,0);
    (**(code **)(**(int **)((int)this + 0x3e) + 0x3a0))(&local_14,0);
    (**(code **)(**(int **)((int)this + 0x3e) + 0x398))(&local_1c,0);
    if (*(void **)((int)this + 0x48) == (void *)0x0) {
      *param_1 = 1;
      if ((((local_1c == (short)local_c) && (local_18 == (short)local_8)) &&
          (local_1a == local_c._2_2_)) && (local_16 == local_8._2_2_)) {
        param_1[5] = 0;
        param_1[6] = 0;
      }
      else {
        pHVar4 = CreateRectRgn((int)local_14,(int)local_12,(int)local_10,(int)local_e);
        *(HRGN *)(param_1 + 5) = pHVar4;
      }
    }
    else {
      local_58 = &local_1c;
      local_54 = &local_14;
      local_48 = 0;
      local_46 = 0;
      local_50 = &local_c;
      local_42 = (HGDIOBJ)0x0;
      local_3e = 0;
      local_4c = local_54;
      FUN_0048bde0(*(void **)((int)this + 0x48),&local_58);
      FUN_0048be10(*(void **)((int)this + 0x48),&local_58);
      if (local_42 != (HGDIOBJ)0x0) {
        DeleteObject(local_42);
      }
      *param_1 = 1;
      *(undefined4 *)(param_1 + 5) = local_3e;
    }
    if (*param_1 == 1) {
      if (*(HRGN *)(param_1 + 5) != (HRGN)0x0) {
        OffsetRgn(*(HRGN *)(param_1 + 5),-(int)(short)local_c,-(int)local_c._2_2_);
      }
      sVar2 = local_c._2_2_;
      sVar1 = (short)local_8 - (short)local_c;
      local_c = 0;
      local_8 = CONCAT22(local_8._2_2_ - sVar2,sVar1);
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = local_8;
    }
    (**(code **)(**(int **)((int)this + 0x3e) + 0x364))(param_1);
  }
  cVar3 = (**(code **)(**(int **)((int)this + 0x3e) + 0x35c))();
  if (cVar3 != '\0') {
    (**(code **)(**(int **)((int)this + 0x3e) + 0x360))(param_1,1);
  }
  return;
}


