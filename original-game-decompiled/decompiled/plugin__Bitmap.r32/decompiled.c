/* Ghidra 12.1.4 generated C-like pseudocode for Bitmap.r32.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

/* ==== hlCaptureBitmap @ 10001000 ==== 
 * signature: undefined __cdecl hlCaptureBitmap(int param_1)
 * body: 10001000-100011e3
 */

void __cdecl hlCaptureBitmap(int param_1)

{
                    /* 0x1000  2  hlCaptureBitmap */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 0x40;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x10013044);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_100011f0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_10001220);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_10001260);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_10001290);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x11,FUN_100012d0);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x13,FUN_10001350);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x12,FUN_100013e0);
                if (*(short *)(param_1 + 0xb2) == 2) {
                  FUN_10008f28(param_1,1,0,0x25,FUN_100014d0);
                  if (*(short *)(param_1 + 0xb2) == 2) {
                    FUN_10008f28(param_1,1,0,0xd,FUN_10002de0);
                    if (*(short *)(param_1 + 0xb2) == 2) {
                      FUN_10008f28(param_1,1,0,0xe,FUN_10003f80);
                      if (*(short *)(param_1 + 0xb2) == 2) {
                        FUN_10008f28(param_1,1,0,0x19,FUN_10001560);
                        if (*(short *)(param_1 + 0xb2) == 2) {
                          FUN_10008f28(param_1,1,1,0,FUN_100018e0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_10008f5f(param_1);
  return;
}



/* ==== FUN_100011f0 @ 100011f0 ==== 
 * signature: undefined4 __cdecl FUN_100011f0(undefined2 * param_1)
 * body: 100011f0-10001217
 */

undefined4 __cdecl FUN_100011f0(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 1) = 0x12d;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[0x1b] = 0x14;
  param_1[0x1c] = 1;
  return 0;
}



/* ==== FUN_10001220 @ 10001220 ==== 
 * signature: undefined4 __cdecl FUN_10001220(undefined4 * param_1, undefined4 * param_2)
 * body: 10001220-1000125b
 */

undefined4 __cdecl FUN_10001220(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_100019c0((int)param_1,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_2 + 0x36);
  return 0;
}



/* ==== FUN_10001260 @ 10001260 ==== 
 * signature: undefined __cdecl FUN_10001260(undefined4 * param_1, undefined4 * param_2)
 * body: 10001260-10001281
 */

void __cdecl FUN_10001260(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100011f0((undefined2 *)param_1);
  if (iVar1 == 0) {
    FUN_10001220(param_1,param_2);
  }
  return;
}



/* ==== FUN_10001290 @ 10001290 ==== 
 * signature: undefined4 __cdecl FUN_10001290(int param_1)
 * body: 10001290-100012ce
 */

undefined4 __cdecl FUN_10001290(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  DAT_100173bc = (*pcVar1)(local_4,param_1,param_1 + 10);
  return 0;
}



/* ==== FUN_100012d0 @ 100012d0 ==== 
 * signature: undefined4 __cdecl FUN_100012d0(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 100012d0-10001346
 */

undefined4 __cdecl FUN_100012d0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int local_4;
  
  iVar3 = param_2;
  pcVar4 = (code *)FUN_100089c7(param_2,1,4,&local_4);
  iVar2 = param_1;
  DAT_100173bc = (*pcVar4)(local_4,param_1,&param_2);
  iVar1 = param_2 + 2;
  pcVar4 = (code *)FUN_100089c7(iVar3,1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,iVar2 + 10,&param_2);
  *param_4 = iVar1 + param_2;
  return 0;
}



/* ==== FUN_10001350 @ 10001350 ==== 
 * signature: undefined4 __cdecl FUN_10001350(int param_1, int param_2)
 * body: 10001350-100013d7
 */

undefined4 __cdecl FUN_10001350(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 1;
  pcVar2 = (code *)FUN_100089c7(param_2,1,7,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&local_4,1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
  return 0;
}



/* ==== FUN_100013e0 @ 100013e0 ==== 
 * signature: undefined4 __cdecl FUN_100013e0(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 100013e0-100014c7
 */

undefined4 __cdecl FUN_100013e0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  if ((short)param_4 < 1) {
    pcVar1 = (code *)FUN_100089c7(param_2,1,6,&param_4);
    DAT_100173bc = (*pcVar1)(param_4,param_1);
    pcVar1 = (code *)FUN_100089c7(iVar2,1,6,&param_4);
    iVar2 = param_4;
  }
  else {
    pcVar1 = (code *)FUN_100089c7(param_2,1,8,&param_2);
    DAT_100173bc = (*pcVar1)(param_2,&param_4,1);
    if ((short)param_4 != 1) {
      return 0x10000;
    }
    pcVar1 = (code *)FUN_100089c7(iVar2,1,6,&param_2);
    DAT_100173bc = (*pcVar1)(param_2,param_1);
    pcVar1 = (code *)FUN_100089c7(iVar2,1,6,&param_2);
    iVar2 = param_2;
  }
  DAT_100173bc = (*pcVar1)(iVar2,param_1 + 10);
  *(undefined2 *)(param_1 + 0x36) = 0x14;
  *(undefined2 *)(param_1 + 0x38) = 1;
  return 0;
}



/* ==== FUN_100014d0 @ 100014d0 ==== 
 * signature: undefined4 __cdecl FUN_100014d0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 100014d0-10001551
 */

undefined4 __cdecl FUN_100014d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int local_4;
  
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&local_4);
  uVar3 = param_3;
  uVar2 = param_2;
  iVar1 = param_1;
  DAT_100173bc = (*pcVar4)(local_4,param_2,param_3,param_1);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 10);
  return 0;
}



/* ==== FUN_10001560 @ 10001560 ==== 
 * signature: undefined4 __cdecl FUN_10001560(int param_1, int param_2)
 * body: 10001560-100017ca
 */

undefined4 __cdecl FUN_10001560(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int local_50;
  undefined2 uStack_4c;
  undefined4 uStack_4a;
  undefined2 local_44;
  int local_42;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined4 local_3a;
  undefined4 local_36;
  undefined4 local_32;
  undefined2 uStack_2c;
  undefined4 uStack_2a;
  
  iVar2 = param_1;
  uVar3 = 0x10000;
  if ((*(int *)(param_2 + 0xc) == *(int *)(param_1 + 2)) &&
     (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 6))) {
    if (*(short *)(param_1 + 0x38) != 0) {
      local_44 = 3;
      local_42 = param_1;
      local_3e = 1;
      local_3c = 0;
      local_36 = 0;
      local_3a = 0;
      local_32 = 0;
      pcVar4 = (code *)FUN_100089c7(param_1,0,0x20,&param_2);
      DAT_100173bc = (*pcVar4)(param_2,&param_1);
      uStack_4c = 1;
      uStack_4a = 0;
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,7,&param_2);
      DAT_100173bc = (*pcVar4)(param_2,param_1,&local_44,&uStack_4c);
      pcVar4 = (code *)FUN_100089c7(iVar2,0,0x29,&param_2);
      DAT_100173bc = (*pcVar4)(param_2,1);
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x24,&param_2);
      DAT_100173bc = (*pcVar4)(param_2,param_1,local_3a);
      return 0;
    }
    pcVar4 = (code *)FUN_100089c7(param_1,0,0x20,&local_50);
    DAT_100173bc = (*pcVar4)(local_50,&param_2);
    uStack_2c = 0x6a;
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,5,&local_50);
    DAT_100173bc = (*pcVar4)(local_50,param_2,s_globalposition_1001307c,0,&uStack_2c);
    iVar6 = (int)uStack_2a._2_2_;
    iVar5 = (int)(short)uStack_2a;
    uStack_2c = 0x6a;
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,5,&local_50);
    DAT_100173bc = (*pcVar4)(local_50,param_2,s_height_10013068,0,&uStack_2c);
    iVar1 = uStack_2a + iVar6;
    uStack_2c = 0x6a;
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,5,&local_50);
    DAT_100173bc = (*pcVar4)(local_50,param_2,s_width_10013054,0,&uStack_2c);
    FUN_100017d0(iVar2,iVar5,iVar6,uStack_2a + iVar5,iVar1);
    uVar3 = 0;
  }
  return uVar3;
}



/* ==== FUN_100017d0 @ 100017d0 ==== 
 * signature: undefined __cdecl FUN_100017d0(int param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 100017d0-100018d3
 */

void __cdecl FUN_100017d0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  HWND pHVar1;
  HDC hdc;
  int iVar2;
  HGDIOBJ h;
  undefined4 *puVar3;
  HDC hdc_00;
  UINT uCmd;
  undefined4 local_c;
  
  hdc_00 = (HDC)0x0;
  uCmd = 5;
  local_c = (HBITMAP)0x0;
  pHVar1 = GetActiveWindow();
  pHVar1 = GetWindow(pHVar1,uCmd);
  hdc = GetDC(pHVar1);
  if (hdc != (HDC)0x0) {
    iVar2 = GetDeviceCaps(hdc,0xc);
    local_c = FUN_100065a0(hdc,param_4 - param_2,param_5 - param_3,iVar2,(undefined4 *)0x0);
    if (local_c != (HBITMAP)0x0) {
      hdc_00 = CreateCompatibleDC(hdc);
      if (hdc_00 != (HDC)0x0) {
        h = SelectObject(hdc_00,local_c);
        BitBlt(hdc_00,0,0,param_4 - param_2,param_5 - param_3,hdc,param_2,param_3,0xcc0020);
        SelectObject(hdc_00,h);
        puVar3 = FUN_100066d0(hdc,local_c);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_10001920(param_1,puVar3);
          FUN_10006570(puVar3);
        }
      }
    }
    if (hdc != (HDC)0x0) {
      ReleaseDC(pHVar1,hdc);
    }
  }
  if (hdc_00 != (HDC)0x0) {
    DeleteObject(hdc_00);
  }
  if (local_c != (HBITMAP)0x0) {
    DeleteObject(local_c);
  }
  return;
}



/* ==== FUN_100018e0 @ 100018e0 ==== 
 * signature: undefined4 __cdecl FUN_100018e0(int param_1, int param_2, int param_3)
 * body: 100018e0-10001913
 */

undefined4 __cdecl FUN_100018e0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_100071d0(param_2,param_3);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10001920(param_1,puVar1);
    FUN_10006570(puVar1);
  }
  return 0;
}



/* ==== FUN_10001920 @ 10001920 ==== 
 * signature: undefined __cdecl FUN_10001920(int param_1, undefined4 param_2)
 * body: 10001920-100019b7
 */

void __cdecl FUN_10001920(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_10;
  int local_c;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  local_10 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_c);
  DAT_100173bc = (*pcVar1)(local_c,param_1 + 10,param_1,&local_10,0);
  if ((DAT_100173bc == 0) && (local_10 != 0)) {
    uStack_8 = 1;
    uStack_6 = param_2;
    pcVar1 = (code *)FUN_100089c7(local_10,0,0x17,&param_1);
    DAT_100173bc = (*pcVar1)(param_1,s_winvalue_10013090,0,&uStack_8);
  }
  return;
}



/* ==== FUN_100019c0 @ 100019c0 ==== 
 * signature: undefined __cdecl FUN_100019c0(int param_1, undefined2 * param_2, undefined4 param_3)
 * body: 100019c0-10001a41
 */

void __cdecl FUN_100019c0(int param_1,undefined2 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  DAT_100173bc = (*pcVar1)(local_4,param_1,&param_2);
  *param_2 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x19,&param_1);
  DAT_100173bc = (*pcVar1)(param_1,param_2,param_3);
  return;
}



/* ==== hlDisplayBitmap @ 10001a50 ==== 
 * signature: undefined __cdecl hlDisplayBitmap(int param_1)
 * body: 10001a50-10001c33
 */

void __cdecl hlDisplayBitmap(int param_1)

{
                    /* 0x1a50  3  hlDisplayBitmap */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 0x46;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x100130a4);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_10001c40);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_10001c70);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_10001cc0);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_10001cf0);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x11,FUN_10001d30);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x13,FUN_10001de0);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x12,FUN_10001e90);
                if (*(short *)(param_1 + 0xb2) == 2) {
                  FUN_10008f28(param_1,1,0,0x25,FUN_10001fd0);
                  if (*(short *)(param_1 + 0xb2) == 2) {
                    FUN_10008f28(param_1,1,0,0xd,FUN_10002090);
                    if (*(short *)(param_1 + 0xb2) == 2) {
                      FUN_10008f28(param_1,1,0,0xe,FUN_100020f0);
                      if (*(short *)(param_1 + 0xb2) == 2) {
                        FUN_10008f28(param_1,1,0,0x19,FUN_10002150);
                        if (*(short *)(param_1 + 0xb2) == 2) {
                          FUN_10008f28(param_1,1,1,0,FUN_10002430);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_10008f5f(param_1);
  return;
}



/* ==== FUN_10001c40 @ 10001c40 ==== 
 * signature: undefined4 __cdecl FUN_10001c40(undefined2 * param_1)
 * body: 10001c40-10001c6e
 */

undefined4 __cdecl FUN_10001c40(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 1) = 0x12d;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0x17;
  *(undefined4 *)(param_1 + 6) = 0x12e;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



/* ==== FUN_10001c70 @ 10001c70 ==== 
 * signature: undefined4 __cdecl FUN_10001c70(undefined4 * param_1, undefined4 * param_2)
 * body: 10001c70-10001cbd
 */

undefined4 __cdecl FUN_10001c70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  FUN_10002550((int)param_1,(undefined2 *)(param_1 + 5),param_2 + 5);
  return 0;
}



/* ==== FUN_10001cc0 @ 10001cc0 ==== 
 * signature: undefined __cdecl FUN_10001cc0(undefined4 * param_1, undefined4 * param_2)
 * body: 10001cc0-10001ce1
 */

void __cdecl FUN_10001cc0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10001c40((undefined2 *)param_1);
  if (iVar1 == 0) {
    FUN_10001c70(param_1,param_2);
  }
  return;
}



/* ==== FUN_10001cf0 @ 10001cf0 ==== 
 * signature: undefined4 __cdecl FUN_10001cf0(int param_1)
 * body: 10001cf0-10001d2e
 */

undefined4 __cdecl FUN_10001cf0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  DAT_100173bc = (*pcVar1)(local_4,param_1,param_1 + 0x14);
  return 0;
}



/* ==== FUN_10001d30 @ 10001d30 ==== 
 * signature: undefined4 __cdecl FUN_10001d30(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 10001d30-10001dd6
 */

undefined4 __cdecl FUN_10001d30(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int local_4;
  
  iVar2 = param_2;
  pcVar3 = (code *)FUN_100089c7(param_2,1,4,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar3)(local_4,param_1,&param_2);
  iVar4 = param_2 + 2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 10,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x14,&param_2);
  *param_4 = iVar4 + param_2;
  return 0;
}



/* ==== FUN_10001de0 @ 10001de0 ==== 
 * signature: undefined4 __cdecl FUN_10001de0(int param_1, int param_2)
 * body: 10001de0-10001e8c
 */

undefined4 __cdecl FUN_10001de0(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 1;
  pcVar2 = (code *)FUN_100089c7(param_2,1,7,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&local_4,1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x14);
  return 0;
}



/* ==== FUN_10001e90 @ 10001e90 ==== 
 * signature: undefined4 __cdecl FUN_10001e90(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 10001e90-10001fc7
 */

undefined4 __cdecl FUN_10001e90(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_2;
  if ((short)param_4 < 1) {
    pcVar2 = (code *)FUN_100089c7(param_2,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x14);
    return 0;
  }
  pcVar2 = (code *)FUN_100089c7(param_2,1,8,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&param_4,1);
  if ((short)param_4 == 1) {
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x14);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_10001fd0 @ 10001fd0 ==== 
 * signature: undefined4 __cdecl FUN_10001fd0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 10001fd0-10002088
 */

undefined4 __cdecl FUN_10001fd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int local_4;
  
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&local_4);
  uVar3 = param_3;
  uVar2 = param_2;
  iVar1 = param_1;
  DAT_100173bc = (*pcVar4)(local_4,param_2,param_3,param_1);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 10);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 0x14);
  return 0;
}



/* ==== FUN_10002090 @ 10002090 ==== 
 * signature: undefined4 __cdecl FUN_10002090(int param_1)
 * body: 10002090-100020e3
 */

undefined4 __cdecl FUN_10002090(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_1;
  pcVar2 = (code *)FUN_100089c7(param_1,0,0x21,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,1,iVar1);
  pcVar2 = (code *)FUN_100089c7(iVar1,0,0x21,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,1,iVar1 + 10);
  return 0;
}



/* ==== FUN_100020f0 @ 100020f0 ==== 
 * signature: undefined4 __cdecl FUN_100020f0(int param_1)
 * body: 100020f0-10002143
 */

undefined4 __cdecl FUN_100020f0(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_1;
  pcVar2 = (code *)FUN_100089c7(param_1,0,0x21,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,2,iVar1);
  pcVar2 = (code *)FUN_100089c7(iVar1,0,0x21,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,2,iVar1 + 10);
  return 0;
}



/* ==== FUN_10002150 @ 10002150 ==== 
 * signature: undefined4 __cdecl FUN_10002150(int param_1, int param_2)
 * body: 10002150-10002425
 */

undefined4 __cdecl FUN_10002150(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int local_2c;
  undefined2 uStack_28;
  undefined4 uStack_26;
  undefined2 uStack_20;
  undefined4 uStack_1e;
  undefined2 uStack_18;
  int iStack_16;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 uStack_e;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  iVar2 = param_1;
  uVar3 = 0x10000;
  iVar1 = *(int *)(param_2 + 0xc);
  if ((iVar1 == *(int *)(param_1 + 2)) && (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 6))) {
    pcVar4 = (code *)FUN_100089c7(param_1,0,0x20,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,&param_2);
    param_1 = 0;
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,iVar2 + 0x14,iVar2,&param_1,0);
    uStack_28 = 1;
    uStack_26 = 0;
    pcVar4 = (code *)FUN_100089c7(param_1,0,0x16,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,s_height_10013068,0,&uStack_28);
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,6,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,param_2,s_height_10013068,0,&uStack_28);
    pcVar4 = (code *)FUN_100089c7(param_1,0,0x16,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,s_width_10013054,0,&uStack_28);
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,6,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,param_2,s_width_10013054,0,&uStack_28);
    if (*(char *)(iVar2 + 0x40) == '\0') {
      uStack_20 = 1;
      uStack_1e = 0;
      uStack_18 = 1;
      iStack_16 = iVar2;
      uStack_12 = 1;
      uStack_10 = 0;
      uStack_a = 0;
      uStack_e = 0;
      uStack_6 = 0;
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,7,&local_2c);
      DAT_100173bc = (*pcVar4)(local_2c,param_2,&uStack_18,&uStack_20);
      *(undefined1 *)(iVar2 + 0x40) = 1;
      *(undefined4 *)(iVar2 + 0x42) = uStack_e;
    }
    pcVar4 = (code *)FUN_100089c7(iVar2,0,0x29,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,0);
    return 0;
  }
  if ((((iVar1 == *(int *)(param_1 + 0xc)) && (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10))
       ) || (iVar1 == 0x7d2)) && (*(char *)(param_1 + 0x40) != '\0')) {
    pcVar4 = (code *)FUN_100089c7(param_1,0,0x20,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,&param_2);
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x24,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,param_2,*(undefined4 *)(iVar2 + 0x42));
    pcVar4 = (code *)FUN_100089c7(iVar2,0,0x29,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,0);
    *(undefined1 *)(iVar2 + 0x40) = 0;
    uVar3 = 0;
  }
  return uVar3;
}



/* ==== FUN_10002430 @ 10002430 ==== 
 * signature: undefined4 __cdecl FUN_10002430(int param_1, int param_2, int param_3)
 * body: 10002430-100024a9
 */

undefined4 __cdecl FUN_10002430(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = param_2;
  psVar5 = *(short **)(param_2 + 8);
  sVar1 = psVar5[2];
  sVar2 = *psVar5;
  sVar3 = psVar5[1];
  sVar4 = psVar5[3];
  iVar7 = FUN_100024b0(param_1);
  if (iVar7 == 0) {
    return 0x10000;
  }
  FUN_10006070(iVar7,&param_2,&param_1);
  if (*(int *)(param_2 + 4) == (int)sVar1 - (int)sVar2) {
    iVar8 = *(int *)(param_2 + 8);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 == (int)sVar4 - (int)sVar3) {
      FUN_100072e0(iVar6,param_3,iVar7);
    }
  }
  return 0;
}



/* ==== FUN_100024b0 @ 100024b0 ==== 
 * signature: undefined4 __cdecl FUN_100024b0(int param_1)
 * body: 100024b0-1000254a
 */

undefined4 __cdecl FUN_100024b0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_10;
  int local_c;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  uVar2 = 0;
  local_10 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_c);
  DAT_100173bc = (*pcVar1)(local_c,param_1 + 0x14,param_1,&local_10,0);
  if ((DAT_100173bc == 0) && (local_10 != 0)) {
    uStack_8 = 1;
    uStack_6 = 0;
    pcVar1 = (code *)FUN_100089c7(local_10,0,0x16,&param_1);
    DAT_100173bc = (*pcVar1)(param_1,s_winvalue_10013090,0,&uStack_8);
    if (DAT_100173bc == 0) {
      uVar2 = uStack_6;
    }
  }
  return uVar2;
}



/* ==== FUN_10002550 @ 10002550 ==== 
 * signature: undefined __cdecl FUN_10002550(int param_1, undefined2 * param_2, undefined4 param_3)
 * body: 10002550-100025d1
 */

void __cdecl FUN_10002550(int param_1,undefined2 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  DAT_100173bc = (*pcVar1)(local_4,param_1,&param_2);
  *param_2 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x19,&param_1);
  DAT_100173bc = (*pcVar1)(param_1,param_2,param_3);
  return;
}



/* ==== hlImportBitmap @ 100025e0 ==== 
 * signature: undefined __cdecl hlImportBitmap(int param_1)
 * body: 100025e0-100027e6
 */

void __cdecl hlImportBitmap(int param_1)

{
                    /* 0x25e0  4  hlImportBitmap */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 0x6e;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x100130b4);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_100027f0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_10002830);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_10002890);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_100028c0);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x11,FUN_10002940);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x13,FUN_10002a50);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x12,FUN_10002b50);
                if (*(short *)(param_1 + 0xb2) == 2) {
                  FUN_10008f28(param_1,1,0,0x25,FUN_10002d20);
                  if (*(short *)(param_1 + 0xb2) == 2) {
                    FUN_10008f28(param_1,1,0,0xd,FUN_10002de0);
                    if (*(short *)(param_1 + 0xb2) == 2) {
                      FUN_10008f28(param_1,1,0,0xe,FUN_10003f80);
                      if (*(short *)(param_1 + 0xb2) == 2) {
                        FUN_10008f28(param_1,1,0,0x19,FUN_10002f00);
                        if (*(short *)(param_1 + 0xb2) == 2) {
                          FUN_10008f28(param_1,1,0,0x16,FUN_10002e10);
                          if (*(short *)(param_1 + 0xb2) == 2) {
                            FUN_10008f28(param_1,1,0,0x17,FUN_10002e80);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_10008f5f(param_1);
  return;
}



/* ==== FUN_100027f0 @ 100027f0 ==== 
 * signature: undefined4 __cdecl FUN_100027f0(undefined2 * param_1)
 * body: 100027f0-10002824
 */

undefined4 __cdecl FUN_100027f0(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 1) = 0x12d;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0x14;
  param_1[6] = 0;
  param_1[7] = 0x14;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x1f] = 0;
  return 0;
}



/* ==== FUN_10002830 @ 10002830 ==== 
 * signature: undefined4 __cdecl FUN_10002830(undefined4 * param_1, undefined4 * param_2)
 * body: 10002830-10002882
 */

undefined4 __cdecl FUN_10002830(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  FUN_10003410((int)param_1,(undefined2 *)((int)param_1 + 0x12),(int)param_2 + 0x12);
  FUN_10003410((int)param_1,(undefined2 *)((int)param_1 + 0x3e),(int)param_2 + 0x3e);
  return 0;
}



/* ==== FUN_10002890 @ 10002890 ==== 
 * signature: undefined __cdecl FUN_10002890(undefined4 * param_1, undefined4 * param_2)
 * body: 10002890-100028b1
 */

void __cdecl FUN_10002890(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100027f0((undefined2 *)param_1);
  if (iVar1 == 0) {
    FUN_10002830(param_1,param_2);
  }
  return;
}



/* ==== FUN_100028c0 @ 100028c0 ==== 
 * signature: undefined4 __cdecl FUN_100028c0(int param_1)
 * body: 100028c0-10002936
 */

undefined4 __cdecl FUN_100028c0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar2)(local_4,param_1,param_1 + 0x12);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,iVar1 + 0x3e);
  return 0;
}



/* ==== FUN_10002940 @ 10002940 ==== 
 * signature: undefined4 __cdecl FUN_10002940(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 10002940-10002a46
 */

undefined4 __cdecl FUN_10002940(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int local_4;
  
  iVar2 = param_2;
  pcVar3 = (code *)FUN_100089c7(param_2,1,4,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar3)(local_4,param_1,&param_2);
  iVar4 = param_2 + 2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 10,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0xe,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x12,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x3e,&param_2);
  *param_4 = iVar4 + param_2;
  return 0;
}



/* ==== FUN_10002a50 @ 10002a50 ==== 
 * signature: undefined4 __cdecl FUN_10002a50(int param_1, int param_2)
 * body: 10002a50-10002b46
 */

undefined4 __cdecl FUN_10002a50(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 1;
  pcVar2 = (code *)FUN_100089c7(param_2,1,7,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&local_4,1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0xe);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x12);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3e);
  return 0;
}



/* ==== FUN_10002b50 @ 10002b50 ==== 
 * signature: undefined4 __cdecl FUN_10002b50(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 10002b50-10002d1f
 */

undefined4 __cdecl FUN_10002b50(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_2;
  if ((short)param_4 < 1) {
    pcVar2 = (code *)FUN_100089c7(param_2,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0xe);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x12);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x3e);
    return 0;
  }
  pcVar2 = (code *)FUN_100089c7(param_2,1,8,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&param_4,1);
  if ((short)param_4 == 1) {
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0xe);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x12);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3e);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_10002d20 @ 10002d20 ==== 
 * signature: undefined4 __cdecl FUN_10002d20(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 10002d20-10002dd8
 */

undefined4 __cdecl FUN_10002d20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int local_4;
  
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&local_4);
  uVar3 = param_3;
  uVar2 = param_2;
  iVar1 = param_1;
  DAT_100173bc = (*pcVar4)(local_4,param_2,param_3,param_1);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 0x12);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 0x3e);
  return 0;
}



/* ==== FUN_10002de0 @ 10002de0 ==== 
 * signature: undefined4 __cdecl FUN_10002de0(int param_1)
 * body: 10002de0-10002e0c
 */

undefined4 __cdecl FUN_10002de0(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_1;
  pcVar2 = (code *)FUN_100089c7(param_1,0,0x21,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,1,iVar1);
  return 0;
}



/* ==== FUN_10002e10 @ 10002e10 ==== 
 * signature: undefined4 __cdecl FUN_10002e10(int param_1, int * param_2, undefined4 param_3, short * param_4)
 * body: 10002e10-10002e7d
 */

undefined4 __cdecl FUN_10002e10(int param_1,int *param_2,undefined4 param_3,short *param_4)

{
  short *psVar1;
  char cVar2;
  code *pcVar3;
  
  cVar2 = FUN_100086d8(param_2,(int *)s_bitmapvariable_100130c4);
  psVar1 = param_4;
  if (cVar2 != '\0') {
    if ((*param_4 == 0x73) || (*param_4 == 0x6a)) {
      pcVar3 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x19,(int *)&param_2);
      DAT_100173bc = (*pcVar3)(param_2,psVar1,param_1 + 0x3e);
      return 0;
    }
  }
  return 0x10000;
}



/* ==== FUN_10002e80 @ 10002e80 ==== 
 * signature: int __cdecl FUN_10002e80(int param_1, int * param_2)
 * body: 10002e80-10002ef0
 */

int __cdecl FUN_10002e80(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  HGLOBAL pvVar3;
  
  cVar1 = FUN_100086d8(param_2,(int *)s_importbitmap_100130d8);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x6a) = param_1 + 0x12;
    iVar2 = FUN_10002f80(param_1,&param_2);
    if (iVar2 == 0) {
      FUN_100034a0(param_1,param_2);
      pvVar3 = GlobalHandle(param_2);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(param_2);
      GlobalFree(pvVar3);
    }
    return iVar2;
  }
  return 0x10000;
}



/* ==== FUN_10002f00 @ 10002f00 ==== 
 * signature: int __cdecl FUN_10002f00(int param_1, LPCVOID param_2)
 * body: 10002f00-10002f7e
 */

int __cdecl FUN_10002f00(int param_1,LPCVOID param_2)

{
  HGLOBAL pvVar1;
  int iVar2;
  
  iVar2 = 0x10000;
  if ((*(int *)((int)param_2 + 0xc) == *(int *)(param_1 + 2)) &&
     (*(int *)((int)param_2 + 0x10) == *(int *)(param_1 + 6))) {
    if (*(short *)(param_1 + 0x12) == 0x6e) {
      *(int *)(param_1 + 0x6a) = (int)param_2 + 0x26;
    }
    else {
      *(int *)(param_1 + 0x6a) = param_1 + 0x12;
    }
    iVar2 = FUN_10002f80(param_1,&param_2);
    if (iVar2 == 0) {
      FUN_100034a0(param_1,param_2);
      pvVar1 = GlobalHandle(param_2);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_2);
      GlobalFree(pvVar1);
    }
  }
  return iVar2;
}



/* ==== FUN_10002f80 @ 10002f80 ==== 
 * signature: int __cdecl FUN_10002f80(int param_1, undefined4 * param_2)
 * body: 10002f80-1000310a
 */

int __cdecl FUN_10002f80(int param_1,undefined4 *param_2)

{
  char cVar1;
  code *pcVar2;
  BOOL BVar3;
  LPVOID pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  HWND *ppHVar8;
  void **ppvVar9;
  int local_25c;
  char local_258 [4];
  char local_254 [4];
  char local_250;
  tagOFNA local_24c [3];
  char local_100 [256];
  
  *param_2 = 0;
  iVar7 = 0x10000;
  if (*(short *)(param_1 + 0x10) == 0) {
    local_100[0] = '\0';
  }
  else {
    local_254[0] = s_<player>_10013120[4];
    local_254[1] = s_<player>_10013120[5];
    local_254[2] = s_<player>_10013120[6];
    local_254[3] = s_<player>_10013120[7];
    local_258[0] = s_<player>_10013120[0];
    local_258[1] = s_<player>_10013120[1];
    local_258[2] = s_<player>_10013120[2];
    local_258[3] = s_<player>_10013120[3];
    local_250 = s_<player>_10013120[8];
    pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,10,&local_25c);
    DAT_100173bc = (*pcVar2)(local_25c,param_1,local_258,&local_24c[0].pvReserved);
    FUN_10003110(param_1,*(short **)(param_1 + 0x6a),&local_24c[0].pvReserved,0x100);
    FUN_100079f0((char *)&local_24c[0].pvReserved,local_100);
  }
  if (*(short *)(param_1 + 0xc) != 0) {
    local_24c[0].lStructSize = 0x4c;
    ppHVar8 = &local_24c[0].hwndOwner;
    for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppHVar8 = (HWND)0x0;
      ppHVar8 = ppHVar8 + 1;
    }
    local_24c[0].hwndOwner = GetActiveWindow();
    local_24c[0].lpstrFile = local_100;
    local_24c[0].lpstrFilter = s_Bitmap_files____bmp__100130f0;
    local_24c[0].nMaxFile = 0x100;
    local_24c[0].Flags = 0x200002;
    local_24c[0].lpstrDefExt = &DAT_100130ec;
    BVar3 = GetOpenFileNameA(local_24c);
    if (BVar3 == 0) goto LAB_100030b6;
  }
  pvVar4 = FUN_100060b0(local_100);
  *param_2 = pvVar4;
  if (pvVar4 != (LPVOID)0x0) {
    iVar7 = 0;
  }
LAB_100030b6:
  if (*(short *)(param_1 + 0x10) != 0) {
    if (iVar7 == 0) {
      FUN_10007bc0(local_100,(char *)&local_24c[0].pvReserved);
    }
    else {
      local_24c[0].pvReserved._0_1_ = 0;
    }
    uVar6 = 0xffffffff;
    ppvVar9 = &local_24c[0].pvReserved;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *(char *)ppvVar9;
      ppvVar9 = (void **)((int)ppvVar9 + 1);
    } while (cVar1 != '\0');
    FUN_10003290(param_1,*(short **)(param_1 + 0x6a),&local_24c[0].pvReserved,~uVar6 - 1);
  }
  return iVar7;
}



/* ==== FUN_10003110 @ 10003110 ==== 
 * signature: undefined __cdecl FUN_10003110(int param_1, short * param_2, undefined4 * param_3, short param_4)
 * body: 10003110-1000315d
 */

void __cdecl FUN_10003110(int param_1,short *param_2,undefined4 *param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  
  *(undefined1 *)param_3 = 0;
  psVar1 = FUN_10003160(param_1,param_2,(int *)0x0);
  if (*psVar1 == 0x66) {
    sVar2 = param_4 + -1;
    if (*(int *)(psVar1 + 5) < (int)sVar2) {
      sVar2 = psVar1[5];
    }
    FUN_100094f0(param_3,*(undefined4 **)(psVar1 + 7),(int)sVar2);
    *(undefined1 *)((int)param_3 + (int)sVar2) = 0;
  }
  return;
}



/* ==== FUN_10003160 @ 10003160 ==== 
 * signature: short * __cdecl FUN_10003160(int param_1, short * param_2, int * param_3)
 * body: 10003160-1000322f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * __cdecl FUN_10003160(int param_1,short *param_2,int *param_3)

{
  short *psVar1;
  code *pcVar2;
  int local_4;
  
  psVar1 = param_2;
  if ((*param_2 == 0x73) || (*param_2 == 0x69)) {
    param_2 = (short *)0x0;
    pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_4);
    DAT_100173bc = (*pcVar2)(local_4,psVar1,param_1,&param_2,0);
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_2;
    }
    if (param_2 != (short *)0x0) {
      _DAT_100169d0 = 0x6a;
      pcVar2 = (code *)FUN_100089c7((int)param_2,0,0x16,&param_1);
      DAT_100173bc = (*pcVar2)(param_1,s_value_1001312c,0,&DAT_100169d0);
      return (short *)&DAT_100169d0;
    }
    FUN_10003230(*(undefined4 *)(psVar1 + 1),(short *)&DAT_100169d0);
    param_2 = (short *)&DAT_100169d0;
  }
  return param_2;
}



/* ==== FUN_10003230 @ 10003230 ==== 
 * signature: undefined __cdecl FUN_10003230(undefined4 param_1, short * param_2)
 * body: 10003230-10003284
 */

void __cdecl FUN_10003230(undefined4 param_1,short *param_2)

{
  short *psVar1;
  code *pcVar2;
  
  psVar1 = param_2;
  *param_2 = 0x6a;
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,5,(int *)&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1,s_value_1001312c,0,psVar1);
  if (*psVar1 == 0x75) {
    *(undefined4 *)(psVar1 + 3) = param_1;
  }
  return;
}



/* ==== FUN_10003290 @ 10003290 ==== 
 * signature: undefined __cdecl FUN_10003290(int param_1, short * param_2, undefined4 * param_3, int param_4)
 * body: 10003290-1000340f
 */

void __cdecl FUN_10003290(int param_1,short *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  code *pcVar4;
  uint uVar5;
  undefined2 local_14;
  undefined4 local_12;
  int local_e;
  uint local_a;
  undefined4 *local_6;
  
  psVar2 = param_2;
  if ((*param_2 == 0x73) &&
     (psVar3 = FUN_10003160(param_1,param_2,(int *)&param_2), *psVar3 == 0x66)) {
    uVar5 = (uint)(short)param_4;
    local_14 = 0x66;
    iVar1 = uVar5 + 1;
    local_12 = 0xffffffff;
    local_e = 0;
    local_a = 0;
    local_6 = (undefined4 *)0x0;
    if (0 < iVar1) {
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xe,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,&local_6,iVar1);
      if (local_6 != (undefined4 *)0x0) {
        *(undefined1 *)local_6 = 0;
        local_e = iVar1;
      }
    }
    FUN_100094f0(local_6,param_3,uVar5);
    *(undefined1 *)((int)local_6 + uVar5) = 0;
    local_a = uVar5;
    if (param_2 == (short *)0x0) {
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,6,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,*(undefined4 *)(psVar2 + 1),s_value_1001312c,0,&local_14);
    }
    else {
      pcVar4 = (code *)FUN_100089c7((int)param_2,0,0x17,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,s_value_1001312c,0,&local_14);
    }
    if (local_6 != (undefined4 *)0x0) {
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0x10,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,local_6);
    }
  }
  return;
}



/* ==== FUN_10003410 @ 10003410 ==== 
 * signature: undefined __cdecl FUN_10003410(int param_1, undefined2 * param_2, undefined4 param_3)
 * body: 10003410-10003491
 */

void __cdecl FUN_10003410(int param_1,undefined2 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  DAT_100173bc = (*pcVar1)(local_4,param_1,&param_2);
  *param_2 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x19,&param_1);
  DAT_100173bc = (*pcVar1)(param_1,param_2,param_3);
  return;
}



/* ==== FUN_100034a0 @ 100034a0 ==== 
 * signature: undefined __cdecl FUN_100034a0(int param_1, undefined4 param_2)
 * body: 100034a0-10003537
 */

void __cdecl FUN_100034a0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_10;
  int local_c;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  local_10 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_c);
  DAT_100173bc = (*pcVar1)(local_c,param_1 + 0x3e,param_1,&local_10,0);
  if ((DAT_100173bc == 0) && (local_10 != 0)) {
    uStack_8 = 1;
    uStack_6 = param_2;
    pcVar1 = (code *)FUN_100089c7(local_10,0,0x17,&param_1);
    DAT_100173bc = (*pcVar1)(param_1,s_winvalue_10013090,0,&uStack_8);
  }
  return;
}



/* ==== hlPrintBitmap @ 10003540 ==== 
 * signature: undefined __cdecl hlPrintBitmap(int param_1)
 * body: 10003540-10003706
 */

void __cdecl hlPrintBitmap(int param_1)

{
                    /* 0x3540  5  hlPrintBitmap */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 0xa6;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x10013140);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_10003710);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_10003760);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_100037f0);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_10003820);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x11,FUN_100038d0);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x13,FUN_10003a70);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x12,FUN_10003be0);
                if (*(short *)(param_1 + 0xb2) == 2) {
                  FUN_10008f28(param_1,1,0,0x25,FUN_10003e90);
                  if (*(short *)(param_1 + 0xb2) == 2) {
                    FUN_10008f28(param_1,1,0,0xd,FUN_10002de0);
                    if (*(short *)(param_1 + 0xb2) == 2) {
                      FUN_10008f28(param_1,1,0,0xe,FUN_10003f80);
                      if (*(short *)(param_1 + 0xb2) == 2) {
                        FUN_10008f28(param_1,1,0,0x19,FUN_10004040);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_10008f5f(param_1);
  return;
}



/* ==== FUN_10003710 @ 10003710 ==== 
 * signature: undefined4 __cdecl FUN_10003710(undefined2 * param_1)
 * body: 10003710-1000375b
 */

undefined4 __cdecl FUN_10003710(undefined2 *param_1)

{
  param_1[0x1b] = 0x14;
  param_1[0x1d] = 0x14;
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 1) = 0x12d;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 1;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x25] = 0;
  param_1[0x3b] = 0;
  return 0;
}



/* ==== FUN_10003760 @ 10003760 ==== 
 * signature: undefined4 __cdecl FUN_10003760(undefined4 * param_1, undefined4 * param_2)
 * body: 10003760-100037e8
 */

undefined4 __cdecl FUN_10003760(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_10003fb0((int)param_1,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)param_2 + 0x3a);
  *(undefined4 *)((int)param_1 + 0x3e) = *(undefined4 *)((int)param_2 + 0x3e);
  *(undefined2 *)((int)param_1 + 0x42) = *(undefined2 *)((int)param_2 + 0x42);
  param_1[0x11] = param_2[0x11];
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  FUN_10003fb0((int)param_1,(undefined2 *)((int)param_1 + 0x4a),(int)param_2 + 0x4a);
  FUN_10003fb0((int)param_1,(undefined2 *)((int)param_1 + 0x76),(int)param_2 + 0x76);
  return 0;
}



/* ==== FUN_100037f0 @ 100037f0 ==== 
 * signature: undefined __cdecl FUN_100037f0(undefined4 * param_1, undefined4 * param_2)
 * body: 100037f0-10003811
 */

void __cdecl FUN_100037f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10003710((undefined2 *)param_1);
  if (iVar1 == 0) {
    FUN_10003760(param_1,param_2);
  }
  return;
}



/* ==== FUN_10003820 @ 10003820 ==== 
 * signature: undefined4 __cdecl FUN_10003820(int param_1)
 * body: 10003820-100038cc
 */

undefined4 __cdecl FUN_10003820(int param_1)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar2)(local_4,param_1,param_1 + 10);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,iVar1 + 0x4a);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,iVar1 + 0x76);
  return 0;
}



/* ==== FUN_100038d0 @ 100038d0 ==== 
 * signature: undefined4 __cdecl FUN_100038d0(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 100038d0-10003a66
 */

undefined4 __cdecl FUN_100038d0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int local_4;
  
  iVar2 = param_2;
  pcVar3 = (code *)FUN_100089c7(param_2,1,4,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar3)(local_4,param_1,&param_2);
  iVar4 = param_2 + 2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 10,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x36,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x3a,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x3e,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x44,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x4a,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x76,&param_2);
  *param_4 = iVar4 + param_2;
  return 0;
}



/* ==== FUN_10003a70 @ 10003a70 ==== 
 * signature: undefined4 __cdecl FUN_10003a70(int param_1, int param_2)
 * body: 10003a70-10003bd5
 */

undefined4 __cdecl FUN_10003a70(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 1;
  pcVar2 = (code *)FUN_100089c7(param_2,1,7,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&local_4,1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x36);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3a);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3e);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x44);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x4a);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x76);
  return 0;
}



/* ==== FUN_10003be0 @ 10003be0 ==== 
 * signature: undefined4 __cdecl FUN_10003be0(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 10003be0-10003e8d
 */

undefined4 __cdecl FUN_10003be0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_2;
  if ((short)param_4 < 1) {
    pcVar2 = (code *)FUN_100089c7(param_2,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x36);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x3a);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x3e);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x44);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x4a);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x76);
    return 0;
  }
  pcVar2 = (code *)FUN_100089c7(param_2,1,8,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&param_4,1);
  if ((short)param_4 == 1) {
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x36);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3a);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3e);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x44);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x4a);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x76);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_10003e90 @ 10003e90 ==== 
 * signature: undefined4 __cdecl FUN_10003e90(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 10003e90-10003f7f
 */

undefined4 __cdecl FUN_10003e90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int local_4;
  
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&local_4);
  uVar3 = param_3;
  uVar2 = param_2;
  iVar1 = param_1;
  DAT_100173bc = (*pcVar4)(local_4,param_2,param_3,param_1);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 10);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 0x4a);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 0x76);
  return 0;
}



/* ==== FUN_10003f80 @ 10003f80 ==== 
 * signature: undefined4 __cdecl FUN_10003f80(int param_1)
 * body: 10003f80-10003fac
 */

undefined4 __cdecl FUN_10003f80(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_1;
  pcVar2 = (code *)FUN_100089c7(param_1,0,0x21,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,2,iVar1);
  return 0;
}



/* ==== FUN_10003fb0 @ 10003fb0 ==== 
 * signature: undefined __cdecl FUN_10003fb0(int param_1, undefined2 * param_2, undefined4 param_3)
 * body: 10003fb0-10004031
 */

void __cdecl FUN_10003fb0(int param_1,undefined2 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  DAT_100173bc = (*pcVar1)(local_4,param_1,&param_2);
  *param_2 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x19,&param_1);
  DAT_100173bc = (*pcVar1)(param_1,param_2,param_3);
  return;
}



/* ==== FUN_10004040 @ 10004040 ==== 
 * signature: undefined4 __cdecl FUN_10004040(int param_1, int param_2)
 * body: 10004040-10004114
 */

undefined4 __cdecl FUN_10004040(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined2 uStack_8;
  int iStack_6;
  
  iVar1 = param_1;
  uVar2 = 0x10000;
  if ((*(int *)(param_2 + 0xc) == *(int *)(param_1 + 2)) &&
     (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 6))) {
    param_2 = 0;
    pcVar3 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&param_1);
    DAT_100173bc = (*pcVar3)(param_1,iVar1 + 10,iVar1,&param_2,0);
    if ((DAT_100173bc == 0) && (param_2 != 0)) {
      uStack_8 = 1;
      iStack_6 = 0;
      pcVar3 = (code *)FUN_100089c7(param_2,0,0x16,&param_1);
      DAT_100173bc = (*pcVar3)(param_1,s_winvalue_10013090,0,&uStack_8);
      if ((DAT_100173bc == 0) && (iStack_6 != 0)) {
        FUN_10004120(iVar1,iStack_6);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ==== FUN_10004120 @ 10004120 ==== 
 * signature: undefined4 __cdecl FUN_10004120(int param_1, int param_2)
 * body: 10004120-10004413
 */

undefined4 __cdecl FUN_10004120(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined3 extraout_var_01;
  BOOL BVar3;
  int iVar4;
  int DestHeight;
  int iVar5;
  HWND *ppHVar6;
  longlong lVar7;
  int xSrc;
  int ySrc;
  short *SrcHeight;
  UINT iUsage;
  DWORD rop;
  BITMAPINFO *local_98;
  short *local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  LPCSTR local_78;
  LPCSTR local_74;
  void *local_70;
  int local_6c;
  double local_68;
  double local_60;
  DOCINFOA local_58;
  tagPDA local_44;
  
  local_44.lStructSize = 0x42;
  ppHVar6 = &local_44.hwndOwner;
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppHVar6 = (HWND)0x0;
    ppHVar6 = ppHVar6 + 1;
  }
  *(undefined2 *)ppHVar6 = 0;
  iVar5 = 1;
  FUN_10006070(param_2,(int *)&local_98,(int *)&local_70);
  bVar1 = FUN_10004550(&local_44);
  if (((CONCAT31(extraout_var,bVar1) == 0) ||
      (bVar1 = FUN_100045f0((int)&local_44,1), CONCAT31(extraout_var_00,bVar1) == 0)) ||
     (iVar2 = FUN_10004580(local_44.hDC,&local_84,&local_88,&local_90,&local_8c,&local_80),
     iVar2 == 0)) goto LAB_100043dd;
  if (*(int *)(param_1 + 0x40) == 0) {
    if (*(short *)(param_1 + 0x3c) == 0) {
      if ((int)local_78 - local_80 < (local_98->bmiHeader).biWidth) goto LAB_100041fa;
    }
    else if ((local_98->bmiHeader).biHeight < (local_98->bmiHeader).biWidth) {
LAB_100041fa:
      iVar5 = 0;
    }
  }
  else if (*(int *)(param_1 + 0x40) == 2) goto LAB_100041fa;
  bVar1 = FUN_100045f0((int)&local_44,iVar5);
  if ((CONCAT31(extraout_var_01,bVar1) != 0) &&
     (iVar5 = FUN_10004580(local_44.hDC,&local_84,&local_88,&local_90,&local_8c,&local_80),
     iVar5 != 0)) {
    if (*(int *)(param_1 + 0x46) == 1) {
      local_94 = FUN_10004420(param_1,(short *)(param_1 + 0x4a),(int *)0x0);
      local_94 = FUN_10004420(param_1,(short *)(param_1 + 0x76),(int *)0x0);
    }
    iVar5 = FUN_10004640(local_84,local_88,&local_60,&local_68);
    if (iVar5 != 0) {
      local_58.lpszOutput = local_78;
      local_58.lpszDatatype = local_74;
      iVar5 = local_7c;
      iVar2 = local_80;
      if (*(short *)(param_1 + 0x3c) == 0) {
        if (*(int *)(param_1 + 0x46) == 0) {
          lVar7 = __ftol();
          iVar2 = (int)lVar7;
          lVar7 = __ftol();
          iVar5 = (int)lVar7;
        }
      }
      else {
        FUN_100046a0((int)local_98,&local_80,&local_60,&local_68);
      }
      if (*(short *)(param_1 + 0x38) != 0) {
        local_44.Flags = 0x10010c;
        BVar3 = PrintDlgA(&local_44);
        if (BVar3 == 0) goto LAB_100043dd;
      }
      local_58.lpszOutput = (LPCSTR)0x0;
      local_58.lpszDatatype = (LPCSTR)0x0;
      local_58.cbSize = 0x14;
      local_58.fwType = 0;
      local_58.lpszDocName = s_MTropolis_10013150;
      iVar4 = StartDocA(local_44.hDC,&local_58);
      if ((0 < iVar4) && (iVar4 = StartPage(local_44.hDC), 0 < iVar4)) {
        rop = 0xcc0020;
        iUsage = 0;
        SrcHeight = (short *)(local_98->bmiHeader).biHeight;
        iVar4 = (local_98->bmiHeader).biWidth;
        ySrc = 0;
        xSrc = 0;
        local_94 = SrcHeight;
        local_6c = iVar4;
        lVar7 = __ftol();
        DestHeight = (int)lVar7;
        lVar7 = __ftol();
        StretchDIBits(local_44.hDC,iVar2,iVar5,(int)lVar7,DestHeight,xSrc,ySrc,iVar4,(int)SrcHeight,
                      local_70,local_98,iUsage,rop);
        iVar5 = EndPage(local_44.hDC);
        if (0 < iVar5) {
          EndDoc(local_44.hDC);
        }
      }
    }
  }
LAB_100043dd:
  if (local_44.hDC != (HDC)0x0) {
    DeleteDC(local_44.hDC);
  }
  if (local_44.hDevMode != (HGLOBAL)0x0) {
    GlobalFree(local_44.hDevMode);
  }
  if (local_44.hDevNames != (HGLOBAL)0x0) {
    GlobalFree(local_44.hDevNames);
  }
  return 0;
}



/* ==== FUN_10004420 @ 10004420 ==== 
 * signature: short * __cdecl FUN_10004420(int param_1, short * param_2, int * param_3)
 * body: 10004420-100044ef
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * __cdecl FUN_10004420(int param_1,short *param_2,int *param_3)

{
  short *psVar1;
  code *pcVar2;
  int local_4;
  
  psVar1 = param_2;
  if ((*param_2 == 0x73) || (*param_2 == 0x69)) {
    param_2 = (short *)0x0;
    pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_4);
    DAT_100173bc = (*pcVar2)(local_4,psVar1,param_1,&param_2,0);
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_2;
    }
    if (param_2 != (short *)0x0) {
      _DAT_10016a00 = 0x6a;
      pcVar2 = (code *)FUN_100089c7((int)param_2,0,0x16,&param_1);
      DAT_100173bc = (*pcVar2)(param_1,s_value_1001312c,0,&DAT_10016a00);
      return (short *)&DAT_10016a00;
    }
    FUN_100044f0(*(undefined4 *)(psVar1 + 1),(short *)&DAT_10016a00);
    param_2 = (short *)&DAT_10016a00;
  }
  return param_2;
}



/* ==== FUN_100044f0 @ 100044f0 ==== 
 * signature: undefined __cdecl FUN_100044f0(undefined4 param_1, short * param_2)
 * body: 100044f0-10004544
 */

void __cdecl FUN_100044f0(undefined4 param_1,short *param_2)

{
  short *psVar1;
  code *pcVar2;
  
  psVar1 = param_2;
  *param_2 = 0x6a;
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,5,(int *)&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1,s_value_1001312c,0,psVar1);
  if (*psVar1 == 0x75) {
    *(undefined4 *)(psVar1 + 3) = param_1;
  }
  return;
}



/* ==== FUN_10004550 @ 10004550 ==== 
 * signature: bool __cdecl FUN_10004550(LPPRINTDLGA param_1)
 * body: 10004550-1000457c
 */

bool __cdecl FUN_10004550(LPPRINTDLGA param_1)

{
  HWND pHVar1;
  BOOL BVar2;
  
  pHVar1 = GetActiveWindow();
  param_1->hwndOwner = pHVar1;
  param_1->Flags = 0x500;
  BVar2 = PrintDlgA(param_1);
  if (BVar2 == 0) {
    return false;
  }
  return param_1->hDevMode != (HGLOBAL)0x0;
}



/* ==== FUN_10004580 @ 10004580 ==== 
 * signature: undefined4 __cdecl FUN_10004580(HDC param_1, int * param_2, int * param_3, int * param_4, int * param_5, int * param_6)
 * body: 10004580-100045ec
 */

undefined4 __cdecl
FUN_10004580(HDC param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetDeviceCaps(param_1,0x58);
  *param_2 = iVar1;
  iVar1 = GetDeviceCaps(param_1,0x5a);
  *param_3 = iVar1;
  iVar1 = GetDeviceCaps(param_1,8);
  *param_4 = iVar1;
  iVar1 = GetDeviceCaps(param_1,10);
  *param_5 = iVar1;
  iVar1 = GetDeviceCaps(param_1,0x70);
  iVar2 = GetDeviceCaps(param_1,0x71);
  *param_6 = iVar1;
  param_6[1] = iVar2;
  param_6[2] = *param_4 - iVar1;
  param_6[3] = *param_5 - iVar2;
  return 1;
}



/* ==== FUN_100045f0 @ 100045f0 ==== 
 * signature: bool __cdecl FUN_100045f0(int param_1, int param_2)
 * body: 100045f0-10004630
 */

bool __cdecl FUN_100045f0(int param_1,int param_2)

{
  DEVMODEA *lpdm;
  HDC pHVar1;
  
  lpdm = GlobalLock(*(HGLOBAL *)(param_1 + 8));
  (lpdm->field6_0x2c).field0.dmOrientation = 2 - (ushort)(param_2 != 0);
  pHVar1 = ResetDCA(*(HDC *)(param_1 + 0x10),lpdm);
  GlobalUnlock(*(HGLOBAL *)(param_1 + 8));
  return pHVar1 != (HDC)0x0;
}



/* ==== FUN_10004640 @ 10004640 ==== 
 * signature: undefined4 __cdecl FUN_10004640(int param_1, int param_2, double * param_3, double * param_4)
 * body: 10004640-1000469f
 */

undefined4 __cdecl FUN_10004640(int param_1,int param_2,double *param_3,double *param_4)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    return 0;
  }
  iVar1 = GetDeviceCaps(hdc,0x58);
  iVar2 = GetDeviceCaps(hdc,0x5a);
  *param_3 = (double)param_1 / (double)iVar1;
  *param_4 = (double)param_2 / (double)iVar2;
  ReleaseDC((HWND)0x0,hdc);
  return 1;
}



/* ==== FUN_100046a0 @ 100046a0 ==== 
 * signature: undefined __cdecl FUN_100046a0(int param_1, int * param_2, double * param_3, double * param_4)
 * body: 100046a0-1000471a
 */

void __cdecl FUN_100046a0(int param_1,int *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(param_2[2] - *param_2) / ((double)*(int *)(param_1 + 4) * *param_3);
  dVar2 = (double)(param_2[3] - param_2[1]) / ((double)*(int *)(param_1 + 8) * *param_4);
  if (dVar1 < dVar2) {
    dVar2 = dVar1;
  }
  *param_3 = *param_3 * dVar2;
  *param_4 = *param_4 * dVar2;
  return;
}



/* ==== hlSaveBitmap @ 10004720 ==== 
 * signature: undefined __cdecl hlSaveBitmap(int param_1)
 * body: 10004720-100048e6
 */

void __cdecl hlSaveBitmap(int param_1)

{
                    /* 0x4720  6  hlSaveBitmap */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 0x6e;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x1001315c);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_100048f0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_10004930);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_10004a20);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_10004a50);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x11,FUN_10004ad0);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x13,FUN_10004be0);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x12,FUN_10004ce0);
                if (*(short *)(param_1 + 0xb2) == 2) {
                  FUN_10008f28(param_1,1,0,0x25,FUN_10004eb0);
                  if (*(short *)(param_1 + 0xb2) == 2) {
                    FUN_10008f28(param_1,1,0,0xd,FUN_10002de0);
                    if (*(short *)(param_1 + 0xb2) == 2) {
                      FUN_10008f28(param_1,1,0,0xe,FUN_10003f80);
                      if (*(short *)(param_1 + 0xb2) == 2) {
                        FUN_10008f28(param_1,1,0,0x19,FUN_10004f70);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_10008f5f(param_1);
  return;
}



/* ==== FUN_100048f0 @ 100048f0 ==== 
 * signature: undefined4 __cdecl FUN_100048f0(undefined2 * param_1)
 * body: 100048f0-10004924
 */

undefined4 __cdecl FUN_100048f0(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 1) = 0x12d;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[0x1b] = 0x14;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x14;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return 0;
}



/* ==== FUN_10004930 @ 10004930 ==== 
 * signature: undefined4 __cdecl FUN_10004930(undefined4 * param_1, undefined4 * param_2)
 * body: 10004930-10004982
 */

undefined4 __cdecl FUN_10004930(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_10004990((int)param_1,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)param_2 + 0x3a);
  FUN_10004990((int)param_1,(undefined2 *)((int)param_1 + 0x3e),(int)param_2 + 0x3e);
  return 0;
}



/* ==== FUN_10004990 @ 10004990 ==== 
 * signature: undefined __cdecl FUN_10004990(int param_1, undefined2 * param_2, undefined4 param_3)
 * body: 10004990-10004a11
 */

void __cdecl FUN_10004990(int param_1,undefined2 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  DAT_100173bc = (*pcVar1)(local_4,param_1,&param_2);
  *param_2 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x19,&param_1);
  DAT_100173bc = (*pcVar1)(param_1,param_2,param_3);
  return;
}



/* ==== FUN_10004a20 @ 10004a20 ==== 
 * signature: undefined __cdecl FUN_10004a20(undefined4 * param_1, undefined4 * param_2)
 * body: 10004a20-10004a41
 */

void __cdecl FUN_10004a20(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100048f0((undefined2 *)param_1);
  if (iVar1 == 0) {
    FUN_10004930(param_1,param_2);
  }
  return;
}



/* ==== FUN_10004a50 @ 10004a50 ==== 
 * signature: undefined4 __cdecl FUN_10004a50(int param_1)
 * body: 10004a50-10004ac6
 */

undefined4 __cdecl FUN_10004a50(int param_1)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar2)(local_4,param_1,param_1 + 10);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,iVar1 + 0x3e);
  return 0;
}



/* ==== FUN_10004ad0 @ 10004ad0 ==== 
 * signature: undefined4 __cdecl FUN_10004ad0(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 10004ad0-10004bd6
 */

undefined4 __cdecl FUN_10004ad0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int local_4;
  
  iVar2 = param_2;
  pcVar3 = (code *)FUN_100089c7(param_2,1,4,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar3)(local_4,param_1,&param_2);
  iVar4 = param_2 + 2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 10,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x36,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x3a,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x3e,&param_2);
  *param_4 = iVar4 + param_2;
  return 0;
}



/* ==== FUN_10004be0 @ 10004be0 ==== 
 * signature: undefined4 __cdecl FUN_10004be0(int param_1, int param_2)
 * body: 10004be0-10004cd6
 */

undefined4 __cdecl FUN_10004be0(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 1;
  pcVar2 = (code *)FUN_100089c7(param_2,1,7,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&local_4,1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x36);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3a);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3e);
  return 0;
}



/* ==== FUN_10004ce0 @ 10004ce0 ==== 
 * signature: undefined4 __cdecl FUN_10004ce0(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 10004ce0-10004eaf
 */

undefined4 __cdecl FUN_10004ce0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_2;
  if ((short)param_4 < 1) {
    pcVar2 = (code *)FUN_100089c7(param_2,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x36);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x3a);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x3e);
    return 0;
  }
  pcVar2 = (code *)FUN_100089c7(param_2,1,8,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&param_4,1);
  if ((short)param_4 == 1) {
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x36);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3a);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3e);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_10004eb0 @ 10004eb0 ==== 
 * signature: undefined4 __cdecl FUN_10004eb0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 10004eb0-10004f68
 */

undefined4 __cdecl FUN_10004eb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int local_4;
  
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&local_4);
  uVar3 = param_3;
  uVar2 = param_2;
  iVar1 = param_1;
  DAT_100173bc = (*pcVar4)(local_4,param_2,param_3,param_1);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 10);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 0x3e);
  return 0;
}



/* ==== FUN_10004f70 @ 10004f70 ==== 
 * signature: undefined4 __cdecl FUN_10004f70(int param_1, int param_2)
 * body: 10004f70-1000505b
 */

undefined4 __cdecl FUN_10004f70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined2 uStack_8;
  int *piStack_6;
  
  iVar1 = param_1;
  uVar2 = 0x10000;
  if ((*(int *)(param_2 + 0xc) == *(int *)(param_1 + 2)) &&
     (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 6))) {
    if (*(short *)(param_1 + 0x3e) == 0x6e) {
      *(int *)(param_1 + 0x6a) = param_2 + 0x26;
    }
    else {
      *(int *)(param_1 + 0x6a) = param_1 + 0x3e;
    }
    param_2 = 0;
    pcVar3 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&param_1);
    DAT_100173bc = (*pcVar3)(param_1,iVar1 + 10,iVar1,&param_2,0);
    if ((DAT_100173bc == 0) && (param_2 != 0)) {
      uStack_8 = 1;
      piStack_6 = (int *)0x0;
      pcVar3 = (code *)FUN_100089c7(param_2,0,0x16,&param_1);
      DAT_100173bc = (*pcVar3)(param_1,s_winvalue_10013090,0,&uStack_8);
      if ((DAT_100173bc == 0) && (piStack_6 != (int *)0x0)) {
        FUN_10005060(iVar1,piStack_6);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ==== FUN_10005060 @ 10005060 ==== 
 * signature: int __cdecl FUN_10005060(int param_1, int * param_2)
 * body: 10005060-100051cd
 */

int __cdecl FUN_10005060(int param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  HWND *ppHVar7;
  void **ppvVar8;
  tagOFNA local_24c [3];
  char local_100 [256];
  
  iVar6 = 0;
  if (*(short *)(param_1 + 0x38) == 0) {
    if (*(short *)(param_1 + 0x3c) == 0) {
      FUN_10007960(s_image_1001316c,local_100);
    }
    else {
      FUN_100051d0(param_1,*(short **)(param_1 + 0x6a),&local_24c[0].pvReserved,0x100);
      FUN_100079f0((char *)&local_24c[0].pvReserved,local_100);
    }
  }
  else {
    sVar2 = *(short *)(param_1 + 0x3c);
    local_24c[0].lStructSize = 0x4c;
    ppHVar7 = &local_24c[0].hwndOwner;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppHVar7 = (HWND)0x0;
      ppHVar7 = ppHVar7 + 1;
    }
    if (sVar2 == 0) {
      local_100[0] = '\0';
    }
    else {
      FUN_100051d0(param_1,*(short **)(param_1 + 0x6a),&local_24c[0].pvReserved,0x100);
      FUN_100079f0((char *)&local_24c[0].pvReserved,local_100);
    }
    local_24c[0].hwndOwner = GetActiveWindow();
    local_24c[0].lpstrFile = local_100;
    local_24c[0].lpstrFilter = s_Bitmap_files____bmp__100130f0;
    local_24c[0].nMaxFile = 0x100;
    local_24c[0].Flags = 0x200002;
    local_24c[0].lpstrDefExt = &DAT_100130ec;
    BVar3 = GetSaveFileNameA(local_24c);
    if (BVar3 == 0) goto LAB_1000517a;
  }
  iVar4 = FUN_10006190(param_2,local_100);
  if (iVar4 != 0) {
    iVar6 = 1;
  }
LAB_1000517a:
  if (*(short *)(param_1 + 0x3c) != 0) {
    if (iVar6 == 0) {
      local_24c[0].pvReserved._0_1_ = 0;
    }
    else {
      FUN_10007bc0(local_100,(char *)&local_24c[0].pvReserved);
    }
    uVar5 = 0xffffffff;
    ppvVar8 = &local_24c[0].pvReserved;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)ppvVar8;
      ppvVar8 = (void **)((int)ppvVar8 + 1);
    } while (cVar1 != '\0');
    FUN_10005350(param_1,*(short **)(param_1 + 0x6a),&local_24c[0].pvReserved,~uVar5 - 1);
  }
  return iVar6;
}



/* ==== FUN_100051d0 @ 100051d0 ==== 
 * signature: undefined __cdecl FUN_100051d0(int param_1, short * param_2, undefined4 * param_3, short param_4)
 * body: 100051d0-1000521d
 */

void __cdecl FUN_100051d0(int param_1,short *param_2,undefined4 *param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  
  *(undefined1 *)param_3 = 0;
  psVar1 = FUN_10005220(param_1,param_2,(int *)0x0);
  if (*psVar1 == 0x66) {
    sVar2 = param_4 + -1;
    if (*(int *)(psVar1 + 5) < (int)sVar2) {
      sVar2 = psVar1[5];
    }
    FUN_100094f0(param_3,*(undefined4 **)(psVar1 + 7),(int)sVar2);
    *(undefined1 *)((int)param_3 + (int)sVar2) = 0;
  }
  return;
}



/* ==== FUN_10005220 @ 10005220 ==== 
 * signature: short * __cdecl FUN_10005220(int param_1, short * param_2, int * param_3)
 * body: 10005220-100052ef
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * __cdecl FUN_10005220(int param_1,short *param_2,int *param_3)

{
  short *psVar1;
  code *pcVar2;
  int local_4;
  
  psVar1 = param_2;
  if ((*param_2 == 0x73) || (*param_2 == 0x69)) {
    param_2 = (short *)0x0;
    pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_4);
    DAT_100173bc = (*pcVar2)(local_4,psVar1,param_1,&param_2,0);
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_2;
    }
    if (param_2 != (short *)0x0) {
      _DAT_10016a38 = 0x6a;
      pcVar2 = (code *)FUN_100089c7((int)param_2,0,0x16,&param_1);
      DAT_100173bc = (*pcVar2)(param_1,s_value_1001312c,0,&DAT_10016a38);
      return (short *)&DAT_10016a38;
    }
    FUN_100052f0(*(undefined4 *)(psVar1 + 1),(short *)&DAT_10016a38);
    param_2 = (short *)&DAT_10016a38;
  }
  return param_2;
}



/* ==== FUN_100052f0 @ 100052f0 ==== 
 * signature: undefined __cdecl FUN_100052f0(undefined4 param_1, short * param_2)
 * body: 100052f0-10005344
 */

void __cdecl FUN_100052f0(undefined4 param_1,short *param_2)

{
  short *psVar1;
  code *pcVar2;
  
  psVar1 = param_2;
  *param_2 = 0x6a;
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,5,(int *)&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1,s_value_1001312c,0,psVar1);
  if (*psVar1 == 0x75) {
    *(undefined4 *)(psVar1 + 3) = param_1;
  }
  return;
}



/* ==== FUN_10005350 @ 10005350 ==== 
 * signature: undefined __cdecl FUN_10005350(int param_1, short * param_2, undefined4 * param_3, int param_4)
 * body: 10005350-100054cf
 */

void __cdecl FUN_10005350(int param_1,short *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  code *pcVar4;
  uint uVar5;
  undefined2 local_14;
  undefined4 local_12;
  int local_e;
  uint local_a;
  undefined4 *local_6;
  
  psVar2 = param_2;
  if ((*param_2 == 0x73) &&
     (psVar3 = FUN_10005220(param_1,param_2,(int *)&param_2), *psVar3 == 0x66)) {
    uVar5 = (uint)(short)param_4;
    local_14 = 0x66;
    iVar1 = uVar5 + 1;
    local_12 = 0xffffffff;
    local_e = 0;
    local_a = 0;
    local_6 = (undefined4 *)0x0;
    if (0 < iVar1) {
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xe,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,&local_6,iVar1);
      if (local_6 != (undefined4 *)0x0) {
        *(undefined1 *)local_6 = 0;
        local_e = iVar1;
      }
    }
    FUN_100094f0(local_6,param_3,uVar5);
    *(undefined1 *)((int)local_6 + uVar5) = 0;
    local_a = uVar5;
    if (param_2 == (short *)0x0) {
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,6,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,*(undefined4 *)(psVar2 + 1),s_value_1001312c,0,&local_14);
    }
    else {
      pcVar4 = (code *)FUN_100089c7((int)param_2,0,0x17,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,s_value_1001312c,0,&local_14);
    }
    if (local_6 != (undefined4 *)0x0) {
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0x10,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,local_6);
    }
  }
  return;
}



/* ==== hlScaleBitmap @ 100054d0 ==== 
 * signature: undefined __cdecl hlScaleBitmap(int param_1)
 * body: 100054d0-10005696
 */

void __cdecl hlScaleBitmap(int param_1)

{
                    /* 0x54d0  7  hlScaleBitmap */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 0x68;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x10013174);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_100056a0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_100056d0);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_10005730);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_10005760);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x11,FUN_100057e0);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x13,FUN_100058c0);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x12,FUN_100059a0);
                if (*(short *)(param_1 + 0xb2) == 2) {
                  FUN_10008f28(param_1,1,0,0x25,FUN_10005b30);
                  if (*(short *)(param_1 + 0xb2) == 2) {
                    FUN_10008f28(param_1,1,0,0xd,FUN_10002de0);
                    if (*(short *)(param_1 + 0xb2) == 2) {
                      FUN_10008f28(param_1,1,0,0xe,FUN_10003f80);
                      if (*(short *)(param_1 + 0xb2) == 2) {
                        FUN_10008f28(param_1,1,0,0x19,FUN_10005bf0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_10008f5f(param_1);
  return;
}



/* ==== FUN_100056a0 @ 100056a0 ==== 
 * signature: undefined4 __cdecl FUN_100056a0(undefined2 * param_1)
 * body: 100056a0-100056c8
 */

undefined4 __cdecl FUN_100056a0(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 1) = 0x12d;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[0x1b] = 0;
  param_1[0x31] = 1;
  *(undefined4 *)(param_1 + 0x32) = 0;
  return 0;
}



/* ==== FUN_100056d0 @ 100056d0 ==== 
 * signature: undefined4 __cdecl FUN_100056d0(undefined4 * param_1, undefined4 * param_2)
 * body: 100056d0-10005728
 */

undefined4 __cdecl FUN_100056d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_10005fa0((int)param_1,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  FUN_10005fa0((int)param_1,(undefined2 *)((int)param_1 + 0x36),(int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x62) = *(undefined4 *)((int)param_2 + 0x62);
  *(undefined2 *)((int)param_1 + 0x66) = *(undefined2 *)((int)param_2 + 0x66);
  return 0;
}



/* ==== FUN_10005730 @ 10005730 ==== 
 * signature: undefined __cdecl FUN_10005730(undefined4 * param_1, undefined4 * param_2)
 * body: 10005730-10005751
 */

void __cdecl FUN_10005730(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100056a0((undefined2 *)param_1);
  if (iVar1 == 0) {
    FUN_100056d0(param_1,param_2);
  }
  return;
}



/* ==== FUN_10005760 @ 10005760 ==== 
 * signature: undefined4 __cdecl FUN_10005760(int param_1)
 * body: 10005760-100057d6
 */

undefined4 __cdecl FUN_10005760(int param_1)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar2)(local_4,param_1,param_1 + 10);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,iVar1 + 0x36);
  return 0;
}



/* ==== FUN_100057e0 @ 100057e0 ==== 
 * signature: undefined4 __cdecl FUN_100057e0(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 100057e0-100058b6
 */

undefined4 __cdecl FUN_100057e0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int local_4;
  
  iVar2 = param_2;
  pcVar3 = (code *)FUN_100089c7(param_2,1,4,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar3)(local_4,param_1,&param_2);
  iVar4 = param_2 + 2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 10,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x36,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x62,&param_2);
  *param_4 = iVar4 + param_2;
  return 0;
}



/* ==== FUN_100058c0 @ 100058c0 ==== 
 * signature: undefined4 __cdecl FUN_100058c0(int param_1, int param_2)
 * body: 100058c0-10005991
 */

undefined4 __cdecl FUN_100058c0(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 1;
  pcVar2 = (code *)FUN_100089c7(param_2,1,7,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&local_4,1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x36);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x62);
  return 0;
}



/* ==== FUN_100059a0 @ 100059a0 ==== 
 * signature: undefined4 __cdecl FUN_100059a0(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 100059a0-10005b25
 */

undefined4 __cdecl FUN_100059a0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_2;
  if ((short)param_4 < 1) {
    pcVar2 = (code *)FUN_100089c7(param_2,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x36);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x62);
    return 0;
  }
  pcVar2 = (code *)FUN_100089c7(param_2,1,8,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&param_4,1);
  if ((short)param_4 == 1) {
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x36);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x62);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_10005b30 @ 10005b30 ==== 
 * signature: undefined4 __cdecl FUN_10005b30(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 10005b30-10005be8
 */

undefined4 __cdecl FUN_10005b30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int local_4;
  
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&local_4);
  uVar3 = param_3;
  uVar2 = param_2;
  iVar1 = param_1;
  DAT_100173bc = (*pcVar4)(local_4,param_2,param_3,param_1);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 10);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 0x62);
  return 0;
}



/* ==== FUN_10005bf0 @ 10005bf0 ==== 
 * signature: undefined4 __cdecl FUN_10005bf0(int param_1, int param_2)
 * body: 10005bf0-10005e6a
 */

undefined4 __cdecl FUN_10005bf0(int param_1,int param_2)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  HGLOBAL pvVar5;
  int iVar6;
  short *psVar7;
  longlong lVar8;
  int local_18;
  undefined4 local_14;
  undefined8 uStack_10;
  double dStack_8;
  
  iVar3 = param_2;
  iVar6 = param_1;
  local_14 = 0x10000;
  local_18 = 0;
  if ((*(int *)(param_2 + 0xc) == *(int *)(param_1 + 2)) &&
     (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 6))) {
    pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,iVar6 + 10,iVar6,&local_18,0);
    if ((DAT_100173bc == 0) && (local_18 != 0)) {
      uStack_10 = (double)CONCAT26(uStack_10._6_2_,1);
      pcVar2 = (code *)FUN_100089c7(local_18,0,0x16,&param_2);
      DAT_100173bc = (*pcVar2)(param_2,s_winvalue_10013090,0,&uStack_10);
      if ((DAT_100173bc == 0) && (puVar4 = uStack_10._2_4_, uStack_10._2_4_ != (undefined4 *)0x0)) {
        psVar7 = (short *)(iVar6 + 0x36);
        if (*(short *)(iVar6 + 0x36) == 0x6e) {
          psVar7 = (short *)(iVar3 + 0x26);
        }
        psVar7 = FUN_10005e70(iVar6,psVar7,(int *)0x0);
        sVar1 = *psVar7;
        if (sVar1 == 1) {
          uStack_10 = (double)*(int *)(psVar7 + 1);
          dStack_8 = uStack_10;
        }
        else if (sVar1 == 10) {
          param_2 = (int)psVar7[2];
          uStack_10 = (double)(int)psVar7[1];
          dStack_8 = (double)param_2;
        }
        else {
          if (sVar1 != 0xf) {
            return local_14;
          }
          dStack_8 = *(double *)(psVar7 + 1);
          uStack_10 = *(double *)(psVar7 + 1);
        }
        if ((0.0 <= dStack_8) && (0.0 <= uStack_10)) {
          if (*(int *)(iVar6 + 100) == 0) {
            FUN_10006070((int)puVar4,&param_2,&param_1);
            iVar3 = param_2;
            lVar8 = __ftol();
            iVar6 = (int)lVar8;
            param_2 = *(int *)(iVar3 + 8);
            if (param_2 < 0) {
              param_2 = -param_2;
            }
          }
          else {
            lVar8 = __ftol();
            iVar6 = (int)lVar8;
          }
          lVar8 = __ftol();
          iVar3 = (int)lVar8;
          if (iVar6 < 1) {
            iVar6 = 1;
          }
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          puVar4 = FUN_10007110(puVar4,iVar6,iVar3);
          if (puVar4 != (undefined4 *)0x0) {
            uStack_10._0_6_ = CONCAT42(puVar4,1);
            pcVar2 = (code *)FUN_100089c7(local_18,0,0x17,&param_2);
            DAT_100173bc = (*pcVar2)(param_2,s_winvalue_10013090,0,&uStack_10);
            pvVar5 = GlobalHandle(puVar4);
            GlobalUnlock(pvVar5);
            pvVar5 = GlobalHandle(puVar4);
            GlobalFree(pvVar5);
            local_14 = 0;
          }
        }
      }
    }
  }
  return local_14;
}



/* ==== FUN_10005e70 @ 10005e70 ==== 
 * signature: short * __cdecl FUN_10005e70(int param_1, short * param_2, int * param_3)
 * body: 10005e70-10005f3f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * __cdecl FUN_10005e70(int param_1,short *param_2,int *param_3)

{
  short *psVar1;
  code *pcVar2;
  int local_4;
  
  psVar1 = param_2;
  if ((*param_2 == 0x73) || (*param_2 == 0x69)) {
    param_2 = (short *)0x0;
    pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_4);
    DAT_100173bc = (*pcVar2)(local_4,psVar1,param_1,&param_2,0);
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_2;
    }
    if (param_2 != (short *)0x0) {
      _DAT_10016a70 = 0x6a;
      pcVar2 = (code *)FUN_100089c7((int)param_2,0,0x16,&param_1);
      DAT_100173bc = (*pcVar2)(param_1,s_value_1001312c,0,&DAT_10016a70);
      return (short *)&DAT_10016a70;
    }
    FUN_10005f40(*(undefined4 *)(psVar1 + 1),(short *)&DAT_10016a70);
    param_2 = (short *)&DAT_10016a70;
  }
  return param_2;
}



/* ==== FUN_10005f40 @ 10005f40 ==== 
 * signature: undefined __cdecl FUN_10005f40(undefined4 param_1, short * param_2)
 * body: 10005f40-10005f94
 */

void __cdecl FUN_10005f40(undefined4 param_1,short *param_2)

{
  short *psVar1;
  code *pcVar2;
  
  psVar1 = param_2;
  *param_2 = 0x6a;
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,5,(int *)&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1,s_value_1001312c,0,psVar1);
  if (*psVar1 == 0x75) {
    *(undefined4 *)(psVar1 + 3) = param_1;
  }
  return;
}



/* ==== FUN_10005fa0 @ 10005fa0 ==== 
 * signature: undefined __cdecl FUN_10005fa0(int param_1, undefined2 * param_2, undefined4 param_3)
 * body: 10005fa0-10006021
 */

void __cdecl FUN_10005fa0(int param_1,undefined2 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  DAT_100173bc = (*pcVar1)(local_4,param_1,&param_2);
  *param_2 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x19,&param_1);
  DAT_100173bc = (*pcVar1)(param_1,param_2,param_3);
  return;
}



/* ==== FUN_10006030 @ 10006030 ==== 
 * signature: undefined __cdecl FUN_10006030(HANDLE param_1, undefined4 * param_2, undefined4 * param_3)
 * body: 10006030-10006066
 */

void __cdecl FUN_10006030(HANDLE param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 local_54 [20];
  undefined4 local_40;
  undefined4 local_3c [15];
  
  GetObjectA(param_1,0x54,local_54);
  FUN_100094f0(param_2,local_3c,0x28);
  *param_3 = local_40;
  return;
}



/* ==== FUN_10006070 @ 10006070 ==== 
 * signature: undefined __cdecl FUN_10006070(int param_1, int * param_2, int * param_3)
 * body: 10006070-100060a0
 */

void __cdecl FUN_10006070(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  *param_2 = param_1;
  *param_3 = param_1 + 0x28;
  if (*(short *)(*param_2 + 0xe) == 8) {
    iVar1 = *(int *)(*param_2 + 0x20);
    if (iVar1 != 0) {
      *param_3 = param_1 + 0x28 + iVar1 * 4;
      return;
    }
    *param_3 = param_1 + 0x428;
  }
  return;
}



/* ==== FUN_100060b0 @ 100060b0 ==== 
 * signature: LPVOID __cdecl FUN_100060b0(LPCSTR param_1)
 * body: 100060b0-10006182
 */

LPVOID __cdecl FUN_100060b0(LPCSTR param_1)

{
  HFILE hFile;
  UINT UVar1;
  HGLOBAL hMem;
  int iVar2;
  long lVar3;
  uint uVar4;
  LPVOID lpBuffer;
  uint lBytes;
  undefined1 local_10 [2];
  int local_e;
  int local_6;
  
  lpBuffer = (LPCVOID)0x0;
  hFile = _lopen(param_1,0);
  if (hFile == -1) {
LAB_1000615e:
    if (lpBuffer != (LPCVOID)0x0) {
      FUN_10006570(lpBuffer);
    }
  }
  else {
    UVar1 = _lread(hFile,local_10,0xe);
    if (UVar1 != 0xe) goto LAB_1000615e;
    hMem = GlobalAlloc(0x42,local_e - 0xe);
    lpBuffer = GlobalLock(hMem);
    if (lpBuffer != (LPVOID)0x0) {
      UVar1 = _lread(hFile,lpBuffer,0x28);
      if (UVar1 == 0x28) {
        iVar2 = *(int *)((int)lpBuffer + 0x20);
        if ((iVar2 == 0) && (*(ushort *)((int)lpBuffer + 0xe) < 9)) {
          iVar2 = 1 << ((byte)*(ushort *)((int)lpBuffer + 0xe) & 0x1f);
        }
        iVar2 = iVar2 * 4;
        lVar3 = _hread(hFile,(LPVOID)((int)lpBuffer + 0x28),iVar2);
        if (lVar3 == iVar2) {
          lBytes = local_e - local_6;
          if (*(uint *)((int)lpBuffer + 0x14) < (uint)(local_e - local_6)) {
            lBytes = *(uint *)((int)lpBuffer + 0x14);
          }
          uVar4 = _hread(hFile,(LPVOID)((int)lpBuffer + 0x28 + iVar2),lBytes);
          if (uVar4 == lBytes) goto LAB_1000616d;
        }
      }
      goto LAB_1000615e;
    }
  }
  lpBuffer = (LPVOID)0x0;
LAB_1000616d:
  if (hFile != -1) {
    _lclose(hFile);
  }
  return lpBuffer;
}



/* ==== FUN_10006190 @ 10006190 ==== 
 * signature: undefined4 __cdecl FUN_10006190(int * param_1, LPCSTR param_2)
 * body: 10006190-10006286
 */

undefined4 __cdecl FUN_10006190(int *param_1,LPCSTR param_2)

{
  int *lpBuffer;
  long lVar1;
  HFILE hFile;
  int lBytes;
  undefined4 local_18;
  int *local_14;
  CHAR local_10 [2];
  int local_e;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  
  lpBuffer = param_1;
  local_18 = 0;
  hFile = -1;
  lBytes = 0;
  FUN_10006070((int)param_1,(int *)&local_14,(int *)&param_1);
  if (param_1 != (int *)0x0) {
    if ((*(short *)((int)local_14 + 0xe) == 8) && (lBytes = local_14[8] * 4, local_14[8] == 0)) {
      lBytes = 0x400;
    }
    local_10[0] = 'B';
    local_10[1] = 'M';
    local_a = 0;
    local_8 = 0;
    local_e = local_14[5] + *local_14 + 0xe + lBytes;
    local_6 = *local_14 + 0xe + lBytes;
    hFile = _lcreat(param_2,0);
    if (hFile == -1) {
      return 0;
    }
    lVar1 = _hwrite(hFile,local_10,0xe);
    if ((((lVar1 == 0xe) && (lVar1 = _hwrite(hFile,(LPCCH)lpBuffer,*lpBuffer), lVar1 == *lpBuffer))
        && (lVar1 = _hwrite(hFile,(LPCCH)(lpBuffer + 10),lBytes), lVar1 == lBytes)) &&
       (lVar1 = _hwrite(hFile,(LPCCH)param_1,lpBuffer[5]), lVar1 == lpBuffer[5])) {
      _lclose(hFile);
      hFile = -1;
      local_18 = 1;
    }
  }
  if (hFile != -1) {
    _lclose(hFile);
  }
  return local_18;
}



/* ==== FUN_10006290 @ 10006290 ==== 
 * signature: undefined __cdecl FUN_10006290(HDC param_1, int param_2)
 * body: 10006290-100062ea
 */

void __cdecl FUN_10006290(HDC param_1,int param_2)

{
  BYTE *pBVar1;
  tagPALETTEENTRY *ptVar2;
  int iVar3;
  tagPALETTEENTRY local_400 [256];
  
  GetSystemPaletteEntries(param_1,0,0x100,local_400);
  pBVar1 = (BYTE *)(param_2 + 2);
  iVar3 = 0x100;
  ptVar2 = local_400;
  do {
    pBVar1[-2] = pBVar1[(int)local_400 - param_2];
    pBVar1[-1] = ptVar2->peGreen;
    *pBVar1 = ptVar2->peRed;
    pBVar1 = pBVar1 + 4;
    iVar3 = iVar3 + -1;
    ptVar2 = ptVar2 + 1;
  } while (iVar3 != 0);
  return;
}



/* ==== FUN_100062f0 @ 100062f0 ==== 
 * signature: undefined __cdecl FUN_100062f0(int param_1)
 * body: 100062f0-10006313
 */

void __cdecl FUN_100062f0(int param_1)

{
  HDC hDC;
  
  hDC = GetDC((HWND)0x0);
  FUN_10006290(hDC,param_1);
  ReleaseDC((HWND)0x0,hDC);
  return;
}



/* ==== FUN_10006320 @ 10006320 ==== 
 * signature: undefined __cdecl FUN_10006320(HDC param_1, RGBQUAD * param_2)
 * body: 10006320-10006337
 */

void __cdecl FUN_10006320(HDC param_1,RGBQUAD *param_2)

{
  GetDIBColorTable(param_1,0,0x100,param_2);
  return;
}



/* ==== FUN_10006340 @ 10006340 ==== 
 * signature: undefined __cdecl FUN_10006340(undefined4 * param_1, int param_2, int param_3, int param_4)
 * body: 10006340-10006395
 */

void __cdecl FUN_10006340(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_3 < 0) {
    iVar1 = -param_3;
  }
  param_1[2] = param_3;
  *(short *)((int)param_1 + 0xe) = (short)param_4;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = 0x28;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[5] = ((param_4 >> 3) * param_2 + 3U & 0xfffffffc) * iVar1;
  return;
}



/* ==== FUN_100063a0 @ 100063a0 ==== 
 * signature: undefined __cdecl FUN_100063a0(undefined4 * param_1, int * param_2, int * param_3, int * param_4, int * param_5, undefined4 * param_6, undefined4 param_7, int param_8)
 * body: 100063a0-10006436
 */

void __cdecl
FUN_100063a0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
            undefined4 *param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  
  *param_2 = (int)*(short *)(param_8 + 0x14) - (int)*(short *)(param_8 + 0x10);
  *param_3 = (int)*(short *)(param_8 + 0x16) - (int)*(short *)(param_8 + 0x12);
  *param_4 = (int)*(short *)(param_8 + 0x1a);
  *param_5 = (int)*(short *)(param_8 + 0x18);
  *param_1 = *(undefined4 *)(param_8 + 0x1c);
  if (*param_5 != 8) {
    *param_6 = 0;
    return;
  }
  iVar1 = GetDeviceCaps(*(HDC *)(param_8 + 0x20),0xc);
  if (iVar1 == 8) {
    FUN_100062f0(0x10016aa0);
    *param_6 = &DAT_10016aa0;
    return;
  }
  FUN_10006320(*(HDC *)(param_8 + 0x20),(RGBQUAD *)&DAT_10016aa0);
  *param_6 = &DAT_10016aa0;
  return;
}



/* ==== FUN_10006440 @ 10006440 ==== 
 * signature: undefined __cdecl FUN_10006440(int * param_1, int * param_2, int * param_3, uint * param_4, uint * param_5, int * param_6, int param_7)
 * body: 10006440-100064be
 */

void __cdecl
FUN_10006440(int *param_1,int *param_2,int *param_3,uint *param_4,uint *param_5,int *param_6,
            int param_7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_10006070(param_7,(int *)&param_1,param_1);
  *param_2 = param_1[1];
  iVar2 = param_1[2];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *param_3 = iVar2;
  uVar3 = (uint)(*(ushort *)((int)param_1 + 0xe) >> 3) * param_1[1] + 3 & 0xfffffffc;
  *param_4 = uVar3;
  if (-1 < param_1[2]) {
    *param_4 = -uVar3;
  }
  uVar1 = *(ushort *)((int)param_1 + 0xe);
  *param_5 = (uint)uVar1;
  if (uVar1 == 8) {
    *param_6 = (int)(param_1 + 10);
    return;
  }
  *param_6 = 0;
  return;
}



/* ==== FUN_100064c0 @ 100064c0 ==== 
 * signature: undefined4 * __cdecl FUN_100064c0(HDC param_1, int param_2, int param_3, int param_4)
 * body: 100064c0-10006563
 */

undefined4 * __cdecl FUN_100064c0(HDC param_1,int param_2,int param_3,int param_4)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  HDC hdc;
  int iVar2;
  
  hMem = GlobalAlloc(0x42,((param_4 >> 3) * param_2 + 3U & 0xfffffffc) * param_3 + 0x28 +
                          ((param_4 != 8) - 1 & 0x400));
  puVar1 = GlobalLock(hMem);
  FUN_10006340(puVar1,param_2,param_3,param_4);
  if (param_4 == 8) {
    hdc = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(hdc,0xc);
    ReleaseDC((HWND)0x0,hdc);
    if (iVar2 == 8) {
      FUN_100062f0((int)(puVar1 + 10));
      return puVar1;
    }
    FUN_10006320(param_1,(RGBQUAD *)(puVar1 + 10));
  }
  return puVar1;
}



/* ==== FUN_10006570 @ 10006570 ==== 
 * signature: undefined __cdecl FUN_10006570(LPCVOID param_1)
 * body: 10006570-10006592
 */

void __cdecl FUN_10006570(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}



/* ==== FUN_100065a0 @ 100065a0 ==== 
 * signature: HBITMAP __cdecl FUN_100065a0(HDC param_1, int param_2, int param_3, int param_4, undefined4 * param_5)
 * body: 100065a0-1000664e
 */

HBITMAP __cdecl FUN_100065a0(HDC param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  HGLOBAL pvVar1;
  BITMAPINFO *lpbmi;
  HBITMAP pHVar2;
  void *local_4;
  
  local_4 = (void *)0x0;
  pvVar1 = GlobalAlloc(0x42,((param_4 != 8) - 1 & 0x400) + 0x28);
  lpbmi = GlobalLock(pvVar1);
  FUN_10006340((undefined4 *)lpbmi,param_2,param_3,param_4);
  if (param_4 == 8) {
    if (param_5 == (undefined4 *)0x0) {
      FUN_10006290(param_1,(int)lpbmi->bmiColors);
    }
    else {
      FUN_100094f0(lpbmi->bmiColors,param_5,0x400);
    }
  }
  pHVar2 = CreateDIBSection(param_1,lpbmi,0,&local_4,(HANDLE)0x0,0);
  pvVar1 = GlobalHandle(lpbmi);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(lpbmi);
  GlobalFree(pvVar1);
  return pHVar2;
}



/* ==== FUN_10006650 @ 10006650 ==== 
 * signature: undefined4 * __cdecl FUN_10006650(undefined4 * param_1)
 * body: 10006650-100066cc
 */

undefined4 * __cdecl FUN_10006650(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  uint uVar3;
  SIZE_T dwBytes;
  
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar1 = param_1[2];
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  uVar3 = (param_1[1] * (uint)(*(ushort *)((int)param_1 + 0xe) >> 3) + 3 & 0xfffffffc) * iVar1;
  if (uVar3 < (uint)param_1[5]) {
    uVar3 = param_1[5];
  }
  dwBytes = uVar3 + 0x28;
  if (*(ushort *)((int)param_1 + 0xe) == 8) {
    if (param_1[8] == 0) {
      dwBytes = uVar3 + 0x428;
    }
    else {
      dwBytes = dwBytes + param_1[8] * 4;
    }
  }
  hMem = GlobalAlloc(0x42,dwBytes);
  puVar2 = GlobalLock(hMem);
  FUN_100094f0(puVar2,param_1,dwBytes);
  return puVar2;
}



/* ==== FUN_100066d0 @ 100066d0 ==== 
 * signature: undefined4 * __cdecl FUN_100066d0(HDC param_1, undefined4 * param_2)
 * body: 100066d0-10006766
 */

undefined4 * __cdecl FUN_100066d0(HDC param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_2c;
  int local_28;
  int local_24;
  uint local_1e;
  int local_c;
  
  FUN_10006030(param_2,&local_2c,&param_2);
  puVar1 = FUN_100064c0(param_1,local_28,local_24,local_1e & 0xffff);
  if (local_24 < 0) {
    local_24 = -local_24;
  }
  puVar2 = puVar1 + 10;
  if ((short)local_1e == 8) {
    if (local_c == 0) {
      puVar2 = puVar1 + 0x10a;
    }
    else {
      puVar2 = puVar2 + local_c;
    }
  }
  FUN_100094f0(puVar2,param_2,(((local_1e & 0xffff) >> 3) * local_28 + 3 & 0xfffffffc) * local_24);
  return puVar1;
}



/* ==== FUN_10006770 @ 10006770 ==== 
 * signature: undefined __cdecl FUN_10006770(int param_1, int param_2, int param_3, int param_4, int param_5, undefined4 * param_6, undefined4 * param_7, int param_8, int param_9, int param_10, int param_11, int param_12, int param_13, int param_14, int param_15, int param_16, undefined4 * param_17, undefined4 * param_18, int param_19, int param_20)
 * body: 10006770-10006cb0
 */

void __cdecl
FUN_10006770(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
            undefined4 *param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
            int param_13,int param_14,int param_15,int param_16,undefined4 *param_17,
            undefined4 *param_18,int param_19,int param_20)

{
  byte *pbVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  tagRECT local_30;
  RECT local_20;
  tagRECT local_10;
  
  local_20.right = (LONG)param_6;
  local_20.bottom = (LONG)param_7;
  local_20.left = 0;
  local_20.top = 0;
  IntersectRect(&local_10,(RECT *)&param_2,&local_20);
  local_20.right = param_16;
  local_20.bottom = (LONG)param_17;
  local_20.left = 0;
  local_20.top = 0;
  IntersectRect(&local_30,(RECT *)&param_12,&local_20);
  puVar8 = param_18;
  local_10.left = local_10.left + (local_30.left - param_12);
  local_10.top = local_10.top + (local_30.top - param_13);
  local_10.right = local_10.right + (local_30.right - param_14);
  local_10.bottom = local_10.bottom + (local_30.bottom - param_15);
  local_30.left = local_30.left + (local_10.left - param_2);
  local_30.top = local_30.top + (local_10.top - param_3);
  local_30.right = local_30.right + (local_10.right - param_4);
  local_30.bottom = local_30.bottom + (local_10.bottom - param_5);
  iVar7 = local_10.right - local_10.left;
  puVar4 = (undefined4 *)(local_10.bottom - local_10.top);
  param_16 = param_9 >> 3;
  uVar6 = iVar7 * param_16;
  if ((int)param_18 < 0) {
    param_17 = (undefined4 *)(((int)param_17 + (-1 - local_30.top)) * (int)param_18);
    puVar5 = (undefined4 *)((param_19 >> 3) * local_30.left - (int)param_17);
  }
  else {
    param_17 = (undefined4 *)(local_30.top * (int)param_18);
    puVar5 = (undefined4 *)((int)param_17 + (param_19 >> 3) * local_30.left);
  }
  puVar5 = (undefined4 *)(param_11 + (int)puVar5);
  if (param_8 < 0) {
    iVar2 = local_10.left * param_16 - ((int)param_7 + (-1 - local_10.top)) * param_8;
  }
  else {
    iVar2 = local_10.left * param_16 + local_10.top * param_8;
  }
  puVar9 = (undefined4 *)(param_1 + iVar2);
  param_6 = puVar4;
  if (param_9 == 0x10) {
    switch(param_19) {
    case 8:
      param_17 = puVar4;
      if (0 < (int)puVar4) {
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              pbVar1 = (byte *)(param_20 + (uint)*(byte *)((int)puVar5 + iVar2) * 4);
              *(ushort *)((int)puVar9 + iVar2 * 2) =
                   (pbVar1[1] & 0xfff8 |
                   (*(byte *)(param_20 + 2 + (uint)*(byte *)((int)puVar5 + iVar2) * 4) & 0xfff8) <<
                   5) << 2 | (ushort)(*pbVar1 >> 3);
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)param_18);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_17 = (undefined4 *)((int)param_17 + -1);
        } while (param_17 != (undefined4 *)0x0);
        return;
      }
      break;
    case 0xf:
      if (0 < (int)puVar4) {
        param_16 = 2;
        do {
          FUN_100094f0(puVar9,puVar5,uVar6);
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
        } while (puVar4 != (undefined4 *)0x0);
        return;
      }
      break;
    case 0x10:
      if (0 < (int)puVar4) {
        param_16 = 2;
        do {
          FUN_100094f0(puVar9,puVar5,uVar6);
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
        } while (puVar4 != (undefined4 *)0x0);
        return;
      }
      break;
    case 0x18:
      param_17 = puVar4;
      if (0 < (int)puVar4) {
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              pbVar1 = (byte *)((int)puVar5 + iVar2 * 3);
              *(ushort *)((int)puVar9 + iVar2 * 2) =
                   (*(byte *)((int)puVar5 + iVar2 * 3 + 1) & 0xfff8 | (pbVar1[2] & 0xfff8) << 5) <<
                   2 | (ushort)(*pbVar1 >> 3);
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)param_18);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_17 = (undefined4 *)((int)param_17 + -1);
        } while (param_17 != (undefined4 *)0x0);
        return;
      }
      break;
    case 0x20:
      param_18 = puVar4;
      if (0 < (int)puVar4) {
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              *(ushort *)((int)puVar9 + iVar2 * 2) =
                   (*(byte *)((int)puVar5 + iVar2 * 4 + 1) & 0xfff8 |
                   (*(byte *)((int)puVar5 + iVar2 * 4 + 2) & 0xfff8) << 5) << 2 |
                   (ushort)(*(byte *)(puVar5 + iVar2) >> 3);
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_18 = (undefined4 *)((int)param_18 + -1);
        } while (param_18 != (undefined4 *)0x0);
        return;
      }
    }
  }
  else if (param_9 == 8) {
    pvVar3 = GlobalAlloc(0x42,0x8000);
    param_17 = GlobalLock(pvVar3);
    pvVar3 = GlobalAlloc(0x42,0x20000);
    param_7 = GlobalLock(pvVar3);
    FUN_10007db0(0x100,param_10,5,param_7,(int)param_17);
    pvVar3 = GlobalHandle(param_7);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(param_7);
    GlobalFree(pvVar3);
    puVar4 = param_17;
    switch(param_19) {
    case 8:
      if (0 < (int)param_6) {
        param_7 = param_6;
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              pbVar1 = (byte *)(param_20 + (uint)*(byte *)((int)puVar5 + iVar2) * 4);
              *(undefined1 *)((int)puVar9 + iVar2) =
                   *(undefined1 *)
                    ((int)param_17 +
                    ((pbVar1[2] & 0xfffffff8) * 0x20 + (pbVar1[1] & 0xfffffff8)) * 4 +
                    (uint)(*pbVar1 >> 3));
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
              puVar8 = param_18;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_7 = (undefined4 *)((int)param_7 + -1);
        } while (param_7 != (undefined4 *)0x0);
        switchD_10006c18::default();
        return;
      }
      break;
    case 0x10:
      if (0 < (int)param_6) {
        param_7 = param_6;
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              uVar6 = (uint)*(ushort *)((int)puVar5 + iVar2 * 2);
              *(undefined1 *)((int)puVar9 + iVar2) =
                   *(undefined1 *)
                    ((int)param_17 + (uVar6 & 0x3e0) + (uVar6 & 0x7c00) + (uVar6 & 0x1f));
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
              puVar8 = param_18;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_7 = (undefined4 *)((int)param_7 + -1);
        } while (param_7 != (undefined4 *)0x0);
        switchD_10006c18::default();
        return;
      }
      break;
    case 0x18:
      if (0 < (int)param_6) {
        param_7 = param_6;
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              pbVar1 = (byte *)((int)puVar5 + iVar2 * 3);
              *(undefined1 *)((int)puVar9 + iVar2) =
                   *(undefined1 *)
                    ((int)param_17 +
                    ((*(byte *)((int)puVar5 + iVar2 * 3 + 2) & 0xfffffff8) * 0x20 +
                    (pbVar1[1] & 0xfffffff8)) * 4 + (uint)(*pbVar1 >> 3));
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
              puVar8 = param_18;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_7 = (undefined4 *)((int)param_7 + -1);
        } while (param_7 != (undefined4 *)0x0);
        param_7 = (undefined4 *)0x0;
      }
      break;
    case 0x20:
      if (0 < (int)param_6) {
        param_7 = param_6;
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              *(undefined1 *)((int)puVar9 + iVar2) =
                   *(undefined1 *)
                    ((int)param_17 +
                    ((*(byte *)((int)puVar5 + iVar2 * 4 + 2) & 0xfffffff8) * 0x20 +
                    (*(byte *)((int)puVar5 + iVar2 * 4 + 1) & 0xfffffff8)) * 4 +
                    (uint)(*(byte *)(puVar5 + iVar2) >> 3));
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
              puVar8 = param_18;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_7 = (undefined4 *)((int)param_7 + -1);
        } while (param_7 != (undefined4 *)0x0);
      }
    }
    pvVar3 = GlobalHandle(param_17);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(puVar4);
    GlobalFree(pvVar3);
  }
  return;
}



/* ==== FUN_10006cb1 @ 10006cb1 ==== 
 * signature: undefined __stdcall FUN_10006cb1(void)
 * body: 10006cb1-10006d2d
 */

void FUN_10006cb1(void)

{
  uint uVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_0000005c;
  int iStack00000060;
  int in_stack_00000064;
  LPCVOID in_stack_00000088;
  int in_stack_0000008c;
  int iStack00000090;
  
  if (in_stack_0000005c < 1) {
    pvVar2 = GlobalHandle(in_stack_00000088);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(in_stack_00000088);
    GlobalFree(pvVar2);
    return;
  }
  iStack00000060 = in_stack_0000005c;
  do {
    iVar3 = 0;
    iStack00000090 = 0;
    if (0 < unaff_EBX) {
      do {
        uVar1 = (uint)*(ushort *)(unaff_ESI + iVar3 * 2);
        *(undefined1 *)(unaff_EDI + iVar3) =
             *(undefined1 *)
              ((int)in_stack_00000088 + (uVar1 & 0x3e0) + (uVar1 & 0x7c00) + (uVar1 & 0x1f));
        iStack00000090 = iStack00000090 + 1;
        iVar3 = (int)(short)iStack00000090;
        unaff_EBP = in_stack_0000008c;
      } while (iVar3 < unaff_EBX);
    }
    unaff_ESI = unaff_ESI + unaff_EBP;
    unaff_EDI = unaff_EDI + in_stack_00000064;
    iStack00000060 = iStack00000060 + -1;
  } while (iStack00000060 != 0);
  switchD_10006c18::default();
  return;
}



/* ==== FUN_10006d2e @ 10006d2e ==== 
 * signature: undefined FUN_10006d2e(void)
 * body: 10006d2e-10006db4
 */

void FUN_10006d2e(void)

{
  int iVar1;
  byte *pbVar2;
  short sVar3;
  int iVar4;
  HGLOBAL pvVar5;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_0000005c;
  int iStack00000060;
  int in_stack_00000064;
  LPCVOID in_stack_00000088;
  int in_stack_0000008c;
  
  if (0 < in_stack_0000005c) {
    iStack00000060 = in_stack_0000005c;
    do {
      iVar4 = 0;
      sVar3 = 0;
      if (0 < unaff_EBX) {
        do {
          iVar1 = unaff_ESI + iVar4 * 2;
          pbVar2 = (byte *)(iVar4 + iVar1);
          *(undefined1 *)(unaff_EDI + iVar4) =
               *(undefined1 *)
                ((int)in_stack_00000088 +
                ((*(byte *)(iVar4 + 2 + iVar1) & 0xfffffff8) * 0x20 + (pbVar2[1] & 0xfffffff8)) * 4
                + (uint)(*pbVar2 >> 3));
          sVar3 = sVar3 + 1;
          iVar4 = (int)sVar3;
          unaff_EBP = in_stack_0000008c;
        } while (iVar4 < unaff_EBX);
      }
      unaff_ESI = unaff_ESI + unaff_EBP;
      unaff_EDI = unaff_EDI + in_stack_00000064;
      iStack00000060 = iStack00000060 + -1;
    } while (iStack00000060 != 0);
  }
  pvVar5 = GlobalHandle(in_stack_00000088);
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(in_stack_00000088);
  GlobalFree(pvVar5);
  return;
}



/* ==== FUN_10006db5 @ 10006db5 ==== 
 * signature: undefined FUN_10006db5(void)
 * body: 10006db5-10006e30
 */

void FUN_10006db5(void)

{
  short sVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_0000005c;
  int iStack00000060;
  int in_stack_00000064;
  LPCVOID in_stack_00000088;
  int in_stack_0000008c;
  
  if (0 < in_stack_0000005c) {
    iStack00000060 = in_stack_0000005c;
    do {
      iVar2 = 0;
      sVar1 = 0;
      if (0 < unaff_EBX) {
        do {
          *(undefined1 *)(unaff_EDI + iVar2) =
               *(undefined1 *)
                ((int)in_stack_00000088 +
                ((*(byte *)(unaff_ESI + 2 + iVar2 * 4) & 0xfffffff8) * 0x20 +
                (*(byte *)(unaff_ESI + 1 + iVar2 * 4) & 0xfffffff8)) * 4 +
                (uint)(*(byte *)(unaff_ESI + iVar2 * 4) >> 3));
          sVar1 = sVar1 + 1;
          iVar2 = (int)sVar1;
          unaff_EBP = in_stack_0000008c;
        } while (iVar2 < unaff_EBX);
      }
      unaff_ESI = unaff_ESI + unaff_EBP;
      unaff_EDI = unaff_EDI + in_stack_00000064;
      iStack00000060 = iStack00000060 + -1;
    } while (iStack00000060 != 0);
  }
  pvVar3 = GlobalHandle(in_stack_00000088);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(in_stack_00000088);
  GlobalFree(pvVar3);
  return;
}



/* ==== switchD_10006c18::default @ 10006e31 ==== 
 * signature: undefined __stdcall default(void)
 * body: 10006e31-10006e59
 */

void switchD_10006c18::default(void)

{
  HGLOBAL pvVar1;
  LPCVOID in_stack_00000088;
  
  pvVar1 = GlobalHandle(in_stack_00000088);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(in_stack_00000088);
  GlobalFree(pvVar1);
  return;
}



/* ==== FUN_10006e5a @ 10006e5a ==== 
 * signature: undefined __fastcall FUN_10006e5a(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * body: 10006e5a-10006e5b
 */

void __fastcall
FUN_10006e5a(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  byte bVar1;
  code cVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *in_EAX;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  byte bVar10;
  undefined1 *puVar9;
  byte bVar11;
  char cVar12;
  undefined2 uVar13;
  undefined1 *puVar14;
  char unaff_BL;
  int iVar15;
  uint unaff_EBP;
  int iVar16;
  int unaff_ESI;
  int iVar17;
  short sVar18;
  code *unaff_EDI;
  undefined6 uVar19;
  int unaff_retaddr;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined *puStack_10;
  int iStack_8;
  int iStack_4;
  
  lVar4 = (longlong)*in_EAX * 0x69f210;
  pbVar5 = (byte *)lVar4;
  bVar1 = *pbVar5;
  bVar10 = (byte)((uint)param_1 >> 8);
  bVar11 = *pbVar5 + bVar10;
  *pbVar5 = bVar11 + ((int)pbVar5 != lVar4);
  iStack_4 = 0;
  *(char *)(unaff_ESI + 0x69) =
       *(char *)(unaff_ESI + 0x69) + unaff_BL +
       (CARRY1(bVar1,bVar10) || CARRY1(bVar11,(int)pbVar5 != lVar4));
  bVar1 = *pbVar5;
  bVar11 = (byte)param_2;
  *pbVar5 = *pbVar5 + bVar11;
  iStack_8 = 0;
  *(char *)(param_2 + 0x6e) = *(char *)(param_2 + 0x6e) + bVar11 + !CARRY1(bVar1,bVar11);
  *pbVar5 = *pbVar5 + bVar11;
  cRam05050505 = cRam05050505 + (char)lVar4;
  puStack_10 = &UNK_10006e91;
  uVar19 = (*unaff_EDI)();
  uVar13 = (undefined2)((uint6)uVar19 >> 0x20);
  pcVar6 = (char *)uVar19;
  cVar2 = (code)in(uVar13);
  *unaff_EDI = cVar2;
  cVar12 = (char)((uint6)uVar19 >> 0x20);
  *pcVar6 = *pcVar6 + cVar12;
  *pcVar6 = *pcVar6 + cVar12;
  uVar3 = in(uVar13);
  *(undefined4 *)(unaff_EDI + 1) = uVar3;
  *pcVar6 = *pcVar6 + cVar12;
  *pcVar6 = *pcVar6 + cVar12;
  *(uint *)(unaff_ESI + -1) = *(uint *)(unaff_ESI + -1) ^ unaff_EBP;
  *pcVar6 = *pcVar6 + (char)uVar19;
  iVar16 = param_3 - unaff_retaddr;
  iVar17 = iVar16;
  if (iVar16 < 0) {
    iVar17 = unaff_retaddr - param_3;
  }
  iVar7 = param_5 - param_4;
  iVar15 = iVar7;
  if (iVar7 < 0) {
    iVar15 = param_4 - param_5;
  }
  puStack_10 = (undefined *)(((iVar16 < 1) - 1 & 2) - 1);
  iStack_24 = iVar15 * 2 - iVar17;
  iStack_18 = ((iVar7 < 1) - 1 & 2) - 1;
  iStack_14 = iVar17 * 2;
  FUN_10006070(iStack_8,&param_5,&iStack_20);
  FUN_10006070(iStack_4,&iStack_8,&iStack_1c);
  if (-1 < iVar17) {
    iStack_4 = iVar17 + 1;
    do {
      uVar8 = (uint)(*(ushort *)(param_5 + 0xe) >> 3);
      puVar9 = (undefined1 *)
               (unaff_retaddr * uVar8 +
               iStack_20 + (*(int *)(param_5 + 4) * uVar8 + 3 & 0xfffffffc) * param_7);
      uVar8 = (uint)(*(ushort *)(iStack_8 + 0xe) >> 3);
      sVar18 = 0;
      puVar14 = (undefined1 *)
                (param_4 * uVar8 +
                iStack_1c + (*(int *)(iStack_8 + 4) * uVar8 + 3 & 0xfffffffc) * param_6);
      if (*(ushort *)(param_5 + 0xe) >> 3 != 0) {
        do {
          *puVar9 = *puVar14;
          puVar9 = puVar9 + 1;
          puVar14 = puVar14 + 1;
          sVar18 = sVar18 + 1;
        } while (sVar18 < (short)(*(ushort *)(param_5 + 0xe) >> 3));
      }
      if (-1 < iStack_24) {
        do {
          param_4 = param_4 + (short)iStack_18;
          iStack_24 = iStack_24 - iStack_14;
        } while (-1 < iStack_24);
      }
      unaff_retaddr = unaff_retaddr + (short)puStack_10;
      iStack_24 = iStack_24 + iVar15 * 2;
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
  }
  return;
}



/* ==== FUN_10006ea5 @ 10006ea5 ==== 
 * signature: undefined __stdcall FUN_10006ea5(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8)
 * body: 10006ea5-10006ebf
 */

void FUN_10006ea5(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar6 = param_3;
  iVar8 = param_4 - param_3;
  iVar9 = iVar8;
  if (iVar8 < 0) {
    iVar9 = param_3 - param_4;
  }
  iVar2 = param_6 - param_5;
  iVar7 = iVar2;
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar7 = param_5 - param_6;
    iVar1 = param_4;
  }
  param_4 = iVar1;
  iStack_4 = ((iVar8 < 1) - 1 & 2) - 1;
  iStack_18 = iVar7 * 2 - iVar9;
  iStack_c = ((iVar2 < 1) - 1 & 2) - 1;
  iStack_8 = iVar9 * 2;
  FUN_10006070(param_1,&param_6,&iStack_14);
  FUN_10006070(param_2,&param_1,&iStack_10);
  if (-1 < iVar9) {
    param_2 = iVar9 + 1;
    do {
      uVar3 = (uint)(*(ushort *)(param_6 + 0xe) >> 3);
      puVar4 = (undefined1 *)
               (iVar6 * uVar3 +
               iStack_14 + (*(int *)(param_6 + 4) * uVar3 + 3 & 0xfffffffc) * param_8);
      uVar3 = (uint)(*(ushort *)(param_1 + 0xe) >> 3);
      sVar10 = 0;
      puVar5 = (undefined1 *)
               (param_5 * uVar3 +
               iStack_10 + (*(int *)(param_1 + 4) * uVar3 + 3 & 0xfffffffc) * param_7);
      if (*(ushort *)(param_6 + 0xe) >> 3 != 0) {
        do {
          *puVar4 = *puVar5;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
          sVar10 = sVar10 + 1;
        } while (sVar10 < (short)(*(ushort *)(param_6 + 0xe) >> 3));
      }
      if (-1 < iStack_18) {
        do {
          param_5 = param_5 + (short)iStack_c;
          iStack_18 = iStack_18 - iStack_8;
        } while (-1 < iStack_18);
      }
      iVar6 = param_3 + (short)iStack_4;
      iStack_18 = iStack_18 + iVar7 * 2;
      param_2 = param_2 + -1;
      param_3 = iVar6;
    } while (param_2 != 0);
  }
  return;
}



/* ==== FUN_10006ec0 @ 10006ec0 ==== 
 * signature: undefined __cdecl FUN_10006ec0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8)
 * body: 10006ec0-1000703e
 */

void __cdecl
FUN_10006ec0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar6 = param_3;
  iVar8 = param_4 - param_3;
  iVar9 = iVar8;
  if (iVar8 < 0) {
    iVar9 = param_3 - param_4;
  }
  iVar2 = param_6 - param_5;
  iVar7 = iVar2;
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar7 = param_5 - param_6;
    iVar1 = param_4;
  }
  param_4 = iVar1;
  local_4 = ((iVar8 < 1) - 1 & 2) - 1;
  local_18 = iVar7 * 2 - iVar9;
  local_c = ((iVar2 < 1) - 1 & 2) - 1;
  local_8 = iVar9 * 2;
  FUN_10006070(param_1,&param_6,&local_14);
  FUN_10006070(param_2,&param_1,&local_10);
  if (-1 < iVar9) {
    param_2 = iVar9 + 1;
    do {
      uVar3 = (uint)(*(ushort *)(param_6 + 0xe) >> 3);
      puVar4 = (undefined1 *)
               (iVar6 * uVar3 +
               local_14 + (*(int *)(param_6 + 4) * uVar3 + 3 & 0xfffffffc) * param_8);
      uVar3 = (uint)(*(ushort *)(param_1 + 0xe) >> 3);
      sVar10 = 0;
      puVar5 = (undefined1 *)
               (param_5 * uVar3 +
               local_10 + (*(int *)(param_1 + 4) * uVar3 + 3 & 0xfffffffc) * param_7);
      if (*(ushort *)(param_6 + 0xe) >> 3 != 0) {
        do {
          *puVar4 = *puVar5;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
          sVar10 = sVar10 + 1;
        } while (sVar10 < (short)(*(ushort *)(param_6 + 0xe) >> 3));
      }
      if (-1 < local_18) {
        do {
          param_5 = param_5 + (short)local_c;
          local_18 = local_18 - local_8;
        } while (-1 < local_18);
      }
      iVar6 = param_3 + (short)local_4;
      local_18 = local_18 + iVar7 * 2;
      param_2 = param_2 + -1;
      param_3 = iVar6;
    } while (param_2 != 0);
  }
  return;
}



/* ==== FUN_10007040 @ 10007040 ==== 
 * signature: undefined __cdecl FUN_10007040(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10)
 * body: 10007040-10007108
 */

void __cdecl
FUN_10007040(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_4;
  
  iVar3 = param_10 - param_8;
  iVar1 = iVar3;
  if (iVar3 < 0) {
    iVar1 = param_8 - param_10;
  }
  iVar4 = param_6 - param_4;
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = param_4 - param_6;
  }
  local_4 = ((iVar3 < 1) - 1 & 2) - 1;
  iVar3 = iVar2 * 2 - iVar1;
  param_6._0_2_ = ((iVar4 < 1) - 1 & 2) - 1;
  if (-1 < iVar1) {
    iVar4 = param_8;
    param_8 = iVar1 + 1;
    do {
      FUN_10006ec0(param_1,param_2,param_7,param_9,param_3,param_5,param_4,iVar4);
      if (-1 < iVar3) {
        do {
          param_4 = param_4 + (short)param_6;
          iVar3 = iVar3 + iVar1 * -2;
        } while (-1 < iVar3);
      }
      iVar4 = iVar4 + local_4;
      iVar3 = iVar3 + iVar2 * 2;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* ==== FUN_10007110 @ 10007110 ==== 
 * signature: undefined4 * __cdecl FUN_10007110(undefined4 * param_1, int param_2, int param_3)
 * body: 10007110-100071c1
 */

undefined4 * __cdecl FUN_10007110(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *pMem;
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  SIZE_T dwBytes;
  UINT uFlags;
  
  pMem = FUN_10006650(param_1);
  iVar3 = 0x28;
  if ((*(ushort *)((int)pMem + 0xe) == 8) && (iVar3 = pMem[8] * 4 + 0x28, pMem[8] == 0)) {
    iVar3 = 0x428;
  }
  pMem[1] = param_2;
  pMem[2] = param_3;
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  iVar1 = ((uint)(*(ushort *)((int)pMem + 0xe) >> 3) * param_2 + 3 & 0xfffffffc) * param_3;
  pMem[5] = iVar1;
  dwBytes = iVar3 + iVar1;
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  uFlags = 0x42;
  pvVar2 = GlobalHandle(pMem);
  pvVar2 = GlobalReAlloc(pvVar2,dwBytes,uFlags);
  GlobalLock(pvVar2);
  FUN_10007040((int)pMem,(int)param_1,0,0,param_1[1] + -1,param_1[2] + -1,0,0,pMem[1] + -1,
               pMem[2] + -1);
  return pMem;
}



/* ==== FUN_100071d0 @ 100071d0 ==== 
 * signature: undefined4 * __cdecl FUN_100071d0(int param_1, int param_2)
 * body: 100071d0-100072d7
 */

undefined4 * __cdecl FUN_100071d0(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14 [4];
  int local_4;
  
  iVar6 = param_2;
  iVar5 = param_1;
  FUN_100063a0(&local_2c,&local_30,(int *)&local_34,(int *)&local_38,&param_1,&param_2,param_1,
               param_2);
  psVar4 = *(short **)(iVar5 + 8);
  sVar1 = *psVar4;
  sVar2 = psVar4[1];
  sVar3 = psVar4[2];
  local_4 = (int)psVar4[3];
  puVar7 = FUN_100064c0(*(HDC *)(iVar6 + 0x20),(int)sVar3 - (int)sVar1,local_4 - sVar2,
                        (int)*(short *)(iVar6 + 0x18));
  FUN_10006440(local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,(int)puVar7);
  FUN_10006770(local_14[0],0,0,local_18,local_1c,(undefined4 *)local_18,(undefined4 *)local_1c,
               local_20,local_24,local_28,local_2c,(int)sVar1,(int)sVar2,(int)sVar3,local_4,local_30
               ,local_34,local_38,param_1,param_2);
  return puVar7;
}



/* ==== FUN_100072e0 @ 100072e0 ==== 
 * signature: undefined __cdecl FUN_100072e0(int param_1, int param_2, int param_3)
 * body: 100072e0-100073dc
 */

void __cdecl FUN_100072e0(int param_1,int param_2,int param_3)

{
  short *psVar1;
  int local_3c;
  int local_38;
  uint local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14 [3];
  int local_8;
  int local_4;
  
  FUN_10006440(&local_2c,&param_3,&local_3c,(uint *)&local_30,&local_34,&local_38,param_3);
  FUN_100063a0(local_14,(int *)&local_18,(int *)&local_1c,&local_20,&local_24,&local_28,param_1,
               param_2);
  psVar1 = *(short **)(param_1 + 8);
  local_8 = (int)psVar1[2];
  local_4 = (int)psVar1[3];
  FUN_10006770(local_14[0],(int)*psVar1,(int)psVar1[1],local_8,local_4,local_18,local_1c,local_20,
               local_24,local_28,local_2c,0,0,param_3,local_3c,param_3,(undefined4 *)local_3c,
               local_30,local_34,local_38);
  return;
}



/* ==== hlBitmapVariable @ 100073e0 ==== 
 * signature: undefined __cdecl hlBitmapVariable(int param_1)
 * body: 100073e0-10007530
 */

void __cdecl hlBitmapVariable(int param_1)

{
                    /* 0x73e0  1  hlBitmapVariable */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 4;
    *(undefined4 *)(param_1 + 0xae) = 5;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x10013184);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_10007540);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_10007550);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_10007580);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_100075b0);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x2e,FUN_100075c0);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x16,FUN_100076c0);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x17,FUN_100077c0);
              }
            }
          }
        }
      }
    }
  }
  FUN_10008f5f(param_1);
  return;
}



/* ==== FUN_10007540 @ 10007540 ==== 
 * signature: undefined4 __cdecl FUN_10007540(undefined4 * param_1)
 * body: 10007540-1000754c
 */

undefined4 __cdecl FUN_10007540(undefined4 *param_1)

{
  *param_1 = 0;
  return 0;
}



/* ==== FUN_10007550 @ 10007550 ==== 
 * signature: undefined4 __cdecl FUN_10007550(undefined4 * param_1, int * param_2)
 * body: 10007550-10007579
 */

undefined4 __cdecl FUN_10007550(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 != 0) {
    uVar1 = FUN_10007c20(0);
    *param_1 = uVar1;
    FUN_10007d10(param_1,(HGLOBAL)*param_2);
  }
  return 0;
}



/* ==== FUN_10007580 @ 10007580 ==== 
 * signature: undefined __cdecl FUN_10007580(undefined4 * param_1, int * param_2)
 * body: 10007580-100075a1
 */

void __cdecl FUN_10007580(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10007540(param_1);
  if (iVar1 == 0) {
    FUN_10007550(param_1,param_2);
  }
  return;
}



/* ==== FUN_100075b0 @ 100075b0 ==== 
 * signature: undefined4 __cdecl FUN_100075b0(undefined4 * param_1)
 * body: 100075b0-100075bf
 */

undefined4 __cdecl FUN_100075b0(undefined4 *param_1)

{
  FUN_10007c40(param_1);
  return 0;
}



/* ==== FUN_100075c0 @ 100075c0 ==== 
 * signature: undefined4 __cdecl FUN_100075c0(int param_1)
 * body: 100075c0-100076b6
 */

undefined4 __cdecl FUN_100075c0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x2c,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar2)(local_4,param_1,s_value_1001312c,1,6);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x2c,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,s_height_10013068,1,4);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x2c,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,s_width_10013054,1,4);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x2c,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,s_disposebitmap_10013198,0x14,2);
  return 0;
}



/* ==== FUN_100076c0 @ 100076c0 ==== 
 * signature: undefined4 __cdecl FUN_100076c0(int * param_1, int * param_2, undefined4 param_3, short * param_4)
 * body: 100076c0-100077bd
 */

undefined4 __cdecl FUN_100076c0(int *param_1,int *param_2,undefined4 param_3,short *param_4)

{
  short *psVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  
  piVar2 = param_2;
  cVar3 = FUN_100086d8(param_2,(int *)s_winvalue_10013090);
  psVar1 = param_4;
  if (((cVar3 != '\0') || (cVar3 = FUN_100086d8(piVar2,(int *)s_value_1001312c), cVar3 != '\0')) &&
     ((*psVar1 == 1 || (*psVar1 == 0x6a)))) {
    *psVar1 = 1;
    *(int *)(psVar1 + 1) = *param_1;
    return 0;
  }
  cVar3 = FUN_100086d8(piVar2,(int *)s_height_10013068);
  if (cVar3 == '\0') {
    cVar3 = FUN_100086d8(piVar2,(int *)s_width_10013054);
    if (cVar3 == '\0') {
      return 0x10000;
    }
    *psVar1 = 1;
    psVar1[1] = 0;
    psVar1[2] = 0;
    if (*param_1 != 0) {
      FUN_10006070(*param_1,(int *)&param_1,(int *)&param_2);
      *(int *)(psVar1 + 1) = param_1[1];
      return 0;
    }
  }
  else {
    *psVar1 = 1;
    psVar1[1] = 0;
    psVar1[2] = 0;
    if (*param_1 != 0) {
      FUN_10006070(*param_1,(int *)&param_1,(int *)&param_2);
      uVar4 = param_1[2] >> 0x1f;
      *(uint *)(psVar1 + 1) = (param_1[2] ^ uVar4) - uVar4;
      return 0;
    }
  }
  return 0;
}



/* ==== FUN_100077c0 @ 100077c0 ==== 
 * signature: int __cdecl FUN_100077c0(undefined4 * param_1, int * param_2, undefined4 param_3, short * param_4)
 * body: 100077c0-100078e9
 */

int __cdecl FUN_100077c0(undefined4 *param_1,int *param_2,undefined4 param_3,short *param_4)

{
  int *piVar1;
  short *psVar2;
  char cVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined2 local_8;
  undefined4 *local_6;
  
  piVar1 = param_2;
  cVar3 = FUN_100086d8(param_2,(int *)s_winvalue_10013090);
  if ((cVar3 == '\0') && (cVar3 = FUN_100086d8(piVar1,(int *)s_value_1001312c), cVar3 == '\0')) {
    cVar3 = FUN_100086d8(piVar1,(int *)s_disposebitmap_10013198);
    if (cVar3 != '\0') {
      if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
        FUN_10006570((LPCVOID)*param_1);
      }
      *param_1 = 0;
      return 0;
    }
  }
  else {
    psVar2 = param_4;
    if (*param_4 == 1) {
      if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
        FUN_10006570((LPCVOID)*param_1);
      }
      puVar4 = FUN_10006650(*(undefined4 **)(psVar2 + 1));
      *param_1 = puVar4;
      return 0;
    }
    if (*param_4 == 0x69) {
      local_8 = 1;
      local_6 = (undefined4 *)0x0;
      pcVar5 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x3c),1,0,(int *)&param_2);
      DAT_100173bc = (*pcVar5)(param_2,param_1,psVar2,&local_8);
      if (DAT_100173bc != 0) {
        return DAT_100173bc;
      }
      if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
        FUN_10006570((LPCVOID)*param_1);
      }
      puVar4 = FUN_10006650(local_6);
      *param_1 = puVar4;
      return 0;
    }
  }
  return 0x10000;
}



/* ==== FUN_100078f0 @ 100078f0 ==== 
 * signature: undefined __cdecl FUN_100078f0(LPSTR param_1)
 * body: 100078f0-10007925
 */

void __cdecl FUN_100078f0(LPSTR param_1)

{
  char cVar1;
  uint uVar2;
  LPSTR pCVar3;
  
  GetSystemDirectoryA(param_1,0x100);
  uVar2 = 0xffffffff;
  pCVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pCVar3;
    pCVar3 = pCVar3 + 1;
  } while (cVar1 != '\0');
  if ((1 < ~uVar2 - 1) && (param_1[1] == ':')) {
    param_1[2] = '\0';
    return;
  }
  *param_1 = '\0';
  return;
}



/* ==== FUN_10007930 @ 10007930 ==== 
 * signature: undefined __cdecl FUN_10007930(char * param_1)
 * body: 10007930-1000795b
 */

void __cdecl FUN_10007930(char *param_1)

{
  char *pcVar1;
  
  GetModuleFileNameA((HMODULE)0x0,param_1,0x100);
  pcVar1 = _strrchr(param_1,0x5c);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
    return;
  }
  *param_1 = '\0';
  return;
}



/* ==== FUN_10007960 @ 10007960 ==== 
 * signature: undefined __cdecl FUN_10007960(undefined4 param_1, LPSTR param_2)
 * body: 10007960-100079ef
 */

void __cdecl FUN_10007960(undefined4 param_1,LPSTR param_2)

{
  HFILE hFile;
  int hFile_00;
  int iVar1;
  CHAR local_100 [256];
  
  FUN_100078f0(local_100);
  iVar1 = 0;
  do {
    wsprintfA(param_2,s__s__s_03d_bmp_100131ac,local_100,param_1,iVar1);
    hFile = _lopen(param_2,0);
    if (hFile == -1) {
      hFile_00 = _lcreat(param_2,0);
      break;
    }
    _lclose(hFile);
    hFile_00 = -1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1000);
  if (hFile_00 != -1) {
    _lclose(hFile_00);
    return;
  }
  *param_2 = '\0';
  return;
}



/* ==== FUN_100079f0 @ 100079f0 ==== 
 * signature: undefined __cdecl FUN_100079f0(char * param_1, char * param_2)
 * body: 100079f0-10007bb8
 */

void __cdecl FUN_100079f0(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  byte local_114 [4];
  char local_110 [4];
  char local_10c;
  undefined4 local_108;
  undefined4 local_104;
  CHAR local_100 [256];
  
  local_108 = DAT_100131bc;
  local_104 = DAT_100131c0;
  local_110 = (char  [4])s_<player>_10013120._4_4_;
  local_10c = s_<player>_10013120[8];
  uVar4 = 0xffffffff;
  pcVar7 = (char *)&local_108;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_114 = (byte  [4])s_<player>_10013120._0_4_;
  *param_2 = '\0';
  iVar3 = FUN_10009900((byte *)&local_108,param_1,~uVar4 - 1);
  if (iVar3 == 0) {
    FUN_100078f0(local_100);
    uVar4 = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar7 = (char *)&local_108;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar6 = 0xffffffff;
    pcVar7 = local_100;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((~uVar4 - (~uVar5 - 1)) + (~uVar6 - 2) < 0x100) {
      uVar4 = 0xffffffff;
      pcVar7 = local_100;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = param_2;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    pbVar9 = (byte *)&local_108;
  }
  else {
    uVar4 = 0xffffffff;
    pbVar9 = local_114;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
    iVar3 = FUN_10009900(local_114,param_1,~uVar4 - 1);
    if (iVar3 != 0) {
      uVar4 = 0xffffffff;
      do {
        pcVar7 = param_1;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar7 + -uVar4;
      pcVar8 = param_2;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      goto LAB_10007b92;
    }
    FUN_10007930(local_100);
    uVar4 = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pbVar9 = local_114;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
    uVar6 = 0xffffffff;
    pcVar7 = local_100;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((~uVar4 - (~uVar5 - 1)) + (~uVar6 - 2) < 0x100) {
      uVar4 = 0xffffffff;
      pcVar7 = local_100;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = param_2;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    pbVar9 = local_114;
  }
  uVar5 = 0xffffffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (bVar2 != 0);
  uVar4 = 0xffffffff;
  pcVar7 = param_1 + (~uVar5 - 1);
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar7 = param_2;
  do {
    pcVar10 = pcVar7;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  pcVar7 = pcVar8 + -uVar4;
  pcVar8 = pcVar10 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
LAB_10007b92:
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    if (*param_2 == '/') {
      *param_2 = '\\';
    }
    pcVar7 = param_2 + 1;
    param_2 = param_2 + 1;
    cVar1 = *pcVar7;
  }
  s_<player>_10013120[0] = (char)s_<player>_10013120._0_4_;
  s_<player>_10013120[1] = SUB41(s_<player>_10013120._0_4_,1);
  s_<player>_10013120[2] = SUB41(s_<player>_10013120._0_4_,2);
  s_<player>_10013120[3] = SUB41(s_<player>_10013120._0_4_,3);
  s_<player>_10013120[4] = (char)s_<player>_10013120._4_4_;
  s_<player>_10013120[5] = SUB41(s_<player>_10013120._4_4_,1);
  s_<player>_10013120[6] = SUB41(s_<player>_10013120._4_4_,2);
  s_<player>_10013120[7] = SUB41(s_<player>_10013120._4_4_,3);
  return;
}



/* ==== FUN_10007bc0 @ 10007bc0 ==== 
 * signature: undefined __cdecl FUN_10007bc0(char * param_1, char * param_2)
 * body: 10007bc0-10007c1b
 */

void __cdecl FUN_10007bc0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (~uVar2 - 1 < 0x100) {
    uVar2 = 0xffffffff;
    do {
      pcVar4 = param_1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar4 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar4;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar4 + -uVar2;
    pcVar5 = param_2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  else {
    *param_2 = '\0';
  }
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    if (*param_2 == '\\') {
      *param_2 = '/';
    }
    pcVar4 = param_2 + 1;
    param_2 = param_2 + 1;
    cVar1 = *pcVar4;
  }
  return;
}



/* ==== FUN_10007c20 @ 10007c20 ==== 
 * signature: undefined __cdecl FUN_10007c20(SIZE_T param_1)
 * body: 10007c20-10007c36
 */

void __cdecl FUN_10007c20(SIZE_T param_1)

{
  if (param_1 == 0) {
    param_1 = 1;
  }
  GlobalAlloc(0x40,param_1);
  return;
}



/* ==== FUN_10007c40 @ 10007c40 ==== 
 * signature: undefined __cdecl FUN_10007c40(undefined4 * param_1)
 * body: 10007c40-10007c59
 */

void __cdecl FUN_10007c40(undefined4 *param_1)

{
  if ((HGLOBAL)*param_1 != (HGLOBAL)0x0) {
    GlobalFree((HGLOBAL)*param_1);
  }
  *param_1 = 0;
  return;
}



/* ==== FUN_10007c60 @ 10007c60 ==== 
 * signature: int __cdecl FUN_10007c60(undefined4 * param_1, SIZE_T param_2)
 * body: 10007c60-10007cd4
 */

int __cdecl FUN_10007c60(undefined4 *param_1,SIZE_T param_2)

{
  SIZE_T SVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  SVar1 = GlobalSize((HGLOBAL)*param_1);
  if (param_2 == 0) {
    param_2 = 1;
  }
  hMem = GlobalAlloc(0x40,param_2);
  if (0 < (int)SVar1) {
    if ((int)SVar1 < (int)param_2) {
      param_2 = SVar1;
    }
    puVar2 = GlobalLock((HGLOBAL)*param_1);
    puVar3 = GlobalLock(hMem);
    FUN_100094f0(puVar3,puVar2,param_2);
    GlobalUnlock(hMem);
    GlobalUnlock((HGLOBAL)*param_1);
  }
  GlobalFree((HGLOBAL)*param_1);
  *param_1 = hMem;
  return (hMem != (HGLOBAL)0x0) - 1;
}



/* ==== FUN_10007ce0 @ 10007ce0 ==== 
 * signature: undefined __cdecl FUN_10007ce0(HGLOBAL param_1)
 * body: 10007ce0-10007ceb
 */

void __cdecl FUN_10007ce0(HGLOBAL param_1)

{
  GlobalSize(param_1);
  return;
}



/* ==== FUN_10007cf0 @ 10007cf0 ==== 
 * signature: undefined __cdecl FUN_10007cf0(HGLOBAL param_1)
 * body: 10007cf0-10007cfb
 */

void __cdecl FUN_10007cf0(HGLOBAL param_1)

{
  GlobalLock(param_1);
  return;
}



/* ==== FUN_10007d00 @ 10007d00 ==== 
 * signature: undefined __cdecl FUN_10007d00(HGLOBAL param_1)
 * body: 10007d00-10007d0b
 */

void __cdecl FUN_10007d00(HGLOBAL param_1)

{
  GlobalUnlock(param_1);
  return;
}



/* ==== FUN_10007d10 @ 10007d10 ==== 
 * signature: uint __cdecl FUN_10007d10(undefined4 * param_1, HGLOBAL param_2)
 * body: 10007d10-10007dab
 */

uint __cdecl FUN_10007d10(undefined4 *param_1,HGLOBAL param_2)

{
  int in_EAX;
  SIZE_T SVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort extraout_var;
  undefined2 extraout_var_00;
  int iVar4;
  
  if (param_2 != (HGLOBAL)0x0) {
    SVar1 = FUN_10007ce0(param_2);
    in_EAX = FUN_10007c60(param_1,SVar1);
    iVar4 = in_EAX;
    if ((short)in_EAX != 0) goto LAB_10007da4;
    puVar2 = (undefined4 *)FUN_10007cf0(param_2);
    in_EAX = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_10007cf0((HGLOBAL)*param_1);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_100094f0(puVar3,puVar2,SVar1);
        FUN_10007d00((HGLOBAL)*param_1);
        FUN_10007d00(param_2);
        return (uint)extraout_var << 0x10;
      }
      FUN_10007d00(param_2);
      return CONCAT22(extraout_var_00,0xffff);
    }
  }
  iVar4 = -1;
LAB_10007da4:
  return CONCAT22((short)((uint)in_EAX >> 0x10),(short)iVar4);
}



/* ==== FUN_10007db0 @ 10007db0 ==== 
 * signature: undefined __cdecl FUN_10007db0(int param_1, int param_2, byte param_3, undefined4 * param_4, int param_5)
 * body: 10007db0-10007fa2
 */

void __cdecl FUN_10007db0(int param_1,int param_2,byte param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 8 - param_3;
  DAT_10016ee0 = 1 << (param_3 & 0x1f);
  DAT_10016eb4 = 1 << (bVar2 & 0x1f);
  DAT_10016ed0 = 1 << (bVar2 * '\x02' & 0x1f);
  DAT_10016ea8 = DAT_10016ee0 * DAT_10016ee0;
  DAT_10016f10 = DAT_10016ee0;
  FUN_100085d0(param_4,DAT_10016ee0);
  DAT_10016ec0 = 0;
  if (0 < param_1) {
    do {
      DAT_10016efc = (uint)(*(byte *)(param_2 + 2 + DAT_10016ec0 * 4) >> (bVar2 & 0x1f));
      DAT_10016f24 = (uint)(*(byte *)(param_2 + 1 + DAT_10016ec0 * 4) >> (bVar2 & 0x1f));
      DAT_10016ee8 = (uint)(*(byte *)(param_2 + DAT_10016ec0 * 4) >> (bVar2 & 0x1f));
      iVar1 = DAT_10016eb4 / 2;
      DAT_10016eb8 = ((uint)*(byte *)(param_2 + 2 + DAT_10016ec0 * 4) - DAT_10016eb4 * DAT_10016efc)
                     - iVar1;
      DAT_10016ec8 = ((uint)*(byte *)(param_2 + 1 + DAT_10016ec0 * 4) - DAT_10016eb4 * DAT_10016f24)
                     - iVar1;
      iVar1 = ((uint)*(byte *)(param_2 + DAT_10016ec0 * 4) - DAT_10016eb4 * DAT_10016ee8) - iVar1;
      DAT_10016ebc = DAT_10016eb8 * DAT_10016eb8 + DAT_10016ec8 * DAT_10016ec8 + iVar1 * iVar1;
      DAT_10016ea0 = ((DAT_10016efc + 1) * DAT_10016ed0 -
                     DAT_10016eb4 * (uint)*(byte *)(param_2 + 2 + DAT_10016ec0 * 4)) * 2;
      DAT_10016ed4 = ((DAT_10016f24 + 1) * DAT_10016ed0 -
                     DAT_10016eb4 * (uint)*(byte *)(param_2 + 1 + DAT_10016ec0 * 4)) * 2;
      DAT_10016f1c = ((DAT_10016ee8 + 1) * DAT_10016ed0 -
                     DAT_10016eb4 * (uint)*(byte *)(param_2 + DAT_10016ec0 * 4)) * 2;
      iVar1 = DAT_10016ea8 * DAT_10016efc + DAT_10016ee0 * DAT_10016f24;
      DAT_10016eb0 = param_4 + DAT_10016ee8 + iVar1;
      DAT_10016f18 = param_5 + DAT_10016ee8 + iVar1;
      FUN_10007fb0();
      DAT_10016ec0 = DAT_10016ec0 + 1;
    } while (DAT_10016ec0 < param_1);
  }
  return;
}



/* ==== FUN_10007fb0 @ 10007fb0 ==== 
 * signature: int __stdcall FUN_10007fb0(void)
 * body: 10007fb0-1000815f
 */

int FUN_10007fb0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar2 = DAT_10016ed0;
  iVar1 = DAT_10016ed0 * 2;
  DAT_10016f14 = DAT_10016f18;
  local_4 = 0;
  DAT_10016eb8 = DAT_10016ebc;
  DAT_10016eec = DAT_10016ea0;
  DAT_10016ed8 = DAT_10016eb0;
  iVar3 = 1;
  iVar4 = DAT_10016efc;
  if (DAT_10016efc < DAT_10016f10) {
    do {
      iVar3 = FUN_10008160(iVar3);
      if (iVar3 == 0) {
        if (local_4 != 0) break;
      }
      else {
        local_4 = 1;
      }
      iVar4 = iVar4 + 1;
      DAT_10016ed8 = DAT_10016ed8 + DAT_10016ea8 * 4;
      DAT_10016f14 = DAT_10016f14 + DAT_10016ea8;
      DAT_10016eb8 = DAT_10016eb8 + DAT_10016eec;
      DAT_10016eec = DAT_10016eec + iVar1;
      iVar3 = 0;
    } while (iVar4 < DAT_10016f10);
  }
  DAT_10016eec = DAT_10016ea0 + iVar2 * -2;
  DAT_10016eb8 = DAT_10016ebc - DAT_10016eec;
  DAT_10016ed8 = DAT_10016eb0 + DAT_10016ea8 * -4;
  DAT_10016f14 = DAT_10016f18 - DAT_10016ea8;
  iVar4 = 1;
  iVar1 = DAT_10016efc;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return local_4;
    }
    iVar4 = FUN_10008160(iVar4);
    if (iVar4 == 0) {
      if (local_4 != 0) {
        return local_4;
      }
    }
    else {
      local_4 = 1;
    }
    DAT_10016ed8 = DAT_10016ed8 + DAT_10016ea8 * -4;
    DAT_10016f14 = DAT_10016f14 - DAT_10016ea8;
    DAT_10016eec = DAT_10016eec + iVar2 * -2;
    DAT_10016eb8 = DAT_10016eb8 - DAT_10016eec;
    iVar4 = 0;
  } while( true );
}



/* ==== FUN_10008160 @ 10008160 ==== 
 * signature: int __cdecl FUN_10008160(int param_1)
 * body: 10008160-1000842b
 */

int __cdecl FUN_10008160(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_10016ed0;
  iVar5 = DAT_10016ed0 * 2;
  iVar3 = 0;
  if (param_1 != 0) {
    DAT_10016ef8 = DAT_10016f10 + -1;
    DAT_10016eac = DAT_10016f24;
    DAT_10016f08 = 0;
    DAT_10016f04 = DAT_10016ed4;
  }
  DAT_10016f20 = DAT_10016f14;
  DAT_10016ee4 = DAT_10016f14;
  DAT_10016f00 = DAT_10016f04;
  DAT_10016ec8 = DAT_10016eb8;
  DAT_10016edc = DAT_10016eb8;
  DAT_10016ec4 = DAT_10016ed8;
  DAT_10016ecc = DAT_10016ed8;
  iVar2 = 1;
  iVar4 = DAT_10016eac;
  if (DAT_10016eac <= DAT_10016ef8) {
    do {
      iVar2 = FUN_10008430(iVar2);
      if (iVar2 == 0) {
        if (iVar3 != 0) break;
      }
      else if (iVar3 == 0) {
        if (DAT_10016eac < iVar4) {
          DAT_10016ed8 = DAT_10016ecc;
          DAT_10016f14 = DAT_10016ee4;
          DAT_10016eb8 = DAT_10016edc;
          DAT_10016f04 = DAT_10016f00;
          DAT_10016eac = iVar4;
        }
        iVar3 = 1;
      }
      iVar4 = iVar4 + 1;
      DAT_10016ec4 = DAT_10016ec4 + DAT_10016ee0 * 4;
      DAT_10016ecc = DAT_10016ecc + DAT_10016ee0 * 4;
      DAT_10016f20 = DAT_10016f20 + DAT_10016ee0;
      DAT_10016ee4 = DAT_10016ee4 + DAT_10016ee0;
      DAT_10016ec8 = DAT_10016ec8 + DAT_10016f00;
      DAT_10016edc = DAT_10016edc + DAT_10016f00;
      DAT_10016f00 = DAT_10016f00 + iVar5;
      iVar2 = 0;
    } while (iVar4 <= DAT_10016ef8);
  }
  iVar5 = DAT_10016eac + -1;
  DAT_10016f00 = DAT_10016f04 + iVar1 * -2;
  DAT_10016ec8 = DAT_10016eb8 - DAT_10016f00;
  DAT_10016ec4 = DAT_10016ed8 + DAT_10016ee0 * -4;
  DAT_10016ee4 = DAT_10016f14 - DAT_10016ee0;
  iVar4 = 1;
  DAT_10016ecc = DAT_10016ec4;
  DAT_10016edc = DAT_10016ec8;
  DAT_10016f20 = DAT_10016ee4;
  if (DAT_10016f08 <= iVar5) {
    do {
      iVar4 = FUN_10008430(iVar4);
      if (iVar4 == 0) {
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      else if (iVar3 == 0) {
        DAT_10016ed8 = DAT_10016ecc;
        DAT_10016f14 = DAT_10016ee4;
        DAT_10016eb8 = DAT_10016edc;
        DAT_10016f04 = DAT_10016f00;
        iVar3 = 1;
        DAT_10016eac = iVar5;
      }
      DAT_10016f00 = DAT_10016f00 + iVar1 * -2;
      iVar5 = iVar5 + -1;
      DAT_10016ec4 = DAT_10016ec4 + DAT_10016ee0 * -4;
      DAT_10016ecc = DAT_10016ecc + DAT_10016ee0 * -4;
      DAT_10016f20 = DAT_10016f20 - DAT_10016ee0;
      DAT_10016ee4 = DAT_10016ee4 - DAT_10016ee0;
      DAT_10016ec8 = DAT_10016ec8 - DAT_10016f00;
      DAT_10016edc = DAT_10016edc - DAT_10016f00;
      iVar4 = 0;
    } while (DAT_10016f08 <= iVar5);
  }
  return iVar3;
}



/* ==== FUN_10008430 @ 10008430 ==== 
 * signature: int __cdecl FUN_10008430(int param_1)
 * body: 10008430-100085c1
 */

int __cdecl FUN_10008430(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 local_4;
  
  iVar2 = DAT_10016ed0;
  iVar5 = DAT_10016ed0 * 2;
  if (param_1 != 0) {
    DAT_10016ea4 = DAT_10016ee8;
    DAT_10016ef0 = DAT_10016f10 + -1;
    DAT_10016f0c = 0;
    DAT_10016ef4 = DAT_10016f1c;
  }
  iVar3 = DAT_10016ef0;
  param_1 = 0;
  iVar6 = DAT_10016ef4;
  uVar9 = DAT_10016ec8;
  puVar8 = DAT_10016ec4;
  puVar7 = DAT_10016f20;
  for (iVar4 = DAT_10016ea4; iVar4 <= DAT_10016ef0; iVar4 = iVar4 + 1) {
    if (uVar9 < *puVar8) {
      if (DAT_10016ea4 < iVar4) {
        DAT_10016ea4 = iVar4;
        DAT_10016ec4 = puVar8;
        DAT_10016ec8 = uVar9;
        DAT_10016ef4 = iVar6;
        DAT_10016f20 = puVar7;
      }
      param_1 = 1;
      break;
    }
    puVar8 = puVar8 + 1;
    uVar9 = uVar9 + iVar6;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + iVar5;
  }
  local_4 = (undefined1)DAT_10016ec0;
  iVar1 = DAT_10016f0c;
  while ((DAT_10016f0c = iVar1, iVar4 <= iVar3 && (uVar9 < *puVar8))) {
    *puVar8 = uVar9;
    *puVar7 = local_4;
    iVar4 = iVar4 + 1;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
    uVar9 = uVar9 + iVar6;
    iVar6 = iVar6 + iVar5;
    iVar1 = DAT_10016f0c;
  }
  puVar8 = DAT_10016ec4 + -1;
  iVar5 = DAT_10016ef4 + iVar2 * -2;
  puVar7 = DAT_10016f20 + -1;
  iVar4 = DAT_10016ea4 + -1;
  uVar9 = DAT_10016ec8 - iVar5;
  if (param_1 == 0) {
    if (iVar4 < iVar1) {
      return 0;
    }
    do {
      if (uVar9 < *puVar8) {
        param_1 = 1;
        DAT_10016ea4 = iVar4;
        DAT_10016ec4 = puVar8;
        DAT_10016ec8 = uVar9;
        DAT_10016ef4 = iVar5;
        DAT_10016f20 = puVar7;
        break;
      }
      iVar5 = iVar5 + iVar2 * -2;
      iVar4 = iVar4 + -1;
      puVar8 = puVar8 + -1;
      puVar7 = puVar7 + -1;
      uVar9 = uVar9 - iVar5;
    } while (iVar1 <= iVar4);
  }
  for (; (iVar1 <= iVar4 && (uVar9 < *puVar8)); uVar9 = uVar9 - iVar5) {
    *puVar8 = uVar9;
    *puVar7 = local_4;
    iVar5 = iVar5 + iVar2 * -2;
    iVar4 = iVar4 + -1;
    puVar8 = puVar8 + -1;
    puVar7 = puVar7 + -1;
  }
  return param_1;
}



/* ==== FUN_100085d0 @ 100085d0 ==== 
 * signature: undefined __cdecl FUN_100085d0(undefined4 * param_1, int param_2)
 * body: 100085d0-100085eb
 */

void __cdecl FUN_100085d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * param_2 * param_2;
  if (0 < iVar1) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0xffffffff;
      param_1 = param_1 + 1;
    }
  }
  return;
}



/* ==== COMDLG32.DLL::GetOpenFileNameA @ 100085f0 ==== 
 * signature: BOOL __stdcall GetOpenFileNameA(LPOPENFILENAMEA param_1)
 * body: 100085f0-100085f5
 * thunk to: COMDLG32.DLL::GetOpenFileNameA
 */

BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100085f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetOpenFileNameA(param_1);
  return BVar1;
}



/* ==== COMDLG32.DLL::PrintDlgA @ 100085f6 ==== 
 * signature: BOOL __stdcall PrintDlgA(LPPRINTDLGA pPD)
 * body: 100085f6-100085fb
 * thunk to: COMDLG32.DLL::PrintDlgA
 */

BOOL PrintDlgA(LPPRINTDLGA pPD)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100085f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PrintDlgA(pPD);
  return BVar1;
}



/* ==== COMDLG32.DLL::GetSaveFileNameA @ 100085fc ==== 
 * signature: BOOL __stdcall GetSaveFileNameA(LPOPENFILENAMEA param_1)
 * body: 100085fc-10008601
 * thunk to: COMDLG32.DLL::GetSaveFileNameA
 */

BOOL GetSaveFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100085fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetSaveFileNameA(param_1);
  return BVar1;
}



/* ==== FUN_10008610 @ 10008610 ==== 
 * signature: undefined __cdecl FUN_10008610(int param_1, int param_2)
 * body: 10008610-1000868f
 */

void __cdecl FUN_10008610(int param_1,int param_2)

{
  bool bVar1;
  undefined4 local_c;
  
  bVar1 = false;
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    if (bVar1) {
      *(undefined1 *)(local_c + param_1) = 0;
    }
    else {
      *(undefined1 *)(local_c + param_1) = *(undefined1 *)(local_c + param_2);
      if (*(char *)(local_c + 1 + param_2) == '\0') {
        bVar1 = true;
      }
    }
  }
  return;
}



/* ==== FUN_10008690 @ 10008690 ==== 
 * signature: undefined __cdecl FUN_10008690(undefined4 * param_1, undefined4 * param_2)
 * body: 10008690-100086d7
 */

void __cdecl FUN_10008690(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}



/* ==== FUN_100086d8 @ 100086d8 ==== 
 * signature: undefined1 __cdecl FUN_100086d8(int * param_1, int * param_2)
 * body: 100086d8-1000874c
 */

undefined1 __cdecl FUN_100086d8(int *param_1,int *param_2)

{
  undefined1 local_8;
  
  if ((((*param_2 == *param_1) && (param_2[1] == param_1[1])) && (param_2[2] == param_1[2])) &&
     (param_2[3] == param_1[3])) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ==== FUN_1000874d @ 1000874d ==== 
 * signature: undefined4 __cdecl FUN_1000874d(int param_1, int param_2)
 * body: 1000874d-100087f2;100087f8-10008822
 */

undefined4 __cdecl FUN_1000874d(int param_1,int param_2)

{
  char local_10;
  char local_c;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xf < local_8) {
      return 0;
    }
    local_c = *(char *)(local_8 + param_1);
    if (('@' < local_c) && (local_c < '[')) {
      local_c = local_c + ' ';
    }
    local_10 = *(char *)(local_8 + param_2);
    if (('@' < local_10) && (local_10 < '[')) {
      local_10 = local_10 + ' ';
    }
    if (local_c < local_10) break;
    if (local_10 < local_c) {
      return 1;
    }
    local_8 = local_8 + 1;
  }
  return 0xffffffff;
}



/* ==== FUN_10008823 @ 10008823 ==== 
 * signature: undefined4 __cdecl FUN_10008823(undefined4 param_1, undefined4 param_2)
 * body: 10008823-1000887f
 */

undefined4 __cdecl FUN_10008823(undefined4 param_1,undefined4 param_2)

{
  int local_10;
  code *local_c;
  undefined1 *local_8;
  
  local_8 = &stack0x0000000c;
  local_c = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0x1c,&local_10);
  DAT_100173bc = (*local_c)(local_10,param_1,param_2,local_8);
  return DAT_100173bc;
}



/* ==== FUN_10008880 @ 10008880 ==== 
 * signature: undefined4 __cdecl FUN_10008880(short param_1, int param_2, short param_3)
 * body: 10008880-100088b7
 */

undefined4 __cdecl FUN_10008880(short param_1,int param_2,short param_3)

{
  DAT_100131c8 = 0xffff;
  return *(undefined4 *)(*(int *)(**(int **)(param_2 + -4) + param_1 * 4) + param_3 * 8);
}



/* ==== FUN_100088b8 @ 100088b8 ==== 
 * signature: undefined4 __cdecl FUN_100088b8(undefined4 * param_1, short param_2)
 * body: 100088b8-100088de
 */

undefined4 __cdecl FUN_100088b8(undefined4 *param_1,short param_2)

{
  return *(undefined4 *)(*(int *)*param_1 + param_2 * 8);
}



/* ==== FUN_100088df @ 100088df ==== 
 * signature: int __cdecl FUN_100088df(short param_1, int param_2, short param_3)
 * body: 100088df-10008966
 */

int __cdecl FUN_100088df(short param_1,int param_2,short param_3)

{
  int iVar1;
  int local_8;
  
  iVar1 = *(int *)(param_2 + -8);
  if (DAT_100131c8 == -1) {
    local_8 = *(int *)(iVar1 + 0x14);
  }
  else {
    local_8 = *(int *)(*(int *)(*(int *)(param_2 + -4) + 4) + DAT_100131c8 * 4) + iVar1;
  }
  return *(int *)((*(int **)(local_8 + -4))[1] +
                 *(int *)(*(int *)(**(int **)(local_8 + -4) + param_1 * 4) + 4 + param_3 * 8) * 4) +
         iVar1;
}



/* ==== FUN_10008967 @ 10008967 ==== 
 * signature: undefined4 __cdecl FUN_10008967(int param_1)
 * body: 10008967-10008988
 */

undefined4 __cdecl FUN_10008967(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + -8) + 8);
}



/* ==== FUN_10008989 @ 10008989 ==== 
 * signature: int __cdecl FUN_10008989(short param_1, int param_2)
 * body: 10008989-100089c6
 */

int __cdecl FUN_10008989(short param_1,int param_2)

{
  return *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + -8) + 0x14) + -4) + 4) + param_1 * 4
                 ) + *(int *)(param_2 + -8);
}



/* ==== FUN_100089c7 @ 100089c7 ==== 
 * signature: undefined4 __cdecl FUN_100089c7(int param_1, int param_2, int param_3, int * param_4)
 * body: 100089c7-10008a7f
 */

undefined4 __cdecl FUN_100089c7(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int local_8;
  
  iVar1 = *(int *)(param_1 + -8);
  if (DAT_100131c8 == -1) {
    local_8 = *(int *)(iVar1 + 0x14);
  }
  else {
    local_8 = *(int *)(*(int *)(*(int *)(param_1 + -4) + 4) + DAT_100131c8 * 4) + iVar1;
    DAT_100131c8 = -1;
  }
  *param_4 = *(int *)((*(int **)(local_8 + -4))[1] +
                     *(int *)(*(int *)(**(int **)(local_8 + -4) + param_2 * 4) + 4 + param_3 * 8) *
                     4) + iVar1;
  return *(undefined4 *)(*(int *)(**(int **)(*param_4 + -4) + param_2 * 4) + param_3 * 8);
}



/* ==== FUN_10008a80 @ 10008a80 ==== 
 * signature: undefined __cdecl FUN_10008a80(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 10008a80-10008d02
 */

void __cdecl FUN_10008a80(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  int local_34;
  code *local_30;
  int local_2c;
  code *local_28;
  int local_24;
  code *local_20;
  int local_1c;
  code *local_18;
  undefined4 local_14;
  int local_10;
  code *local_c;
  int local_8;
  
  if ((*(int *)(param_3 + 0xe) == 0) || (*(int *)(param_3 + 10) < 1)) {
    if ((*(int *)(param_3 + 0xe) != 0) && (*(int *)(param_2 + 7) == 0)) {
      local_30 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xe,&local_34);
      DAT_100173bc = (*local_30)(local_34,param_2 + 7,1);
      *(undefined4 *)(param_2 + 3) = 1;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
    }
    *(undefined4 *)(param_2 + 5) = 0;
    if (*(int *)(param_2 + 7) != 0) {
      **(undefined1 **)(param_2 + 7) = 0;
    }
  }
  else {
    *param_2 = 0x66;
    local_8 = *(int *)(param_3 + 10);
    if ((*(int *)(param_2 + 7) == 0) || (*(int *)(param_2 + 3) == 0)) {
      local_14 = 0;
      *param_2 = 0x66;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)(param_2 + 5) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      if (local_8 != -1 && -1 < local_8 + 1) {
        local_18 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xe,&local_1c);
        DAT_100173bc = (*local_18)(local_1c,param_2 + 7,local_8 + 1);
        if (*(int *)(param_2 + 7) != 0) {
          *(int *)(param_2 + 3) = local_8 + 1;
          **(undefined1 **)(param_2 + 7) = 0;
        }
      }
      local_20 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0,&local_24);
      DAT_100173bc = (*local_20)(local_24,*(undefined4 *)(param_2 + 7),
                                 *(undefined4 *)(param_3 + 0xe));
      local_28 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xc,&local_2c);
      DAT_100173bc = (*local_28)(local_2c,&local_14,*(undefined4 *)(param_2 + 7));
      *(undefined4 *)(param_2 + 5) = local_14;
    }
    else {
      iVar1 = *(int *)(param_2 + 3) + -1;
      if (local_8 <= *(int *)(param_2 + 3) + -1) {
        iVar1 = local_8;
      }
      local_8 = iVar1;
      local_c = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,1,&local_10);
      DAT_100173bc = (*local_c)(local_10,*(undefined4 *)(param_2 + 7),*(undefined4 *)(param_3 + 0xe)
                                ,local_8);
      *(int *)(param_2 + 5) = local_8;
      *(undefined1 *)(*(int *)(param_2 + 7) + local_8) = 0;
    }
  }
  return;
}



/* ==== FUN_10008d03 @ 10008d03 ==== 
 * signature: undefined __cdecl FUN_10008d03(undefined2 * param_1, undefined2 * param_2)
 * body: 10008d03-10008dd6
 */

void __cdecl FUN_10008d03(undefined2 *param_1,undefined2 *param_2)

{
  int local_8;
  
  FUN_10008e60((int)param_1);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  if (*(int *)(param_1 + 7) != 0) {
    if (*(int *)(param_2 + 7) == 0) {
      **(undefined4 **)(param_1 + 7) = 0;
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        *(undefined4 *)(*(int *)(param_1 + 7) + 4 + local_8 * 4) = 0;
      }
    }
    else {
      **(undefined4 **)(param_1 + 7) = **(undefined4 **)(param_2 + 7);
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        *(undefined4 *)(*(int *)(param_1 + 7) + 4 + local_8 * 4) =
             *(undefined4 *)(*(int *)(param_2 + 7) + 4 + local_8 * 4);
      }
    }
  }
  return;
}



/* ==== FUN_10008dd7 @ 10008dd7 ==== 
 * signature: undefined __cdecl FUN_10008dd7(int param_1)
 * body: 10008dd7-10008e5f
 */

void __cdecl FUN_10008dd7(int param_1)

{
  if ((*(int *)(param_1 + 2) != 0) &&
     ((*(int *)(param_1 + 6) != 0 || (*(int *)(param_1 + 10) != 0)))) {
    if (*(int *)(param_1 + 6) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
    }
    if (*(int *)(param_1 + 10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}



/* ==== FUN_10008e60 @ 10008e60 ==== 
 * signature: undefined __cdecl FUN_10008e60(int param_1)
 * body: 10008e60-10008edc
 */

void __cdecl FUN_10008e60(int param_1)

{
  if ((*(int *)(param_1 + 6) != 0) || (*(int *)(param_1 + 10) != 0)) {
    if (*(int *)(param_1 + 6) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
    }
    if (*(int *)(param_1 + 10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}



/* ==== FUN_10008edd @ 10008edd ==== 
 * signature: undefined __cdecl FUN_10008edd(int param_1, undefined4 * param_2, undefined2 param_3, short param_4)
 * body: 10008edd-10008f27
 */

void __cdecl FUN_10008edd(int param_1,undefined4 *param_2,undefined2 param_3,short param_4)

{
  if (*(short *)(param_1 + 0x22) <= param_4) {
    FUN_10008690((undefined4 *)(param_1 + 0x11),param_2);
    *(undefined2 *)(param_1 + 0xa8) = param_3;
    *(short *)(param_1 + 0x22) = param_4 + 1;
  }
  return;
}



/* ==== FUN_10008f28 @ 10008f28 ==== 
 * signature: undefined __cdecl FUN_10008f28(int param_1, short param_2, short param_3, short param_4, undefined4 param_5)
 * body: 10008f28-10008f5e
 */

void __cdecl FUN_10008f28(int param_1,short param_2,short param_3,short param_4,undefined4 param_5)

{
  *(undefined4 *)(*(int *)(param_1 + 0x24 + param_3 * 4) + param_4 * 8) = param_5;
  *(int *)(*(int *)(param_1 + 0x24 + param_3 * 4) + 4 + param_4 * 8) = (int)param_2;
  return;
}



/* ==== FUN_10008f5f @ 10008f5f ==== 
 * signature: undefined __cdecl FUN_10008f5f(int param_1)
 * body: 10008f5f-10008f85
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10008f5f(int param_1)

{
  _DAT_100173b4 = *(undefined4 *)(param_1 + 0xb4);
  DAT_100173b8 = *(undefined4 *)(param_1 + 0xb8);
  return;
}



/* ==== FUN_10008f86 @ 10008f86 ==== 
 * signature: undefined __cdecl FUN_10008f86(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 10008f86-100090d1
 */

void __cdecl FUN_10008f86(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int local_20;
  code *local_1c;
  int local_18;
  code *local_14;
  int local_10;
  code *local_c;
  undefined4 local_8;
  
  if (param_3 == 0) {
    *param_2 = 0x66;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    *(undefined4 *)(param_2 + 7) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
  }
  else {
    local_8 = 0;
    *param_2 = 0x66;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    local_c = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xc,&local_10);
    DAT_100173bc = (*local_c)(local_10,&local_8,param_3);
    *(undefined4 *)(param_2 + 5) = local_8;
    if (*(int *)(param_2 + 5) == 0) {
      local_1c = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xe,&local_20);
      DAT_100173bc = (*local_1c)(local_20,param_2 + 7,1);
      **(undefined1 **)(param_2 + 7) = 0;
    }
    else {
      local_14 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xf,&local_18);
      DAT_100173bc = (*local_14)(local_18,param_2 + 7,param_3);
    }
    *(int *)(param_2 + 3) = *(int *)(param_2 + 5) + 1;
  }
  return;
}



/* ==== FUN_100090d2 @ 100090d2 ==== 
 * signature: undefined __cdecl FUN_100090d2(short * param_1, int param_2)
 * body: 100090d2-100091fb
 */

void __cdecl FUN_100090d2(short *param_1,int param_2)

{
  int local_18;
  code *local_14;
  int local_10;
  code *local_c;
  int local_8;
  
  if ((*(short *)(param_2 + 2) != param_1[1]) || (*param_1 != 0x6d)) {
    if ((*(int *)(param_1 + 2) != 0) && (*param_1 == 0x6d)) {
      local_c = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 8),1,1,&local_10);
      DAT_100173bc = (*local_c)(local_10,*(undefined4 *)(param_1 + 2));
      param_1[2] = 0;
      param_1[3] = 0;
    }
    *param_1 = 0x6d;
    param_1[1] = *(short *)(param_2 + 2);
    local_14 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 8),1,0,&local_18);
    DAT_100173bc = (*local_14)(local_18,(int)*(short *)(param_2 + 2) << 2,param_1 + 2);
  }
  for (local_8 = 0; local_8 < *(short *)(param_2 + 2); local_8 = local_8 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 2) + local_8 * 4) =
         *(undefined4 *)(*(int *)(param_2 + 4) + local_8 * 4);
  }
  return;
}



/* ==== FUN_100091fc @ 100091fc ==== 
 * signature: undefined __cdecl FUN_100091fc(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 100091fc-10009378
 */

void __cdecl FUN_100091fc(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  int local_14;
  code *local_10;
  int local_c;
  int local_8;
  
  *param_2 = 0x65;
  if ((*(int *)(param_3 + 0xe) == 0) || (*(int *)(param_3 + 10) == 0)) {
    *(undefined4 *)(param_2 + 5) = 0;
  }
  else {
    local_c = *(int *)(param_3 + 10);
    if ((*(int *)(param_2 + 7) == 0) || (*(int *)(param_2 + 3) == 0)) {
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)(param_2 + 5) = 0;
      local_10 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 8),1,0,&local_14);
      DAT_100173bc = (*local_10)(local_14,*(undefined4 *)(param_3 + 10),param_2 + 7);
      if (*(int *)(param_2 + 7) != 0) {
        *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 10);
        *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_3 + 10);
        for (local_8 = 0; local_8 < *(int *)(param_2 + 5); local_8 = local_8 + 1) {
          *(undefined1 *)(*(int *)(param_2 + 7) + local_8) =
               *(undefined1 *)(*(int *)(param_3 + 0xe) + local_8);
        }
      }
    }
    else {
      iVar1 = *(int *)(param_2 + 3);
      if (local_c <= *(int *)(param_2 + 3)) {
        iVar1 = local_c;
      }
      for (local_8 = 0; local_8 < iVar1; local_8 = local_8 + 1) {
        *(undefined1 *)(*(int *)(param_2 + 7) + local_8) =
             *(undefined1 *)(*(int *)(param_3 + 0xe) + local_8);
      }
      *(int *)(param_2 + 5) = iVar1;
    }
  }
  return;
}



/* ==== FUN_10009379 @ 10009379 ==== 
 * signature: undefined4 __cdecl FUN_10009379(short * param_1, short * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
 * body: 10009379-100094ae;100094b4-100094ec
 */

undefined4 __cdecl
FUN_10009379(short *param_1,short *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  undefined4 local_8;
  
  local_8 = 0x10000;
  if ((param_2 == (short *)0x0) || (*param_2 != 1)) {
    local_8 = 0x10000;
  }
  else if ((*param_1 == 0x17) || (*param_1 == 0x6a)) {
    if (*param_1 == 0x6a) {
      *param_1 = 0x17;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    if ((*(uint *)(param_2 + 1) & 0xffffff) == 1) {
      uVar1 = *(uint *)(param_2 + 1) & 0xff000000;
      if (uVar1 == 0x20000000) {
        if (param_5 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_5;
          *(undefined4 *)(param_1 + 2) = param_5[1];
          param_1[4] = *(short *)(param_5 + 2);
          local_8 = 0;
        }
      }
      else if (uVar1 == 0x40000000) {
        if (param_4 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_4;
          *(undefined4 *)(param_1 + 2) = param_4[1];
          param_1[4] = *(short *)(param_4 + 2);
          local_8 = 0;
        }
      }
      else if ((uVar1 == 0x80000000) && (param_3 != (undefined4 *)0x0)) {
        *(undefined4 *)param_1 = *param_3;
        *(undefined4 *)(param_1 + 2) = param_3[1];
        param_1[4] = *(short *)(param_3 + 2);
        local_8 = 0;
      }
    }
  }
  else {
    local_8 = 0x10000;
  }
  return local_8;
}



/* ==== FUN_100094f0 @ 100094f0 ==== 
 * signature: undefined4 * __cdecl FUN_100094f0(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * body: 100094f0-1000954a;1000954c-10009552;10009560-10009588;10009688-100096ad
 */

undefined4 * __cdecl FUN_100094f0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_100096a7_caseD_2;
        case 3:
          goto switchD_100096a7_caseD_3;
        }
        goto switchD_100096a7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100096a7_caseD_0;
      case 1:
        goto switchD_100096a7_caseD_1;
      case 2:
        goto switchD_100096a7_caseD_2;
      case 3:
        goto switchD_100096a7_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100096a7_caseD_2;
            case 3:
              goto switchD_100096a7_caseD_3;
            }
            goto switchD_100096a7_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100096a7_caseD_2;
            case 3:
              goto switchD_100096a7_caseD_3;
            }
            goto switchD_100096a7_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100096a7_caseD_2;
            case 3:
              goto switchD_100096a7_caseD_3;
            }
            goto switchD_100096a7_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_100096a7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100096a7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100096a7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100096a7_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10009525_caseD_2;
      case 3:
        goto switchD_10009525_caseD_3;
      }
      goto switchD_10009525_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10009525_caseD_0;
    case 1:
      goto switchD_10009525_caseD_1;
    case 2:
      goto switchD_10009525_caseD_2;
    case 3:
      goto switchD_10009525_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10009525_caseD_2;
          case 3:
            goto switchD_10009525_caseD_3;
          }
          goto switchD_10009525_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10009525_caseD_2;
          case 3:
            goto switchD_10009525_caseD_3;
          }
          goto switchD_10009525_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10009525_caseD_2;
          case 3:
            goto switchD_10009525_caseD_3;
          }
          goto switchD_10009525_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10009525_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10009525_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10009525_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10009525_caseD_0:
  return param_1;
}



/* ==== FUN_10009589 @ 10009589 ==== 
 * signature: undefined __fastcall FUN_10009589(uint param_1, uint param_2)
 * body: 10009589-100095ae
 */

void __fastcall FUN_10009589(uint param_1,uint param_2)

{
  uint uVar1;
  undefined1 *unaff_ESI;
  undefined4 *puVar2;
  undefined1 *unaff_EDI;
  undefined4 *puVar3;
  
  *unaff_EDI = *unaff_ESI;
  uVar1 = param_1 >> 2;
  unaff_EDI[1] = unaff_ESI[1];
  puVar2 = (undefined4 *)(unaff_ESI + 2);
  puVar3 = (undefined4 *)(unaff_EDI + 2);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x1a) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x1a);
  case 6:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x16) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x16);
  case 5:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x12) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x12);
  case 4:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xe) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xe);
  case 3:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -10) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -10);
  case 2:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -6) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -6);
  case 1:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -2) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -2);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x1000962f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10009525::switchdataD_10009638)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x100095a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10009525::switchdataD_10009638)[param_2 & param_1])();
    return;
  }
}



/* ==== switchD_1000953d::caseD_3 @ 100095b0 ==== 
 * signature: undefined caseD_3(void)
 * body: 100095b0-100095c8;100095ec-10009635;10009650-1000965a;1000965c-1000966c
 */

void __fastcall switchD_1000953d::caseD_3(uint param_1,uint param_2)

{
  uint uVar1;
  undefined1 *unaff_ESI;
  undefined4 *puVar2;
  undefined1 *unaff_EDI;
  undefined4 *puVar3;
  
  *unaff_EDI = *unaff_ESI;
  uVar1 = param_1 >> 2;
  puVar2 = (undefined4 *)(unaff_ESI + 1);
  puVar3 = (undefined4 *)(unaff_EDI + 1);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x1b) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x1b);
  case 6:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x17) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x17);
  case 5:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x13) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x13);
  case 4:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xf) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xf);
  case 3:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xb) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xb);
  case 2:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -7) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -7);
  case 1:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -3) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -3);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x1000962f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10009525::switchdataD_10009638)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x100095c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_10009525::switchdataD_10009638)[param_2 & param_1])();
    return;
  }
}



/* ==== FUN_100095c9 @ 100095c9 ==== 
 * signature: undefined __fastcall FUN_100095c9(undefined4 param_1, byte param_2)
 * body: 100095c9-100095cb
 */

void __fastcall FUN_100095c9(undefined4 param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  undefined3 uVar5;
  char *pcVar4;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar3;
  
  bVar1 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + param_2;
  uVar5 = (undefined3)((uint)unaff_ESI >> 8);
  cVar2 = ((char)unaff_ESI + 'j') - CARRY1(bVar1,param_2);
  pbVar3 = (byte *)CONCAT31(uVar5,cVar2);
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + param_2;
  cVar2 = cVar2 + -0x6a + CARRY1(bVar1,param_2);
  pcVar4 = (char *)CONCAT31(uVar5,cVar2);
  *pcVar4 = *pcVar4 + param_2;
  pcVar4 = (char *)(CONCAT31(uVar5,cVar2) | 0x96);
  *pcVar4 = *pcVar4 + param_2;
  pcVar4 = (char *)CONCAT31(uVar5,(char)pcVar4 + -0x6a);
  *pcVar4 = *pcVar4 + param_2;
  *unaff_EBP = *unaff_EBP + param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ==== FUN_10009636 @ 10009636 ==== 
 * signature: undefined4 __fastcall FUN_10009636(undefined4 param_1, char param_2)
 * body: 10009636-10009637
 */

undefined4 __fastcall FUN_10009636(undefined4 param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  int in_EAX;
  char *unaff_EBP;
  char *unaff_ESI;
  
  *unaff_ESI = *unaff_ESI + param_2;
  *(char *)(in_EAX + -1) = *(char *)(in_EAX + -1) + param_2;
  cVar1 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + param_2;
  if (!SCARRY1(cVar1,param_2)) {
    *unaff_ESI = *unaff_ESI + param_2;
    return *(undefined4 *)(unaff_EBP + 8);
  }
  pcVar2 = (char *)CONCAT31((int3)((uint)unaff_ESI >> 8),(char)unaff_ESI + -0x6a);
  *pcVar2 = *pcVar2 + param_2;
  *unaff_EBP = *unaff_EBP + param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ==== switchD_10009525::caseD_0 @ 10009648 ==== 
 * signature: undefined4 __stdcall caseD_0(void)
 * body: 10009648-1000964e
 */

undefined4 switchD_10009525::caseD_0(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_1000966d @ 1000966d ==== 
 * signature: undefined4 __stdcall FUN_1000966d(void)
 * body: 1000966d-10009686
 */

undefined4 FUN_1000966d(void)

{
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = unaff_ESI[2];
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_100096ae @ 100096ae ==== 
 * signature: undefined __fastcall FUN_100096ae(int param_1)
 * body: 100096ae-100096b8
 */

void __fastcall FUN_100096ae(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100096b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_caseD_0_10009780)[-param_1])();
  return;
}



/* ==== FUN_100096b9 @ 100096b9 ==== 
 * signature: undefined4 __fastcall FUN_100096b9(int param_1)
 * body: 100096b9-100096da;100096e8-10009704
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */

undefined4 __fastcall FUN_100096b9(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  switch(param_1) {
  case 0:
    goto switchD_100096a7_caseD_0;
  case 1:
switchD_100096a7_caseD_1:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    return *(undefined4 *)(unaff_EBP + 8);
  case 2:
switchD_100096a7_caseD_2:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
    return *(undefined4 *)(unaff_EBP + 8);
  case 3:
switchD_100096a7_caseD_3:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
    *(undefined1 *)((int)unaff_EDI + 1) = *(undefined1 *)((int)unaff_ESI + 1);
    return *(undefined4 *)(unaff_EBP + 8);
  default:
    uVar2 = param_1 - ((uint)unaff_EDI & 3);
    switch((uint)unaff_EDI & 3) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -1);
      uVar3 = uVar2 >> 2;
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -1);
      if (uVar3 < 8) {
LAB_100096b0:
                    /* WARNING: Could not recover jumptable at 0x100096b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(&PTR_caseD_0_10009780)[-(uVar2 >> 2)])();
        return uVar1;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_100096a7_caseD_1;
      case 2:
        goto switchD_100096a7_caseD_2;
      case 3:
        goto switchD_100096a7_caseD_3;
      }
      break;
    case 2:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      uVar3 = uVar2 >> 2;
      *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -2);
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -2);
      if (uVar3 < 8) goto LAB_100096b0;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_100096a7_caseD_1;
      case 2:
        goto switchD_100096a7_caseD_2;
      case 3:
        goto switchD_100096a7_caseD_3;
      }
      break;
    case 3:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
      uVar3 = uVar2 >> 2;
      *(undefined1 *)((int)unaff_EDI + 1) = *(undefined1 *)((int)unaff_ESI + 1);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -3);
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -3);
      if (uVar3 < 8) goto LAB_100096b0;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_100096a7_caseD_1;
      case 2:
        goto switchD_100096a7_caseD_2;
      case 3:
        goto switchD_100096a7_caseD_3;
      }
    }
switchD_100096a7_caseD_0:
    return *(undefined4 *)(unaff_EBP + 8);
  }
}



/* ==== FUN_10009705 @ 10009705 ==== 
 * signature: undefined __fastcall FUN_10009705(uint param_1, uint param_2)
 * body: 10009705-1000972e
 */

void __fastcall FUN_10009705(uint param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  uVar1 = param_1 >> 2;
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  puVar2 = (undefined4 *)(unaff_ESI + -2);
  puVar3 = (undefined4 *)(unaff_EDI + -2);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + 0x1a + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x1a + uVar1 * -4);
  case 6:
    *(undefined4 *)(unaff_EDI + 0x16 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x16 + uVar1 * -4);
  case 5:
    *(undefined4 *)(unaff_EDI + 0x12 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x12 + uVar1 * -4);
  case 4:
    *(undefined4 *)(unaff_EDI + 0xe + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0xe + uVar1 * -4);
  case 3:
    *(undefined4 *)(unaff_EDI + 10 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 10 + uVar1 * -4);
  case 2:
    *(undefined4 *)(unaff_EDI + 6 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 6 + uVar1 * -4);
  case 1:
    *(undefined4 *)(unaff_EDI + 2 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 2 + uVar1 * -4);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x100097c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_100096a7::switchdataD_100097d0)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x10009728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_100096a7::switchdataD_100097d0)[param_2 & param_1])();
    return;
  }
}



/* ==== switchD_100096cd::caseD_3 @ 10009730 ==== 
 * signature: undefined caseD_3(void)
 * body: 10009730-10009760;10009784-100097cd;100097e8-100097f4;1000980c-10009824
 */

void __fastcall switchD_100096cd::caseD_3(uint param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  uVar1 = param_1 >> 2;
  *(undefined1 *)(unaff_EDI + 1) = *(undefined1 *)(unaff_ESI + 1);
  puVar2 = (undefined4 *)(unaff_ESI + -3);
  puVar3 = (undefined4 *)(unaff_EDI + -3);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + 0x19 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x19 + uVar1 * -4);
  case 6:
    *(undefined4 *)(unaff_EDI + 0x15 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x15 + uVar1 * -4);
  case 5:
    *(undefined4 *)(unaff_EDI + 0x11 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x11 + uVar1 * -4);
  case 4:
    *(undefined4 *)(unaff_EDI + 0xd + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0xd + uVar1 * -4);
  case 3:
    *(undefined4 *)(unaff_EDI + 9 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 9 + uVar1 * -4);
  case 2:
    *(undefined4 *)(unaff_EDI + 5 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 5 + uVar1 * -4);
  case 1:
    *(undefined4 *)(unaff_EDI + 1 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 1 + uVar1 * -4);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x100097c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_100096a7::switchdataD_100097d0)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x1000975a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_100096a7::switchdataD_100097d0)[param_2 & param_1])();
    return;
  }
}



/* ==== FUN_10009761 @ 10009761 ==== 
 * signature: undefined __fastcall FUN_10009761(undefined4 param_1, byte param_2)
 * body: 10009761-10009763
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_10009761(undefined4 param_1,byte param_2)

{
  byte bVar1;
  char *in_EAX;
  char *pcVar3;
  byte *unaff_ESI;
  byte *unaff_EDI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  byte bVar2;
  
  *in_EAX = *in_EAX + param_2;
  bVar1 = *unaff_EDI;
  bVar2 = *unaff_EDI;
  *unaff_EDI = *unaff_EDI + param_2;
  *(uint *)(in_EAX + -4) =
       (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar2,param_2) * 0x800 | (uint)(in_IF & 1) * 0x200
       | (uint)(in_TF & 1) * 0x100 | (uint)((char)*unaff_EDI < '\0') * 0x80 |
       (uint)(*unaff_EDI == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT(*unaff_EDI) & 1U) == 0) * 4 | (uint)CARRY1(bVar1,param_2) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = unaff_EDI[1] + param_2;
  pcVar3 = (char *)CONCAT22((short)((uint)&stack0x00000000 >> 0x10),0x9700);
  *pcVar3 = *pcVar3 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ==== FUN_100097ce @ 100097ce ==== 
 * signature: undefined4 __fastcall FUN_100097ce(int param_1, byte param_2)
 * body: 100097ce-100097cf
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __fastcall FUN_100097ce(int param_1,byte param_2)

{
  byte bVar1;
  char *pcVar3;
  byte *in_EAX;
  char extraout_DL;
  int unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  byte in_AF;
  char in_ZF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  byte bVar2;
  
  if (param_1 == 1 || in_ZF != '\0') {
    *in_EAX = *in_EAX + param_2;
    func_0x08109870();
    *unaff_EDI = *unaff_EDI + extraout_DL;
    *(char *)((uint)unaff_EDI | 0x98) = *(char *)((uint)unaff_EDI | 0x98) + extraout_DL;
    return *(undefined4 *)(unaff_EBP + 8);
  }
  *unaff_EDI = *unaff_EDI + param_2;
  bVar1 = *in_EAX;
  bVar2 = *in_EAX;
  *in_EAX = *in_EAX + param_2;
  *(uint *)(unaff_EDI + -4) =
       (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar2,param_2) * 0x800 | (uint)(in_IF & 1) * 0x200
       | (uint)(in_TF & 1) * 0x100 | (uint)((char)*in_EAX < '\0') * 0x80 |
       (uint)(*in_EAX == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT(*in_EAX) & 1U) == 0) * 4 | (uint)CARRY1(bVar1,param_2) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  *in_EAX = *unaff_ESI;
  in_EAX[1] = in_EAX[1] + param_2;
  pcVar3 = (char *)CONCAT22((short)((uint)&stack0x00000000 >> 0x10),0x9700);
  *pcVar3 = *pcVar3 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ==== switchD_100096a7::caseD_0 @ 100097e0 ==== 
 * signature: undefined4 __stdcall caseD_0(void)
 * body: 100097e0-100097e6
 */

undefined4 switchD_100096a7::caseD_0(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_100097f5 @ 100097f5 ==== 
 * signature: undefined4 __stdcall FUN_100097f5(void)
 * body: 100097f5-1000980a
 */

undefined4 FUN_100097f5(void)

{
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== __fpmath @ 10009830 ==== 
 * signature: void __cdecl __fpmath(int param_1)
 * body: 10009830-10009846
 * note: Library Function - Single Match  __fpmath  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 1998 Release */

void __cdecl __fpmath(int param_1)

{
  FUN_10009860();
  _DAT_10016f2c = FUN_10009ce0();
  __setdefaultprecision();
  return;
}



/* ==== FUN_10009850 @ 10009850 ==== 
 * signature: undefined __stdcall FUN_10009850(void)
 * body: 10009850-10009850
 */

void FUN_10009850(void)

{
  return;
}



/* ==== FUN_10009860 @ 10009860 ==== 
 * signature: undefined __stdcall FUN_10009860(void)
 * body: 10009860-10009897
 */

void FUN_10009860(void)

{
  PTR_FUN_1001321c = FUN_10009d70;
  PTR_FUN_10013218 = FUN_1000a1d0;
  PTR_FUN_10013220 = FUN_10009e00;
  PTR_FUN_10013224 = FUN_10009d10;
  PTR_FUN_10013228 = FUN_10009de0;
  PTR_FUN_1001322c = FUN_1000a1d0;
  return;
}



/* ==== __ftol @ 100098a0 ==== 
 * signature: longlong __stdcall __ftol(void)
 * body: 100098a0-100098c6
 * note: Library Function - Single Match  __ftol  Library: Visual Studio
 */

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



/* ==== _strrchr @ 100098d0 ==== 
 * signature: char * __cdecl _strrchr(char * _Str, int _Ch)
 * body: 100098d0-100098f6
 * note: Library Function - Single Match  _strrchr  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strrchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



/* ==== FUN_10009900 @ 10009900 ==== 
 * signature: undefined4 __cdecl FUN_10009900(byte * param_1, char * param_2, int param_3)
 * body: 10009900-10009a00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10009900(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_10018510;
  uVar6 = 0;
  if (param_3 != 0) {
    if (DAT_10016fb0 == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_1000995f;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000995f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10018510 = _DAT_10018510 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1001850c;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10018510 = iVar2;
        FUN_1000a320(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar7 = 0;
      uVar5 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_1000a530(uVar7);
        uVar5 = FUN_1000a530(uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_100099d5;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_100099d5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10018510 = _DAT_10018510 + -1;
        UNLOCK();
      }
      else {
        FUN_1000a3a0(0x13);
      }
    }
  }
  return uVar6;
}



/* ==== FUN_10009a10 @ 10009a10 ==== 
 * signature: undefined4 __stdcall FUN_10009a10(undefined4 param_1, int param_2)
 * body: 10009a10-10009b72
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10009a10(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      if (param_2 == 3) {
        FUN_1000a8c0((undefined *)0x0);
      }
      return 1;
    }
    if (0 < DAT_10016f30) {
      DAT_10016f30 = DAT_10016f30 + -1;
      if (DAT_1001700c == 0) {
        FUN_1000a680();
      }
      FUN_1000ab70();
      FUN_1000a7f0();
      FUN_1000b420();
      return 1;
    }
    return 0;
  }
  DAT_10016fd4 = GetVersion();
  if (DAT_10016f40 == 0) {
    if (((char)DAT_10016fd4 == '\x03') && ((DAT_10016fd4 & 0x80000000) != 0)) {
      FUN_1000b460(2);
    }
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsTNT");
      if (pFVar1 != (FARPROC)0x0) {
        FUN_1000b460(1);
      }
    }
  }
  iVar2 = FUN_1000b3e0();
  if (iVar2 == 0) {
    return 0;
  }
  _DAT_10016fe0 = DAT_10016fd4 >> 8 & 0xff;
  _DAT_10016fdc = DAT_10016fd4 & 0xff;
  _DAT_10016fd8 = _DAT_10016fdc * 0x100 + _DAT_10016fe0;
  DAT_10016fd4 = DAT_10016fd4 >> 0x10;
  iVar2 = FUN_1000a790();
  if (iVar2 == 0) {
    FUN_1000b420();
    return 0;
  }
  DAT_10018514 = GetCommandLineA();
  DAT_10016f34 = FUN_1000b280();
  if ((DAT_10018514 != (LPSTR)0x0) && (DAT_10016f34 != (LPSTR)0x0)) {
    FUN_1000a960();
    FUN_1000b270();
    FUN_1000acc0();
    FUN_1000abd0();
    FUN_1000a630();
    DAT_10016f30 = DAT_10016f30 + 1;
    return 1;
  }
  FUN_1000a7f0();
  FUN_1000b420();
  return 0;
}



/* ==== entry @ 10009b80 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 10009b80-10009c2c
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_10016f30 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_10009bde:
    iVar1 = FUN_1000b470();
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_10009a10(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_10009a10(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_10018518 != (code *)0x0)) {
        iVar1 = (*DAT_10018518)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_10018518 != (code *)0x0) {
    iVar1 = (*DAT_10018518)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_10009a10(param_1,param_2);
    if (iVar1 != 0) goto LAB_10009bde;
  }
  return 0;
}



/* ==== __amsg_exit @ 10009c30 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 10009c30-10009c63
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 10009c64-10009c67
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10016f3c == 1) || ((DAT_10016f3c == 0 && (DAT_10016f40 == 1)))) {
    FUN_1000b480();
  }
  FUN_1000b4c0(param_1);
  (*(code *)PTR___exit_10013210)(0xff);
  return;
}



/* ==== __setdefaultprecision @ 10009c70 ==== 
 * signature: undefined __stdcall __setdefaultprecision(void)
 * body: 10009c70-10009c82
 * note: Library Function - Single Match  __setdefaultprecision  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 1998 Release */

void __setdefaultprecision(void)

{
  FUN_1000b6e0((void *)0x10000,0x30000);
  return;
}



/* ==== FUN_10009c90 @ 10009c90 ==== 
 * signature: undefined4 __stdcall FUN_10009c90(void)
 * body: 10009c90-10009cdf
 */

/* WARNING: Removing unreachable block (ram,0x10009cd1) */

undefined4 FUN_10009c90(void)

{
  return 0;
}



/* ==== FUN_10009ce0 @ 10009ce0 ==== 
 * signature: undefined __stdcall FUN_10009ce0(void)
 * body: 10009ce0-10009d08
 */

void FUN_10009ce0(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_10009c90();
  return;
}



/* ==== FUN_10009d10 @ 10009d10 ==== 
 * signature: undefined __cdecl FUN_10009d10(char * param_1)
 * body: 10009d10-10009d6c
 */

void __cdecl FUN_10009d10(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = FUN_1000a4a0((int)*param_1);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10013608 < 2) {
        uVar3 = (byte)PTR_DAT_10013618[*param_1 * 2] & 4;
      }
      else {
        uVar3 = FUN_1000b830((int)*param_1,4);
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1001360c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



/* ==== FUN_10009d70 @ 10009d70 ==== 
 * signature: undefined __cdecl FUN_10009d70(char * param_1)
 * body: 10009d70-10009dda
 */

void __cdecl FUN_10009d70(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != DAT_1001360c))) {
    pcVar2 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar2;
  }
  pcVar2 = param_1 + 1;
  if (*param_1 != '\0') {
    cVar1 = *pcVar2;
    while (((cVar1 != '\0' && (cVar1 != 'e')) && (cVar1 != 'E'))) {
      pcVar3 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar3;
    }
    cVar1 = pcVar2[-1];
    pcVar3 = pcVar2;
    while (pcVar4 = pcVar3 + -1, cVar1 == '0') {
      cVar1 = pcVar3[-2];
      pcVar3 = pcVar4;
    }
    if (*pcVar4 == DAT_1001360c) {
      pcVar4 = pcVar3 + -2;
    }
    cVar1 = *pcVar2;
    pcVar4 = pcVar4 + 1;
    *pcVar4 = cVar1;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    }
  }
  return;
}



/* ==== FUN_10009de0 @ 10009de0 ==== 
 * signature: undefined4 __cdecl FUN_10009de0(double * param_1)
 * body: 10009de0-10009dfb
 */

undefined4 __cdecl FUN_10009de0(double *param_1)

{
  if (0.0 <= *param_1) {
    return 1;
  }
  return 0;
}



/* ==== FUN_10009e00 @ 10009e00 ==== 
 * signature: undefined __cdecl FUN_10009e00(int param_1, uint * param_2, byte * param_3)
 * body: 10009e00-10009e51
 */

void __cdecl FUN_10009e00(int param_1,uint *param_2,byte *param_3)

{
  uint local_8;
  uint local_4;
  
  if (param_1 != 0) {
    FUN_1000bd70(&local_8,param_3);
    *param_2 = local_8;
    param_2[1] = local_4;
    return;
  }
  FUN_1000bdb0((uint *)&param_3,param_3);
  *param_2 = (uint)param_3;
  return;
}



/* ==== FUN_10009e60 @ 10009e60 ==== 
 * signature: undefined1 * __cdecl FUN_10009e60(undefined4 * param_1, undefined1 * param_2, int param_3, int param_4)
 * body: 10009e60-10009ed2
 */

undefined1 * __cdecl FUN_10009e60(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int local_28 [4];
  char local_18 [24];
  
  FUN_1000be90(*param_1,param_1[1],local_28,local_18);
  FUN_1000bdf0(param_2 + (uint)(local_28[0] == 0x2d) + (uint)(0 < param_3),param_3 + 1,(int)local_28
              );
  FUN_10009ee0(param_2,param_3,param_4,local_28,'\0');
  return param_2;
}



/* ==== FUN_10009ee0 @ 10009ee0 ==== 
 * signature: undefined1 * __cdecl FUN_10009ee0(undefined1 * param_1, int param_2, int param_3, int * param_4, char param_5)
 * body: 10009ee0-10009fd1
 */

undefined1 * __cdecl
FUN_10009ee0(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_5 != '\0') {
    FUN_1000a240(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  if (0 < param_2) {
    *puVar1 = puVar1[1];
    puVar1 = puVar1 + 1;
    *puVar1 = DAT_1001360c;
  }
  puVar3 = (undefined4 *)(puVar1 + param_2 + (uint)(param_5 == '\0'));
  *puVar3 = 0x30302b65;
  *(undefined2 *)(puVar3 + 1) = 0x30;
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar2 = param_4[1] + -1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar2) {
      *(char *)((int)puVar3 + 2) =
           *(char *)((int)puVar3 + 2) +
           (((char)(iVar2 / 100) + (char)(iVar2 >> 0x1f)) -
           (char)((longlong)iVar2 * 0x51eb851f >> 0x3f));
      iVar2 = iVar2 % 100;
    }
    if (9 < iVar2) {
      *(char *)((int)puVar3 + 3) =
           *(char *)((int)puVar3 + 3) +
           (((char)(iVar2 / 10) + (char)(iVar2 >> 0x1f)) -
           (char)((longlong)iVar2 * 0x66666667 >> 0x3f));
      iVar2 = iVar2 % 10;
    }
    *(char *)(puVar3 + 1) = *(char *)(puVar3 + 1) + (char)iVar2;
  }
  return param_1;
}



/* ==== FUN_10009fe0 @ 10009fe0 ==== 
 * signature: char * __cdecl FUN_10009fe0(undefined4 * param_1, char * param_2, uint param_3)
 * body: 10009fe0-1000a045
 */

char * __cdecl FUN_10009fe0(undefined4 *param_1,char *param_2,uint param_3)

{
  int local_28;
  int local_24;
  char local_18 [24];
  
  FUN_1000be90(*param_1,param_1[1],&local_28,local_18);
  FUN_1000bdf0(param_2 + (local_28 == 0x2d),local_24 + param_3,(int)&local_28);
  FUN_1000a050(param_2,param_3,&local_28,'\0');
  return param_2;
}



/* ==== FUN_1000a050 @ 1000a050 ==== 
 * signature: char * __cdecl FUN_1000a050(char * param_1, uint param_2, int * param_3, char param_4)
 * body: 1000a050-1000a105
 */

char * __cdecl FUN_1000a050(char *param_1,uint param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar1 = param_3[1];
  uVar3 = iVar1 - 1;
  if ((param_4 != '\0') && (iVar2 = *param_3, uVar3 == param_2)) {
    param_1[uVar3 + (iVar2 == 0x2d)] = '0';
    param_1[iVar1 + (uint)(iVar2 == 0x2d)] = '\0';
  }
  pcVar4 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    pcVar4 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_1000a240(pcVar4,1);
    *pcVar4 = '0';
    pcVar4 = pcVar4 + 1;
  }
  else {
    pcVar4 = pcVar4 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_1000a240(pcVar4,1);
    *pcVar4 = DAT_1001360c;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_1000a240(pcVar4 + 1,param_2);
      uVar3 = param_2 >> 2;
      pcVar4 = pcVar4 + 1;
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        builtin_strncpy(pcVar4,"0000",4);
        pcVar4 = pcVar4 + 4;
      }
      for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar4 = '0';
        pcVar4 = pcVar4 + 1;
      }
    }
  }
  return param_1;
}



/* ==== FUN_1000a110 @ 1000a110 ==== 
 * signature: undefined __cdecl FUN_1000a110(undefined4 * param_1, char * param_2, uint param_3, int param_4)
 * body: 1000a110-1000a1c5
 */

void __cdecl FUN_1000a110(undefined4 *param_1,char *param_2,uint param_3,int param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int local_28;
  int local_24;
  char local_18 [24];
  
  FUN_1000be90(*param_1,param_1[1],&local_28,local_18);
  iVar1 = local_24 + -1;
  pcVar3 = param_2 + (local_28 == 0x2d);
  FUN_1000bdf0(pcVar3,param_3,(int)&local_28);
  local_24 = local_24 + -1;
  if ((-5 < local_24) && (local_24 < (int)param_3)) {
    if (iVar1 < local_24) {
      cVar2 = *pcVar3;
      while (cVar2 != '\0') {
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      }
      pcVar3[-1] = '\0';
    }
    FUN_1000a050(param_2,param_3,&local_28,'\x01');
    return;
  }
  FUN_10009ee0(param_2,param_3,param_4,&local_28,'\x01');
  return;
}



/* ==== FUN_1000a1d0 @ 1000a1d0 ==== 
 * signature: undefined __cdecl FUN_1000a1d0(undefined4 * param_1, char * param_2, int param_3, uint param_4, int param_5)
 * body: 1000a1d0-1000a234
 */

void __cdecl FUN_1000a1d0(undefined4 *param_1,char *param_2,int param_3,uint param_4,int param_5)

{
  if ((param_3 != 0x65) && (param_3 != 0x45)) {
    if (param_3 == 0x66) {
      FUN_10009fe0(param_1,param_2,param_4);
      return;
    }
    FUN_1000a110(param_1,param_2,param_4,param_5);
    return;
  }
  FUN_10009e60(param_1,param_2,param_4,param_5);
  return;
}



/* ==== FUN_1000a240 @ 1000a240 ==== 
 * signature: undefined __cdecl FUN_1000a240(char * param_1, int param_2)
 * body: 1000a240-1000a268
 */

void __cdecl FUN_1000a240(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_100094f0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,~uVar2);
  }
  return;
}



/* ==== FUN_1000a270 @ 1000a270 ==== 
 * signature: undefined __stdcall FUN_1000a270(void)
 * body: 1000a270-1000a29a
 */

void FUN_1000a270(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013274);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013264);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013254);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013234);
  return;
}



/* ==== FUN_1000a2a0 @ 1000a2a0 ==== 
 * signature: undefined __stdcall FUN_1000a2a0(void)
 * body: 1000a2a0-1000a311
 */

void FUN_1000a2a0(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10013230;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10013274)) && (ppuVar1 != &PTR_DAT_10013264)) &&
       ((ppuVar1 != &PTR_DAT_10013254 && (ppuVar1 != &PTR_DAT_10013234)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000bff0(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100132f0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013254);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013264);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013274);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013234);
  return;
}



/* ==== FUN_1000a320 @ 1000a320 ==== 
 * signature: undefined __cdecl FUN_1000a320(int param_1)
 * body: 1000a320-1000a395
 */

void __cdecl FUN_1000a320(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((&DAT_10013230)[param_1] == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_1000c060(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1000a320(0x11);
    if ((&DAT_10013230)[param_1] == 0) {
      InitializeCriticalSection(lpCriticalSection);
      (&DAT_10013230)[param_1] = lpCriticalSection;
    }
    else {
      FUN_1000bff0((undefined *)lpCriticalSection);
    }
    FUN_1000a3a0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10013230)[param_1]);
  return;
}



/* ==== FUN_1000a3a0 @ 1000a3a0 ==== 
 * signature: undefined __cdecl FUN_1000a3a0(int param_1)
 * body: 1000a3a0-1000a3b5
 */

void __cdecl FUN_1000a3a0(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10013230)[param_1]);
  return;
}



/* ==== FUN_1000a3c0 @ 1000a3c0 ==== 
 * signature: undefined __cdecl FUN_1000a3c0(uint param_1)
 * body: 1000a3c0-1000a3f5
 */

void __cdecl FUN_1000a3c0(uint param_1)

{
  if ((0x10013857 < param_1) && (param_1 < 0x10013ab9)) {
    FUN_1000a320(((int)(param_1 + 0xeffec7a8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ==== FUN_1000a400 @ 1000a400 ==== 
 * signature: undefined __cdecl FUN_1000a400(int param_1, int param_2)
 * body: 1000a400-1000a427
 */

void __cdecl FUN_1000a400(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000a320(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ==== FUN_1000a430 @ 1000a430 ==== 
 * signature: undefined __cdecl FUN_1000a430(uint param_1)
 * body: 1000a430-1000a465
 */

void __cdecl FUN_1000a430(uint param_1)

{
  if ((0x10013857 < param_1) && (param_1 < 0x10013ab9)) {
    FUN_1000a3a0(((int)(param_1 + 0xeffec7a8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ==== FUN_1000a470 @ 1000a470 ==== 
 * signature: undefined __cdecl FUN_1000a470(int param_1, int param_2)
 * body: 1000a470-1000a497
 */

void __cdecl FUN_1000a470(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000a3a0(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ==== FUN_1000a4a0 @ 1000a4a0 ==== 
 * signature: uint __cdecl FUN_1000a4a0(uint param_1)
 * body: 1000a4a0-1000a521
 */

uint __cdecl FUN_1000a4a0(uint param_1)

{
  bool bVar1;
  
  if (DAT_10016fb0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10018510);
    bVar1 = DAT_1001850c != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10018510);
      FUN_1000a320(0x13);
    }
    param_1 = FUN_1000a530(param_1);
    if (bVar1) {
      FUN_1000a3a0(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_10018510);
  }
  return param_1;
}



/* ==== FUN_1000a530 @ 1000a530 ==== 
 * signature: uint __cdecl FUN_1000a530(uint param_1)
 * body: 1000a530-1000a62b
 */

uint __cdecl FUN_1000a530(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_10016fb0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_10013608 < 2) {
        uVar2 = (byte)PTR_DAT_10013618[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1000b830(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_10013618[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_1000d300(DAT_10016fb0,0x100,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0);
    if (iVar4 == 0) {
      return uVar1;
    }
    if (iVar4 == 1) {
      return local_8[0] & 0xff;
    }
    param_1 = (local_8[0] >> 8 & 0xff) << 8 | local_8[0] & 0xff;
  }
  return param_1;
}



/* ==== FUN_1000a630 @ 1000a630 ==== 
 * signature: undefined __stdcall FUN_1000a630(void)
 * body: 1000a630-1000a65f
 */

void FUN_1000a630(void)

{
  if (PTR___fpmath_100131f8 != (undefined *)0x0) {
    (*(code *)PTR___fpmath_100131f8)();
  }
  FUN_1000a770((undefined4 *)&DAT_10013008,(undefined4 *)&DAT_10013010);
  FUN_1000a770((undefined4 *)&DAT_10013000,(undefined4 *)&DAT_10013004);
  return;
}



/* ==== __exit @ 1000a660 ==== 
 * signature: noreturn void __cdecl __exit(int _Code)
 * body: 1000a660-1000a671
 * note: Library Function - Single Match  __exit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __exit(int _Code)

{
  FUN_1000a690(_Code,1,0);
  return;
}



/* ==== FUN_1000a680 @ 1000a680 ==== 
 * signature: undefined __stdcall FUN_1000a680(void)
 * body: 1000a680-1000a68e
 */

void FUN_1000a680(void)

{
  FUN_1000a690(0,0,1);
  return;
}



/* ==== FUN_1000a690 @ 1000a690 ==== 
 * signature: undefined __cdecl FUN_1000a690(UINT param_1, int param_2, int param_3)
 * body: 1000a690-1000a73d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1000a73e-1000a741
 */

void __cdecl FUN_1000a690(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  FUN_1000a750();
  if (DAT_10017010 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1001700c = 1;
  DAT_10017008 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10018508 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_10018504 + -4), puVar1 = DAT_10018508, DAT_10018508 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_10018508;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_1000a770((undefined4 *)&DAT_10013014,(undefined4 *)&DAT_1001301c);
  }
  FUN_1000a770((undefined4 *)&DAT_10013020,(undefined4 *)&DAT_10013024);
  if (param_3 != 0) {
    FUN_1000a760();
    return;
  }
  DAT_10017010 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ==== FUN_1000a750 @ 1000a750 ==== 
 * signature: undefined __stdcall FUN_1000a750(void)
 * body: 1000a750-1000a75a
 */

void FUN_1000a750(void)

{
  FUN_1000a320(0xd);
  return;
}



/* ==== FUN_1000a760 @ 1000a760 ==== 
 * signature: undefined __stdcall FUN_1000a760(void)
 * body: 1000a760-1000a76a
 */

void FUN_1000a760(void)

{
  FUN_1000a3a0(0xd);
  return;
}



/* ==== FUN_1000a770 @ 1000a770 ==== 
 * signature: undefined __cdecl FUN_1000a770(undefined4 * param_1, undefined4 * param_2)
 * body: 1000a770-1000a78f
 */

void __cdecl FUN_1000a770(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ==== FUN_1000a790 @ 1000a790 ==== 
 * signature: undefined4 __stdcall FUN_1000a790(void)
 * body: 1000a790-1000a7eb
 */

undefined4 FUN_1000a790(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000a270();
  DAT_1001344c = TlsAlloc();
  if (DAT_1001344c != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000d550(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1001344c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000a820((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}



/* ==== FUN_1000a7f0 @ 1000a7f0 ==== 
 * signature: undefined __stdcall FUN_1000a7f0(void)
 * body: 1000a7f0-1000a810
 */

void FUN_1000a7f0(void)

{
  FUN_1000a2a0();
  if (DAT_1001344c != 0xffffffff) {
    TlsFree(DAT_1001344c);
    DAT_1001344c = 0xffffffff;
  }
  return;
}



/* ==== FUN_1000a820 @ 1000a820 ==== 
 * signature: undefined __cdecl FUN_1000a820(int param_1)
 * body: 1000a820-1000a832
 */

void __cdecl FUN_1000a820(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_100142d8;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



/* ==== FUN_1000a840 @ 1000a840 ==== 
 * signature: DWORD * __stdcall FUN_1000a840(void)
 * body: 1000a840-1000a8b9
 */

DWORD * FUN_1000a840(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1001344c);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000d550(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1001344c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000a820((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        SetLastError(dwErrCode);
        return lpTlsValue;
      }
    }
    __amsg_exit(0x10);
  }
  SetLastError(dwErrCode);
  return lpTlsValue;
}



/* ==== FUN_1000a8ba @ 1000a8ba ==== 
 * signature: undefined FUN_1000a8ba(void)
 * body: 1000a8ba-1000a8bf
 */

void FUN_1000a8ba(undefined *param_1)

{
  if (DAT_1001344c != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1001344c), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x44));
      }
      FUN_1000bff0(param_1);
    }
    TlsSetValue(DAT_1001344c,(LPVOID)0x0);
    return;
  }
  return;
}



/* ==== FUN_1000a8c0 @ 1000a8c0 ==== 
 * signature: undefined __cdecl FUN_1000a8c0(undefined * param_1)
 * body: 1000a8c0-1000a95c
 */

void __cdecl FUN_1000a8c0(undefined *param_1)

{
  if (DAT_1001344c != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1001344c), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x44));
      }
      FUN_1000bff0(param_1);
    }
    TlsSetValue(DAT_1001344c,(LPVOID)0x0);
    return;
  }
  return;
}



/* ==== FUN_1000a960 @ 1000a960 ==== 
 * signature: undefined __stdcall FUN_1000a960(void)
 * body: 1000a960-1000ab6b
 */

void FUN_1000a960(void)

{
  byte bVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE hFile;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  UINT *pUVar8;
  UINT local_48;
  _STARTUPINFOA local_44;
  
  puVar2 = (undefined4 *)FUN_1000c060(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_10018500 = 0x20;
  DAT_10018400 = puVar2;
  if (puVar2 < puVar2 + 0x120) {
    do {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      puVar2 = puVar2 + 9;
    } while (puVar2 < DAT_10018400 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    local_48 = *(UINT *)local_44.lpReserved2;
    pUVar8 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar4 = (byte *)((int)pUVar8 + local_48);
    if (0x7ff < (int)local_48) {
      local_48 = 0x800;
    }
    if ((int)DAT_10018500 < (int)local_48) {
      piVar6 = &DAT_10018404;
      do {
        puVar2 = (undefined4 *)FUN_1000c060(0x480);
        if (puVar2 == (undefined4 *)0x0) {
          local_48 = DAT_10018500;
          break;
        }
        *piVar6 = (int)puVar2;
        DAT_10018500 = DAT_10018500 + 0x20;
        if (puVar2 < puVar2 + 0x120) {
          do {
            *(undefined1 *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffff;
            *(undefined1 *)((int)puVar2 + 5) = 10;
            puVar2[2] = 0;
            puVar2 = puVar2 + 9;
          } while (puVar2 < (undefined4 *)(*piVar6 + 0x480));
        }
        piVar6 = piVar6 + 1;
      } while ((int)DAT_10018500 < (int)local_48);
    }
    uVar7 = 0;
    if (0 < (int)local_48) {
      do {
        if (((*(HANDLE *)pbVar4 != (HANDLE)0xffffffff) && ((*pUVar8 & 1) != 0)) &&
           (((*pUVar8 & 8) != 0 || (DVar3 = GetFileType(*(HANDLE *)pbVar4), DVar3 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10018400)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)pbVar4;
          *(byte *)(puVar2 + 1) = (byte)*pUVar8;
        }
        uVar7 = uVar7 + 1;
        pUVar8 = (UINT *)((int)pUVar8 + 1);
        pbVar4 = pbVar4 + 4;
      } while ((int)uVar7 < (int)local_48);
    }
  }
  iVar5 = 0;
  do {
    puVar2 = DAT_10018400 + iVar5 * 9;
    if (DAT_10018400[iVar5 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else {
        DVar3 = 0xfffffff5 - (iVar5 != 1);
      }
      hFile = GetStdHandle(DVar3);
      if ((hFile == (HANDLE)0xffffffff) || (DVar3 = GetFileType(hFile), DVar3 == 0)) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_1000ab4e;
      }
      *puVar2 = hFile;
      if ((DVar3 & 0xff) == 2) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_1000ab4e;
      }
      if ((DVar3 & 0xff) == 3) {
        bVar1 = *(byte *)(puVar2 + 1) | 8;
        goto LAB_1000ab4e;
      }
    }
    else {
      bVar1 = *(byte *)(puVar2 + 1) | 0x80;
LAB_1000ab4e:
      *(byte *)(puVar2 + 1) = bVar1;
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      SetHandleCount(DAT_10018500);
      return;
    }
  } while( true );
}



/* ==== FUN_1000ab70 @ 1000ab70 ==== 
 * signature: undefined __stdcall FUN_1000ab70(void)
 * body: 1000ab70-1000abce
 */

void FUN_1000ab70(void)

{
  uint *puVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar1 = &DAT_10018400;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_1000bff0((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10018500);
  return;
}



/* ==== FUN_1000abd0 @ 1000abd0 ==== 
 * signature: undefined __stdcall FUN_1000abd0(void)
 * body: 1000abd0-1000acbd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000abd0(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int *local_4;
  
  iVar8 = 0;
  cVar2 = *DAT_10016f34;
  pcVar7 = DAT_10016f34;
  while (cVar2 != '\0') {
    if (cVar2 != '=') {
      iVar8 = iVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    pcVar9 = pcVar7 + ~uVar4;
    pcVar7 = pcVar7 + ~uVar4;
    cVar2 = *pcVar9;
  }
  piVar3 = (int *)FUN_1000c060(iVar8 * 4 + 4);
  _DAT_10016ff0 = piVar3;
  if (piVar3 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar2 = *DAT_10016f34;
  local_4 = piVar3;
  pcVar7 = DAT_10016f34;
  do {
    if (cVar2 == '\0') {
      FUN_1000bff0(DAT_10016f34);
      DAT_10016f34 = (char *)0x0;
      *piVar3 = 0;
      return;
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    if (cVar2 != '=') {
      iVar8 = FUN_1000c060(uVar4);
      *piVar3 = iVar8;
      if (iVar8 == 0) {
        __amsg_exit(9);
      }
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        pcVar10 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar10 + -uVar5;
      pcVar10 = (char *)*local_4;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      piVar3 = local_4 + 1;
      for (uVar5 = uVar5 & 3; local_4 = piVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    cVar2 = pcVar7[uVar4];
    pcVar7 = pcVar7 + uVar4;
  } while( true );
}



/* ==== FUN_1000acc0 @ 1000acc0 ==== 
 * signature: undefined __stdcall FUN_1000acc0(void)
 * body: 1000acc0-1000ad5d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000acc0(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_10017018,0x104);
  _DAT_10017000 = &DAT_10017018;
  pbVar2 = DAT_10018514;
  if (*DAT_10018514 == 0) {
    pbVar2 = &DAT_10017018;
  }
  FUN_1000ad60(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_1000c060(local_4 + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000ad60(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_10016fe8 = puVar1;
  _DAT_10016fe4 = local_8 + -1;
  return;
}



/* ==== FUN_1000ad60 @ 1000ad60 ==== 
 * signature: undefined __cdecl FUN_1000ad60(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
 * body: 1000ad60-1000af6e
 */

void __cdecl FUN_1000ad60(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  
  piVar6 = param_5;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    bVar2 = param_1[1];
    while ((pbVar7 = param_1 + 1, bVar2 != 0x22 && (bVar2 != 0))) {
      if (((*(byte *)((int)&DAT_10017120 + bVar2 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        pbVar7 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
      }
      param_1 = pbVar7;
      bVar2 = pbVar7[1];
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar7 == 0x22) {
      pbVar7 = param_1 + 2;
    }
  }
  else {
    do {
      *piVar6 = *piVar6 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar2 = *param_1;
      pbVar7 = param_1 + 1;
      param_5 = (int *)(uint)bVar2;
      if ((*(byte *)((int)param_5 + 0x10017121) & 4) != 0) {
        *piVar6 = *piVar6 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar7;
          param_3 = param_3 + 1;
        }
        pbVar7 = param_1 + 2;
      }
      if (bVar2 == 0x20) break;
      if (bVar2 == 0) goto LAB_1000ae39;
      param_1 = pbVar7;
    } while (bVar2 != 9);
    if (bVar2 == 0) {
LAB_1000ae39:
      pbVar7 = pbVar7 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar4 = false;
  bVar5 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      uVar8 = 0;
      bVar3 = true;
      bVar2 = *pbVar7;
      while (bVar2 == 0x5c) {
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        uVar8 = uVar8 + 1;
        bVar2 = *pbVar1;
      }
      if (*pbVar7 == 0x22) {
        if ((uVar8 & 1) == 0) {
          if ((bVar4) && (pbVar7[1] == 0x22)) {
            pbVar7 = pbVar7 + 1;
          }
          else {
            bVar3 = false;
          }
          bVar4 = !bVar5;
          bVar5 = bVar4;
        }
        uVar8 = uVar8 >> 1;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *piVar6 = *piVar6 + 1;
      }
      bVar2 = *pbVar7;
      if ((bVar2 == 0) || ((!bVar4 && ((bVar2 == 0x20 || (bVar2 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_10017120 + bVar2 + 1) & 4) != 0) {
            pbVar7 = pbVar7 + 1;
            *piVar6 = *piVar6 + 1;
          }
          *piVar6 = *piVar6 + 1;
          goto LAB_1000af35;
        }
        if ((*(byte *)((int)&DAT_10017120 + bVar2 + 1) & 4) != 0) {
          *param_3 = bVar2;
          param_3 = param_3 + 1;
          pbVar7 = pbVar7 + 1;
          *piVar6 = *piVar6 + 1;
        }
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        *piVar6 = *piVar6 + 1;
        pbVar7 = pbVar7 + 1;
      }
      else {
LAB_1000af35:
        pbVar7 = pbVar7 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *piVar6 = *piVar6 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* ==== FUN_1000af70 @ 1000af70 ==== 
 * signature: undefined4 __cdecl FUN_1000af70(int param_1)
 * body: 1000af70-1000b18a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000af70(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  BYTE *pBVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  _cpinfo local_14;
  
  FUN_1000a320(0x19);
  CodePage = FUN_1000b190(param_1);
  if (CodePage == DAT_10017224) {
    FUN_1000a3a0(0x19);
    return 0;
  }
  if (CodePage != 0) {
    iVar10 = 0;
    pUVar5 = &DAT_10013480;
    do {
      if (*pUVar5 == CodePage) {
        puVar14 = &DAT_10017120;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        *(undefined1 *)puVar14 = 0;
        uVar7 = 0;
        iVar10 = iVar10 * 0x30;
        pbVar12 = (byte *)(iVar10 + 0x10013490);
        do {
          bVar3 = *pbVar12;
          for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
              pbVar13 = pbVar13 + 2) {
            uVar8 = (uint)*pbVar13;
            if (uVar8 <= bVar3) {
              bVar4 = (&DAT_10013478)[uVar7];
              do {
                pbVar2 = (byte *)((int)&DAT_10017120 + uVar8 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar8 = uVar8 + 1;
              } while (uVar8 <= bVar3);
            }
            bVar3 = pbVar13[2];
          }
          uVar7 = uVar7 + 1;
          pbVar12 = pbVar12 + 8;
        } while (uVar7 < 4);
        DAT_10017224 = CodePage;
        _DAT_10017228 = FUN_1000b1e0(CodePage);
        _DAT_10017230 = *(undefined4 *)(iVar10 + 0x10013484);
        _DAT_10017234 = *(undefined4 *)(iVar10 + 0x10013488);
        _DAT_10017238 = *(undefined4 *)(iVar10 + 0x1001348c);
        FUN_1000a3a0(0x19);
        return 0;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar10 = iVar10 + 1;
    } while (pUVar5 < &DAT_10013570);
    BVar6 = GetCPInfo(CodePage,&local_14);
    if (BVar6 == 1) {
      puVar14 = &DAT_10017120;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      if (local_14.MaxCharSize < 2) {
        DAT_10017224 = 0;
        _DAT_10017228 = 0;
      }
      else {
        if (local_14.LeadByte[0] != '\0') {
          pBVar11 = local_14.LeadByte + 1;
          do {
            bVar3 = *pBVar11;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              *(byte *)((int)&DAT_10017120 + uVar7 + 1) =
                   *(byte *)((int)&DAT_10017120 + uVar7 + 1) | 4;
            }
            pBVar1 = pBVar11 + 1;
            pBVar11 = pBVar11 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          *(byte *)((int)&DAT_10017120 + uVar7 + 1) = *(byte *)((int)&DAT_10017120 + uVar7 + 1) | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_10017224 = CodePage;
        _DAT_10017228 = FUN_1000b1e0(CodePage);
      }
      _DAT_10017230 = 0;
      _DAT_10017234 = 0;
      _DAT_10017238 = 0;
      FUN_1000a3a0(0x19);
      return 0;
    }
    if (DAT_1001723c == 0) {
      FUN_1000a3a0(0x19);
      return 0xffffffff;
    }
  }
  FUN_1000b240();
  FUN_1000a3a0(0x19);
  return 0;
}



/* ==== FUN_1000b190 @ 1000b190 ==== 
 * signature: int __cdecl FUN_1000b190(int param_1)
 * body: 1000b190-1000b1dc
 */

int __cdecl FUN_1000b190(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1001723c = 1;
                    /* WARNING: Could not recover jumptable at 0x1000b1ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1001723c = 1;
                    /* WARNING: Could not recover jumptable at 0x1000b1c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10016fc0;
  }
  DAT_1001723c = (uint)bVar2;
  return param_1;
}



/* ==== FUN_1000b1e0 @ 1000b1e0 ==== 
 * signature: undefined4 __cdecl FUN_1000b1e0(undefined4 param_1)
 * body: 1000b1e0-1000b217
 */

undefined4 __cdecl FUN_1000b1e0(undefined4 param_1)

{
  switch(param_1) {
  case 0x3a4:
    return 0x411;
  default:
    return 0;
  case 0x3a8:
    return 0x804;
  case 0x3b5:
    return 0x412;
  case 0x3b6:
    return 0x404;
  }
}



/* ==== FUN_1000b240 @ 1000b240 ==== 
 * signature: undefined __stdcall FUN_1000b240(void)
 * body: 1000b240-1000b26c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b240(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10017120;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10017224 = 0;
  _DAT_10017228 = 0;
  _DAT_10017230 = 0;
  _DAT_10017234 = 0;
  _DAT_10017238 = 0;
  return;
}



/* ==== FUN_1000b270 @ 1000b270 ==== 
 * signature: undefined __stdcall FUN_1000b270(void)
 * body: 1000b270-1000b27a
 */

void FUN_1000b270(void)

{
  FUN_1000af70(-3);
  return;
}



/* ==== FUN_1000b280 @ 1000b280 ==== 
 * signature: LPSTR __stdcall FUN_1000b280(void)
 * body: 1000b280-1000b3d5
 */

LPSTR FUN_1000b280(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  int iVar5;
  uint uVar6;
  LPSTR pCVar7;
  LPCH pCVar8;
  LPCH pCVar9;
  LPCH pCVar10;
  LPWCH lpWideCharStr;
  CHAR *pCVar11;
  LPSTR pCVar12;
  WCHAR *pWVar4;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar10 = (LPCH)0x0;
  if (DAT_10017244 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      pCVar10 = GetEnvironmentStrings();
      if (pCVar10 == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_10017244 = 2;
    }
    else {
      DAT_10017244 = 1;
    }
  }
  if (DAT_10017244 == 1) {
    if ((lpWideCharStr != (LPWCH)0x0) ||
       (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr != (LPWCH)0x0)) {
      WVar2 = *lpWideCharStr;
      pWVar3 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar4 = pWVar3;
          pWVar3 = pWVar4 + 1;
        } while (*pWVar3 != L'\0');
        pWVar3 = pWVar4 + 2;
        WVar2 = *pWVar3;
      }
      iVar5 = ((int)pWVar3 - (int)lpWideCharStr >> 1) + 1;
      uVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((uVar6 != 0) && (pCVar7 = (LPSTR)FUN_1000c060(uVar6), pCVar7 != (LPSTR)0x0)) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar7,uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) {
          FUN_1000bff0(pCVar7);
          pCVar7 = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(lpWideCharStr);
        return pCVar7;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return (LPSTR)0x0;
    }
  }
  else if ((DAT_10017244 == 2) &&
          ((pCVar10 != (LPCH)0x0 || (pCVar10 = GetEnvironmentStrings(), pCVar10 != (LPCH)0x0)))) {
    cVar1 = *pCVar10;
    pCVar9 = pCVar10;
    while (cVar1 != '\0') {
      do {
        pCVar8 = pCVar9;
        pCVar9 = pCVar8 + 1;
      } while (pCVar8[1] != '\0');
      pCVar9 = pCVar8 + 2;
      cVar1 = pCVar8[2];
    }
    pCVar9 = pCVar9 + (1 - (int)pCVar10);
    pCVar7 = (LPSTR)FUN_1000c060((uint)pCVar9);
    if (pCVar7 != (LPSTR)0x0) {
      pCVar11 = pCVar10;
      pCVar12 = pCVar7;
      for (uVar6 = (uint)pCVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pCVar12 = *(undefined4 *)pCVar11;
        pCVar11 = pCVar11 + 4;
        pCVar12 = pCVar12 + 4;
      }
      for (uVar6 = (uint)pCVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pCVar12 = *pCVar11;
        pCVar11 = pCVar11 + 1;
        pCVar12 = pCVar12 + 1;
      }
      FreeEnvironmentStringsA(pCVar10);
      return pCVar7;
    }
    FreeEnvironmentStringsA(pCVar10);
    return (LPSTR)0x0;
  }
  return (LPSTR)0x0;
}



/* ==== FUN_1000b3e0 @ 1000b3e0 ==== 
 * signature: undefined4 __stdcall FUN_1000b3e0(void)
 * body: 1000b3e0-1000b416
 */

undefined4 FUN_1000b3e0(void)

{
  undefined **ppuVar1;
  
  DAT_100183e4 = HeapCreate(0,0x1000,0);
  if (DAT_100183e4 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_1000d600();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_100183e4);
    return 0;
  }
  return 1;
}



/* ==== FUN_1000b420 @ 1000b420 ==== 
 * signature: undefined __stdcall FUN_1000b420(void)
 * body: 1000b420-1000b456
 */

void FUN_1000b420(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_LOOP_10014360;
  do {
    if (ppuVar1[4] != (undefined *)0x0) {
      VirtualFree(ppuVar1[4],0,0x8000);
    }
    ppuVar1 = (undefined **)*ppuVar1;
  } while (ppuVar1 != &PTR_LOOP_10014360);
  HeapDestroy(DAT_100183e4);
  return;
}



/* ==== FUN_1000b460 @ 1000b460 ==== 
 * signature: undefined __cdecl FUN_1000b460(undefined4 param_1)
 * body: 1000b460-1000b469
 */

void __cdecl FUN_1000b460(undefined4 param_1)

{
  DAT_10016f40 = param_1;
  return;
}



/* ==== FUN_1000b470 @ 1000b470 ==== 
 * signature: undefined4 __stdcall FUN_1000b470(void)
 * body: 1000b470-1000b477
 */

undefined4 FUN_1000b470(void)

{
  return 1;
}



/* ==== FUN_1000b480 @ 1000b480 ==== 
 * signature: undefined __stdcall FUN_1000b480(void)
 * body: 1000b480-1000b4bc
 */

void FUN_1000b480(void)

{
  if ((DAT_10016f3c == 1) || ((DAT_10016f3c == 0 && (DAT_10016f40 == 1)))) {
    FUN_1000b4c0(0xfc);
    if (DAT_10017248 != (code *)0x0) {
      (*DAT_10017248)();
    }
    FUN_1000b4c0(0xff);
  }
  return;
}



/* ==== FUN_1000b4c0 @ 1000b4c0 ==== 
 * signature: undefined __cdecl FUN_1000b4c0(int param_1)
 * body: 1000b4c0-1000b695
 */

void __cdecl FUN_1000b4c0(int param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  CHAR *pCVar10;
  char *pcVar11;
  DWORD local_1a8;
  char local_1a4 [100];
  char acStack_140 [60];
  CHAR local_104 [260];
  
  piVar2 = &DAT_10013578;
  iVar8 = 0;
  do {
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 2;
    iVar8 = iVar8 + 1;
  } while (piVar2 < &DAT_10013608);
  if (param_1 == (&DAT_10013578)[iVar8 * 2]) {
    if ((DAT_10016f3c == 1) || ((DAT_10016f3c == 0 && (DAT_10016f40 == 1)))) {
      if ((DAT_10018400 == 0) ||
         (hFile = *(HANDLE *)(DAT_10018400 + 0x48), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar7 = *(char **)(iVar8 * 8 + 0x1001357c);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,pcVar7,~uVar5 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
      if (DVar3 == 0) {
        pcVar7 = "<program name unknown>";
        pCVar10 = local_104;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pCVar10 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pCVar10 = pCVar10 + 4;
        }
        *(undefined2 *)pCVar10 = *(undefined2 *)pcVar7;
        pCVar10[2] = pcVar7[2];
      }
      uVar5 = 0xffffffff;
      pcVar7 = local_104;
      pcVar9 = local_104;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0x3c < ~uVar5) {
        uVar5 = 0xffffffff;
        pcVar7 = local_104;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pcVar7 = acStack_140 + ~uVar5;
        _strncpy(pcVar7,"...",3);
      }
      pcVar9 = "Runtime Error!\n\nProgram: ";
      pcVar11 = local_1a4;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      *(undefined2 *)pcVar11 = *(undefined2 *)pcVar9;
      uVar5 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = "\n\n";
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = *(char **)(iVar8 * 8 + 0x1001357c);
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_1000dd20(local_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



/* ==== FUN_1000b6a0 @ 1000b6a0 ==== 
 * signature: uint __thiscall FUN_1000b6a0(void * this, uint param_1, uint param_2)
 * body: 1000b6a0-1000b6da
 */

uint __thiscall FUN_1000b6a0(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_1000b700(local_8);
  FUN_1000b7a0();
  return param_2 & param_1 | ~param_2 & uVar1;
}



/* ==== FUN_1000b6e0 @ 1000b6e0 ==== 
 * signature: undefined __cdecl FUN_1000b6e0(void * param_1, uint param_2)
 * body: 1000b6e0-1000b6f7
 */

void __cdecl FUN_1000b6e0(void *param_1,uint param_2)

{
  FUN_1000b6a0(param_1,(uint)param_1,param_2 & 0xfff7ffff);
  return;
}



/* ==== FUN_1000b700 @ 1000b700 ==== 
 * signature: uint __cdecl FUN_1000b700(uint param_1)
 * body: 1000b700-1000b795
 */

uint __cdecl FUN_1000b700(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 < 0x401) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
  }
  else if (uVar2 == 0x800) {
    uVar1 = uVar1 | 0x200;
  }
  else if (uVar2 == 0xc00) {
    uVar1 = uVar1 | 0x300;
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}



/* ==== FUN_1000b7a0 @ 1000b7a0 ==== 
 * signature: undefined __stdcall FUN_1000b7a0(void)
 * body: 1000b7a0-1000b82a
 */

void FUN_1000b7a0(void)

{
  return;
}



/* ==== FUN_1000b830 @ 1000b830 ==== 
 * signature: uint __cdecl FUN_1000b830(int param_1, uint param_2)
 * body: 1000b830-1000b8c2
 */

uint __cdecl FUN_1000b830(int param_1,uint param_2)

{
  int iVar1;
  BOOL BVar2;
  uint local_4;
  
  iVar1 = param_1;
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(PTR_DAT_10013618 + param_1 * 2) & param_2;
  }
  if ((PTR_DAT_10013618[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1._0_2_ = (ushort)(byte)param_1;
    iVar1 = 1;
  }
  else {
    param_1._0_2_ = CONCAT11((byte)param_1,(char)((uint)param_1 >> 8));
    param_1._3_1_ = SUB41(iVar1,3);
    param_1._0_3_ = (uint3)(ushort)param_1;
    iVar1 = 2;
  }
  BVar2 = FUN_1000df40(1,(LPCSTR)&param_1,iVar1,(LPWORD)&local_4,0,0);
  if (BVar2 == 0) {
    return 0;
  }
  return local_4 & 0xffff & param_2;
}



/* ==== FUN_1000b8d0 @ 1000b8d0 ==== 
 * signature: undefined4 __cdecl FUN_1000b8d0(int param_1, int param_2)
 * body: 1000b8d0-1000b935
 */

undefined4 __cdecl FUN_1000b8d0(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  
  bVar1 = (byte)(param_2 >> 0x1f);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  if ((*(uint *)(param_1 + iVar3 * 4) &
      ~(-1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) & 0x1f))) != 0) {
    return 0;
  }
  iVar3 = iVar3 + 1;
  if (iVar3 < 3) {
    piVar2 = (int *)(param_1 + iVar3 * 4);
    do {
      if (*piVar2 != 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < 3);
    return 1;
  }
  return 1;
}



/* ==== FUN_1000b940 @ 1000b940 ==== 
 * signature: undefined __cdecl FUN_1000b940(int param_1, int param_2)
 * body: 1000b940-1000b9a8
 */

void __cdecl FUN_1000b940(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  bVar1 = (byte)(param_2 >> 0x1f);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  iVar2 = FUN_1000e070(*(uint *)(param_1 + iVar3 * 4),
                       1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) &
                            0x1f),(uint *)(param_1 + iVar3 * 4));
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    puVar4 = (uint *)(param_1 + iVar3 * 4);
    do {
      if (iVar2 == 0) {
        return;
      }
      iVar2 = FUN_1000e070(*puVar4,1,puVar4);
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar3);
  }
  return;
}



/* ==== FUN_1000b9b0 @ 1000b9b0 ==== 
 * signature: undefined4 __cdecl FUN_1000b9b0(int param_1, int param_2)
 * body: 1000b9b0-1000ba4c
 */

undefined4 __cdecl FUN_1000b9b0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_4;
  
  local_4 = 0;
  bVar2 = (byte)(param_2 >> 0x1f);
  bVar2 = 0x1f - ((((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  if (((*(uint *)(param_1 + iVar3 * 4) & 1 << (bVar2 & 0x1f)) != 0) &&
     (iVar1 = FUN_1000b8d0(param_1,param_2 + 1), iVar1 == 0)) {
    local_4 = FUN_1000b940(param_1,param_2 + -1);
  }
  *(uint *)(param_1 + iVar3 * 4) = *(uint *)(param_1 + iVar3 * 4) & -1 << (bVar2 & 0x1f);
  iVar3 = iVar3 + 1;
  if (iVar3 < 3) {
    puVar4 = (undefined4 *)(param_1 + iVar3 * 4);
    for (iVar1 = 3 - iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return local_4;
}



/* ==== FUN_1000ba50 @ 1000ba50 ==== 
 * signature: undefined __cdecl FUN_1000ba50(int param_1, undefined4 * param_2)
 * body: 1000ba50-1000ba6c
 */

void __cdecl FUN_1000ba50(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)((int)param_2 + iVar1) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* ==== FUN_1000ba70 @ 1000ba70 ==== 
 * signature: undefined __cdecl FUN_1000ba70(undefined4 * param_1)
 * body: 1000ba70-1000ba7e
 */

void __cdecl FUN_1000ba70(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ==== FUN_1000ba80 @ 1000ba80 ==== 
 * signature: undefined4 __cdecl FUN_1000ba80(int * param_1)
 * body: 1000ba80-1000ba9c
 */

undefined4 __cdecl FUN_1000ba80(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}



/* ==== FUN_1000baa0 @ 1000baa0 ==== 
 * signature: undefined __cdecl FUN_1000baa0(uint * param_1, int param_2)
 * body: 1000baa0-1000bb50
 */

void __cdecl FUN_1000baa0(uint *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  iVar1 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = (byte)(param_2 >> 0x1f);
  uVar5 = 0;
  bVar2 = (((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2;
  param_2 = 3;
  puVar6 = param_1;
  do {
    uVar4 = *puVar6 >> (bVar2 & 0x1f) | uVar5;
    uVar5 = (~(-1 << (bVar2 & 0x1f)) & *puVar6) << (0x20 - bVar2 & 0x1f);
    *puVar6 = uVar4;
    param_2 = param_2 + -1;
    puVar6 = puVar6 + 1;
  } while (param_2 != 0);
  iVar7 = 2;
  iVar3 = 8;
  do {
    if (iVar7 < iVar1) {
      *(undefined4 *)((int)param_1 + iVar3) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + iVar3) = *(undefined4 *)((int)param_1 + iVar3 + iVar1 * -4);
    }
    iVar7 = iVar7 + -1;
    iVar3 = iVar3 + -4;
  } while (-1 < iVar3);
  return;
}



/* ==== FUN_1000bb60 @ 1000bb60 ==== 
 * signature: undefined4 __cdecl FUN_1000bb60(ushort * param_1, uint * param_2, int * param_3)
 * body: 1000bb60-1000bd2e
 */

undefined4 __cdecl FUN_1000bb60(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint local_18;
  uint local_14;
  int local_10;
  undefined4 local_c [3];
  
  uVar1 = param_1[5];
  local_14 = *(uint *)(param_1 + 1);
  local_18 = *(uint *)(param_1 + 3);
  uVar4 = uVar1 & 0x7fff;
  iVar5 = uVar4 - 0x3fff;
  local_10 = (uint)*param_1 << 0x10;
  if (iVar5 == -0x3fff) {
    iVar5 = 0;
    iVar2 = FUN_1000ba80((int *)&local_18);
    if (iVar2 == 0) {
      FUN_1000ba70(&local_18);
      uVar3 = 2;
      goto LAB_1000bce1;
    }
  }
  else {
    FUN_1000ba50((int)local_c,&local_18);
    iVar2 = FUN_1000b9b0((int)&local_18,param_3[2]);
    if (iVar2 != 0) {
      iVar5 = uVar4 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar5 < iVar2 - param_3[2]) {
      FUN_1000ba70(&local_18);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_1000bce1;
    }
    if (iVar5 <= iVar2) {
      FUN_1000ba50((int)&local_18,local_c);
      FUN_1000baa0(&local_18,iVar2 - iVar5);
      FUN_1000b9b0((int)&local_18,param_3[2]);
      FUN_1000baa0(&local_18,param_3[3] + 1);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_1000bce1;
    }
    if (*param_3 <= iVar5) {
      FUN_1000ba70(&local_18);
      local_18 = local_18 | 0x80000000;
      FUN_1000baa0(&local_18,param_3[3]);
      iVar5 = param_3[5] + *param_3;
      uVar3 = 1;
      goto LAB_1000bce1;
    }
    iVar5 = param_3[5] + iVar5;
    local_18 = local_18 & 0x7fffffff;
    FUN_1000baa0(&local_18,param_3[3]);
  }
  uVar3 = 0;
LAB_1000bce1:
  local_18 = iVar5 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_18;
  if (param_3[4] == 0x40) {
    param_2[1] = local_18;
    *param_2 = local_14;
    return uVar3;
  }
  if (param_3[4] == 0x20) {
    *param_2 = local_18;
  }
  return uVar3;
}



/* ==== FUN_1000bd30 @ 1000bd30 ==== 
 * signature: undefined __cdecl FUN_1000bd30(ushort * param_1, uint * param_2)
 * body: 1000bd30-1000bd47
 */

void __cdecl FUN_1000bd30(ushort *param_1,uint *param_2)

{
  FUN_1000bb60(param_1,param_2,(int *)&DAT_10013828);
  return;
}



/* ==== FUN_1000bd50 @ 1000bd50 ==== 
 * signature: undefined __cdecl FUN_1000bd50(ushort * param_1, uint * param_2)
 * body: 1000bd50-1000bd67
 */

void __cdecl FUN_1000bd50(ushort *param_1,uint *param_2)

{
  FUN_1000bb60(param_1,param_2,(int *)&DAT_10013840);
  return;
}



/* ==== FUN_1000bd70 @ 1000bd70 ==== 
 * signature: undefined __cdecl FUN_1000bd70(uint * param_1, byte * param_2)
 * body: 1000bd70-1000bda7
 */

void __cdecl FUN_1000bd70(uint *param_1,byte *param_2)

{
  ushort local_c [6];
  
  FUN_1000e270(local_c,(int *)&param_2,param_2,0,0,0,0);
  FUN_1000bd30(local_c,param_1);
  return;
}



/* ==== FUN_1000bdb0 @ 1000bdb0 ==== 
 * signature: undefined __cdecl FUN_1000bdb0(uint * param_1, byte * param_2)
 * body: 1000bdb0-1000bde7
 */

void __cdecl FUN_1000bdb0(uint *param_1,byte *param_2)

{
  ushort local_c [6];
  
  FUN_1000e270(local_c,(int *)&param_2,param_2,0,0,0,0);
  FUN_1000bd50(local_c,param_1);
  return;
}



/* ==== FUN_1000bdf0 @ 1000bdf0 ==== 
 * signature: undefined __cdecl FUN_1000bdf0(char * param_1, int param_2, int param_3)
 * body: 1000bdf0-1000be80
 */

void __cdecl FUN_1000bdf0(char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar5 = *(char **)(param_3 + 0xc);
  pcVar7 = param_1 + 1;
  *param_1 = '0';
  pcVar1 = pcVar7;
  iVar6 = param_2;
  if (0 < param_2) {
    do {
      cVar2 = *pcVar5;
      if (cVar2 == '\0') {
        cVar2 = '0';
      }
      else {
        pcVar5 = pcVar5 + 1;
      }
      *pcVar1 = cVar2;
      pcVar1 = pcVar1 + 1;
      iVar6 = iVar6 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *pcVar1 = '\0';
  if ((-1 < iVar6) && ('4' < *pcVar5)) {
    cVar2 = pcVar1[-1];
    while (pcVar5 = pcVar1 + -1, cVar2 == '9') {
      *pcVar5 = '0';
      cVar2 = pcVar1[-2];
      pcVar1 = pcVar5;
    }
    *pcVar5 = *pcVar5 + '\x01';
  }
  if (*param_1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    return;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar7 + 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar5;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* ==== FUN_1000be90 @ 1000be90 ==== 
 * signature: int * __cdecl FUN_1000be90(undefined4 param_1, undefined4 param_2, int * param_3, char * param_4)
 * body: 1000be90-1000bf1a
 */

int * __cdecl FUN_1000be90(undefined4 param_1,undefined4 param_2,int *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 in_stack_ffffffbc;
  undefined2 uVar7;
  uint local_28;
  uint local_24;
  undefined2 local_20;
  short local_1c;
  char local_1a;
  char local_18 [24];
  
  uVar7 = (undefined2)((uint)in_stack_ffffffbc >> 0x10);
  FUN_1000bf20(&local_28,&param_1);
  iVar2 = FUN_1000ea00(local_28,local_24,CONCAT22(uVar7,local_20),0x11,0,&local_1c);
  param_3[2] = iVar2;
  param_3[1] = (int)local_1c;
  *param_3 = (int)local_1a;
  uVar3 = 0xffffffff;
  pcVar5 = local_18;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = param_4;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  param_3[3] = (int)param_4;
  return param_3;
}



/* ==== FUN_1000bf20 @ 1000bf20 ==== 
 * signature: undefined __cdecl FUN_1000bf20(uint * param_1, uint * param_2)
 * body: 1000bf20-1000bfdd
 */

void __cdecl FUN_1000bf20(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  
  uVar4 = 0x80000000;
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar2 = *param_2;
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  if (uVar3 == 0) {
    uVar4 = 0;
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar6 = 0x3c01;
  }
  else if (uVar3 == 0x7ff) {
    iVar6 = 0x7fff;
  }
  else {
    iVar6 = uVar3 + 0x3c00;
  }
  uVar5 = (ushort)iVar6;
  uVar3 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | uVar4;
  param_1[1] = uVar3;
  *param_1 = uVar2 << 0xb;
  for (; uVar4 == 0; uVar4 = uVar4 & 0x80000000) {
    uVar4 = uVar3 * 2;
    uVar3 = *param_1 >> 0x1f | uVar4;
    iVar6 = iVar6 + 0xffff;
    uVar5 = (ushort)iVar6;
    param_1[1] = uVar3;
    *param_1 = *param_1 * 2;
  }
  *(ushort *)(param_1 + 2) = uVar5 | uVar1 & 0x8000;
  return;
}



/* ==== FUN_1000bfe0 @ 1000bfe0 ==== 
 * signature: undefined __stdcall FUN_1000bfe0(void)
 * body: 1000bfe0-1000bfea
 */

void FUN_1000bfe0(void)

{
  __amsg_exit(2);
  return;
}



/* ==== FUN_1000bff0 @ 1000bff0 ==== 
 * signature: undefined __cdecl FUN_1000bff0(undefined * param_1)
 * body: 1000bff0-1000c057
 */

void __cdecl FUN_1000bff0(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    FUN_1000a320(9);
    pbVar1 = (byte *)FUN_1000d8a0(lpMem,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_1000d900(local_4,(int)param_1,pbVar1);
      FUN_1000a3a0(9);
      return;
    }
    FUN_1000a3a0(9);
    HeapFree(DAT_100183e4,0,lpMem);
  }
  return;
}



/* ==== FUN_1000c060 @ 1000c060 ==== 
 * signature: undefined __cdecl FUN_1000c060(uint param_1)
 * body: 1000c060-1000c073
 */

void __cdecl FUN_1000c060(uint param_1)

{
  FUN_1000c080(param_1,DAT_100172c8);
  return;
}



/* ==== FUN_1000c080 @ 1000c080 ==== 
 * signature: int * __cdecl FUN_1000c080(uint param_1, int param_2)
 * body: 1000c080-1000c0c3
 */

int * __cdecl FUN_1000c080(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        piVar1 = FUN_1000c0d0(param_1);
      }
      else {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      iVar2 = FUN_1000ed90(param_1);
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}



/* ==== FUN_1000c0d0 @ 1000c0d0 ==== 
 * signature: int * __cdecl FUN_1000c0d0(int param_1)
 * body: 1000c0d0-1000c124
 */

int * __cdecl FUN_1000c0d0(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if (dwBytes <= DAT_10016384) {
    FUN_1000a320(9);
    piVar1 = FUN_1000d960(param_1 + 0xfU >> 4);
    FUN_1000a3a0(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  piVar1 = HeapAlloc(DAT_100183e4,0,dwBytes);
  return piVar1;
}



/* ==== FUN_1000c130 @ 1000c130 ==== 
 * signature: undefined __stdcall FUN_1000c130(void)
 * body: 1000c130-1000c1eb
 */

void FUN_1000c130(void)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_100183e0 == 0) {
    DAT_100183e0 = 0x200;
  }
  else if (DAT_100183e0 < 0x14) {
    DAT_100183e0 = 0x14;
  }
  DAT_100173c0 = FUN_1000d550(DAT_100183e0,4);
  if (DAT_100173c0 == (int *)0x0) {
    DAT_100183e0 = 0x14;
    DAT_100173c0 = FUN_1000d550(0x14,4);
    if (DAT_100173c0 == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar3 = 0;
  ppuVar1 = &PTR_DAT_10013858;
  do {
    *(undefined ***)((int)DAT_100173c0 + iVar3) = ppuVar1;
    ppuVar1 = ppuVar1 + 8;
    iVar3 = iVar3 + 4;
  } while ((int)ppuVar1 < 0x10013ad8);
  uVar2 = 0;
  puVar4 = &DAT_10013868;
  do {
    iVar3 = *(int *)((&DAT_10018400)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
    if ((iVar3 == -1) || (iVar3 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar2 = uVar2 + 1;
  } while ((int)puVar4 < 0x100138c8);
  return;
}



/* ==== FUN_1000c1ec @ 1000c1ec ==== 
 * signature: undefined FUN_1000c1ec(void)
 * body: 1000c1ec-1000c203
 */

void FUN_1000c1ec(void)

{
  FUN_1000ef00();
  if (DAT_10017008 != '\0') {
    FUN_1000edb0();
    return;
  }
  return;
}



/* ==== FUN_1000c204 @ 1000c204 ==== 
 * signature: undefined FUN_1000c204(void)
 * body: 1000c204-1000c20f
 */

undefined4 FUN_1000c204(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_10016fbc == 0) {
    PTR_PTR_10016434 = (undefined *)&PTR_DAT_10016388;
    FUN_1000c640(DAT_10017250);
    FUN_1000bff0((undefined *)DAT_10017250);
    DAT_10017250 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_1000d550(1,0xac);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_1000c2c0((char *)piVar1);
  if (uVar2 != 0) {
    FUN_1000c640(piVar1);
    FUN_1000bff0((undefined *)piVar1);
    return 1;
  }
  PTR_PTR_10016434 = (undefined *)piVar1;
  FUN_1000c640(DAT_10017250);
  FUN_1000bff0((undefined *)DAT_10017250);
  DAT_10017250 = piVar1;
  return 0;
}



/* ==== FUN_1000c210 @ 1000c210 ==== 
 * signature: undefined4 __stdcall FUN_1000c210(void)
 * body: 1000c210-1000c2bd
 */

undefined4 FUN_1000c210(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_10016fbc == 0) {
    PTR_PTR_10016434 = (undefined *)&PTR_DAT_10016388;
    FUN_1000c640(DAT_10017250);
    FUN_1000bff0((undefined *)DAT_10017250);
    DAT_10017250 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_1000d550(1,0xac);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_1000c2c0((char *)piVar1);
  if (uVar2 != 0) {
    FUN_1000c640(piVar1);
    FUN_1000bff0((undefined *)piVar1);
    return 1;
  }
  PTR_PTR_10016434 = (undefined *)piVar1;
  FUN_1000c640(DAT_10017250);
  FUN_1000bff0((undefined *)DAT_10017250);
  DAT_10017250 = piVar1;
  return 0;
}



/* ==== FUN_1000c2c0 @ 1000c2c0 ==== 
 * signature: uint __cdecl FUN_1000c2c0(char * param_1)
 * body: 1000c2c0-1000c630
 */

uint __cdecl FUN_1000c2c0(char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  char *pcVar44;
  
  uVar40 = (uint)DAT_1001728e;
  pcVar44 = (char *)(uint)DAT_10017290;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  uVar1 = FUN_1000efd0(1,uVar40,0x31,param_1 + 4);
  uVar2 = FUN_1000efd0(1,uVar40,0x32,param_1 + 8);
  uVar3 = FUN_1000efd0(1,uVar40,0x33,param_1 + 0xc);
  uVar4 = FUN_1000efd0(1,uVar40,0x34,param_1 + 0x10);
  uVar5 = FUN_1000efd0(1,uVar40,0x35,param_1 + 0x14);
  uVar6 = FUN_1000efd0(1,uVar40,0x36,param_1 + 0x18);
  uVar7 = FUN_1000efd0(1,uVar40,0x37,param_1);
  uVar8 = FUN_1000efd0(1,uVar40,0x2a,param_1 + 0x20);
  uVar9 = FUN_1000efd0(1,uVar40,0x2b,param_1 + 0x24);
  uVar10 = FUN_1000efd0(1,uVar40,0x2c,param_1 + 0x28);
  uVar11 = FUN_1000efd0(1,uVar40,0x2d,param_1 + 0x2c);
  uVar12 = FUN_1000efd0(1,uVar40,0x2e,param_1 + 0x30);
  uVar13 = FUN_1000efd0(1,uVar40,0x2f,param_1 + 0x34);
  uVar14 = FUN_1000efd0(1,uVar40,0x30,param_1 + 0x1c);
  uVar15 = FUN_1000efd0(1,uVar40,0x44,param_1 + 0x38);
  uVar16 = FUN_1000efd0(1,uVar40,0x45,param_1 + 0x3c);
  uVar17 = FUN_1000efd0(1,uVar40,0x46,param_1 + 0x40);
  uVar18 = FUN_1000efd0(1,uVar40,0x47,param_1 + 0x44);
  uVar19 = FUN_1000efd0(1,uVar40,0x48,param_1 + 0x48);
  uVar20 = FUN_1000efd0(1,uVar40,0x49,param_1 + 0x4c);
  uVar21 = FUN_1000efd0(1,uVar40,0x4a,param_1 + 0x50);
  uVar22 = FUN_1000efd0(1,uVar40,0x4b,param_1 + 0x54);
  uVar23 = FUN_1000efd0(1,uVar40,0x4c,param_1 + 0x58);
  uVar24 = FUN_1000efd0(1,uVar40,0x4d,param_1 + 0x5c);
  uVar25 = FUN_1000efd0(1,uVar40,0x4e,param_1 + 0x60);
  uVar26 = FUN_1000efd0(1,uVar40,0x4f,param_1 + 100);
  uVar27 = FUN_1000efd0(1,uVar40,0x38,param_1 + 0x68);
  uVar28 = FUN_1000efd0(1,uVar40,0x39,param_1 + 0x6c);
  uVar29 = FUN_1000efd0(1,uVar40,0x3a,param_1 + 0x70);
  uVar30 = FUN_1000efd0(1,uVar40,0x3b,param_1 + 0x74);
  uVar31 = FUN_1000efd0(1,uVar40,0x3c,param_1 + 0x78);
  uVar32 = FUN_1000efd0(1,uVar40,0x3d,param_1 + 0x7c);
  uVar33 = FUN_1000efd0(1,uVar40,0x3e,param_1 + 0x80);
  uVar34 = FUN_1000efd0(1,uVar40,0x3f,param_1 + 0x84);
  uVar35 = FUN_1000efd0(1,uVar40,0x40,param_1 + 0x88);
  uVar36 = FUN_1000efd0(1,uVar40,0x41,param_1 + 0x8c);
  uVar37 = FUN_1000efd0(1,uVar40,0x42,param_1 + 0x90);
  uVar38 = FUN_1000efd0(1,uVar40,0x43,param_1 + 0x94);
  uVar39 = FUN_1000efd0(1,uVar40,0x28,param_1 + 0x98);
  uVar40 = FUN_1000efd0(1,uVar40,0x29,param_1 + 0x9c);
  uVar41 = FUN_1000efd0(1,(LCID)pcVar44,0x1f,param_1 + 0xa0);
  uVar42 = FUN_1000efd0(1,(LCID)pcVar44,0x20,param_1 + 0xa4);
  uVar43 = FUN_1000c880(pcVar44,(int)param_1);
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
         uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 |
         uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 |
         uVar42 | uVar43;
}



/* ==== FUN_1000c640 @ 1000c640 ==== 
 * signature: undefined __cdecl FUN_1000c640(undefined4 * param_1)
 * body: 1000c640-1000c872
 */

void __cdecl FUN_1000c640(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_1000bff0((undefined *)param_1[1]);
    FUN_1000bff0((undefined *)param_1[2]);
    FUN_1000bff0((undefined *)param_1[3]);
    FUN_1000bff0((undefined *)param_1[4]);
    FUN_1000bff0((undefined *)param_1[5]);
    FUN_1000bff0((undefined *)param_1[6]);
    FUN_1000bff0((undefined *)*param_1);
    FUN_1000bff0((undefined *)param_1[8]);
    FUN_1000bff0((undefined *)param_1[9]);
    FUN_1000bff0((undefined *)param_1[10]);
    FUN_1000bff0((undefined *)param_1[0xb]);
    FUN_1000bff0((undefined *)param_1[0xc]);
    FUN_1000bff0((undefined *)param_1[0xd]);
    FUN_1000bff0((undefined *)param_1[7]);
    FUN_1000bff0((undefined *)param_1[0xe]);
    FUN_1000bff0((undefined *)param_1[0xf]);
    FUN_1000bff0((undefined *)param_1[0x10]);
    FUN_1000bff0((undefined *)param_1[0x11]);
    FUN_1000bff0((undefined *)param_1[0x12]);
    FUN_1000bff0((undefined *)param_1[0x13]);
    FUN_1000bff0((undefined *)param_1[0x14]);
    FUN_1000bff0((undefined *)param_1[0x15]);
    FUN_1000bff0((undefined *)param_1[0x16]);
    FUN_1000bff0((undefined *)param_1[0x17]);
    FUN_1000bff0((undefined *)param_1[0x18]);
    FUN_1000bff0((undefined *)param_1[0x19]);
    FUN_1000bff0((undefined *)param_1[0x1a]);
    FUN_1000bff0((undefined *)param_1[0x1b]);
    FUN_1000bff0((undefined *)param_1[0x1c]);
    FUN_1000bff0((undefined *)param_1[0x1d]);
    FUN_1000bff0((undefined *)param_1[0x1e]);
    FUN_1000bff0((undefined *)param_1[0x1f]);
    FUN_1000bff0((undefined *)param_1[0x20]);
    FUN_1000bff0((undefined *)param_1[0x21]);
    FUN_1000bff0((undefined *)param_1[0x22]);
    FUN_1000bff0((undefined *)param_1[0x23]);
    FUN_1000bff0((undefined *)param_1[0x24]);
    FUN_1000bff0((undefined *)param_1[0x25]);
    FUN_1000bff0((undefined *)param_1[0x26]);
    FUN_1000bff0((undefined *)param_1[0x27]);
    FUN_1000bff0((undefined *)param_1[0x28]);
    FUN_1000bff0((undefined *)param_1[0x29]);
    FUN_1000bff0((undefined *)param_1[0x2a]);
  }
  return;
}



/* ==== FUN_1000c880 @ 1000c880 ==== 
 * signature: uint __cdecl FUN_1000c880(char * param_1, int param_2)
 * body: 1000c880-1000c975
 */

uint __cdecl FUN_1000c880(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int local_8;
  int local_4;
  
  pcVar7 = param_1;
  local_4 = 0;
  local_8 = 0;
  uVar3 = FUN_1000efd0(0,(LCID)param_1,0x23,(char *)&local_4);
  uVar4 = FUN_1000efd0(0,(LCID)pcVar7,0x25,(char *)&local_8);
  uVar5 = FUN_1000efd0(1,(LCID)pcVar7,0x1e,(char *)&param_1);
  uVar5 = uVar3 | uVar4 | uVar5;
  if (uVar5 != 0) {
    return uVar5;
  }
  puVar6 = (undefined1 *)FUN_1000c060(0xd);
  *(undefined1 **)(param_2 + 0xa8) = puVar6;
  if (local_4 == 0) {
    *puVar6 = 0x68;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_1000c91c;
    *pcVar7 = 'h';
  }
  else {
    *puVar6 = 0x48;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_1000c91c;
    *pcVar7 = 'H';
  }
  pcVar7 = puVar6 + 2;
LAB_1000c91c:
  cVar2 = *param_1;
  pcVar8 = param_1;
  while (cVar2 != '\0') {
    *pcVar7 = cVar2;
    pcVar1 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar7 = 'm';
  pcVar8 = pcVar7 + 1;
  if (local_8 != 0) {
    *pcVar8 = 'm';
    pcVar8 = pcVar7 + 2;
  }
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    *pcVar8 = cVar2;
    pcVar1 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar8 = 's';
  pcVar8[1] = 's';
  pcVar8[2] = '\0';
  FUN_1000bff0(param_1);
  return 0;
}



/* ==== FUN_1000c980 @ 1000c980 ==== 
 * signature: undefined4 __stdcall FUN_1000c980(void)
 * body: 1000c980-1000cb75
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000c980(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_1001728a;
  if (DAT_10016fb8 == 0) {
    FUN_1000bff0(DAT_10017254);
    FUN_1000bff0(DAT_10017258);
    FUN_1000bff0(DAT_1001725c);
    DAT_10017254 = (undefined *)0x0;
    DAT_10017258 = (undefined *)0x0;
    DAT_1001725c = (char *)0x0;
    uVar4 = FUN_1000c060(2);
    *(undefined4 *)PTR_PTR_10016470 = uVar4;
    if (*(undefined2 **)PTR_PTR_10016470 == (undefined2 *)0x0) {
      return 0xffffffff;
    }
    **(undefined2 **)PTR_PTR_10016470 = 0x2e;
    uVar4 = FUN_1000c060(2);
    *(undefined4 *)(PTR_PTR_10016470 + 4) = uVar4;
    if (*(undefined1 **)(PTR_PTR_10016470 + 4) == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    **(undefined1 **)(PTR_PTR_10016470 + 4) = 0;
    uVar4 = FUN_1000c060(2);
    *(undefined4 *)(PTR_PTR_10016470 + 8) = uVar4;
    if (*(undefined1 **)(PTR_PTR_10016470 + 8) == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    **(undefined1 **)(PTR_PTR_10016470 + 8) = 0;
  }
  else {
    iVar1 = FUN_1000efd0(1,uVar5,0xe,(char *)&DAT_10017254);
    iVar2 = FUN_1000efd0(1,uVar5,0xf,(char *)&DAT_10017258);
    iVar3 = FUN_1000efd0(1,uVar5,0x10,(char *)&DAT_1001725c);
    FUN_1000cb80(DAT_1001725c);
    if ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) {
      FUN_1000bff0(DAT_10017254);
      FUN_1000bff0(DAT_10017258);
      FUN_1000bff0(DAT_1001725c);
      DAT_10017254 = (undefined *)0x0;
      DAT_10017258 = (undefined *)0x0;
      DAT_1001725c = (char *)0x0;
      return 0xffffffff;
    }
    if (*(undefined **)PTR_PTR_10016470 != &DAT_10016438) {
      FUN_1000bff0(*(undefined **)PTR_PTR_10016470);
      FUN_1000bff0(*(undefined **)(PTR_PTR_10016470 + 4));
      FUN_1000bff0(*(undefined **)(PTR_PTR_10016470 + 8));
    }
    *(undefined **)PTR_PTR_10016470 = DAT_10017254;
    *(undefined **)(PTR_PTR_10016470 + 4) = DAT_10017258;
    *(char **)(PTR_PTR_10016470 + 8) = DAT_1001725c;
  }
  _DAT_10013610 = 1;
  DAT_1001360c = **(undefined1 **)PTR_PTR_10016470;
  return 0;
}



/* ==== FUN_1000cb80 @ 1000cb80 ==== 
 * signature: undefined __cdecl FUN_1000cb80(char * param_1)
 * body: 1000cb80-1000cbb2
 */

void __cdecl FUN_1000cb80(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_1000cb96;
      do {
        *pcVar3 = pcVar3[1];
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_1000cb96:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}



/* ==== FUN_1000cbc0 @ 1000cbc0 ==== 
 * signature: undefined4 __stdcall FUN_1000cbc0(void)
 * body: 1000cbc0-1000ccae
 */

undefined4 FUN_1000cbc0(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_10016fb4 == 0) {
    PTR_DAT_10016440 = *(undefined **)PTR_PTR_10016470;
    PTR_DAT_10016444 = *(undefined **)(PTR_PTR_10016470 + 4);
    PTR_DAT_10016448 = *(undefined **)(PTR_PTR_10016470 + 8);
    PTR_PTR_10016470 = (undefined *)&PTR_DAT_10016440;
    FUN_1000ce00((int)DAT_10017260);
    FUN_1000bff0((undefined *)DAT_10017260);
    DAT_10017260 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_1000d550(1,0x30);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_1000ccb0((int)piVar1);
  if (uVar2 != 0) {
    FUN_1000ce00((int)piVar1);
    FUN_1000bff0((undefined *)piVar1);
    return 1;
  }
  *piVar1 = *(int *)PTR_PTR_10016470;
  piVar1[1] = *(int *)(PTR_PTR_10016470 + 4);
  piVar1[2] = *(int *)(PTR_PTR_10016470 + 8);
  PTR_PTR_10016470 = (undefined *)piVar1;
  FUN_1000ce00((int)DAT_10017260);
  FUN_1000bff0((undefined *)DAT_10017260);
  DAT_10017260 = piVar1;
  return 0;
}



/* ==== FUN_1000ccb0 @ 1000ccb0 ==== 
 * signature: uint __cdecl FUN_1000ccb0(int param_1)
 * body: 1000ccb0-1000cdfa
 */

uint __cdecl FUN_1000ccb0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar15 = (uint)DAT_10017284;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_1000efd0(1,uVar15,0x15,(char *)(param_1 + 0xc));
  uVar2 = FUN_1000efd0(1,uVar15,0x14,(char *)(param_1 + 0x10));
  uVar3 = FUN_1000efd0(1,uVar15,0x16,(char *)(param_1 + 0x14));
  uVar4 = FUN_1000efd0(1,uVar15,0x17,(char *)(param_1 + 0x18));
  uVar5 = FUN_1000efd0(1,uVar15,0x18,(char *)(param_1 + 0x1c));
  FUN_1000cb80(*(char **)(param_1 + 0x1c));
  uVar6 = FUN_1000efd0(1,uVar15,0x50,(char *)(param_1 + 0x20));
  uVar7 = FUN_1000efd0(1,uVar15,0x51,(char *)(param_1 + 0x24));
  uVar8 = FUN_1000efd0(0,uVar15,0x1a,(char *)(param_1 + 0x28));
  uVar9 = FUN_1000efd0(0,uVar15,0x19,(char *)(param_1 + 0x29));
  uVar10 = FUN_1000efd0(0,uVar15,0x54,(char *)(param_1 + 0x2a));
  uVar11 = FUN_1000efd0(0,uVar15,0x55,(char *)(param_1 + 0x2b));
  uVar12 = FUN_1000efd0(0,uVar15,0x56,(char *)(param_1 + 0x2c));
  uVar13 = FUN_1000efd0(0,uVar15,0x57,(char *)(param_1 + 0x2d));
  uVar14 = FUN_1000efd0(0,uVar15,0x52,(char *)(param_1 + 0x2e));
  uVar15 = FUN_1000efd0(0,uVar15,0x53,(char *)(param_1 + 0x2f));
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15;
}



/* ==== FUN_1000ce00 @ 1000ce00 ==== 
 * signature: undefined __cdecl FUN_1000ce00(int param_1)
 * body: 1000ce00-1000ce65
 */

void __cdecl FUN_1000ce00(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_100172e0)) {
    FUN_1000bff0(*(undefined **)(param_1 + 0xc));
    FUN_1000bff0(*(undefined **)(param_1 + 0x10));
    FUN_1000bff0(*(undefined **)(param_1 + 0x14));
    FUN_1000bff0(*(undefined **)(param_1 + 0x18));
    FUN_1000bff0(*(undefined **)(param_1 + 0x1c));
    FUN_1000bff0(*(undefined **)(param_1 + 0x20));
    FUN_1000bff0(*(undefined **)(param_1 + 0x24));
  }
  return;
}



/* ==== FUN_1000ce70 @ 1000ce70 ==== 
 * signature: undefined4 __stdcall FUN_1000ce70(void)
 * body: 1000ce70-1000d129
 */

undefined4 FUN_1000ce70(void)

{
  BYTE *pBVar1;
  LPWORD pWVar2;
  LPWORD pWVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  BYTE *pBVar7;
  LPCWSTR pWVar8;
  undefined2 *puVar9;
  LPCWSTR pWVar10;
  LPCSTR pCVar11;
  undefined2 *local_1c;
  undefined2 *local_18;
  _cpinfo local_14;
  
  pCVar11 = (LPCSTR)0x0;
  pWVar10 = (LPCWSTR)0x0;
  if (DAT_10016fb0 == 0) {
    PTR_DAT_10013618 = &DAT_10013622;
    PTR_DAT_1001361c = &DAT_10013622;
    FUN_1000bff0((undefined *)DAT_10017264);
    FUN_1000bff0((undefined *)DAT_10017268);
    DAT_10017264 = (undefined2 *)0x0;
    DAT_10017268 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_10016fc0 != 0) ||
     (iVar4 = FUN_1000efd0(0,(uint)DAT_1001727c,0xb,(char *)&DAT_10016fc0), iVar4 == 0)) {
    local_18 = (undefined2 *)FUN_1000c060(0x202);
    local_1c = (undefined2 *)FUN_1000c060(0x202);
    pCVar11 = (LPCSTR)FUN_1000c060(0x101);
    pWVar10 = (LPCWSTR)FUN_1000c060(0x202);
    if ((local_18 != (undefined2 *)0x0) &&
       (((local_1c != (undefined2 *)0x0 && (pCVar11 != (LPCSTR)0x0)) && (pWVar10 != (LPCWSTR)0x0))))
    {
      iVar4 = 0;
      do {
        pCVar11[iVar4] = (CHAR)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x100);
      BVar5 = GetCPInfo(DAT_10016fc0,&local_14);
      if ((BVar5 != 0) && (local_14.MaxCharSize < 3)) {
        DAT_10013608 = local_14.MaxCharSize & 0xffff;
        if ((1 < DAT_10013608) && (local_14.LeadByte[0] != '\0')) {
          pBVar7 = local_14.LeadByte + 1;
          do {
            if (*pBVar7 == 0) break;
            uVar6 = (uint)pBVar7[-1];
            if (uVar6 <= *pBVar7) {
              do {
                pCVar11[uVar6] = '\0';
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 <= (int)(uint)*pBVar7);
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        pWVar2 = local_18 + 1;
        BVar5 = FUN_1000df40(1,pCVar11,0x100,pWVar2,0,0);
        if (BVar5 != 0) {
          *local_18 = 0;
          iVar4 = 0;
          pWVar8 = pWVar10;
          do {
            *pWVar8 = (WCHAR)iVar4;
            pWVar8 = pWVar8 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x100);
          pWVar3 = local_1c + 1;
          BVar5 = FUN_1000ddb0(1,pWVar10,0x100,pWVar3,0,0);
          if (BVar5 != 0) {
            *local_1c = 0;
            if ((1 < (int)DAT_10013608) && (local_14.LeadByte[0] != '\0')) {
              pBVar7 = local_14.LeadByte + 1;
              do {
                if (*pBVar7 == 0) break;
                uVar6 = (uint)pBVar7[-1];
                if (uVar6 <= *pBVar7) {
                  puVar9 = local_18 + uVar6 + 1;
                  do {
                    *puVar9 = 0x8000;
                    uVar6 = uVar6 + 1;
                    puVar9 = puVar9 + 1;
                  } while ((int)uVar6 <= (int)(uint)*pBVar7);
                }
                pBVar1 = pBVar7 + 1;
                pBVar7 = pBVar7 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_DAT_10013618 = (undefined *)pWVar2;
            PTR_DAT_1001361c = (undefined *)pWVar3;
            if (DAT_10017264 != (undefined2 *)0x0) {
              FUN_1000bff0((undefined *)DAT_10017264);
            }
            DAT_10017264 = local_18;
            if (DAT_10017268 != (undefined2 *)0x0) {
              FUN_1000bff0((undefined *)DAT_10017268);
            }
            DAT_10017268 = local_1c;
            FUN_1000bff0(pCVar11);
            FUN_1000bff0((undefined *)pWVar10);
            return 0;
          }
        }
      }
    }
  }
  FUN_1000bff0((undefined *)local_18);
  FUN_1000bff0((undefined *)local_1c);
  FUN_1000bff0(pCVar11);
  FUN_1000bff0((undefined *)pWVar10);
  return 1;
}



/* ==== FUN_1000d130 @ 1000d130 ==== 
 * signature: undefined4 __stdcall FUN_1000d130(void)
 * body: 1000d130-1000d132
 */

undefined4 FUN_1000d130(void)

{
  return 0;
}



/* ==== _strncpy @ 1000d140 ==== 
 * signature: char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
 * body: 1000d140-1000d23d
 * note: Library Function - Single Match  _strncpy  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x1000d17e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000d1bb;
        goto LAB_1000d229;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x1000d225:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1000d229:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000d1bb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1000d225;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1000d225;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1000d225;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000d17e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1000d1bb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* ==== _strcspn @ 1000d240 ==== 
 * signature: size_t __cdecl _strcspn(char * _Str, char * _Control)
 * body: 1000d240-1000d27d
 * note: Library Function - Single Match  _strcspn  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strcspn
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}



/* ==== _strncmp @ 1000d280 ==== 
 * signature: int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * body: 1000d280-1000d2b7
 * note: Library Function - Single Match  _strncmp  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}



/* ==== _strpbrk @ 1000d2c0 ==== 
 * signature: char * __cdecl _strpbrk(char * _Str, char * _Control)
 * body: 1000d2c0-1000d2f9
 * note: Library Function - Single Match  _strpbrk  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strpbrk
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}



/* ==== FUN_1000d300 @ 1000d300 ==== 
 * signature: int __cdecl FUN_1000d300(LCID param_1, uint param_2, char * param_3, LPCWSTR param_4, LPWSTR param_5, int param_6, UINT param_7)
 * body: 1000d300-1000d51b
 */

int __cdecl
FUN_1000d300(LCID param_1,uint param_2,char *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,
            UINT param_7)

{
  int iVar1;
  LPCWSTR cbMultiByte;
  LPCWSTR lpWideCharStr;
  int iVar2;
  
  if (DAT_10017298 == 0) {
    iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_10017298 = 1;
    }
    else {
      DAT_10017298 = 2;
    }
  }
  cbMultiByte = param_4;
  if (0 < (int)param_4) {
    cbMultiByte = (LPCWSTR)FUN_1000d520(param_3,(int)param_4);
  }
  if (DAT_10017298 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,(int)cbMultiByte,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_10017298 != 1) {
    return DAT_10017298;
  }
  param_4 = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_10016fc0;
  }
  iVar1 = MultiByteToWideChar(param_7,9,param_3,(int)cbMultiByte,(LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_1000c060(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPCWSTR)FUN_1000c060(iVar2 * 2);
      if ((param_4 == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar2), iVar1 == 0))
      goto LAB_1000d4ff;
      if (param_6 == 0) {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                   );
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)param_5,param_6,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (param_6 == 0) goto LAB_1000d464;
      if (param_6 < iVar2) goto LAB_1000d4ff;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_1000d464:
      FUN_1000bff0((undefined *)lpWideCharStr);
      FUN_1000bff0((undefined *)param_4);
      return iVar2;
    }
  }
LAB_1000d4ff:
  FUN_1000bff0((undefined *)lpWideCharStr);
  FUN_1000bff0((undefined *)param_4);
  return 0;
}



/* ==== FUN_1000d520 @ 1000d520 ==== 
 * signature: int __cdecl FUN_1000d520(char * param_1, int param_2)
 * body: 1000d520-1000d54e
 */

int __cdecl FUN_1000d520(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}



/* ==== FUN_1000d550 @ 1000d550 ==== 
 * signature: int * __cdecl FUN_1000d550(int param_1, int param_2)
 * body: 1000d550-1000d5fa
 */

int * __cdecl FUN_1000d550(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint dwBytes;
  int *piVar3;
  int *piVar4;
  
  dwBytes = param_2 * param_1;
  if (dwBytes < 0xffffffe1) {
    if (dwBytes == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = dwBytes + 0xf & 0xfffffff0;
    }
  }
  do {
    piVar3 = (int *)0x0;
    if (dwBytes < 0xffffffe1) {
      if (DAT_10016384 < dwBytes) {
LAB_1000d5c4:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        FUN_1000a320(9);
        piVar3 = FUN_1000d960(dwBytes >> 4);
        FUN_1000a3a0(9);
        if (piVar3 != (int *)0x0) {
          piVar4 = piVar3;
          for (uVar2 = dwBytes >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          for (uVar2 = dwBytes & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)piVar4 = 0;
            piVar4 = (int *)((int)piVar4 + 1);
          }
          goto LAB_1000d5c4;
        }
      }
      piVar3 = HeapAlloc(DAT_100183e4,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_100172c8 == 0)) {
      return piVar3;
    }
    iVar1 = FUN_1000ed90(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



/* ==== FUN_1000d600 @ 1000d600 ==== 
 * signature: undefined * * __stdcall FUN_1000d600(void)
 * body: 1000d600-1000d761
 */

undefined ** FUN_1000d600(void)

{
  bool bVar1;
  undefined4 *lpAddress;
  LPVOID pvVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **lpMem;
  undefined4 *puVar5;
  
  if (DAT_10014370 == -1) {
    lpMem = &PTR_LOOP_10014360;
  }
  else {
    lpMem = HeapAlloc(DAT_100183e4,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (undefined4 *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10014360) {
        if (PTR_LOOP_10014360 == (undefined *)0x0) {
          PTR_LOOP_10014360 = (undefined *)&PTR_LOOP_10014360;
        }
        if (PTR_LOOP_10014364 == (undefined *)0x0) {
          PTR_LOOP_10014364 = (undefined *)&PTR_LOOP_10014360;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10014360;
        lpMem[1] = PTR_LOOP_10014364;
        PTR_LOOP_10014364 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)(lpMem + 6);
      lpMem[3] = (undefined *)(lpMem + 0x26);
      iVar3 = 0;
      ppuVar4 = lpMem + 6;
      do {
        bVar1 = 0xf < iVar3;
        iVar3 = iVar3 + 1;
        *ppuVar4 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar4[1] = (undefined *)0xf1;
        ppuVar4 = ppuVar4 + 2;
      } while (iVar3 < 0x400);
      puVar5 = lpAddress;
      for (iVar3 = 0x4000; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      if (lpAddress < lpMem[4] + 0x10000) {
        do {
          lpAddress[1] = 0xf0;
          *lpAddress = lpAddress + 2;
          *(undefined1 *)(lpAddress + 0x3e) = 0xff;
          lpAddress = lpAddress + 0x400;
        } while (lpAddress < lpMem[4] + 0x10000);
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_10014360) {
    HeapFree(DAT_100183e4,0,lpMem);
  }
  return (undefined **)0x0;
}



/* ==== FUN_1000d770 @ 1000d770 ==== 
 * signature: undefined __cdecl FUN_1000d770(undefined * * param_1)
 * body: 1000d770-1000d7ca
 */

void __cdecl FUN_1000d770(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10016380 == param_1) {
    PTR_LOOP_10016380 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10014360) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_100183e4,0,param_1);
    return;
  }
  DAT_10014370 = 0xffffffff;
  return;
}



/* ==== FUN_1000d7d0 @ 1000d7d0 ==== 
 * signature: undefined __cdecl FUN_1000d7d0(int param_1)
 * body: 1000d7d0-1000d89c
 */

void __cdecl FUN_1000d7d0(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar6 = (undefined **)PTR_LOOP_10014364;
  do {
    ppuVar5 = ppuVar6;
    if (ppuVar6[4] != (undefined *)0xffffffff) {
      iVar4 = 0;
      ppuVar5 = ppuVar6 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar6[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_1001729c = DAT_1001729c + -1;
            if (((undefined **)ppuVar6[3] == (undefined **)0x0) || (ppuVar5 < ppuVar6[3])) {
              ppuVar6[3] = (undefined *)ppuVar5;
            }
            iVar4 = iVar4 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar6[1];
      if ((iVar4 != 0) && (ppuVar6[6] == (undefined *)0xffffffff)) {
        iVar3 = 1;
        ppuVar2 = ppuVar6 + 8;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_1000d770(ppuVar6);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_10014364) || (ppuVar6 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



/* ==== FUN_1000d8a0 @ 1000d8a0 ==== 
 * signature: int __cdecl FUN_1000d8a0(undefined * param_1, undefined4 * param_2, uint * param_3)
 * body: 1000d8a0-1000d8f8
 */

int __cdecl FUN_1000d8a0(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10014360;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10014360) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



/* ==== FUN_1000d900 @ 1000d900 ==== 
 * signature: undefined __cdecl FUN_1000d900(int param_1, int param_2, byte * param_3)
 * body: 1000d900-1000d952
 */

void __cdecl FUN_1000d900(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1001729c = DAT_1001729c + 1, DAT_1001729c == 0x20)) {
    FUN_1000d7d0(0x10);
  }
  return;
}



/* ==== FUN_1000d960 @ 1000d960 ==== 
 * signature: int * __cdecl FUN_1000d960(uint param_1)
 * body: 1000d960-1000db92
 */

int * __cdecl FUN_1000d960(uint param_1)

{
  undefined **ppuVar1;
  uint *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  bool bVar12;
  
  piVar11 = (int *)PTR_LOOP_10016380;
  do {
    if (piVar11[4] != -1) {
      puVar10 = (uint *)piVar11[2];
      piVar8 = (int *)(((int)puVar10 + (-0x18 - (int)piVar11) >> 3) * 0x1000 + piVar11[4]);
      for (; puVar10 < piVar11 + 0x806; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_1000dba0(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_LOOP_10016380 = (undefined *)piVar11;
            *puVar10 = *puVar10 - param_1;
            piVar11[2] = (int)puVar10;
            return piVar5;
          }
          puVar10[1] = param_1;
        }
        piVar8 = piVar8 + 0x400;
      }
      puVar2 = (uint *)piVar11[2];
      piVar8 = (int *)piVar11[4];
      for (puVar10 = (uint *)(piVar11 + 6); puVar10 < puVar2; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_1000dba0(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_LOOP_10016380 = (undefined *)piVar11;
            *puVar10 = *puVar10 - param_1;
            piVar11[2] = (int)puVar10;
            return piVar5;
          }
          puVar10[1] = param_1;
        }
        piVar8 = piVar8 + 0x400;
      }
    }
    piVar11 = (int *)*piVar11;
  } while (piVar11 != (int *)PTR_LOOP_10016380);
  ppuVar7 = &PTR_LOOP_10014360;
  while ((ppuVar7[4] == (undefined *)0xffffffff || (ppuVar7[3] == (undefined *)0x0))) {
    ppuVar7 = (undefined **)*ppuVar7;
    if (ppuVar7 == &PTR_LOOP_10014360) {
      ppuVar7 = FUN_1000d600();
      if (ppuVar7 == (undefined **)0x0) {
        return (int *)0x0;
      }
      piVar11 = (int *)ppuVar7[4];
      *(char *)(piVar11 + 2) = (char)param_1;
      PTR_LOOP_10016380 = (undefined *)ppuVar7;
      *piVar11 = (int)piVar11 + param_1 + 8;
      piVar11[1] = 0xf0 - param_1;
      ppuVar7[6] = ppuVar7[6] + -(param_1 & 0xff);
      return piVar11 + 0x40;
    }
  }
  ppuVar3 = (undefined **)ppuVar7[3];
  puVar4 = *ppuVar3;
  piVar11 = (int *)(ppuVar7[4] + ((int)ppuVar3 + (-0x18 - (int)ppuVar7) >> 3) * 0x1000);
  ppuVar6 = ppuVar3;
  for (iVar9 = 0; (puVar4 == (undefined *)0xffffffff && (iVar9 < 0x10)); iVar9 = iVar9 + 1) {
    puVar4 = ppuVar6[2];
    ppuVar6 = ppuVar6 + 2;
  }
  piVar8 = VirtualAlloc(piVar11,iVar9 << 0xc,0x1000,4);
  if (piVar8 != piVar11) {
    return (int *)0x0;
  }
  ppuVar6 = ppuVar3;
  if (0 < iVar9) {
    piVar8 = piVar11 + 1;
    do {
      *piVar8 = 0xf0;
      piVar8[-1] = (int)(piVar8 + 1);
      *(undefined1 *)(piVar8 + 0x3d) = 0xff;
      *ppuVar6 = (undefined *)0xf0;
      ppuVar6[1] = (undefined *)0xf1;
      piVar8 = piVar8 + 0x400;
      ppuVar6 = ppuVar6 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  ppuVar1 = ppuVar7 + 0x806;
  bVar12 = false;
  if (ppuVar6 < ppuVar1) {
    do {
      if (*ppuVar6 == (undefined *)0xffffffff) break;
      ppuVar6 = ppuVar6 + 2;
    } while (ppuVar6 < ppuVar1);
    bVar12 = ppuVar6 < ppuVar1;
  }
  PTR_LOOP_10016380 = (undefined *)ppuVar7;
  ppuVar7[3] = (undefined *)(-(uint)bVar12 & (uint)ppuVar6);
  *(char *)(piVar11 + 2) = (char)param_1;
  ppuVar7[2] = (undefined *)ppuVar3;
  *ppuVar3 = *ppuVar3 + -param_1;
  piVar11[1] = piVar11[1] - param_1;
  *piVar11 = (int)piVar11 + param_1 + 8;
  return piVar11 + 0x40;
}



/* ==== FUN_1000dba0 @ 1000dba0 ==== 
 * signature: int __cdecl FUN_1000dba0(int * param_1, uint param_2, uint param_3)
 * body: 1000dba0-1000dd11
 */

int __cdecl FUN_1000dba0(int *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  if (param_3 <= (uint)param_1[1]) {
    *pbVar2 = (byte)param_3;
    if (pbVar2 + param_3 < param_1 + 0x3e) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    return (int)(pbVar2 + 8) * 0x10 + (int)param_1 * -0xf;
  }
  pbVar6 = pbVar2;
  if (pbVar2[param_1[1]] != 0) {
    pbVar6 = pbVar2 + param_1[1];
  }
  if (pbVar6 + param_3 < param_1 + 0x3e) {
    do {
      if (*pbVar6 == 0) {
        pbVar3 = pbVar6 + 1;
        uVar5 = 1;
        bVar1 = pbVar6[1];
        while (bVar1 == 0) {
          pbVar3 = pbVar3 + 1;
          uVar5 = uVar5 + 1;
          bVar1 = *pbVar3;
        }
        if (param_3 <= uVar5) {
          if (param_1 + 0x3e <= pbVar6 + param_3) {
            *param_1 = (int)(param_1 + 2);
            goto LAB_1000dcef;
          }
          *param_1 = (int)(pbVar6 + param_3);
          param_1[1] = uVar5 - param_3;
          goto LAB_1000dcf6;
        }
        if (pbVar6 == pbVar2) {
          param_1[1] = uVar5;
        }
        else {
          param_2 = param_2 - uVar5;
          if (param_2 < param_3) {
            return 0;
          }
        }
      }
      else {
        pbVar3 = pbVar6 + *pbVar6;
      }
      pbVar6 = pbVar3;
    } while (pbVar3 + param_3 < param_1 + 0x3e);
  }
  pbVar3 = (byte *)(param_1 + 2);
  pbVar6 = pbVar3;
  if (pbVar3 < pbVar2) {
    while (pbVar6 + param_3 < param_1 + 0x3e) {
      if (*pbVar6 == 0) {
        pbVar4 = pbVar6 + 1;
        uVar5 = 1;
        bVar1 = pbVar6[1];
        while (bVar1 == 0) {
          pbVar4 = pbVar4 + 1;
          uVar5 = uVar5 + 1;
          bVar1 = *pbVar4;
        }
        if (param_3 <= uVar5) {
          if (pbVar6 + param_3 < param_1 + 0x3e) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            *param_1 = (int)pbVar3;
LAB_1000dcef:
            param_1[1] = 0;
          }
LAB_1000dcf6:
          *pbVar6 = (byte)param_3;
          return (int)(pbVar6 + 8) * 0x10 + (int)param_1 * -0xf;
        }
        param_2 = param_2 - uVar5;
        if (param_2 < param_3) {
          return 0;
        }
      }
      else {
        pbVar4 = pbVar6 + *pbVar6;
      }
      pbVar6 = pbVar4;
      if (pbVar2 <= pbVar4) {
        return 0;
      }
    }
  }
  return 0;
}



/* ==== FUN_1000dd20 @ 1000dd20 ==== 
 * signature: int __cdecl FUN_1000dd20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 1000dd20-1000ddae
 */

int __cdecl FUN_1000dd20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100172a0 != (FARPROC)0x0) {
LAB_1000dd70:
    if (DAT_100172a4 != (FARPROC)0x0) {
      iVar1 = (*DAT_100172a4)();
    }
    if ((iVar1 != 0) && (DAT_100172a8 != (FARPROC)0x0)) {
      iVar1 = (*DAT_100172a8)(iVar1);
    }
    iVar1 = (*DAT_100172a0)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_100172a0 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_100172a0 != (FARPROC)0x0) {
      DAT_100172a4 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_100172a8 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_1000dd70;
    }
  }
  return 0;
}



/* ==== FUN_1000ddb0 @ 1000ddb0 ==== 
 * signature: BOOL __cdecl FUN_1000ddb0(DWORD param_1, LPCWSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6)
 * body: 1000ddb0-1000df33
 */

BOOL __cdecl
FUN_1000ddb0(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  int cbMultiByte;
  int *lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  BOOL local_4;
  
  lpCharType = (LPWORD)0x0;
  if (DAT_100172c0 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_100172c0 = 2;
    }
    else {
      DAT_100172c0 = 1;
    }
  }
  if (DAT_100172c0 != 1) {
    local_4 = DAT_100172c0;
    if (DAT_100172c0 == 2) {
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = DAT_10016fc0;
      }
      cbMultiByte = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = FUN_1000d550(1,cbMultiByte);
      if (lpMultiByteStr == (int *)0x0) {
        return 0;
      }
      iVar2 = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)lpMultiByteStr,cbMultiByte,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar2 != 0) &&
         (lpCharType = (LPWORD)FUN_1000c060(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_10016fb0;
        }
        lpCharType[param_3] = 0xffff;
        lpCharType[param_3 + -1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,(LPCSTR)lpMultiByteStr,cbMultiByte,lpCharType);
        if ((lpCharType[param_3 + -1] == 0xffff) || (lpCharType[param_3] != 0xffff)) {
          local_4 = 0;
        }
        else {
          FUN_100094f0((undefined4 *)param_4,(undefined4 *)lpCharType,param_3 * 2);
        }
      }
      FUN_1000bff0((undefined *)lpMultiByteStr);
      FUN_1000bff0((undefined *)lpCharType);
    }
    return local_4;
  }
  BVar1 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar1;
}



/* ==== FUN_1000df40 @ 1000df40 ==== 
 * signature: BOOL __cdecl FUN_1000df40(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6)
 * body: 1000df40-1000e06c
 */

BOOL __cdecl
FUN_1000df40(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_100172c4 == 0) {
    BVar1 = GetStringTypeA(0,1,"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeW(1,L"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_100172c4 = 1;
    }
    else {
      DAT_100172c4 = 2;
    }
  }
  if (DAT_100172c4 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_10016fb0;
    }
    BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    return BVar1;
  }
  param_6 = DAT_100172c4;
  if (DAT_100172c4 == 1) {
    param_6 = 0;
    if (param_5 == 0) {
      param_5 = DAT_10016fc0;
    }
    iVar2 = MultiByteToWideChar(param_5,9,param_2,param_3,(LPWSTR)0x0,0);
    if (iVar2 != 0) {
      lpWideCharStr = (LPCWSTR)FUN_1000d550(2,iVar2);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
        if (iVar2 != 0) {
          BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
          FUN_1000bff0((undefined *)lpWideCharStr);
          return BVar1;
        }
      }
    }
    FUN_1000bff0((undefined *)lpWideCharStr);
  }
  return param_6;
}



/* ==== FUN_1000e070 @ 1000e070 ==== 
 * signature: undefined4 __cdecl FUN_1000e070(uint param_1, uint param_2, uint * param_3)
 * body: 1000e070-1000e092
 */

undefined4 __cdecl FUN_1000e070(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_2 + param_1;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}



/* ==== FUN_1000e0a0 @ 1000e0a0 ==== 
 * signature: undefined __cdecl FUN_1000e0a0(uint * param_1, uint * param_2)
 * body: 1000e0a0-1000e107
 */

void __cdecl FUN_1000e0a0(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000e070(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1000e070(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1000e070(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1000e070(param_1[2],param_2[2],param_1 + 2);
  return;
}



/* ==== FUN_1000e110 @ 1000e110 ==== 
 * signature: undefined __cdecl FUN_1000e110(uint * param_1)
 * body: 1000e110-1000e13d
 */

void __cdecl FUN_1000e110(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}



/* ==== FUN_1000e140 @ 1000e140 ==== 
 * signature: undefined __cdecl FUN_1000e140(uint * param_1)
 * body: 1000e140-1000e16c
 */

void __cdecl FUN_1000e140(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



/* ==== FUN_1000e170 @ 1000e170 ==== 
 * signature: undefined __cdecl FUN_1000e170(char * param_1, int param_2, uint * param_3)
 * body: 1000e170-1000e260
 */

void __cdecl FUN_1000e170(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  short sVar3;
  uint local_c;
  uint local_8;
  uint local_4;
  
  puVar2 = param_3;
  sVar3 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_c = *puVar2;
      local_8 = puVar2[1];
      local_4 = puVar2[2];
      FUN_1000e110(puVar2);
      FUN_1000e110(puVar2);
      FUN_1000e0a0(puVar2,&local_c);
      FUN_1000e110(puVar2);
      local_c = (uint)*param_1;
      local_8 = 0;
      local_4 = 0;
      FUN_1000e0a0(puVar2,&local_c);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  uVar1 = puVar2[2];
  while (uVar1 == 0) {
    sVar3 = sVar3 + -0x10;
    puVar2[2] = puVar2[1] >> 0x10;
    uVar1 = puVar2[2];
    puVar2[1] = *puVar2 >> 0x10 | puVar2[1] << 0x10;
    *puVar2 = *puVar2 << 0x10;
  }
  uVar1 = puVar2[2];
  while ((uVar1 & 0x8000) == 0) {
    FUN_1000e110(puVar2);
    sVar3 = sVar3 + -1;
    uVar1 = puVar2[2];
  }
  *(short *)((int)puVar2 + 10) = sVar3;
  return;
}



/* ==== FUN_1000e270 @ 1000e270 ==== 
 * signature: undefined4 __cdecl FUN_1000e270(ushort * param_1, int * param_2, byte * param_3, int param_4, int param_5, int param_6, int param_7)
 * body: 1000e270-1000e8cf
 */

undefined4 __cdecl
FUN_1000e270(ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  int local_60;
  char *local_5c;
  uint local_54;
  byte *local_50;
  int local_4c;
  int local_48;
  undefined4 local_30;
  ushort local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  byte *local_26;
  ushort local_22;
  char local_1c [23];
  char local_5;
  
  local_5c = local_1c;
  iVar8 = 0;
  uVar13 = 0;
  uVar7 = 0;
  local_4c = 1;
  local_54 = 0;
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  bVar5 = false;
  bVar6 = false;
  local_48 = 0;
  local_60 = 0;
  local_30 = 0;
  local_50 = param_3;
  for (pbVar11 = param_3;
      (((bVar10 = *pbVar11, bVar10 == 0x20 || (bVar10 == 9)) || (bVar10 == 10)) ||
      (pbVar14 = param_3, bVar10 == 0xd)); pbVar11 = pbVar11 + 1) {
  }
  do {
    bVar10 = *pbVar11;
    pbVar12 = pbVar11 + 1;
    param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
    switch(iVar8) {
    case 0:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_1000e742;
      }
      if (bVar10 == DAT_1001360c) {
        iVar8 = 5;
      }
      else if (bVar10 == 0x2b) {
        iVar8 = 2;
        uVar7 = 0;
      }
      else if (bVar10 == 0x2d) {
        iVar8 = 2;
        uVar7 = 0x8000;
      }
      else {
        if (bVar10 != 0x30) goto switchD_1000e532_caseD_2c;
        iVar8 = 1;
      }
      break;
    case 1:
      bVar2 = true;
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_1000e742;
      }
      if (bVar10 == DAT_1001360c) {
        iVar8 = 4;
      }
      else {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_1000e532_caseD_2b;
        default:
          goto switchD_1000e532_caseD_2c;
        case 0x30:
switchD_1000e3a6_caseD_30:
          iVar8 = 1;
          break;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_1000e532_caseD_44;
        }
      }
      break;
    case 2:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_1000e742;
      }
      if (bVar10 == DAT_1001360c) {
        iVar8 = 5;
      }
      else {
        if (bVar10 == 0x30) goto switchD_1000e3a6_caseD_30;
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      break;
    case 3:
      while( true ) {
        bVar2 = true;
        if (DAT_10013608 < 2) {
          uVar9 = (byte)PTR_DAT_10013618[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_1000b830((uint)param_3 & 0xff,4);
        }
        if (uVar9 == 0) break;
        if (uVar13 < 0x19) {
          uVar13 = uVar13 + 1;
          *local_5c = bVar10 - 0x30;
          bVar10 = *pbVar12;
          local_5c = local_5c + 1;
          param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
          pbVar12 = pbVar12 + 1;
        }
        else {
          bVar10 = *pbVar12;
          local_60 = local_60 + 1;
          param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
          pbVar12 = pbVar12 + 1;
        }
      }
      local_54 = uVar13;
      if (bVar10 != DAT_1001360c) {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_1000e532_caseD_2b;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_1000e532_caseD_44;
        }
switchD_1000e532_caseD_2c:
        iVar8 = 10;
        goto LAB_1000e742;
      }
      iVar8 = 4;
      break;
    case 4:
      bVar4 = true;
      if (uVar13 == 0) {
        while (bVar10 == 0x30) {
          bVar10 = *pbVar12;
          local_60 = local_60 + -1;
          pbVar12 = pbVar12 + 1;
          param_3._1_3_ = (undefined3)((uint)param_3 >> 8);
          param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
        }
      }
      while( true ) {
        bVar2 = true;
        if (DAT_10013608 < 2) {
          uVar9 = (byte)PTR_DAT_10013618[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_1000b830((uint)param_3 & 0xff,4);
        }
        if (uVar9 == 0) break;
        if (uVar13 < 0x19) {
          uVar13 = uVar13 + 1;
          *local_5c = bVar10 - 0x30;
          local_5c = local_5c + 1;
          local_60 = local_60 + -1;
        }
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
      }
      local_54 = uVar13;
      switch(bVar10) {
      case 0x2b:
      case 0x2d:
switchD_1000e532_caseD_2b:
        bVar2 = true;
        pbVar12 = pbVar12 + -1;
        iVar8 = 0xb;
        break;
      default:
        goto switchD_1000e532_caseD_2c;
      case 0x44:
      case 0x45:
      case 100:
      case 0x65:
switchD_1000e532_caseD_44:
        bVar2 = true;
        iVar8 = 6;
      }
      break;
    case 5:
      bVar4 = true;
      if (DAT_10013608 < 2) {
        uVar9 = (byte)PTR_DAT_10013618[(uint)bVar10 * 2] & 4;
      }
      else {
        uVar9 = FUN_1000b830((uint)bVar10,4);
      }
      if (uVar9 == 0) {
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      else {
        iVar8 = 4;
        pbVar12 = pbVar11;
      }
      break;
    case 6:
      pbVar11 = pbVar11 + -1;
      pbVar14 = pbVar11;
      local_50 = pbVar11;
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 9;
        goto LAB_1000e742;
      }
      if (bVar10 == 0x2b) {
LAB_1000e736:
        iVar8 = 7;
        pbVar14 = pbVar11;
        local_50 = pbVar11;
      }
      else {
        if (bVar10 != 0x2d) goto LAB_1000e626;
LAB_1000e727:
        iVar8 = 7;
        local_4c = -1;
        pbVar14 = pbVar11;
        local_50 = pbVar11;
      }
      break;
    case 7:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 9;
        goto LAB_1000e742;
      }
LAB_1000e626:
      if (bVar10 == 0x30) {
        iVar8 = 8;
      }
      else {
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      break;
    case 8:
      bVar3 = true;
      while (bVar10 == 0x30) {
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      }
      if (((char)bVar10 < '1') || ('9' < (char)bVar10)) goto switchD_1000e532_caseD_2c;
      iVar8 = 9;
LAB_1000e742:
      pbVar12 = pbVar12 + -1;
      break;
    case 9:
      bVar3 = true;
      local_48 = 0;
      while( true ) {
        if (DAT_10013608 < 2) {
          uVar13 = (byte)PTR_DAT_10013618[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_1000b830((uint)param_3 & 0xff,4);
        }
        if (uVar13 == 0) goto LAB_1000e6aa;
        local_48 = (char)bVar10 + -0x30 + local_48 * 10;
        if (0x1450 < local_48) break;
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
      }
      local_48 = 0x1451;
LAB_1000e6aa:
      while( true ) {
        if (DAT_10013608 < 2) {
          uVar13 = (byte)PTR_DAT_10013618[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_1000b830((uint)param_3 & 0xff,4);
        }
        if (uVar13 == 0) break;
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
      }
      iVar8 = 10;
      pbVar12 = pbVar12 + -1;
      uVar13 = local_54;
      pbVar14 = local_50;
      break;
    case 0xb:
      if (param_7 == 0) goto switchD_1000e532_caseD_2c;
      if (bVar10 == 0x2b) goto LAB_1000e736;
      if (bVar10 == 0x2d) goto LAB_1000e727;
      iVar8 = 10;
      pbVar12 = pbVar11;
      pbVar14 = pbVar11;
      local_50 = pbVar11;
    }
    pbVar11 = pbVar12;
  } while (iVar8 != 10);
  *param_2 = (int)pbVar12;
  if (bVar2) {
    if (0x18 < uVar13) {
      if ('\x04' < local_5) {
        local_5 = local_5 + '\x01';
      }
      local_5c = local_5c + -1;
      local_60 = local_60 + 1;
      uVar13 = 0x18;
    }
    if (uVar13 == 0) {
      local_2c = 0;
      local_22 = 0;
      param_3 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      goto LAB_1000e814;
    }
    cVar1 = local_5c[-1];
    while (cVar1 == '\0') {
      uVar13 = uVar13 - 1;
      local_60 = local_60 + 1;
      cVar1 = local_5c[-2];
      local_5c = local_5c + -1;
    }
    FUN_1000e170(local_1c,uVar13,(uint *)&local_2c);
    if (local_4c < 0) {
      local_48 = -local_48;
    }
    uVar13 = local_48 + local_60;
    if (!bVar3) {
      uVar13 = uVar13 + param_5;
    }
    if (!bVar4) {
      uVar13 = uVar13 - param_6;
    }
    if ((int)uVar13 < 0x1451) {
      if (-0x1451 < (int)uVar13) {
        FUN_1000f820((int *)&local_2c,uVar13,param_4);
        pbVar11 = (byte *)CONCAT22(uStack_28,uStack_2a);
        param_3 = local_26;
        goto LAB_1000e814;
      }
      bVar6 = true;
    }
    else {
      bVar5 = true;
    }
  }
  local_2c = (ushort)param_3;
  pbVar11 = param_3;
  local_22 = local_2c;
LAB_1000e814:
  if (bVar2) {
    if (bVar5) {
      pbVar11 = (byte *)0x0;
      local_22 = 0x7fff;
      param_3 = (byte *)0x80000000;
      local_2c = 0;
      local_30 = 2;
    }
    else if (bVar6) {
      local_2c = 0;
      local_22 = 0;
      param_3 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      local_30 = 1;
    }
  }
  else {
    local_2c = 0;
    local_22 = 0;
    param_3 = (byte *)0x0;
    pbVar11 = (byte *)0x0;
    local_30 = 4;
  }
  *param_1 = local_2c;
  *(byte **)(param_1 + 1) = pbVar11;
  *(byte **)(param_1 + 3) = param_3;
  param_1[5] = local_22 | uVar7;
  return local_30;
}



/* ==== FUN_1000ea00 @ 1000ea00 ==== 
 * signature: undefined4 __cdecl FUN_1000ea00(uint param_1, uint param_2, uint param_3, int param_4, byte param_5, short * param_6)
 * body: 1000ea00-1000ed81
 */

undefined4 __cdecl
FUN_1000ea00(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined2 local_10;
  undefined4 uStack_e;
  undefined4 uStack_a;
  undefined1 local_6;
  char cStack_5;
  
  psVar1 = param_6;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xcc;
  local_15 = 0xcc;
  local_14 = 0xcc;
  local_13 = 0xcc;
  uVar5 = param_3 & 0x7fff;
  local_12 = 0xfb;
  local_11 = 0x3f;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
LAB_1000ec0f:
    *(undefined1 *)(psVar1 + 1) = 0x20;
    *(undefined1 *)((int)psVar1 + 3) = 1;
    *(undefined1 *)(psVar1 + 2) = 0x30;
    *(undefined1 *)((int)psVar1 + 5) = 0;
    return 1;
  }
  if ((short)uVar5 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 != 0x80000000) || (param_1 != 0)) && ((param_2 & 0x40000000) == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e53;
      param_6[4] = 0x4e41;
      *(undefined1 *)((int)param_6 + 3) = 6;
      *(undefined1 *)(param_6 + 5) = 0;
      return 0;
    }
    if ((((param_3 & 0x8000) != 0) && (param_2 == 0xc0000000)) && (param_1 == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e49;
      *(undefined1 *)((int)param_6 + 3) = 5;
      param_6[4] = 0x44;
      return 0;
    }
    if ((param_2 == 0x80000000) && (param_1 == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e49;
      *(undefined1 *)((int)param_6 + 3) = 5;
      param_6[4] = 0x46;
      return 0;
    }
    param_6[2] = 0x2331;
    param_6[3] = 0x4e51;
    param_6[4] = 0x4e41;
    *(undefined1 *)((int)param_6 + 3) = 6;
    *(undefined1 *)(param_6 + 5) = 0;
    return 0;
  }
  local_6 = (undefined1)uVar5;
  cStack_5 = (char)(uVar5 >> 8);
  local_10 = 0;
  sVar10 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                  0x10);
  uStack_a = param_2;
  uStack_e = param_1;
  FUN_1000f820((int *)&local_10,-(int)sVar10,1);
  if (0x3ffe < CONCAT11(cStack_5,local_6)) {
    sVar10 = sVar10 + 1;
    FUN_1000f560((int *)&local_10,(int *)&local_1c);
  }
  *psVar1 = sVar10;
  iVar9 = param_4;
  if (((param_5 & 1) != 0) && (iVar9 = param_4 + sVar10, param_4 + sVar10 < 1)) {
    *psVar1 = 0;
    goto LAB_1000ec0f;
  }
  if (0x15 < iVar9) {
    iVar9 = 0x15;
  }
  uVar2 = CONCAT11(cStack_5,local_6);
  local_6 = 0;
  cStack_5 = '\0';
  iVar6 = 8;
  iVar11 = uVar2 - 0x3ffe;
  do {
    FUN_1000e110((uint *)&local_10);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar11 < 0) {
    for (uVar5 = -iVar11 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_1000e140((uint *)&local_10);
    }
  }
  psVar1 = psVar1 + 2;
  iVar9 = iVar9 + 1;
  psVar7 = psVar1;
  uVar5 = uStack_e;
  uVar3 = uStack_a;
  if (0 < iVar9) {
    do {
      uStack_a._2_2_ = (undefined2)(uVar3 >> 0x10);
      uStack_a._0_2_ = (undefined2)uVar3;
      uStack_e._2_2_ = (undefined2)(uVar5 >> 0x10);
      uStack_e._0_2_ = (undefined2)uVar5;
      param_1 = CONCAT22((undefined2)uStack_e,local_10);
      param_2 = CONCAT22((undefined2)uStack_a,uStack_e._2_2_);
      param_3 = CONCAT13(cStack_5,CONCAT12(local_6,uStack_a._2_2_));
      uStack_e = uVar5;
      uStack_a = uVar3;
      FUN_1000e110((uint *)&local_10);
      FUN_1000e110((uint *)&local_10);
      FUN_1000e0a0((uint *)&local_10,&param_1);
      FUN_1000e110((uint *)&local_10);
      cVar4 = cStack_5 + '0';
      cStack_5 = '\0';
      *(char *)psVar7 = cVar4;
      psVar7 = (short *)((int)psVar7 + 1);
      iVar9 = iVar9 + -1;
      uVar5 = uStack_e;
      uVar3 = uStack_a;
    } while (iVar9 != 0);
  }
  psVar8 = psVar7 + -1;
  if (*(char *)((int)psVar7 + -1) < '5') {
    if (psVar1 <= psVar8) {
      do {
        if ((char)*psVar8 != '0') break;
        psVar8 = (short *)((int)psVar8 + -1);
      } while (psVar1 <= psVar8);
      if (psVar1 <= psVar8) goto LAB_1000ed66;
    }
    *(char *)psVar1 = '0';
    *param_6 = 0;
    *(undefined1 *)(param_6 + 1) = 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)((int)param_6 + 5) = 0;
    return 1;
  }
  if (psVar1 <= psVar8) {
    do {
      if ((char)*psVar8 != '9') break;
      *(char *)psVar8 = '0';
      psVar8 = (short *)((int)psVar8 + -1);
    } while (psVar1 <= psVar8);
    if (psVar1 <= psVar8) {
      *(char *)psVar8 = (char)*psVar8 + '\x01';
      goto LAB_1000ed66;
    }
  }
  psVar8 = (short *)((int)psVar8 + 1);
  *param_6 = *param_6 + 1;
  *(char *)psVar8 = *(char *)psVar8 + '\x01';
LAB_1000ed66:
  cVar4 = ((char)psVar8 - (char)param_6) + -3;
  *(char *)((int)param_6 + 3) = cVar4;
  *(undefined1 *)((int)param_6 + cVar4 + 4) = 0;
  return 1;
}



/* ==== FUN_1000ed90 @ 1000ed90 ==== 
 * signature: undefined4 __cdecl FUN_1000ed90(undefined4 param_1)
 * body: 1000ed90-1000edaf
 */

undefined4 __cdecl FUN_1000ed90(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100172cc != (code *)0x0) {
    iVar1 = (*DAT_100172cc)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ==== FUN_1000edb0 @ 1000edb0 ==== 
 * signature: int __stdcall FUN_1000edb0(void)
 * body: 1000edb0-1000ee42
 */

int FUN_1000edb0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  FUN_1000a320(2);
  iVar4 = 3;
  if (3 < DAT_100183e0) {
    do {
      uVar1 = *(uint *)(DAT_100173c0 + iVar4 * 4);
      if (uVar1 != 0) {
        if (((*(byte *)(uVar1 + 0xc) & 0x83) != 0) && (iVar2 = FUN_1000f8b0(uVar1), iVar2 != -1)) {
          iVar3 = iVar3 + 1;
        }
        if (0x13 < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_100173c0 + iVar4 * 4) + 0x20));
          FUN_1000bff0(*(undefined **)(DAT_100173c0 + iVar4 * 4));
          *(undefined4 *)(DAT_100173c0 + iVar4 * 4) = 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_100183e0);
  }
  FUN_1000a3a0(2);
  return iVar3;
}



/* ==== FUN_1000ee43 @ 1000ee43 ==== 
 * signature: undefined FUN_1000ee43(void)
 * body: 1000ee43-1000ee4f
 */

int FUN_1000ee43(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000ee90(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1[3] & 0x4000U) != 0) {
    iVar1 = FUN_1000f960(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/* ==== FUN_1000ee50 @ 1000ee50 ==== 
 * signature: int __cdecl FUN_1000ee50(int * param_1)
 * body: 1000ee50-1000ee84
 */

int __cdecl FUN_1000ee50(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000ee90(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1[3] & 0x4000U) != 0) {
    iVar1 = FUN_1000f960(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/* ==== FUN_1000ee85 @ 1000ee85 ==== 
 * signature: undefined FUN_1000ee85(void)
 * body: 1000ee85-1000ee8f
 */

undefined4 FUN_1000ee85(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    iVar4 = *param_1 - param_1[2];
    if (0 < iVar4) {
      iVar2 = FUN_1000fa00(param_1[4],param_1[2],iVar4);
      uVar1 = param_1[3];
      if (iVar2 == iVar4) {
        if ((uVar1 & 0x80) != 0) {
          param_1[1] = 0;
          param_1[3] = uVar1 & 0xfffffffd;
          *param_1 = param_1[2];
          return 0;
        }
      }
      else {
        uVar3 = 0xffffffff;
        param_1[3] = uVar1 | 0x20;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar3;
}



/* ==== FUN_1000ee90 @ 1000ee90 ==== 
 * signature: undefined4 __cdecl FUN_1000ee90(int * param_1)
 * body: 1000ee90-1000eefd
 */

undefined4 __cdecl FUN_1000ee90(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    iVar4 = *param_1 - param_1[2];
    if (0 < iVar4) {
      iVar2 = FUN_1000fa00(param_1[4],param_1[2],iVar4);
      uVar1 = param_1[3];
      if (iVar2 == iVar4) {
        if ((uVar1 & 0x80) != 0) {
          param_1[1] = 0;
          param_1[3] = uVar1 & 0xfffffffd;
          *param_1 = param_1[2];
          return 0;
        }
      }
      else {
        uVar3 = 0xffffffff;
        param_1[3] = uVar1 | 0x20;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar3;
}



/* ==== FUN_1000eefe @ 1000eefe ==== 
 * signature: undefined FUN_1000eefe(void)
 * body: 1000eefe-1000eeff
 */

void FUN_1000eefe(void)

{
  FUN_1000ef10(1);
  return;
}



/* ==== FUN_1000ef00 @ 1000ef00 ==== 
 * signature: undefined __stdcall FUN_1000ef00(void)
 * body: 1000ef00-1000ef00
 */

void FUN_1000ef00(void)

{
  FUN_1000ef10(1);
  return;
}



/* ==== FUN_1000ef02 @ 1000ef02 ==== 
 * signature: undefined FUN_1000ef02(void)
 * body: 1000ef02-1000ef0a
 */

void FUN_1000ef02(void)

{
  int unaff_retaddr;
  
  FUN_1000ef10(unaff_retaddr);
  return;
}



/* ==== FUN_1000ef0b @ 1000ef0b ==== 
 * signature: undefined FUN_1000ef0b(void)
 * body: 1000ef0b-1000ef0f
 */

int FUN_1000ef0b(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_4;
  
  iVar4 = 0;
  iStack_4 = 0;
  iVar3 = 0;
  FUN_1000a320(2);
  if (0 < DAT_100183e0) {
    do {
      iVar2 = *(int *)(DAT_100173c0 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1000a400(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100173c0 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1000ee50(piVar1);
            if (iVar2 != -1) {
              iStack_4 = iStack_4 + 1;
            }
          }
          else if (((param_1 == 0) && ((piVar1[3] & 2U) != 0)) &&
                  (iVar2 = FUN_1000ee50(piVar1), iVar2 == -1)) {
            iVar3 = -1;
          }
        }
        FUN_1000a470(iVar4,*(int *)(DAT_100173c0 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_100183e0);
  }
  FUN_1000a3a0(2);
  if (param_1 != 1) {
    iStack_4 = iVar3;
  }
  return iStack_4;
}



/* ==== FUN_1000ef10 @ 1000ef10 ==== 
 * signature: int __stdcall FUN_1000ef10(int param_1)
 * body: 1000ef10-1000ef10
 */

int FUN_1000ef10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_4;
  
  iVar4 = 0;
  iStack_4 = 0;
  iVar3 = 0;
  FUN_1000a320(2);
  if (0 < DAT_100183e0) {
    do {
      iVar2 = *(int *)(DAT_100173c0 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1000a400(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100173c0 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1000ee50(piVar1);
            if (iVar2 != -1) {
              iStack_4 = iStack_4 + 1;
            }
          }
          else if (((param_1 == 0) && ((piVar1[3] & 2U) != 0)) &&
                  (iVar2 = FUN_1000ee50(piVar1), iVar2 == -1)) {
            iVar3 = -1;
          }
        }
        FUN_1000a470(iVar4,*(int *)(DAT_100173c0 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_100183e0);
  }
  FUN_1000a3a0(2);
  if (param_1 != 1) {
    iStack_4 = iVar3;
  }
  return iStack_4;
}



/* ==== FUN_1000ef11 @ 1000ef11 ==== 
 * signature: undefined FUN_1000ef11(void)
 * body: 1000ef11-1000efca
 */

int FUN_1000ef11(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar3 = 0;
  FUN_1000a320(2);
  if (0 < DAT_100183e0) {
    do {
      iVar2 = *(int *)(DAT_100173c0 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1000a400(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100173c0 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_2 == 1) {
            iVar2 = FUN_1000ee50(piVar1);
            if (iVar2 != -1) {
              iVar5 = iVar5 + 1;
            }
          }
          else if (((param_2 == 0) && ((piVar1[3] & 2U) != 0)) &&
                  (iVar2 = FUN_1000ee50(piVar1), iVar2 == -1)) {
            iVar3 = -1;
          }
        }
        FUN_1000a470(iVar4,*(int *)(DAT_100173c0 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_100183e0);
  }
  FUN_1000a3a0(2);
  if (param_2 != 1) {
    iVar5 = iVar3;
  }
  return iVar5;
}



/* ==== FUN_1000efcb @ 1000efcb ==== 
 * signature: undefined FUN_1000efcb(void)
 * body: 1000efcb-1000efcf
 */

undefined4 FUN_1000efcb(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  LPSTR _Source;
  char *_Dest;
  int iVar5;
  byte *pbVar6;
  CHAR aCStack_80 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar5 = FUN_1000f180(param_2,param_3,(LPWSTR)&DAT_100172d8,4,0);
    if (iVar5 != 0) {
      pbVar6 = &DAT_100172d8;
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar6;
        if (DAT_10013608 < 2) {
          uVar3 = (byte)PTR_DAT_10013618[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar3 = FUN_1000b830((uint)bVar1,4);
        }
        if (uVar3 == 0) break;
        pbVar6 = pbVar6 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x100172df < (int)pbVar6) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = aCStack_80;
  bVar2 = false;
  uVar3 = FUN_1000f2b0(param_2,param_3,aCStack_80,0x80,0);
  if (uVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) || (uVar3 = FUN_1000f2b0(param_2,param_3,(LPSTR)0x0,0,0), uVar3 == 0)) ||
       (_Source = (LPSTR)FUN_1000c060(uVar3), _Source == (LPSTR)0x0)) goto LAB_1000f080;
    bVar2 = true;
    uVar3 = FUN_1000f2b0(param_2,param_3,_Source,uVar3,0);
    if (uVar3 == 0) goto LAB_1000f080;
  }
  _Dest = (char *)FUN_1000c060(uVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,uVar3);
    if (!bVar2) {
      return 0;
    }
    FUN_1000bff0(_Source);
    return 0;
  }
LAB_1000f080:
  if (!bVar2) {
    return 0xffffffff;
  }
  FUN_1000bff0(_Source);
  return 0xffffffff;
}



/* ==== FUN_1000efd0 @ 1000efd0 ==== 
 * signature: undefined4 __cdecl FUN_1000efd0(int param_1, LCID param_2, LCTYPE param_3, char * param_4)
 * body: 1000efd0-1000f17b
 */

undefined4 __cdecl FUN_1000efd0(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  LPSTR _Source;
  char *_Dest;
  int iVar5;
  byte *pbVar6;
  CHAR local_80 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar5 = FUN_1000f180(param_2,param_3,(LPWSTR)&DAT_100172d8,4,0);
    if (iVar5 != 0) {
      pbVar6 = &DAT_100172d8;
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar6;
        if (DAT_10013608 < 2) {
          uVar3 = (byte)PTR_DAT_10013618[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar3 = FUN_1000b830((uint)bVar1,4);
        }
        if (uVar3 == 0) break;
        pbVar6 = pbVar6 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x100172df < (int)pbVar6) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_80;
  bVar2 = false;
  uVar3 = FUN_1000f2b0(param_2,param_3,local_80,0x80,0);
  if (uVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) || (uVar3 = FUN_1000f2b0(param_2,param_3,(LPSTR)0x0,0,0), uVar3 == 0)) ||
       (_Source = (LPSTR)FUN_1000c060(uVar3), _Source == (LPSTR)0x0)) goto LAB_1000f080;
    bVar2 = true;
    uVar3 = FUN_1000f2b0(param_2,param_3,_Source,uVar3,0);
    if (uVar3 == 0) goto LAB_1000f080;
  }
  _Dest = (char *)FUN_1000c060(uVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,uVar3);
    if (!bVar2) {
      return 0;
    }
    FUN_1000bff0(_Source);
    return 0;
  }
LAB_1000f080:
  if (!bVar2) {
    return 0xffffffff;
  }
  FUN_1000bff0(_Source);
  return 0xffffffff;
}



/* ==== FUN_1000f180 @ 1000f180 ==== 
 * signature: int __cdecl FUN_1000f180(LCID param_1, LCTYPE param_2, LPWSTR param_3, int param_4, UINT param_5)
 * body: 1000f180-1000f2af
 */

int __cdecl FUN_1000f180(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  uint cchData;
  LPSTR lpLCData;
  
  if (DAT_100172e4 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_100172e4 = 2;
    }
    else {
      DAT_100172e4 = 1;
    }
  }
  if (DAT_100172e4 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_100172e4 != 2) {
    return DAT_100172e4;
  }
  if (param_5 == 0) {
    param_5 = DAT_10016fc0;
  }
  cchData = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
  if (cchData != 0) {
    lpLCData = (LPSTR)FUN_1000c060(cchData);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,cchData);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
        if (iVar1 != 0) {
          FUN_1000bff0(lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
        if (iVar1 != 0) {
          FUN_1000bff0(lpLCData);
          return iVar1;
        }
      }
    }
    FUN_1000bff0(lpLCData);
    return 0;
  }
  return 0;
}



/* ==== FUN_1000f2b0 @ 1000f2b0 ==== 
 * signature: int __cdecl FUN_1000f2b0(LCID param_1, LCTYPE param_2, LPSTR param_3, int param_4, UINT param_5)
 * body: 1000f2b0-1000f3ee
 */

int __cdecl FUN_1000f2b0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  LPWSTR lpLCData;
  
  if (DAT_100172e8 == 0) {
    iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_100172e8 = 1;
    }
    else {
      DAT_100172e8 = 2;
    }
  }
  if (DAT_100172e8 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_100172e8 != 1) {
    return DAT_100172e8;
  }
  if (param_5 == 0) {
    param_5 = DAT_10016fc0;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
  if (iVar1 != 0) {
    lpLCData = (LPWSTR)FUN_1000c060(iVar1 * 2);
    if (lpLCData == (LPWSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_1000bff0((undefined *)lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,param_3,param_4,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_1000bff0((undefined *)lpLCData);
          return iVar1;
        }
      }
    }
    FUN_1000bff0((undefined *)lpLCData);
    return 0;
  }
  return 0;
}



/* ==== FUN_1000f3f0 @ 1000f3f0 ==== 
 * signature: uint __cdecl FUN_1000f3f0(byte * param_1, byte * param_2)
 * body: 1000f3f0-1000f4bf
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1000f3f0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = _DAT_10018510;
  if (DAT_10016fb0 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000f43e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1000f43e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10018510 = _DAT_10018510 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1001850c;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10018510 = iVar2;
      FUN_1000a320(0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000f49f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1000a530(uVar8);
      uVar7 = FUN_1000a530(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000f49f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10018510 = _DAT_10018510 + -1;
      UNLOCK();
    }
    else {
      FUN_1000a3a0(0x13);
    }
  }
  return uVar7;
}



/* ==== FUN_1000f4c0 @ 1000f4c0 ==== 
 * signature: undefined __cdecl FUN_1000f4c0(uint param_1)
 * body: 1000f4c0-1000f532
 */

void __cdecl FUN_1000f4c0(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000f550();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10016480;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000f540();
      *pDVar1 = *(DWORD *)(&DAT_10016484 + iVar3 * 8);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar2 < &DAT_100165e8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000f540();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000f540();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000f540();
  *pDVar1 = 0x16;
  return;
}



/* ==== FUN_1000f533 @ 1000f533 ==== 
 * signature: undefined FUN_1000f533(void)
 * body: 1000f533-1000f53f
 */

DWORD * FUN_1000f533(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000a840();
  return pDVar1 + 2;
}



/* ==== FUN_1000f540 @ 1000f540 ==== 
 * signature: DWORD * __stdcall FUN_1000f540(void)
 * body: 1000f540-1000f548
 */

DWORD * FUN_1000f540(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000a840();
  return pDVar1 + 2;
}



/* ==== FUN_1000f549 @ 1000f549 ==== 
 * signature: undefined FUN_1000f549(void)
 * body: 1000f549-1000f54f
 */

DWORD * FUN_1000f549(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000a840();
  return pDVar1 + 3;
}



/* ==== FUN_1000f550 @ 1000f550 ==== 
 * signature: DWORD * __stdcall FUN_1000f550(void)
 * body: 1000f550-1000f558
 */

DWORD * FUN_1000f550(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000a840();
  return pDVar1 + 3;
}



/* ==== FUN_1000f559 @ 1000f559 ==== 
 * signature: undefined FUN_1000f559(void)
 * body: 1000f559-1000f55f
 */

void FUN_1000f559(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  short *psStack_20;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  byte bStack_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  short sStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  ushort uStack_2;
  
  iStack_14 = 0;
  bStack_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  sStack_8 = 0;
  uStack_6 = 0;
  uVar3 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar1 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar6 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar4 = uVar3 + uVar1;
  uStack_4 = 0;
  uStack_2 = 0;
  if (((0x7ffe < uVar1) || (0x7ffe < uVar3)) || (0xbffd < uVar4)) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
    return;
  }
  if (uVar4 < 0x3fc0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  if (((uVar1 == 0) && (uVar4 = uVar4 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
     ((param_1[1] == 0 && (*param_1 == 0)))) {
    *(undefined2 *)((int)param_1 + 10) = 0;
    return;
  }
  if (((uVar3 == 0) && (uVar4 = uVar4 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
     ((param_2[1] == 0 && (*param_2 == 0)))) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  psStack_20 = &sStack_8;
  iStack_18 = 0;
  iVar5 = 5;
  do {
    if (0 < iVar5) {
      puVar8 = (ushort *)(param_2 + 2);
      puVar7 = (ushort *)(iStack_18 * 2 + (int)param_1);
      iStack_10 = iVar5;
      do {
        iVar2 = FUN_1000e070(*(uint *)(psStack_20 + -2),(uint)*puVar8 * (uint)*puVar7,
                             (uint *)(psStack_20 + -2));
        if (iVar2 != 0) {
          *psStack_20 = *psStack_20 + 1;
        }
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + -1;
        iStack_10 = iStack_10 + -1;
      } while (iStack_10 != 0);
    }
    psStack_20 = psStack_20 + 1;
    iStack_18 = iStack_18 + 1;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  uVar4 = uVar4 + 0xc002;
  while ((0 < (short)uVar4 && ((uStack_2 & 0x8000) == 0))) {
    FUN_1000e110((uint *)&bStack_c);
    uVar4 = uVar4 - 1;
  }
  if ((short)uVar4 < 1) {
    uVar4 = uVar4 - 1;
    if ((short)uVar4 < 0) {
      iVar5 = -(int)(short)uVar4;
      uVar4 = uVar4 + (short)iVar5;
      do {
        if ((bStack_c & 1) != 0) {
          iStack_14 = iStack_14 + 1;
        }
        FUN_1000e140((uint *)&bStack_c);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (iStack_14 != 0) {
      bStack_c = bStack_c | 1;
    }
  }
  if ((0x8000 < CONCAT11(uStack_b,bStack_c)) ||
     (iVar2 = CONCAT22(uStack_4,uStack_6), iVar5 = CONCAT22(sStack_8,uStack_a),
     (CONCAT22(uStack_a,CONCAT11(uStack_b,bStack_c)) & 0x1ffff) == 0x18000)) {
    if (CONCAT22(sStack_8,uStack_a) == -1) {
      iVar5 = 0;
      if (CONCAT22(uStack_4,uStack_6) == -1) {
        if (uStack_2 == 0xffff) {
          uStack_2 = 0x8000;
          uVar4 = uVar4 + 1;
          iVar2 = 0;
          iVar5 = 0;
        }
        else {
          uStack_2 = uStack_2 + 1;
          iVar2 = 0;
          iVar5 = 0;
        }
      }
      else {
        iVar2 = CONCAT22(uStack_4,uStack_6) + 1;
      }
    }
    else {
      iVar5 = CONCAT22(sStack_8,uStack_a) + 1;
      iVar2 = CONCAT22(uStack_4,uStack_6);
    }
  }
  sStack_8 = (short)((uint)iVar5 >> 0x10);
  uStack_a = (undefined2)iVar5;
  uStack_4 = (undefined2)((uint)iVar2 >> 0x10);
  uStack_6 = (undefined2)iVar2;
  if (0x7ffe < uVar4) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
    return;
  }
  *(undefined2 *)param_1 = uStack_a;
  *(uint *)((int)param_1 + 2) = CONCAT22(uStack_6,sStack_8);
  *(uint *)((int)param_1 + 6) = CONCAT22(uStack_2,uStack_4);
  *(ushort *)((int)param_1 + 10) = uVar4 | uVar6;
  return;
}



/* ==== FUN_1000f560 @ 1000f560 ==== 
 * signature: undefined __cdecl FUN_1000f560(int * param_1, int * param_2)
 * body: 1000f560-1000f817
 */

void __cdecl FUN_1000f560(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  short *local_20;
  int local_18;
  int local_14;
  int local_10;
  byte local_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  short local_8;
  undefined2 uStack_6;
  undefined2 local_4;
  ushort uStack_2;
  
  local_14 = 0;
  local_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  local_8 = 0;
  uStack_6 = 0;
  uVar3 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar1 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar6 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar4 = uVar3 + uVar1;
  local_4 = 0;
  uStack_2 = 0;
  if (((0x7ffe < uVar1) || (0x7ffe < uVar3)) || (0xbffd < uVar4)) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
    return;
  }
  if (uVar4 < 0x3fc0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  if (((uVar1 == 0) && (uVar4 = uVar4 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
     ((param_1[1] == 0 && (*param_1 == 0)))) {
    *(undefined2 *)((int)param_1 + 10) = 0;
    return;
  }
  if (((uVar3 == 0) && (uVar4 = uVar4 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
     ((param_2[1] == 0 && (*param_2 == 0)))) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  local_20 = &local_8;
  local_18 = 0;
  iVar5 = 5;
  do {
    if (0 < iVar5) {
      puVar8 = (ushort *)(param_2 + 2);
      puVar7 = (ushort *)(local_18 * 2 + (int)param_1);
      local_10 = iVar5;
      do {
        iVar2 = FUN_1000e070(*(uint *)(local_20 + -2),(uint)*puVar8 * (uint)*puVar7,
                             (uint *)(local_20 + -2));
        if (iVar2 != 0) {
          *local_20 = *local_20 + 1;
        }
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + -1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    local_20 = local_20 + 1;
    local_18 = local_18 + 1;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  uVar4 = uVar4 + 0xc002;
  while ((0 < (short)uVar4 && ((uStack_2 & 0x8000) == 0))) {
    FUN_1000e110((uint *)&local_c);
    uVar4 = uVar4 - 1;
  }
  if ((short)uVar4 < 1) {
    uVar4 = uVar4 - 1;
    if ((short)uVar4 < 0) {
      iVar5 = -(int)(short)uVar4;
      uVar4 = uVar4 + (short)iVar5;
      do {
        if ((local_c & 1) != 0) {
          local_14 = local_14 + 1;
        }
        FUN_1000e140((uint *)&local_c);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_14 != 0) {
      local_c = local_c | 1;
    }
  }
  if ((0x8000 < CONCAT11(uStack_b,local_c)) ||
     (iVar2 = CONCAT22(local_4,uStack_6), iVar5 = CONCAT22(local_8,uStack_a),
     (CONCAT22(uStack_a,CONCAT11(uStack_b,local_c)) & 0x1ffff) == 0x18000)) {
    if (CONCAT22(local_8,uStack_a) == -1) {
      iVar5 = 0;
      if (CONCAT22(local_4,uStack_6) == -1) {
        if (uStack_2 == 0xffff) {
          uStack_2 = 0x8000;
          uVar4 = uVar4 + 1;
          iVar2 = 0;
          iVar5 = 0;
        }
        else {
          uStack_2 = uStack_2 + 1;
          iVar2 = 0;
          iVar5 = 0;
        }
      }
      else {
        iVar2 = CONCAT22(local_4,uStack_6) + 1;
      }
    }
    else {
      iVar5 = CONCAT22(local_8,uStack_a) + 1;
      iVar2 = CONCAT22(local_4,uStack_6);
    }
  }
  local_8 = (short)((uint)iVar5 >> 0x10);
  uStack_a = (undefined2)iVar5;
  local_4 = (undefined2)((uint)iVar2 >> 0x10);
  uStack_6 = (undefined2)iVar2;
  if (0x7ffe < uVar4) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
    return;
  }
  *(undefined2 *)param_1 = uStack_a;
  *(uint *)((int)param_1 + 2) = CONCAT22(uStack_6,local_8);
  *(uint *)((int)param_1 + 6) = CONCAT22(uStack_2,local_4);
  *(ushort *)((int)param_1 + 10) = uVar4 | uVar6;
  return;
}



/* ==== FUN_1000f820 @ 1000f820 ==== 
 * signature: undefined __cdecl FUN_1000f820(int * param_1, uint param_2, int param_3)
 * body: 1000f820-1000f8a9
 */

void __cdecl FUN_1000f820(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined2 local_c;
  undefined4 uStack_a;
  undefined2 uStack_6;
  int local_4;
  
  iVar3 = 0x10016640;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x100167a0;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      iVar3 = iVar3 + 0x54;
      uVar1 = param_2 & 7;
      param_2 = (int)param_2 >> 3;
      if (uVar1 != 0) {
        piVar2 = (int *)(iVar3 + uVar1 * 0xc);
        if (0x7fff < *(ushort *)(iVar3 + uVar1 * 0xc)) {
          local_c = (undefined2)*piVar2;
          uStack_a._0_2_ = (undefined2)((uint)*piVar2 >> 0x10);
          uStack_a._2_2_ = (undefined2)piVar2[1];
          uStack_6 = (undefined2)((uint)piVar2[1] >> 0x10);
          local_4 = piVar2[2];
          uStack_a = CONCAT22(uStack_a._2_2_,(undefined2)uStack_a) + -1;
          piVar2 = (int *)&local_c;
        }
        FUN_1000f560(param_1,piVar2);
      }
    }
  }
  return;
}



/* ==== FUN_1000f8b0 @ 1000f8b0 ==== 
 * signature: undefined4 __stdcall FUN_1000f8b0(uint param_1)
 * body: 1000f8b0-1000f8b0
 */

undefined4 FUN_1000f8b0(uint param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0xffffffff;
  }
  FUN_1000a3c0(param_1);
  uVar1 = FUN_1000f8f0((int *)param_1);
  FUN_1000a430(param_1);
  return uVar1;
}



/* ==== FUN_1000f8b1 @ 1000f8b1 ==== 
 * signature: undefined FUN_1000f8b1(void)
 * body: 1000f8b1-1000f8ec
 */

undefined4 FUN_1000f8b1(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_2 + 3) & 0x40) != 0) {
    param_2[3] = 0;
    return 0xffffffff;
  }
  FUN_1000a3c0((uint)param_2);
  uVar1 = FUN_1000f8f0(param_2);
  FUN_1000a430((uint)param_2);
  return uVar1;
}



/* ==== FUN_1000f8ed @ 1000f8ed ==== 
 * signature: undefined FUN_1000f8ed(void)
 * body: 1000f8ed-1000f8ef
 */

undefined4 FUN_1000f8ed(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_1000ee90(param_1);
    FUN_1000fec0(param_1);
    iVar1 = FUN_1000fdc0(param_1[4]);
    if (iVar1 < 0) {
      param_1[3] = 0;
      return 0xffffffff;
    }
    if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_1000bff0((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}



/* ==== FUN_1000f8f0 @ 1000f8f0 ==== 
 * signature: undefined4 __stdcall FUN_1000f8f0(int * param_1)
 * body: 1000f8f0-1000f8f0
 */

undefined4 FUN_1000f8f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_1000ee90(param_1);
    FUN_1000fec0(param_1);
    iVar1 = FUN_1000fdc0(param_1[4]);
    if (iVar1 < 0) {
      param_1[3] = 0;
      return 0xffffffff;
    }
    if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_1000bff0((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}



/* ==== FUN_1000f8f1 @ 1000f8f1 ==== 
 * signature: undefined FUN_1000f8f1(void)
 * body: 1000f8f1-1000f954
 */

undefined4 FUN_1000f8f1(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_2 + 3) & 0x83) != 0) {
    uVar2 = FUN_1000ee90(param_2);
    FUN_1000fec0(param_2);
    iVar1 = FUN_1000fdc0(param_2[4]);
    if (iVar1 < 0) {
      param_2[3] = 0;
      return 0xffffffff;
    }
    if ((undefined *)param_2[7] != (undefined *)0x0) {
      FUN_1000bff0((undefined *)param_2[7]);
      param_2[7] = 0;
    }
  }
  param_2[3] = 0;
  return uVar2;
}



/* ==== FUN_1000f955 @ 1000f955 ==== 
 * signature: undefined FUN_1000f955(void)
 * body: 1000f955-1000f95f
 */

undefined4 FUN_1000f955(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10018500 <= param_1) {
LAB_1000f9ec:
    pDVar3 = FUN_1000f540();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000f9ec;
  FUN_1000fff0(param_1);
  if ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000ffa0(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000f9dd;
    pDVar3 = FUN_1000f550();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000f540();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000f9dd:
  FUN_10010060(param_1);
  return uVar5;
}



/* ==== FUN_1000f960 @ 1000f960 ==== 
 * signature: undefined4 __stdcall FUN_1000f960(uint param_1)
 * body: 1000f960-1000f960
 */

undefined4 FUN_1000f960(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10018500 <= param_1) {
LAB_1000f9ec:
    pDVar3 = FUN_1000f540();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000f9ec;
  FUN_1000fff0(param_1);
  if ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000ffa0(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000f9dd;
    pDVar3 = FUN_1000f550();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000f540();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000f9dd:
  FUN_10010060(param_1);
  return uVar5;
}



/* ==== FUN_1000f965 @ 1000f965 ==== 
 * signature: undefined FUN_1000f965(void)
 * body: 1000f965-1000f9fd
 */

undefined4 FUN_1000f965(uint param_1)

{
  uint in_EAX;
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (in_EAX <= param_1) {
LAB_1000f9ec:
    pDVar3 = FUN_1000f540();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000f9ec;
  FUN_1000fff0(param_1);
  if ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000ffa0(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000f9dd;
    pDVar3 = FUN_1000f550();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000f540();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000f9dd:
  FUN_10010060(param_1);
  return uVar5;
}



/* ==== FUN_1000f9fe @ 1000f9fe ==== 
 * signature: undefined FUN_1000f9fe(void)
 * body: 1000f9fe-1000f9ff
 */

int FUN_1000f9fe(uint param_1,undefined4 param_2,char *param_3,uint param_4)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10018500) &&
     ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000fff0(param_1);
    iVar1 = FUN_1000fa80(param_1,param_3,param_4);
    FUN_10010060(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return -1;
}



/* ==== FUN_1000fa00 @ 1000fa00 ==== 
 * signature: undefined4 __stdcall FUN_1000fa00(uint param_1, undefined4 param_2, undefined4 param_3)
 * body: 1000fa00-1000fa00
 */

int FUN_1000fa00(uint param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  uint in_stack_00000010;
  
  if ((param_1 < DAT_10018500) &&
     ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000fff0(param_1);
    iVar1 = FUN_1000fa80(param_1,param_3,in_stack_00000010);
    FUN_10010060(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1000fa05 @ 1000fa05 ==== 
 * signature: undefined FUN_1000fa05(void)
 * body: 1000fa05-1000fa71
 */

int FUN_1000fa05(uint param_1,undefined4 param_2,char *param_3,uint param_4)

{
  uint in_EAX;
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < in_EAX) &&
     ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000fff0(param_1);
    iVar1 = FUN_1000fa80(param_1,param_3,param_4);
    FUN_10010060(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return -1;
}



/* ==== FUN_1000fa72 @ 1000fa72 ==== 
 * signature: undefined FUN_1000fa72(void)
 * body: 1000fa72-1000fa7f
 */

int FUN_1000fa72(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                char *param_6)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int *piVar6;
  DWORD unaff_EDI;
  char *pcVar7;
  DWORD DStack_40c;
  uint uStack_404;
  DWORD DStack_400;
  int iStack_3fc;
  int *piStack_3f8;
  char acStack_3f4 [1012];
  
  DStack_40c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = &DAT_10018400 + ((int)param_1 >> 5);
  piVar6 = (int *)((param_1 & 0x1f) * 0x24);
  if ((*(byte *)((int)piVar6 + *piVar1 + 4) & 0x20) != 0) {
    FUN_10010090(param_1,0,2,unaff_EDI);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + (int)piVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + (int)piVar6),param_6,param_3,&DStack_400,
                      (LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      uStack_404 = GetLastError();
    }
    else {
      DStack_40c = DStack_400;
      uStack_404 = 0;
    }
  }
  else {
    uStack_404 = 0;
    pcVar7 = param_6;
    if (param_3 != 0) {
      do {
        pcVar3 = acStack_3f4;
        do {
          if (param_3 <= (uint)((int)pcVar7 - (int)param_6)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            iStack_3fc = iStack_3fc + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)acStack_3f4 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)((int)piVar1 + *piStack_3f8),acStack_3f4,
                          (int)pcVar3 - (int)acStack_3f4,&DStack_400,(LPOVERLAPPED)0x0);
        piVar6 = piVar1;
        if (BVar4 == 0) {
          uStack_404 = GetLastError();
          break;
        }
        DStack_40c = DStack_40c + DStack_400;
        if (((int)DStack_400 < (int)pcVar3 - (int)acStack_3f4) ||
           (param_3 <= (uint)((int)pcVar7 - (int)param_6))) break;
      } while( true );
    }
  }
  if (DStack_40c != 0) {
    return DStack_40c - iStack_3fc;
  }
  if (uStack_404 == 0) {
    if (((*(byte *)((int)piVar6 + *piStack_3f8 + 4) & 0x40) != 0) && (*param_6 == '\x1a')) {
      return 0;
    }
    pDVar5 = FUN_1000f540();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_1000f550();
    *pDVar5 = 0;
    return -1;
  }
  if (uStack_404 != 5) {
    FUN_1000f4c0(uStack_404);
    return -1;
  }
  pDVar5 = FUN_1000f540();
  *pDVar5 = 9;
  pDVar5 = FUN_1000f550();
  *pDVar5 = 5;
  return -1;
}



/* ==== FUN_1000fa80 @ 1000fa80 ==== 
 * signature: int __stdcall FUN_1000fa80(uint param_1, char * param_2, uint param_3)
 * body: 1000fa80-1000fa80
 */

int FUN_1000fa80(uint param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int *piVar6;
  DWORD unaff_EDI;
  char *pcVar7;
  char *in_stack_00000018;
  DWORD DStack_40c;
  uint uStack_404;
  DWORD DStack_400;
  int iStack_3fc;
  int *piStack_3f8;
  char acStack_3f4 [1012];
  
  DStack_40c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = &DAT_10018400 + ((int)param_1 >> 5);
  piVar6 = (int *)((param_1 & 0x1f) * 0x24);
  if ((*(byte *)((int)piVar6 + *piVar1 + 4) & 0x20) != 0) {
    FUN_10010090(param_1,0,2,unaff_EDI);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + (int)piVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + (int)piVar6),in_stack_00000018,param_3,&DStack_400,
                      (LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      uStack_404 = GetLastError();
    }
    else {
      DStack_40c = DStack_400;
      uStack_404 = 0;
    }
  }
  else {
    uStack_404 = 0;
    pcVar7 = in_stack_00000018;
    if (param_3 != 0) {
      do {
        pcVar3 = acStack_3f4;
        do {
          if (param_3 <= (uint)((int)pcVar7 - (int)in_stack_00000018)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            iStack_3fc = iStack_3fc + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)acStack_3f4 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)((int)piVar1 + *piStack_3f8),acStack_3f4,
                          (int)pcVar3 - (int)acStack_3f4,&DStack_400,(LPOVERLAPPED)0x0);
        piVar6 = piVar1;
        if (BVar4 == 0) {
          uStack_404 = GetLastError();
          break;
        }
        DStack_40c = DStack_40c + DStack_400;
        if (((int)DStack_400 < (int)pcVar3 - (int)acStack_3f4) ||
           (param_3 <= (uint)((int)pcVar7 - (int)in_stack_00000018))) break;
      } while( true );
    }
  }
  if (DStack_40c != 0) {
    return DStack_40c - iStack_3fc;
  }
  if (uStack_404 == 0) {
    if (((*(byte *)((int)piVar6 + *piStack_3f8 + 4) & 0x40) != 0) && (*in_stack_00000018 == '\x1a'))
    {
      return 0;
    }
    pDVar5 = FUN_1000f540();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_1000f550();
    *pDVar5 = 0;
    return -1;
  }
  if (uStack_404 != 5) {
    FUN_1000f4c0(uStack_404);
    return -1;
  }
  pDVar5 = FUN_1000f540();
  *pDVar5 = 9;
  pDVar5 = FUN_1000f550();
  *pDVar5 = 5;
  return -1;
}



/* ==== FUN_1000fa86 @ 1000fa86 ==== 
 * signature: undefined FUN_1000fa86(void)
 * body: 1000fa86-1000fc88
 */

int FUN_1000fa86(void)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int *piVar6;
  DWORD unaff_EDI;
  char *pcVar7;
  int *piStack00000004;
  DWORD DStack00000010;
  int *piStack00000014;
  DWORD DStack00000018;
  DWORD in_stack_0000001c;
  int in_stack_00000020;
  int *in_stack_00000024;
  uint in_stack_00000420;
  uint in_stack_00000428;
  char *in_stack_00000434;
  
  DStack00000010 = 0;
  if (in_stack_00000428 == 0) {
    return 0;
  }
  piVar1 = &DAT_10018400 + ((int)in_stack_00000420 >> 5);
  piVar6 = (int *)((in_stack_00000420 & 0x1f) * 0x24);
  piStack00000004 = piVar6;
  piStack00000014 = piVar1;
  if ((*(byte *)((int)piVar6 + *piVar1 + 4) & 0x20) != 0) {
    FUN_10010090(in_stack_00000420,0,2,unaff_EDI);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + (int)piVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + (int)piVar6),in_stack_00000434,in_stack_00000428,
                      &stack0x0000001c,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      DStack00000018 = GetLastError();
    }
    else {
      DStack00000010 = in_stack_0000001c;
      DStack00000018 = 0;
    }
  }
  else {
    DStack00000018 = 0;
    pcVar7 = in_stack_00000434;
    if (in_stack_00000428 != 0) {
      do {
        pcVar3 = &stack0x00000028;
        do {
          if (in_stack_00000428 <= (uint)((int)pcVar7 - (int)in_stack_00000434)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            in_stack_00000020 = in_stack_00000020 + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)&stack0x00000028 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)((int)piStack00000014 + *in_stack_00000024),&stack0x00000028,
                          (int)pcVar3 - (int)&stack0x00000028,&stack0x0000001c,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          DStack00000018 = GetLastError();
          piVar6 = piStack00000014;
          break;
        }
        DStack00000010 = DStack00000010 + in_stack_0000001c;
        piVar6 = piStack00000014;
        if (((int)in_stack_0000001c < (int)pcVar3 - (int)&stack0x00000028) ||
           (in_stack_00000428 <= (uint)((int)pcVar7 - (int)in_stack_00000434))) break;
      } while( true );
    }
  }
  if (DStack00000010 != 0) {
    return DStack00000010 - in_stack_00000020;
  }
  if (DStack00000018 == 0) {
    if (((*(byte *)((int)piVar6 + *in_stack_00000024 + 4) & 0x40) != 0) &&
       (*in_stack_00000434 == '\x1a')) {
      return 0;
    }
    pDVar5 = FUN_1000f540();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_1000f550();
    *pDVar5 = 0;
    return -1;
  }
  if (DStack00000018 != 5) {
    FUN_1000f4c0(DStack00000018);
    return -1;
  }
  pDVar5 = FUN_1000f540();
  *pDVar5 = 9;
  pDVar5 = FUN_1000f550();
  *pDVar5 = 5;
  return -1;
}



/* ==== FUN_1000fc89 @ 1000fc89 ==== 
 * signature: undefined FUN_1000fc89(void)
 * body: 1000fc89-1000fcf7
 */

undefined8 FUN_1000fc89(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



/* ==== FUN_1000fcf8 @ 1000fcf8 ==== 
 * signature: undefined FUN_1000fcf8(void)
 * body: 1000fcf8-1000fcf8
 */

void FUN_1000fcf8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fcf9 @ 1000fcf9 ==== 
 * signature: undefined FUN_1000fcf9(void)
 * body: 1000fcf9-1000fcf9
 */

void FUN_1000fcf9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fcfa @ 1000fcfa ==== 
 * signature: undefined FUN_1000fcfa(void)
 * body: 1000fcfa-1000fcfa
 */

void FUN_1000fcfa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fcfb @ 1000fcfb ==== 
 * signature: undefined FUN_1000fcfb(void)
 * body: 1000fcfb-1000fcfb
 */

void FUN_1000fcfb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fcfc @ 1000fcfc ==== 
 * signature: undefined FUN_1000fcfc(void)
 * body: 1000fcfc-1000fcfc
 */

void FUN_1000fcfc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fcfd @ 1000fcfd ==== 
 * signature: undefined FUN_1000fcfd(void)
 * body: 1000fcfd-1000fcfd
 */

void FUN_1000fcfd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fcfe @ 1000fcfe ==== 
 * signature: undefined FUN_1000fcfe(void)
 * body: 1000fcfe-1000fcfe
 */

void FUN_1000fcfe(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fcff @ 1000fcff ==== 
 * signature: undefined FUN_1000fcff(void)
 * body: 1000fcff-1000fcff
 */

void FUN_1000fcff(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd00 @ 1000fd00 ==== 
 * signature: undefined8 __stdcall FUN_1000fd00(uint param_1, uint param_2, uint param_3, uint param_4)
 * body: 1000fd00-1000fd20
 */

undefined8 FUN_1000fd00(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}



/* ==== FUN_1000fd21 @ 1000fd21 ==== 
 * signature: undefined FUN_1000fd21(void)
 * body: 1000fd21-1000fd74
 */

undefined8 FUN_1000fd21(undefined4 param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = param_2;
  uVar5 = param_3;
  uVar3 = param_4;
  do {
    uVar6 = in_EAX & 1;
    in_EAX = in_EAX >> 1;
    uVar3 = (uint)(CONCAT14(uVar6 != 0,uVar3) >> 1);
    uVar6 = uVar5 & 1;
    uVar5 = uVar5 >> 1;
    uVar4 = (uint)(CONCAT14(uVar6 != 0,uVar4) >> 1);
  } while (in_EAX != 0);
  uVar1 = CONCAT44(uVar5,uVar4) / (ulonglong)uVar3;
  uVar3 = (int)uVar1 * param_5;
  lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_4;
  uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar4 = (uint)lVar2;
  uVar6 = uVar5 + uVar3;
  if (((CARRY4(uVar5,uVar3)) || (param_3 < uVar6)) || ((param_3 <= uVar6 && (param_2 < uVar4)))) {
    bVar7 = uVar4 < param_4;
    uVar4 = uVar4 - param_4;
    uVar6 = (uVar6 - param_5) - (uint)bVar7;
  }
  return CONCAT44(-(uint)(uVar4 - param_2 != 0) - ((uVar6 - param_3) - (uint)(uVar4 < param_2)),
                  -(uVar4 - param_2));
}



/* ==== FUN_1000fd75 @ 1000fd75 ==== 
 * signature: undefined FUN_1000fd75(void)
 * body: 1000fd75-1000fd75
 */

void FUN_1000fd75(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd76 @ 1000fd76 ==== 
 * signature: undefined FUN_1000fd76(void)
 * body: 1000fd76-1000fd76
 */

void FUN_1000fd76(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd77 @ 1000fd77 ==== 
 * signature: undefined FUN_1000fd77(void)
 * body: 1000fd77-1000fd77
 */

void FUN_1000fd77(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd78 @ 1000fd78 ==== 
 * signature: undefined FUN_1000fd78(void)
 * body: 1000fd78-1000fd78
 */

void FUN_1000fd78(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd79 @ 1000fd79 ==== 
 * signature: undefined FUN_1000fd79(void)
 * body: 1000fd79-1000fd79
 */

void FUN_1000fd79(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd7a @ 1000fd7a ==== 
 * signature: undefined FUN_1000fd7a(void)
 * body: 1000fd7a-1000fd7a
 */

void FUN_1000fd7a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd7b @ 1000fd7b ==== 
 * signature: undefined FUN_1000fd7b(void)
 * body: 1000fd7b-1000fd7b
 */

void FUN_1000fd7b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd7c @ 1000fd7c ==== 
 * signature: undefined FUN_1000fd7c(void)
 * body: 1000fd7c-1000fd7c
 */

void FUN_1000fd7c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd7d @ 1000fd7d ==== 
 * signature: undefined FUN_1000fd7d(void)
 * body: 1000fd7d-1000fd7d
 */

void FUN_1000fd7d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd7e @ 1000fd7e ==== 
 * signature: undefined FUN_1000fd7e(void)
 * body: 1000fd7e-1000fd7e
 */

void FUN_1000fd7e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd7f @ 1000fd7f ==== 
 * signature: undefined FUN_1000fd7f(void)
 * body: 1000fd7f-1000fd7f
 */

void FUN_1000fd7f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fd80 @ 1000fd80 ==== 
 * signature: undefined FUN_1000fd80(void)
 * body: 1000fd80-1000fdb3
 */

longlong FUN_1000fd80(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



/* ==== FUN_1000fdb4 @ 1000fdb4 ==== 
 * signature: undefined FUN_1000fdb4(void)
 * body: 1000fdb4-1000fdb4
 */

void FUN_1000fdb4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdb5 @ 1000fdb5 ==== 
 * signature: undefined FUN_1000fdb5(void)
 * body: 1000fdb5-1000fdb5
 */

void FUN_1000fdb5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdb6 @ 1000fdb6 ==== 
 * signature: undefined FUN_1000fdb6(void)
 * body: 1000fdb6-1000fdb6
 */

void FUN_1000fdb6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdb7 @ 1000fdb7 ==== 
 * signature: undefined FUN_1000fdb7(void)
 * body: 1000fdb7-1000fdb7
 */

void FUN_1000fdb7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdb8 @ 1000fdb8 ==== 
 * signature: undefined FUN_1000fdb8(void)
 * body: 1000fdb8-1000fdb8
 */

void FUN_1000fdb8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdb9 @ 1000fdb9 ==== 
 * signature: undefined FUN_1000fdb9(void)
 * body: 1000fdb9-1000fdb9
 */

void FUN_1000fdb9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdba @ 1000fdba ==== 
 * signature: undefined FUN_1000fdba(void)
 * body: 1000fdba-1000fdba
 */

void FUN_1000fdba(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdbb @ 1000fdbb ==== 
 * signature: undefined FUN_1000fdbb(void)
 * body: 1000fdbb-1000fdbb
 */

void FUN_1000fdbb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdbc @ 1000fdbc ==== 
 * signature: undefined FUN_1000fdbc(void)
 * body: 1000fdbc-1000fdbc
 */

void FUN_1000fdbc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdbd @ 1000fdbd ==== 
 * signature: undefined FUN_1000fdbd(void)
 * body: 1000fdbd-1000fdbd
 */

void FUN_1000fdbd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdbe @ 1000fdbe ==== 
 * signature: undefined FUN_1000fdbe(void)
 * body: 1000fdbe-1000fdbe
 */

void FUN_1000fdbe(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdbf @ 1000fdbf ==== 
 * signature: undefined FUN_1000fdbf(void)
 * body: 1000fdbf-1000fdbf
 */

void FUN_1000fdbf(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000fdc0 @ 1000fdc0 ==== 
 * signature: undefined4 __stdcall FUN_1000fdc0(uint param_1)
 * body: 1000fdc0-1000fdc0
 */

undefined4 FUN_1000fdc0(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10018500) &&
     ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000fff0(param_1);
    uVar1 = FUN_1000fe30((HANDLE)param_1);
    FUN_10010060(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1000fdc5 @ 1000fdc5 ==== 
 * signature: undefined FUN_1000fdc5(void)
 * body: 1000fdc5-1000fe27
 */

undefined4 FUN_1000fdc5(HANDLE param_1)

{
  HANDLE in_EAX;
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < in_EAX) &&
     ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + ((uint)param_1 & 0x1f) * 0x24) & 1) != 0))
  {
    FUN_1000fff0((uint)param_1);
    uVar1 = FUN_1000fe30(param_1);
    FUN_10010060((uint)param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1000fe28 @ 1000fe28 ==== 
 * signature: undefined FUN_1000fe28(void)
 * body: 1000fe28-1000fe2f
 */

undefined4 FUN_1000fe28(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_1000ffa0(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000ffa0(1);
      iVar2 = FUN_1000ffa0(2);
      if (iVar1 == iVar2) goto LAB_1000fe86;
    }
    hObject = (HANDLE)FUN_1000ffa0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000fe88;
    }
  }
LAB_1000fe86:
  DVar4 = 0;
LAB_1000fe88:
  FUN_1000ff00(param_1);
  *(undefined1 *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_1000f4c0(DVar4);
    return 0xffffffff;
  }
  return 0;
}



/* ==== FUN_1000fe30 @ 1000fe30 ==== 
 * signature: undefined4 __stdcall FUN_1000fe30(HANDLE param_1)
 * body: 1000fe30-1000fe30
 */

undefined4 FUN_1000fe30(HANDLE param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_1000ffa0((uint)param_1);
  if (iVar1 != -1) {
    if ((param_1 == (HANDLE)0x1) || (param_1 == (HANDLE)0x2)) {
      iVar1 = FUN_1000ffa0(1);
      iVar2 = FUN_1000ffa0(2);
      if (iVar1 == iVar2) goto LAB_1000fe86;
    }
    hObject = (HANDLE)FUN_1000ffa0((uint)param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000fe88;
    }
  }
LAB_1000fe86:
  DVar4 = 0;
LAB_1000fe88:
  FUN_1000ff00((uint)param_1);
  *(undefined1 *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + ((uint)param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_1000f4c0(DVar4);
    return 0xffffffff;
  }
  return 0;
}



/* ==== FUN_1000fe31 @ 1000fe31 ==== 
 * signature: undefined FUN_1000fe31(void)
 * body: 1000fe31-1000febf
 */

undefined4 FUN_1000fe31(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_1000ffa0(param_2);
  if (iVar1 != -1) {
    if ((param_2 == 1) || (param_2 == 2)) {
      iVar1 = FUN_1000ffa0(1);
      iVar2 = FUN_1000ffa0(2);
      if (iVar1 == iVar2) goto LAB_1000fe86;
    }
    hObject = (HANDLE)FUN_1000ffa0(param_2);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000fe88;
    }
  }
LAB_1000fe86:
  DVar4 = 0;
LAB_1000fe88:
  FUN_1000ff00(param_2);
  *(undefined1 *)((&DAT_10018400)[(int)param_2 >> 5] + 4 + (param_2 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_1000f4c0(DVar4);
    return 0xffffffff;
  }
  return 0;
}



/* ==== FUN_1000fec0 @ 1000fec0 ==== 
 * signature: undefined __stdcall FUN_1000fec0(undefined4 * param_1)
 * body: 1000fec0-1000fec0
 */

void FUN_1000fec0(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_1000bff0((undefined *)param_1[2]);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



/* ==== FUN_1000fec1 @ 1000fec1 ==== 
 * signature: undefined FUN_1000fec1(void)
 * body: 1000fec1-1000fef2
 */

void FUN_1000fec1(undefined4 param_1,undefined4 *param_2)

{
  if (((param_2[3] & 0x83) != 0) && ((param_2[3] & 8) != 0)) {
    FUN_1000bff0((undefined *)param_2[2]);
    param_2[3] = param_2[3] & 0xfffffbf7;
    *param_2 = 0;
    param_2[2] = 0;
    param_2[1] = 0;
  }
  return;
}



/* ==== FUN_1000fef3 @ 1000fef3 ==== 
 * signature: undefined FUN_1000fef3(void)
 * body: 1000fef3-1000feff
 */

undefined4 FUN_1000fef3(uint param_1)

{
  int iVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10018500) {
    iVar1 = (&DAT_10018400)[(int)param_1 >> 5];
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar3) & 1) != 0) && (*(int *)(iVar1 + iVar3) != -1)) {
      if (DAT_10016f40 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000ff67;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000ff67:
      *(undefined4 *)((&DAT_10018400)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1000ff00 @ 1000ff00 ==== 
 * signature: undefined4 __stdcall FUN_1000ff00(uint param_1)
 * body: 1000ff00-1000ff00
 */

undefined4 FUN_1000ff00(uint param_1)

{
  int iVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10018500) {
    iVar1 = (&DAT_10018400)[(int)param_1 >> 5];
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar3) & 1) != 0) && (*(int *)(iVar1 + iVar3) != -1)) {
      if (DAT_10016f40 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000ff67;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000ff67:
      *(undefined4 *)((&DAT_10018400)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1000ff04 @ 1000ff04 ==== 
 * signature: undefined FUN_1000ff04(void)
 * body: 1000ff04-1000ff92
 */

undefined4 __fastcall FUN_1000ff04(uint param_1)

{
  int iVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10018500) {
    iVar1 = (&DAT_10018400)[(int)param_1 >> 5];
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar3) & 1) != 0) && (*(int *)(iVar1 + iVar3) != -1)) {
      if (DAT_10016f40 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000ff67;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000ff67:
      *(undefined4 *)((&DAT_10018400)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ==== FUN_1000ff93 @ 1000ff93 ==== 
 * signature: undefined FUN_1000ff93(void)
 * body: 1000ff93-1000ff9f
 */

undefined4 FUN_1000ff93(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10018500) &&
     ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10018400)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000f540();
  *pDVar1 = 9;
  pDVar1 = FUN_1000f550();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ==== FUN_1000ffa0 @ 1000ffa0 ==== 
 * signature: undefined4 __cdecl FUN_1000ffa0(uint param_1)
 * body: 1000ffa0-1000ffe8
 */

undefined4 __cdecl FUN_1000ffa0(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10018500) &&
     ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10018400)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000f540();
  *pDVar1 = 9;
  pDVar1 = FUN_1000f550();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ==== FUN_1000ffe9 @ 1000ffe9 ==== 
 * signature: undefined FUN_1000ffe9(void)
 * body: 1000ffe9-1000ffef
 */

void FUN_1000ffe9(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10018400)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000a320(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000a3a0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10018400)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



/* ==== FUN_1000fff0 @ 1000fff0 ==== 
 * signature: undefined __stdcall FUN_1000fff0(uint param_1)
 * body: 1000fff0-1000fff0
 */

void FUN_1000fff0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10018400)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000a320(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000a3a0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10018400)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



/* ==== FUN_1000fff4 @ 1000fff4 ==== 
 * signature: undefined FUN_1000fff4(void)
 * body: 1000fff4-10010054
 */

void FUN_1000fff4(void)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = (in_EAX & 0x1f) * 0x24;
  iVar1 = (&DAT_10018400)[(int)in_EAX >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000a320(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000a3a0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10018400)[(int)in_EAX >> 5] + 0xc + iVar2));
  return;
}



/* ==== FUN_10010055 @ 10010055 ==== 
 * signature: undefined FUN_10010055(void)
 * body: 10010055-1001005f
 */

void FUN_10010055(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10018400)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



/* ==== FUN_10010060 @ 10010060 ==== 
 * signature: undefined __stdcall FUN_10010060(uint param_1)
 * body: 10010060-10010060
 */

void FUN_10010060(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10018400)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



/* ==== FUN_10010064 @ 10010064 ==== 
 * signature: undefined FUN_10010064(void)
 * body: 10010064-10010081
 */

void FUN_10010064(void)

{
  uint in_EAX;
  
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((&DAT_10018400)[(int)in_EAX >> 5] + 0xc + (in_EAX & 0x1f) * 0x24))
  ;
  return;
}



/* ==== FUN_10010082 @ 10010082 ==== 
 * signature: undefined FUN_10010082(void)
 * body: 10010082-1001008f
 */

DWORD FUN_10010082(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)FUN_1000ffa0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_1000f540();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    uVar3 = GetLastError();
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    FUN_1000f4c0(uVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}



/* ==== FUN_10010090 @ 10010090 ==== 
 * signature: DWORD __stdcall FUN_10010090(uint param_1, undefined4 param_2, LONG param_3, DWORD param_4)
 * body: 10010090-10010090
 */

DWORD FUN_10010090(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)FUN_1000ffa0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_1000f540();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    uVar3 = GetLastError();
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    FUN_1000f4c0(uVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}



/* ==== FUN_10010091 @ 10010091 ==== 
 * signature: undefined FUN_10010091(void)
 * body: 10010091-1001010f
 */

DWORD FUN_10010091(undefined4 param_1,uint param_2,LONG param_3,DWORD param_4)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)FUN_1000ffa0(param_2);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_1000f540();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_3,(PLONG)0x0,param_4);
  if (DVar2 == 0xffffffff) {
    uVar3 = GetLastError();
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    FUN_1000f4c0(uVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_10018400)[(int)param_2 >> 5] + 4 + (param_2 & 0x1f) * 0x24) =
       *(byte *)((&DAT_10018400)[(int)param_2 >> 5] + 4 + (param_2 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}



/* ==== FUN_10010110 @ 10010110 ==== 
 * signature: undefined FUN_10010110(void)
 * body: 10010110-10010114
 */

int __fastcall FUN_10010110(undefined4 param_1,int param_2)

{
  return param_2 + -1;
}



/* ==== FUN_10010115 @ 10010115 ==== 
 * signature: undefined FUN_10010115(void)
 * body: 10010115-100101db
 */

uint * FUN_10010115(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



/* ==== FUN_100101dc @ 100101dc ==== 
 * signature: undefined FUN_100101dc(void)
 * body: 100101dc-100101ff
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_100101dc(void)

{
  char cVar1;
  char *in_EAX;
  
  cVar1 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


