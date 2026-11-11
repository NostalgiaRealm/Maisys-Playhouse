
/* ==== FUN_0044b310 @ 0044b310 ==== 
 * signature: undefined __fastcall FUN_0044b310(int param_1)
 * body: 0044b310-0044b481
 */

void __fastcall FUN_0044b310(int param_1)

{
  short sVar1;
  short sVar2;
  char cVar3;
  short *local_88;
  short *local_84;
  undefined4 *local_80;
  short *local_7c;
  undefined2 local_78;
  undefined1 local_76;
  HGDIOBJ local_72;
  HRGN local_6e;
  short local_4c [3];
  undefined4 local_46;
  HRGN local_42;
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
  
  cVar3 = (**(code **)(**(int **)(param_1 + 0x3e) + 0x35c))();
  if (cVar3 == '\0') {
    local_4c[0] = 0;
    (**(code **)(**(int **)(param_1 + 0x3e) + 0x38c))(&local_c,0);
    (**(code **)(**(int **)(param_1 + 0x3e) + 0x3a0))(&local_14,0);
    (**(code **)(**(int **)(param_1 + 0x3e) + 0x398))(&local_1c,0);
    if (*(void **)(param_1 + 0x48) == (void *)0x0) {
      local_4c[0] = 1;
      if ((((local_1c == (short)local_c) && (local_18 == (short)local_8)) &&
          (local_1a == local_c._2_2_)) && (local_16 == local_8._2_2_)) {
        local_42 = (HRGN)0x0;
      }
      else {
        local_42 = CreateRectRgn((int)local_14,(int)local_12,(int)local_10,(int)local_e);
      }
    }
    else {
      local_88 = &local_1c;
      local_84 = &local_14;
      local_78 = 0;
      local_76 = 0;
      local_80 = &local_c;
      local_72 = (HGDIOBJ)0x0;
      local_6e = (HRGN)0x0;
      local_7c = local_84;
      FUN_0048bde0(*(void **)(param_1 + 0x48),&local_88);
      FUN_0048be10(*(void **)(param_1 + 0x48),&local_88);
      if (local_72 != (HGDIOBJ)0x0) {
        DeleteObject(local_72);
      }
      local_4c[0] = 1;
      local_42 = local_6e;
    }
    if (local_4c[0] == 1) {
      if (local_42 != (HRGN)0x0) {
        OffsetRgn(local_42,-(int)(short)local_c,-(int)local_c._2_2_);
      }
      sVar2 = local_c._2_2_;
      sVar1 = (short)local_8 - (short)local_c;
      local_c = 0;
      local_8 = CONCAT22(local_8._2_2_ - sVar2,sVar1);
      local_4c[1] = 0;
      local_4c[2] = 0;
      local_46 = local_8;
    }
    (**(code **)(**(int **)(param_1 + 0x3e) + 0x364))(local_4c);
  }
  return;
}


