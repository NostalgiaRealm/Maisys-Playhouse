/* Ghidra 12.1.4 generated C-like pseudocode for EXPRMNTL.R32.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

/* ==== MenuSrv @ 13001000 ==== 
 * signature: undefined __cdecl MenuSrv(int param_1)
 * body: 13001000-130012c7
 */

void __cdecl MenuSrv(int param_1)

{
                    /* 0x1000  1  MenuSrv */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x28;
    *(undefined2 *)(param_1 + 0xa4) = 6;
    FUN_13003890(param_1,0x13008044);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_13003c20(param_1,(undefined4 *)s__MComponent_13008030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,7,FUN_13001320);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x22,FUN_130014e0);
      goto LAB_130010a1;
    }
LAB_130010bf:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,9,FUN_13001400);
      goto LAB_130010dd;
    }
LAB_130010fb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x11,FUN_13001540);
      goto LAB_13001119;
    }
LAB_13001137:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x12,FUN_130016a0);
      goto LAB_13001155;
    }
LAB_13001173:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0xe,FUN_13001830);
      goto LAB_13001191;
    }
LAB_130011af:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x17,FUN_130019a0);
      goto LAB_130011cd;
    }
LAB_130011eb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x2e,FUN_130012d0);
      goto LAB_13001209;
    }
LAB_13001227:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,1,1,FUN_13001d90);
      goto LAB_13001245;
    }
LAB_13001263:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,1,3,FUN_13001e90);
      goto LAB_13001281;
    }
  }
  else {
LAB_130010a1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,8,FUN_13001370);
      goto LAB_130010bf;
    }
LAB_130010dd:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x25,FUN_13001a60);
      goto LAB_130010fb;
    }
LAB_13001119:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x13,FUN_130015f0);
      goto LAB_13001137;
    }
LAB_13001155:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0xd,FUN_130017d0);
      goto LAB_13001173;
    }
LAB_13001191:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x16,FUN_13001890);
      goto LAB_130011af;
    }
LAB_130011cd:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x19,FUN_13001a20);
      goto LAB_130011eb;
    }
LAB_13001209:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,1,0,FUN_13001b20);
      goto LAB_13001227;
    }
LAB_13001245:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,1,2,FUN_13001da0);
      goto LAB_13001263;
    }
LAB_13001281:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_130012bd;
    FUN_13003c60(param_1,1,1,5,FUN_13001ea0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,1,4,FUN_13001e80);
  }
LAB_130012bd:
  FUN_13003c90(param_1);
  return;
}



/* ==== FUN_130012d0 @ 130012d0 ==== 
 * signature: undefined4 __cdecl FUN_130012d0(undefined4 param_1)
 * body: 130012d0-13001317
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_130012d0(undefined4 param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&local_4);
  _DAT_13008d34 = (*pcVar1)(local_4,param_1,s_events_1300804c,0x17,0xc);
  return 0;
}



/* ==== FUN_13001320 @ 13001320 ==== 
 * signature: undefined4 __cdecl FUN_13001320(undefined2 * param_1)
 * body: 13001320-13001360
 */

undefined4 __cdecl FUN_13001320(undefined2 *param_1)

{
  *param_1 = 0x17;
  param_1[5] = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[10] = 0x17;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 1) = 0x65;
  *(undefined4 *)(param_1 + 6) = 0x66;
  return 0;
}



/* ==== FUN_13001370 @ 13001370 ==== 
 * signature: undefined4 __cdecl FUN_13001370(undefined4 * param_1, undefined4 * param_2)
 * body: 13001370-130013fd
 */

undefined4 __cdecl FUN_13001370(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x7d1;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[4] = 0;
  param_1[3] = 1;
  *(undefined2 *)((int)param_1 + 10) = 0x17;
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 1;
  *(undefined2 *)(param_1 + 5) = 0x17;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 1;
  return 0;
}



/* ==== FUN_13001400 @ 13001400 ==== 
 * signature: undefined4 __cdecl FUN_13001400(int param_1)
 * body: 13001400-130014d2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001400(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int local_1c;
  int iStack_18;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  if (*(int *)(param_1 + 0x22) != 0) {
    local_e = 0;
    local_a = 0;
    local_12 = 0;
    local_6 = 0;
    local_14 = 0x69;
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&local_1c);
    puVar5 = &local_14;
    uVar4 = 0;
    pcVar3 = s_system_13008060;
    uVar2 = FUN_13003970(param_1);
    _DAT_13008d34 = (*pcVar1)(local_1c,uVar2,pcVar3,uVar4,puVar5);
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x24,&iStack_18);
    _DAT_13008d34 = (*pcVar1)(iStack_18,local_12,*(undefined4 *)(param_1 + 0x22));
    *(undefined4 *)(param_1 + 0x22) = 0;
    FUN_13003be0((int)&local_14);
  }
  FUN_13001da0(param_1,'\x01');
  return 0;
}



/* ==== FUN_130014e0 @ 130014e0 ==== 
 * signature: undefined4 __cdecl FUN_130014e0(undefined4 * param_1, undefined4 * param_2)
 * body: 130014e0-13001530
 */

undefined4 __cdecl FUN_130014e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return 0;
}



/* ==== FUN_13001540 @ 13001540 ==== 
 * signature: undefined4 __cdecl FUN_13001540(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 13001540-130015ed
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001540(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_13003980(param_2,1,4,&local_c);
  _DAT_13008d34 = (*pcVar1)(local_c,param_1,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_13003980(param_2,1,4,&iStack_8);
  _DAT_13008d34 = (*pcVar1)(iStack_8,param_1 + 10,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_13003980(param_2,1,4,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 0x14,&local_10);
  *param_4 = *param_4 + local_10;
  return 0;
}



/* ==== FUN_130015f0 @ 130015f0 ==== 
 * signature: undefined4 __cdecl FUN_130015f0(int param_1, int param_2)
 * body: 130015f0-1300169f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_130015f0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_12;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_12 = 2;
  pcVar1 = (code *)FUN_13003980(param_2,1,7,&local_10);
  _DAT_13008d34 = (*pcVar1)(local_10,&local_12,1);
  pcVar1 = (code *)FUN_13003980(param_2,1,5,&iStack_c);
  _DAT_13008d34 = (*pcVar1)(iStack_c,param_1);
  pcVar1 = (code *)FUN_13003980(param_2,1,5,&iStack_8);
  _DAT_13008d34 = (*pcVar1)(iStack_8,param_1 + 10);
  pcVar1 = (code *)FUN_13003980(param_2,1,5,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 0x14);
  return 0;
}



/* ==== FUN_130016a0 @ 130016a0 ==== 
 * signature: undefined4 __cdecl FUN_130016a0(int param_1, int param_2)
 * body: 130016a0-130017ca
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_130016a0(int param_1,int param_2)

{
  code *pcVar1;
  short local_e;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(param_2,1,8,&local_c);
  _DAT_13008d34 = (*pcVar1)(local_c,&local_e,1);
  if (local_e == 1) {
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&local_c);
    _DAT_13008d34 = (*pcVar1)(local_c,param_1);
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&iStack_8);
    _DAT_13008d34 = (*pcVar1)(iStack_8,param_1 + 10);
    *(undefined4 *)(param_1 + 0x16) = 1;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0x17;
    return 0;
  }
  if (local_e == 2) {
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&local_c);
    _DAT_13008d34 = (*pcVar1)(local_c,param_1);
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&iStack_8);
    _DAT_13008d34 = (*pcVar1)(iStack_8,param_1 + 10);
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&iStack_4);
    _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 0x14);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_130017d0 @ 130017d0 ==== 
 * signature: undefined4 __cdecl FUN_130017d0(int param_1)
 * body: 130017d0-13001829
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_130017d0(int param_1)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(param_1,0,0x21,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,1,param_1);
  pcVar1 = (code *)FUN_13003980(param_1,0,0x21,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,1,param_1 + 10);
  return 0;
}



/* ==== FUN_13001830 @ 13001830 ==== 
 * signature: undefined4 __cdecl FUN_13001830(int param_1)
 * body: 13001830-13001889
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001830(int param_1)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(param_1,0,0x21,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,2,param_1);
  pcVar1 = (code *)FUN_13003980(param_1,0,0x21,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,2,param_1 + 10);
  return 0;
}



/* ==== FUN_13001890 @ 13001890 ==== 
 * signature: undefined4 __cdecl FUN_13001890(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 13001890-1300199f
 */

undefined4 __cdecl FUN_13001890(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = FUN_130038f0(param_2,(uint *)s_events_1300804c);
  if ((char)uVar2 == '\0') {
    return 0x10000;
  }
  sVar1 = *param_4;
  if ((((sVar1 != 0x17) && (sVar1 != 0x6a)) || (param_3 == (short *)0x0)) || (*param_3 != 1)) {
    return 0x10000;
  }
  if ((((*(uint *)(param_3 + 1) & 0xff000000) != 0x80000000) ||
      (uVar2 = *(uint *)(param_3 + 1) & 0xffffff, uVar2 == 0)) || (3 < uVar2)) {
    return 0x10000;
  }
  if (sVar1 == 0x6a) {
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    *param_4 = 0x17;
  }
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      *(undefined4 *)param_4 = *(undefined4 *)((int)param_1 + 10);
      *(undefined4 *)(param_4 + 2) = *(undefined4 *)((int)param_1 + 0xe);
      param_4[4] = *(short *)((int)param_1 + 0x12);
      return 0;
    }
    if (uVar2 != 3) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = param_1[5];
    *(undefined4 *)(param_4 + 2) = param_1[6];
    param_4[4] = *(short *)(param_1 + 7);
    return 0;
  }
  *(undefined4 *)param_4 = *param_1;
  *(undefined4 *)(param_4 + 2) = param_1[1];
  param_4[4] = *(short *)(param_1 + 2);
  return 0;
}



/* ==== FUN_130019a0 @ 130019a0 ==== 
 * signature: undefined4 __cdecl FUN_130019a0(undefined4 param_1, uint * param_2, undefined4 param_3, undefined4 param_4)
 * body: 130019a0-13001a1d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_130019a0(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  int local_30;
  undefined2 local_2c;
  short local_2a;
  
  uVar1 = FUN_130038f0(param_2,(uint *)s_removemenu_13008074);
  if ((char)uVar1 != '\0') {
    local_2c = 0x14;
    local_2a = 1;
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x3c),1,0,&local_30);
    _DAT_13008d34 = (*pcVar2)(local_30,param_1,param_4,&local_2c);
    if (local_2a != 0) {
      return 0;
    }
  }
  return 0x10000;
}



/* ==== FUN_13001a20 @ 13001a20 ==== 
 * signature: undefined4 __cdecl FUN_13001a20(int param_1, int param_2)
 * body: 13001a20-13001a5c
 */

undefined4 __cdecl FUN_13001a20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if ((*(int *)(param_1 + 2) == iVar1) && (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    return 0;
  }
  if ((iVar1 != 0x7d2) &&
     ((*(int *)(param_1 + 0xc) != iVar1 || (*(int *)(param_2 + 0x10) != *(int *)(param_1 + 0x10)))))
  {
    return 0x10000;
  }
  return 0;
}



/* ==== FUN_13001a60 @ 13001a60 ==== 
 * signature: undefined4 __cdecl FUN_13001a60(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 13001a60-13001b16
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001a60(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 4),1,4,&local_c);
  _DAT_13008d34 = (*pcVar1)(local_c,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 4),1,4,&iStack_8);
  _DAT_13008d34 = (*pcVar1)(iStack_8,param_2,param_3,param_1 + 10);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 4),1,4,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0x14);
  return 0;
}



/* ==== FUN_13001b20 @ 13001b20 ==== 
 * signature: undefined4 __cdecl FUN_13001b20(int param_1)
 * body: 13001b20-13001d83
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001b20(int param_1)

{
  int iVar1;
  code *pcVar2;
  int local_4c;
  undefined2 local_48;
  int local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined2 local_34;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined1 *local_26;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  iVar1 = FUN_13003970(param_1);
  local_e = 0;
  local_a = 0;
  local_12 = 0;
  local_6 = 0;
  local_42 = 0;
  local_3e = 0;
  local_46 = 0;
  local_3a = 0;
  local_34 = 0x66;
  local_2e = 0;
  local_14 = 0x69;
  local_2a = 0;
  local_48 = 0x69;
  local_26 = (undefined1 *)0x0;
  local_32 = 0xffffffff;
  pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4c);
  _DAT_13008d34 = (*pcVar2)(local_4c,&local_26,0x100);
  if (local_26 != (undefined1 *)0x0) {
    local_2e = 0x100;
    *local_26 = 0;
  }
  pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&local_4c);
  _DAT_13008d34 = (*pcVar2)(local_4c,iVar1,s_system_13008060,0,&local_14);
  pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&iStack_20);
  _DAT_13008d34 = (*pcVar2)(iStack_20,iVar1,s_parent_130080c4,0,&local_48);
  pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&iStack_1c);
  _DAT_13008d34 = (*pcVar2)(iStack_1c,local_46,&DAT_130080b0,0,&local_34);
  pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&iStack_18);
  _DAT_13008d34 = (*pcVar2)(iStack_18,local_46,s_childobject_1300809c,0,&local_48);
  while (local_46 != 0) {
    if (local_46 != iVar1) {
      FUN_13001d90();
    }
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&local_4c);
    _DAT_13008d34 = (*pcVar2)(local_4c,local_46,s_nextsibling_13008088,0,&local_48);
  }
  FUN_13003be0((int)&local_48);
  FUN_13003be0((int)&local_14);
  if (local_26 != (undefined1 *)0x0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4c);
    _DAT_13008d34 = (*pcVar2)(local_4c,local_26);
  }
  return 0;
}



/* ==== FUN_13001d90 @ 13001d90 ==== 
 * signature: undefined4 __stdcall FUN_13001d90(void)
 * body: 13001d90-13001d92
 */

undefined4 FUN_13001d90(void)

{
  return 0;
}



/* ==== FUN_13001da0 @ 13001da0 ==== 
 * signature: undefined4 __cdecl FUN_13001da0(int param_1, char param_2)
 * body: 13001da0-13001e71
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001da0(int param_1,char param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int local_1c;
  int iStack_18;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x1e) != 0)) {
    local_e = 0;
    local_a = 0;
    local_12 = 0;
    local_6 = 0;
    local_14 = 0x69;
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&local_1c);
    puVar5 = &local_14;
    uVar4 = 0;
    pcVar3 = s_system_13008060;
    uVar2 = FUN_13003970(param_1);
    _DAT_13008d34 = (*pcVar1)(local_1c,uVar2,pcVar3,uVar4,puVar5);
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x24,&iStack_18);
    _DAT_13008d34 = (*pcVar1)(iStack_18,local_12,*(undefined4 *)(param_1 + 0x1e));
    *(undefined4 *)(param_1 + 0x1e) = 0;
    FUN_13003be0((int)&local_14);
  }
  return 0;
}



/* ==== FUN_13001e80 @ 13001e80 ==== 
 * signature: uint __cdecl FUN_13001e80(undefined4 param_1, int param_2)
 * body: 13001e80-13001e8c
 */

uint __cdecl FUN_13001e80(undefined4 param_1,int param_2)

{
  return -(uint)(param_2 == 0) & 0x10000;
}



/* ==== FUN_13001e90 @ 13001e90 ==== 
 * signature: undefined4 __stdcall FUN_13001e90(void)
 * body: 13001e90-13001e92
 */

undefined4 FUN_13001e90(void)

{
  return 0;
}



/* ==== FUN_13001ea0 @ 13001ea0 ==== 
 * signature: undefined4 __cdecl FUN_13001ea0(int param_1, undefined4 param_2, short param_3)
 * body: 13001ea0-13002119
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001ea0(int param_1,undefined4 param_2,short param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined2 local_50;
  int local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 uStack_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_3 == 0x1a) {
    local_50 = 0x69;
    local_3c = 0;
    local_38 = 0x69;
    local_4a = 0;
    local_46 = 0;
    local_32 = 0;
    local_24 = 0x69;
    local_4e = 0;
    local_42 = 0;
    local_2e = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    local_1e = 0;
    local_2a = 0;
    local_1a = 0;
    local_22 = 0;
    uStack_20 = 0;
    local_16 = 0;
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&local_10);
    puVar5 = &local_24;
    uVar4 = 0;
    pcVar3 = s_system_13008060;
    uVar2 = FUN_13003970(param_1);
    _DAT_13008d34 = (*pcVar1)(local_10,uVar2,pcVar3,uVar4,puVar5);
    pcVar1 = (code *)FUN_13003980(param_1,0,0x20,&iStack_c);
    _DAT_13008d34 = (*pcVar1)(iStack_c,&local_3c);
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&iStack_8);
    _DAT_13008d34 = (*pcVar1)(iStack_8,local_3c,s_project_130080ec,0,&local_50);
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&iStack_4);
    _DAT_13008d34 =
         (*pcVar1)(iStack_4,CONCAT22(uStack_20,local_22),s_activeproject_130080d8,0,&local_38);
    if (CONCAT22(uStack_34,uStack_36) == local_4e) {
      if (*(char *)(param_1 + 0x26) == '\0') {
        FUN_13001b20(param_1);
        *(undefined1 *)(param_1 + 0x26) = 1;
      }
    }
    else if (*(char *)(param_1 + 0x26) != '\0') {
      *(undefined1 *)(param_1 + 0x26) = 0;
      FUN_13001da0(param_1,'\0');
    }
    FUN_13003be0((int)&local_50);
    FUN_13003be0((int)&local_38);
    FUN_13003be0((int)&local_24);
    return 0;
  }
  if (param_3 == 0x1e) {
    local_50 = 0x69;
    local_4a = 0;
    local_46 = 0;
    local_4e = 0;
    local_42 = 0;
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,(int *)&local_38);
    puVar5 = &local_50;
    uVar4 = 0;
    pcVar3 = s_system_13008060;
    uVar2 = FUN_13003970(param_1);
    _DAT_13008d34 = (*pcVar1)(CONCAT22(uStack_36,local_38),uVar2,pcVar3,uVar4,puVar5);
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x24,(int *)&local_24);
    _DAT_13008d34 = (*pcVar1)(CONCAT22(local_22,local_24),local_4e,*(undefined4 *)(param_1 + 0x22));
    *(undefined4 *)(param_1 + 0x22) = 0;
    FUN_13003be0((int)&local_50);
    FUN_13001da0(param_1,'\x01');
  }
  return 0;
}



/* ==== SysInfo @ 13002120 ==== 
 * signature: undefined __cdecl SysInfo(int param_1)
 * body: 13002120-1300224f
 */

void __cdecl SysInfo(int param_1)

{
                    /* 0x2120  3  SysInfo */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0xac;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_13003890(param_1,0x130081d8);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_13003c20(param_1,(undefined4 *)s__MComponent_13008030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,7,FUN_130024e0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,8,FUN_130026e0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x22,FUN_13002b90);
      goto LAB_130021ed;
    }
LAB_1300220a:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_13002244;
    FUN_13003c60(param_1,1,0,0x2e,FUN_13002250);
  }
  else {
LAB_130021ed:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,9,FUN_130032c0);
      goto LAB_1300220a;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,0x16,FUN_13003510);
  }
LAB_13002244:
  FUN_13003c90(param_1);
  return;
}



/* ==== FUN_13002250 @ 13002250 ==== 
 * signature: undefined4 __cdecl FUN_13002250(undefined4 param_1)
 * body: 13002250-130024dd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13002250(undefined4 param_1)

{
  code *pcVar1;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&local_30);
  _DAT_13008d34 = (*pcVar1)(local_30,param_1,s_sysversion_130082bc,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_2c);
  _DAT_13008d34 = (*pcVar1)(iStack_2c,param_1,s_nativecpu_130082a8,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_28);
  _DAT_13008d34 = (*pcVar1)(iStack_28,param_1,s_architecture_13008294,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_24);
  _DAT_13008d34 = (*pcVar1)(iStack_24,param_1,&DAT_13008280,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_20);
  _DAT_13008d34 = (*pcVar1)(iStack_20,param_1,s_totalram_1300826c,1,5);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_1c);
  _DAT_13008d34 = (*pcVar1)(iStack_1c,param_1,s_currentram_13008258,1,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_18);
  _DAT_13008d34 = (*pcVar1)(iStack_18,param_1,s_computername_13008244,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_14);
  _DAT_13008d34 = (*pcVar1)(iStack_14,param_1,s_processor_13008230,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_10);
  _DAT_13008d34 = (*pcVar1)(iStack_10,param_1,s_soundcard_1300821c,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_c);
  _DAT_13008d34 = (*pcVar1)(iStack_c,param_1,s_bitdepth_13008208,1,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_8);
  _DAT_13008d34 = (*pcVar1)(iStack_8,param_1,s_screensize_130081f4,10,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_1,s_keyboardtype_130081e0,0x66,4);
  return 0;
}



/* ==== FUN_130024e0 @ 130024e0 ==== 
 * signature: undefined4 __cdecl FUN_130024e0(undefined2 * param_1)
 * body: 130024e0-130026d1
 */

undefined4 __cdecl FUN_130024e0(undefined2 *param_1)

{
  uint uVar1;
  HDC hdc;
  int iVar2;
  int iVar3;
  _SYSTEM_INFO local_144;
  _MEMORYSTATUS local_120;
  undefined1 local_100 [256];
  
  *param_1 = 0x14;
  param_1[1] = 1;
  GetVersion();
  FUN_13003920(local_100,s__d__d_130082f4);
  FUN_13003cb0(0,param_1 + 2,(int)local_100);
  local_120.dwLength = 0x20;
  GlobalMemoryStatus(&local_120);
  param_1[0x26] = 1;
  *(SIZE_T *)(param_1 + 0x27) = local_120.dwTotalPhys;
  local_120.dwLength = 0x20;
  GlobalMemoryStatus(&local_120);
  param_1[0x29] = 1;
  *(SIZE_T *)(param_1 + 0x2a) = local_120.dwAvailPhys;
  FUN_13003cb0(0,param_1 + 0x2c,0x130082e4);
  FUN_13003cb0(0,param_1 + 0xb,0x130082dc);
  GetSystemInfo(&local_144);
  if (local_144.dwProcessorType == 0x182) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
    if (local_144.dwProcessorType != 0x1e6) {
      uVar1 = -(uint)(local_144.dwProcessorType == 0x24a) & 4;
    }
  }
  if (4 < uVar1) {
    uVar1 = 0;
  }
  FUN_13003cb0(0,param_1 + 0x35,(int)(&PTR_s_Unknown_CPU_130081a0)[uVar1]);
  FUN_13003cb0(0,param_1 + 0x14,(int)(&PTR_s_Unknown_CPU_130081a0)[uVar1]);
  GetSystemInfo(&local_144);
  if ((local_144.dwProcessorType == 0x1e6) || (local_144.dwProcessorType == 0x24a)) {
    FUN_13003cb0(0,param_1 + 0x1d,0x130082d0);
  }
  FUN_13003cb0(0,param_1 + 0x3e,0x130082e4);
  hdc = GetDC((HWND)0x0);
  iVar2 = GetDeviceCaps(hdc,0xc);
  param_1[0x47] = 1;
  *(int *)(param_1 + 0x48) = iVar2;
  ReleaseDC((HWND)0x0,hdc);
  iVar2 = GetSystemMetrics(0);
  iVar3 = GetSystemMetrics(1);
  param_1[0x4c] = (short)iVar3;
  param_1[0x4a] = 10;
  param_1[0x4b] = (short)iVar2;
  iVar2 = GetKeyboardType(0);
  if ((iVar2 == 0) || (7 < iVar2)) {
    iVar2 = 0;
  }
  FUN_13003cb0(0,param_1 + 0x4d,(int)(&PTR_s_Unknown_Keyboard_130081b8)[iVar2]);
  return 0;
}



/* ==== FUN_130026e0 @ 130026e0 ==== 
 * signature: undefined4 __cdecl FUN_130026e0(int param_1, int param_2)
 * body: 130026e0-13002b8f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_130026e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int local_4;
  
  *(undefined2 *)(param_1 + 4) = 0x66;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0xe) = 0;
  *puVar1 = 0;
  if (0 < *(int *)(param_2 + 10)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,puVar1,*(undefined4 *)(param_2 + 10));
    if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
      *(undefined1 *)*puVar1 = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 4),param_2 + 4);
  puVar1 = (undefined4 *)(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0x66;
  *puVar1 = 0;
  if (0 < *(int *)(param_2 + 0x2e)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,puVar1,*(undefined4 *)(param_2 + 0x2e));
    if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
      *(undefined1 *)*puVar1 = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x28),param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x16) = 0x66;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (0 < *(int *)(param_2 + 0x1c)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x24,*(undefined4 *)(param_2 + 0x1c));
    if (*(undefined1 **)(param_1 + 0x24) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      **(undefined1 **)(param_1 + 0x24) = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x16),param_2 + 0x16);
  *(undefined2 *)(param_1 + 0x3a) = 0x66;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (0 < *(int *)(param_2 + 0x40)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x48,*(undefined4 *)(param_2 + 0x40));
    if (*(undefined1 **)(param_1 + 0x48) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      **(undefined1 **)(param_1 + 0x48) = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x3a),param_2 + 0x3a);
  puVar1 = (undefined4 *)(param_1 + 0x66);
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0x66;
  *puVar1 = 0;
  if (0 < *(int *)(param_2 + 0x5e)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,puVar1,*(undefined4 *)(param_2 + 0x5e));
    if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x5e);
      *(undefined1 *)*puVar1 = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x58),param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x6a) = 0x66;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (0 < *(int *)(param_2 + 0x70)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x78,*(undefined4 *)(param_2 + 0x70));
    if (*(undefined1 **)(param_1 + 0x78) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
      **(undefined1 **)(param_1 + 0x78) = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x6a),param_2 + 0x6a);
  *(undefined2 *)(param_1 + 0x7c) = 0x66;
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (0 < *(int *)(param_2 + 0x82)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x8a,*(undefined4 *)(param_2 + 0x82));
    if (*(undefined1 **)(param_1 + 0x8a) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x82) = *(undefined4 *)(param_2 + 0x82);
      **(undefined1 **)(param_1 + 0x8a) = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x7c),param_2 + 0x7c);
  puVar1 = (undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0x66;
  *puVar1 = 0;
  if (0 < *(int *)(param_2 + 0xa0)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,puVar1,*(undefined4 *)(param_2 + 0xa0));
    if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
      *(undefined1 *)*puVar1 = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x9a),param_2 + 0x9a);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(param_2 + 0x52);
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_2 + 0x56);
  *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)(param_2 + 0x8e);
  *(undefined2 *)(param_1 + 0x92) = *(undefined2 *)(param_2 + 0x92);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x98);
  return 0;
}



/* ==== FUN_13002b90 @ 13002b90 ==== 
 * signature: undefined4 __cdecl FUN_13002b90(int param_1, int param_2)
 * body: 13002b90-130032b5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13002b90(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int local_4;
  
  if (*(int *)(param_1 + 0x12) != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*(undefined4 *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 4) = 0x66;
  if (0 < *(int *)(param_2 + 10)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x12,*(undefined4 *)(param_2 + 10));
    if (*(undefined1 **)(param_1 + 0x12) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
      **(undefined1 **)(param_1 + 0x12) = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 4),param_2 + 4);
  if (*(int *)(param_1 + 0x36) != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*(undefined4 *)(param_1 + 0x36));
    *(undefined4 *)(param_1 + 0x36) = 0;
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined4 *)(param_1 + 0x32) = 0;
  }
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0x66;
  if (0 < *(int *)(param_2 + 0x2e)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x36,*(undefined4 *)(param_2 + 0x2e));
    if (*(undefined1 **)(param_1 + 0x36) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
      **(undefined1 **)(param_1 + 0x36) = 0;
    }
  }
  piVar1 = (int *)(param_1 + 0x24);
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x28),param_2 + 0x28);
  if (*piVar1 != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*piVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *piVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0x66;
  *piVar1 = 0;
  if (0 < *(int *)(param_2 + 0x1c)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,piVar1,*(undefined4 *)(param_2 + 0x1c));
    if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined1 *)*piVar1 = 0;
    }
  }
  piVar1 = (int *)(param_1 + 0x48);
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x16),param_2 + 0x16);
  if (*piVar1 != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*piVar1);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *piVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0x66;
  *piVar1 = 0;
  if (0 < *(int *)(param_2 + 0x40)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,piVar1,*(undefined4 *)(param_2 + 0x40));
    if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      *(undefined1 *)*piVar1 = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x3a),param_2 + 0x3a);
  if (*(int *)(param_1 + 0x66) != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*(undefined4 *)(param_1 + 0x66));
    *(undefined4 *)(param_1 + 0x66) = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    *(undefined4 *)(param_1 + 0x62) = 0;
  }
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0x66;
  if (0 < *(int *)(param_2 + 0x5e)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x66,*(undefined4 *)(param_2 + 0x5e));
    if (*(undefined1 **)(param_1 + 0x66) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x5e);
      **(undefined1 **)(param_1 + 0x66) = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x58),param_2 + 0x58);
  if (*(int *)(param_1 + 0x78) != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0x66;
  if (0 < *(int *)(param_2 + 0x70)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x78,*(undefined4 *)(param_2 + 0x70));
    if (*(undefined1 **)(param_1 + 0x78) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
      **(undefined1 **)(param_1 + 0x78) = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x6a),param_2 + 0x6a);
  if (*(int *)(param_1 + 0x8a) != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*(undefined4 *)(param_1 + 0x8a));
    *(undefined4 *)(param_1 + 0x8a) = 0;
    *(undefined4 *)(param_1 + 0x82) = 0;
    *(undefined4 *)(param_1 + 0x86) = 0;
  }
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0x66;
  if (0 < *(int *)(param_2 + 0x82)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1 + 0x8a,*(undefined4 *)(param_2 + 0x82));
    if (*(undefined1 **)(param_1 + 0x8a) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x82) = *(undefined4 *)(param_2 + 0x82);
      **(undefined1 **)(param_1 + 0x8a) = 0;
    }
  }
  piVar1 = (int *)(param_1 + 0xa8);
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x7c),param_2 + 0x7c);
  if (*piVar1 != 0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,*piVar1);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *piVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0x66;
  *piVar1 = 0;
  if (0 < *(int *)(param_2 + 0xa0)) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,piVar1,*(undefined4 *)(param_2 + 0xa0));
    if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
      *(undefined1 *)*piVar1 = 0;
    }
  }
  FUN_130039f0(0,(undefined2 *)(param_1 + 0x9a),param_2 + 0x9a);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(param_2 + 0x52);
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_2 + 0x56);
  *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)(param_2 + 0x8e);
  *(undefined2 *)(param_1 + 0x92) = *(undefined2 *)(param_2 + 0x92);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x98);
  return 0;
}



/* ==== FUN_130032c0 @ 130032c0 ==== 
 * signature: undefined4 __cdecl FUN_130032c0(int param_1)
 * body: 130032c0-13003508
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_130032c0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0x12) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  if (*(int *)(param_1 + 0x36) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x36));
    *(undefined4 *)(param_1 + 0x36) = 0;
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined4 *)(param_1 + 0x32) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x66) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x66));
    *(undefined4 *)(param_1 + 0x66) = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    *(undefined4 *)(param_1 + 0x62) = 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x8a) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x8a));
    *(undefined4 *)(param_1 + 0x8a) = 0;
    *(undefined4 *)(param_1 + 0x82) = 0;
    *(undefined4 *)(param_1 + 0x86) = 0;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4);
    _DAT_13008d34 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0xa8));
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  return 0;
}



/* ==== FUN_13003510 @ 13003510 ==== 
 * signature: undefined4 __cdecl FUN_13003510(int param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 13003510-130037c3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13003510(int param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int local_4;
  
  uVar3 = 0x10000;
  uVar1 = FUN_130038f0(param_2,(uint *)s_sysversion_130082bc);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 4,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_nativecpu_130082a8);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x28,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_architecture_13008294);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x16,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)&DAT_13008280);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x3a,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_totalram_1300826c);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_13003830(param_1,param_1 + 0x4c,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_currentram_13008258);
  if ((char)uVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0x100000;
    uVar3 = FUN_13003830(param_1,param_1 + 0x52,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_computername_13008244);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x58,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_processor_13008230);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x6a,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_soundcard_1300821c);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x7c,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_bitdepth_13008208);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_13003830(param_1,param_1 + 0x8e,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_screensize_130081f4);
  if ((char)uVar1 != '\0') {
    if (*param_4 == 0x6a) {
      *param_4 = 10;
      param_4[2] = 0;
      param_4[1] = 0;
    }
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x3c),1,0,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1,param_1 + 0x94,param_4);
    return _DAT_13008d34;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_keyboardtype_130081e0);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x9a,param_4);
  }
  return uVar3;
}



/* ==== FUN_130037d0 @ 130037d0 ==== 
 * signature: undefined __cdecl FUN_130037d0(undefined4 param_1, undefined4 param_2, short * param_3)
 * body: 130037d0-1300382b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_130037d0(undefined4 param_1,undefined4 param_2,short *param_3)

{
  code *pcVar1;
  int local_4;
  
  if (*param_3 == 0x6a) {
    FUN_13003cb0(0,param_3,0);
  }
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x3c),1,0,&local_4);
  _DAT_13008d34 = (*pcVar1)(local_4,param_1,param_2,param_3);
  return;
}



/* ==== FUN_13003830 @ 13003830 ==== 
 * signature: undefined __cdecl FUN_13003830(undefined4 param_1, undefined4 param_2, short * param_3)
 * body: 13003830-1300388a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_13003830(undefined4 param_1,undefined4 param_2,short *param_3)

{
  code *pcVar1;
  int local_4;
  
  if (*param_3 == 0x6a) {
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 1;
  }
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x3c),1,0,&local_4);
  _DAT_13008d34 = (*pcVar1)(local_4,param_1,param_2,param_3);
  return;
}



/* ==== FUN_13003890 @ 13003890 ==== 
 * signature: undefined __cdecl FUN_13003890(int param_1, int param_2)
 * body: 13003890-130038cb
 */

void __cdecl FUN_13003890(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = 0;
  do {
    if (bVar2) {
      *(undefined1 *)(param_1 + iVar1) = 0;
    }
    else {
      *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)(param_2 + iVar1);
      bVar2 = ((undefined1 *)(param_2 + iVar1))[1] == '\0';
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}



/* ==== FUN_130038d0 @ 130038d0 ==== 
 * signature: undefined __cdecl FUN_130038d0(undefined4 * param_1, undefined4 * param_2)
 * body: 130038d0-130038ee
 */

void __cdecl FUN_130038d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}



/* ==== FUN_130038f0 @ 130038f0 ==== 
 * signature: uint __cdecl FUN_130038f0(uint * param_1, uint * param_2)
 * body: 130038f0-1300391b
 */

uint __cdecl FUN_130038f0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((*param_2 == uVar1) && (uVar1 = param_1[1], param_2[1] == uVar1)) &&
      (uVar1 = param_1[2], param_2[2] == uVar1)) && (uVar1 = param_1[3], param_2[3] == uVar1)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}



/* ==== FUN_13003920 @ 13003920 ==== 
 * signature: undefined __cdecl FUN_13003920(undefined4 param_1, undefined4 param_2)
 * body: 13003920-13003966
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_13003920(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x1c,&local_4);
  _DAT_13008d34 = (*pcVar1)(local_4,param_1,param_2,&stack0x0000000c);
  return;
}



/* ==== FUN_13003970 @ 13003970 ==== 
 * signature: undefined4 __cdecl FUN_13003970(int param_1)
 * body: 13003970-1300397a
 */

undefined4 __cdecl FUN_13003970(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + -8) + 8);
}



/* ==== FUN_13003980 @ 13003980 ==== 
 * signature: undefined4 __cdecl FUN_13003980(int param_1, int param_2, int param_3, int * param_4)
 * body: 13003980-130039e2
 */

undefined4 __cdecl FUN_13003980(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + -8);
  if (DAT_13008300 == -1) {
    iVar2 = *(int *)(iVar1 + 0x14);
  }
  else {
    iVar2 = (int)DAT_13008300;
    DAT_13008300 = -1;
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + -4) + 4) + iVar2 * 4) + iVar1;
  }
  iVar1 = *(int *)((*(int **)(iVar2 + -4))[1] +
                  *(int *)(*(int *)(**(int **)(iVar2 + -4) + param_2 * 4) + 4 + param_3 * 8) * 4) +
          iVar1;
  *param_4 = iVar1;
  return *(undefined4 *)(*(int *)(**(int **)(iVar1 + -4) + param_2 * 4) + param_3 * 8);
}



/* ==== FUN_130039f0 @ 130039f0 ==== 
 * signature: undefined __cdecl FUN_130039f0(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 130039f0-13003bdd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_130039f0(undefined4 param_1,undefined2 *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_c;
  undefined4 local_8;
  int iStack_4;
  
  if (*(int *)(param_3 + 0xe) != 0) {
    if (0 < *(int *)(param_3 + 10)) {
      *param_2 = 0x66;
      iVar3 = *(int *)(param_3 + 10);
      if ((*(int *)(param_2 + 7) != 0) && (*(int *)(param_2 + 3) != 0)) {
        iVar2 = *(int *)(param_2 + 3) + -1;
        if (iVar3 <= iVar2) {
          iVar2 = iVar3;
        }
        pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,1,&local_c);
        _DAT_13008d34 =
             (*pcVar1)(local_c,*(undefined4 *)(param_2 + 7),*(undefined4 *)(param_3 + 0xe),iVar2);
        *(int *)(param_2 + 5) = iVar2;
        *(undefined1 *)(*(int *)(param_2 + 7) + iVar2) = 0;
        return;
      }
      local_8 = 0;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      *param_2 = 0x66;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)(param_2 + 5) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      if (0 < iVar3) {
        pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_c);
        _DAT_13008d34 = (*pcVar1)(local_c,param_2 + 7,iVar3);
        if (*(undefined1 **)(param_2 + 7) != (undefined1 *)0x0) {
          *(int *)(param_2 + 3) = iVar3;
          **(undefined1 **)(param_2 + 7) = 0;
        }
      }
      pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0,&local_c);
      _DAT_13008d34 = (*pcVar1)(local_c,*(undefined4 *)(param_2 + 7),*(undefined4 *)(param_3 + 0xe))
      ;
      pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xc,&iStack_4);
      _DAT_13008d34 = (*pcVar1)(iStack_4,&local_8,*(undefined4 *)(param_2 + 7));
      *(undefined4 *)(param_2 + 5) = local_8;
      return;
    }
    if ((*(int *)(param_3 + 0xe) != 0) && (*(int *)(param_2 + 7) == 0)) {
      pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_c);
      _DAT_13008d34 = (*pcVar1)(local_c,param_2 + 7,1);
      *(undefined4 *)(param_2 + 3) = 1;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_2 + 5) = 0;
  if (*(undefined1 **)(param_2 + 7) != (undefined1 *)0x0) {
    **(undefined1 **)(param_2 + 7) = 0;
  }
  return;
}



/* ==== FUN_13003be0 @ 13003be0 ==== 
 * signature: undefined __cdecl FUN_13003be0(int param_1)
 * body: 13003be0-13003c18
 */

void __cdecl FUN_13003be0(int param_1)

{
  if (*(int *)(param_1 + 2) != 0) {
    if (*(int *)(param_1 + 6) == 0) {
      if (*(int *)(param_1 + 10) == 0) goto LAB_13003c10;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
    }
    if (*(int *)(param_1 + 10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
    }
  }
LAB_13003c10:
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}



/* ==== FUN_13003c20 @ 13003c20 ==== 
 * signature: undefined __cdecl FUN_13003c20(int param_1, undefined4 * param_2, undefined2 param_3, short param_4)
 * body: 13003c20-13003c56
 */

void __cdecl FUN_13003c20(int param_1,undefined4 *param_2,undefined2 param_3,short param_4)

{
  if (*(short *)(param_1 + 0x22) <= param_4) {
    FUN_130038d0((undefined4 *)(param_1 + 0x11),param_2);
    *(undefined2 *)(param_1 + 0xa8) = param_3;
    *(short *)(param_1 + 0x22) = param_4 + 1;
  }
  return;
}



/* ==== FUN_13003c60 @ 13003c60 ==== 
 * signature: undefined __cdecl FUN_13003c60(int param_1, short param_2, short param_3, short param_4, undefined4 param_5)
 * body: 13003c60-13003c8f
 */

void __cdecl FUN_13003c60(int param_1,short param_2,short param_3,short param_4,undefined4 param_5)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x24 + param_3 * 4);
  *(undefined4 *)(*piVar1 + param_4 * 8) = param_5;
  *(int *)(*piVar1 + 4 + param_4 * 8) = (int)param_2;
  return;
}



/* ==== FUN_13003c90 @ 13003c90 ==== 
 * signature: undefined __cdecl FUN_13003c90(int param_1)
 * body: 13003c90-13003cac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_13003c90(int param_1)

{
  _DAT_13008d2c = *(undefined4 *)(param_1 + 0xb4);
  DAT_13008d30 = *(undefined4 *)(param_1 + 0xb8);
  return;
}



/* ==== FUN_13003cb0 @ 13003cb0 ==== 
 * signature: undefined __cdecl FUN_13003cb0(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 13003cb0-13003db7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_13003cb0(undefined4 param_1,undefined2 *param_2,int param_3)

{
  code *pcVar1;
  int local_8;
  int local_4;
  
  if (param_3 != 0) {
    *param_2 = 0x66;
    local_4 = 0;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xc,&local_8);
    _DAT_13008d34 = (*pcVar1)(local_8,&local_4,param_3);
    *(int *)(param_2 + 5) = local_4;
    if (local_4 == 0) {
      pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_8);
      _DAT_13008d34 = (*pcVar1)(local_8,param_2 + 7,1);
      **(undefined1 **)(param_2 + 7) = 0;
    }
    else {
      pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xf,&local_8);
      _DAT_13008d34 = (*pcVar1)(local_8,param_2 + 7,param_3);
    }
    *(int *)(param_2 + 3) = *(int *)(param_2 + 5) + 1;
    return;
  }
  *param_2 = 0x66;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *(undefined4 *)(param_2 + 5) = 0;
  return;
}



/* ==== FUN_13003dc0 @ 13003dc0 ==== 
 * signature: undefined4 __cdecl FUN_13003dc0(short * param_1, short * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
 * body: 13003dc0-13003e96
 */

undefined4 __cdecl
FUN_13003dc0(short *param_1,short *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  short sVar1;
  uint uVar2;
  
  if (((param_2 != (short *)0x0) && (*param_2 == 1)) &&
     ((sVar1 = *param_1, sVar1 == 0x17 || (sVar1 == 0x6a)))) {
    if (sVar1 == 0x6a) {
      *param_1 = 0x17;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    if ((*(uint *)(param_2 + 1) & 0xffffff) == 1) {
      uVar2 = *(uint *)(param_2 + 1) & 0xff000000;
      if (uVar2 == 0x20000000) {
        if (param_5 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_5;
          *(undefined4 *)(param_1 + 2) = param_5[1];
          param_1[4] = *(short *)(param_5 + 2);
          return 0;
        }
      }
      else if (uVar2 == 0x40000000) {
        if (param_4 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_4;
          *(undefined4 *)(param_1 + 2) = param_4[1];
          param_1[4] = *(short *)(param_4 + 2);
          return 0;
        }
      }
      else {
        if (uVar2 != 0x80000000) {
          return 0x10000;
        }
        if (param_3 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_3;
          *(undefined4 *)(param_1 + 2) = param_3[1];
          param_1[4] = *(short *)(param_3 + 2);
          return 0;
        }
      }
    }
  }
  return 0x10000;
}



/* ==== Quit @ 13003ea0 ==== 
 * signature: undefined __cdecl Quit(int param_1)
 * body: 13003ea0-130040f1
 */

void __cdecl Quit(int param_1)

{
                    /* 0x3ea0  2  Quit */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x14;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_13003890(param_1,0x1300831c);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_13003c20(param_1,(undefined4 *)s__MComponent_13008030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,7,FUN_13004150);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,8,FUN_13004180);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x22,FUN_130041c0);
      goto LAB_13003f6d;
    }
LAB_13003f8a:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x16,FUN_13004620);
      goto LAB_13003fa7;
    }
LAB_13003fc4:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x1b,FUN_13004290);
      goto LAB_13003fe1;
    }
LAB_13003ffe:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x11,FUN_13004300);
      goto LAB_1300401b;
    }
LAB_13004038:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x12,FUN_13004410);
      goto LAB_13004055;
    }
LAB_13004072:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0xe,FUN_13004580);
      goto LAB_1300408f;
    }
LAB_130040ac:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_130040e6;
    FUN_13003c60(param_1,1,0,0x25,FUN_13004660);
  }
  else {
LAB_13003f6d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,9,FUN_13004200);
      goto LAB_13003f8a;
    }
LAB_13003fa7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x1a,FUN_13004210);
      goto LAB_13003fc4;
    }
LAB_13003fe1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x1d,FUN_130042f0);
      goto LAB_13003ffe;
    }
LAB_1300401b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x13,FUN_13004380);
      goto LAB_13004038;
    }
LAB_13004055:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0xd,FUN_13004520);
      goto LAB_13004072;
    }
LAB_1300408f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x19,FUN_130045e0);
      goto LAB_130040ac;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,0x2e,FUN_13004100);
  }
LAB_130040e6:
  FUN_13003c90(param_1);
  return;
}



/* ==== FUN_13004100 @ 13004100 ==== 
 * signature: undefined4 __cdecl FUN_13004100(undefined4 param_1)
 * body: 13004100-13004147
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004100(undefined4 param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&local_4);
  _DAT_13008d34 = (*pcVar1)(local_4,param_1,s_events_1300804c,0x17,0xc);
  return 0;
}



/* ==== FUN_13004150 @ 13004150 ==== 
 * signature: undefined4 __cdecl FUN_13004150(undefined2 * param_1)
 * body: 13004150-13004177
 */

undefined4 __cdecl FUN_13004150(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0x70a;
  *(undefined4 *)(param_1 + 6) = 0x70b;
  param_1[5] = 0x17;
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}



/* ==== FUN_13004180 @ 13004180 ==== 
 * signature: undefined4 __cdecl FUN_13004180(undefined4 * param_1, undefined4 * param_2)
 * body: 13004180-130041b4
 */

undefined4 __cdecl FUN_13004180(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  return 0;
}



/* ==== FUN_130041c0 @ 130041c0 ==== 
 * signature: undefined4 __cdecl FUN_130041c0(undefined4 * param_1, undefined4 * param_2)
 * body: 130041c0-130041f4
 */

undefined4 __cdecl FUN_130041c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  return 0;
}



/* ==== FUN_13004200 @ 13004200 ==== 
 * signature: undefined4 __stdcall FUN_13004200(void)
 * body: 13004200-13004202
 */

undefined4 FUN_13004200(void)

{
  return 0;
}



/* ==== FUN_13004210 @ 13004210 ==== 
 * signature: undefined4 __cdecl FUN_13004210(int param_1, int param_2, short param_3)
 * body: 13004210-13004282
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004210(int param_1,int param_2,short param_3)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  if (param_3 == 0) {
    pcVar1 = (code *)FUN_13003980(param_2,1,0,&local_8);
    _DAT_13008d34 = (*pcVar1)(local_8,6,param_1);
    pcVar1 = (code *)FUN_13003980(param_2,1,0,&iStack_4);
    _DAT_13008d34 = (*pcVar1)(iStack_4,8,param_1 + 10);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_13004290 @ 13004290 ==== 
 * signature: undefined4 __cdecl FUN_13004290(int param_1, int param_2)
 * body: 13004290-130042ef
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004290(int param_1,int param_2)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(param_2,1,1,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,6,param_1);
  pcVar1 = (code *)FUN_13003980(param_2,1,1,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,8,param_1 + 10);
  return 0;
}



/* ==== FUN_130042f0 @ 130042f0 ==== 
 * signature: undefined4 __stdcall FUN_130042f0(void)
 * body: 130042f0-130042f2
 */

undefined4 FUN_130042f0(void)

{
  return 0;
}



/* ==== FUN_13004300 @ 13004300 ==== 
 * signature: undefined4 __cdecl FUN_13004300(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 13004300-1300437d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004300(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_c;
  int local_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_13003980(param_2,1,4,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,param_1,&local_c);
  *param_4 = *param_4 + local_c;
  pcVar1 = (code *)FUN_13003980(param_2,1,4,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 10,&local_c);
  *param_4 = *param_4 + local_c;
  return 0;
}



/* ==== FUN_13004380 @ 13004380 ==== 
 * signature: undefined4 __cdecl FUN_13004380(int param_1, int param_2)
 * body: 13004380-1300440a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004380(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_e;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  local_e = 1;
  pcVar1 = (code *)FUN_13003980(param_2,1,7,&local_c);
  _DAT_13008d34 = (*pcVar1)(local_c,&local_e,1);
  pcVar1 = (code *)FUN_13003980(param_2,1,5,&iStack_8);
  _DAT_13008d34 = (*pcVar1)(iStack_8,param_1);
  pcVar1 = (code *)FUN_13003980(param_2,1,5,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 10);
  return 0;
}



/* ==== FUN_13004410 @ 13004410 ==== 
 * signature: undefined4 __cdecl FUN_13004410(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 13004410-13004518
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004410(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_a;
  int local_8;
  int iStack_4;
  
  if (param_4 < 1) {
    if (param_4 == 0) {
      pcVar1 = (code *)FUN_13003980(param_2,1,6,&local_8);
      _DAT_13008d34 = (*pcVar1)(local_8,param_1);
      pcVar1 = (code *)FUN_13003980(param_2,1,6,&iStack_4);
      _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 10);
      return 0;
    }
    return 0x10000;
  }
  pcVar1 = (code *)FUN_13003980(param_2,1,8,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,&local_a,1);
  if (local_a == 1) {
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&local_8);
    _DAT_13008d34 = (*pcVar1)(local_8,param_1);
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&iStack_4);
    _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 10);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_13004520 @ 13004520 ==== 
 * signature: undefined4 __cdecl FUN_13004520(int param_1)
 * body: 13004520-13004579
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004520(int param_1)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(param_1,0,0x21,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,1,param_1);
  pcVar1 = (code *)FUN_13003980(param_1,0,0x21,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,1,param_1 + 10);
  return 0;
}



/* ==== FUN_13004580 @ 13004580 ==== 
 * signature: undefined4 __cdecl FUN_13004580(int param_1)
 * body: 13004580-130045d9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004580(int param_1)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(param_1,0,0x21,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,2,param_1);
  pcVar1 = (code *)FUN_13003980(param_1,0,0x21,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,2,param_1 + 10);
  return 0;
}



/* ==== FUN_130045e0 @ 130045e0 ==== 
 * signature: undefined4 __cdecl FUN_130045e0(int param_1, int param_2)
 * body: 130045e0-13004614
 */

undefined4 __cdecl FUN_130045e0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 2) == *(int *)(param_2 + 0xc)) &&
     (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) &&
     (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10))) {
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_13004620 @ 13004620 ==== 
 * signature: undefined4 __cdecl FUN_13004620(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 13004620-13004659
 */

undefined4 __cdecl FUN_13004620(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_130038f0(param_2,(uint *)s_events_1300804c);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_13003dc0(param_4,param_3,param_1,(undefined4 *)((int)param_1 + 10),(undefined4 *)0x0
                        );
    return uVar2;
  }
  return 0x10000;
}



/* ==== FUN_13004660 @ 13004660 ==== 
 * signature: undefined4 __cdecl FUN_13004660(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 13004660-130046e6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004660(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 4),1,4,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 4),1,4,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 10);
  return 0;
}



/* ==== FUN_130046f0 @ 130046f0 ==== 
 * signature: undefined4 __stdcall FUN_130046f0(undefined4 param_1, int param_2)
 * body: 130046f0-1300483c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_130046f0(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_2 == 1) {
    DAT_13008340 = GetVersion();
    if (DAT_13008338 == 0) {
      if (((char)DAT_13008340 == '\x03') && ((DAT_13008340 & 0x80000000) != 0)) {
        FUN_13005700(2);
      }
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,"IsTNT");
        if (pFVar1 != (FARPROC)0x0) {
          FUN_13005700(1);
        }
      }
    }
    FUN_13004c80();
    _DAT_1300834c = DAT_13008340 >> 8 & 0xff;
    _DAT_13008348 = DAT_13008340 & 0xff;
    DAT_13008324 = DAT_13008324 + 1;
    DAT_13008340 = DAT_13008340 >> 0x10;
    _DAT_13008344 = _DAT_13008348 * 0x100 + _DAT_1300834c;
    iVar2 = __mtinit();
    if (iVar2 == 0) {
      FUN_13004ca0();
      return 0;
    }
    DAT_13009e64 = GetCommandLineA();
    DAT_13008328 = FUN_13005560();
    if ((DAT_13009e64 != (LPSTR)0x0) && (DAT_13008328 != (LPSTR)0x0)) {
      FUN_13004cb0();
      ___initmbctable();
      __setargv();
      FUN_13004ef0();
      __cinit(unaff_retaddr);
      return 1;
    }
    FUN_13004ca0();
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 3) {
      __freeptd((_ptiddata)0x0);
    }
    return 1;
  }
  if (0 < DAT_13008324) {
    DAT_13008324 = DAT_13008324 + -1;
    if (DAT_13008378 == 0) {
      FUN_130049a0();
    }
    __ioterm();
    __mtterm();
    FUN_13004ca0();
    return 1;
  }
  return 0;
}



/* ==== entry @ 13004840 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 13004840-13004909
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_2 == 1) {
    DAT_13008324 = DAT_13008324 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_13008324 < 1) {
      return 0;
    }
    DAT_13008324 = DAT_13008324 + -1;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_13009e68 != (code *)0x0) {
      iVar2 = (*DAT_13009e68)(param_1,param_2,param_3);
    }
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_130046f0(param_1,param_2);
      goto LAB_130048b5;
    }
LAB_130048c3:
    if (iVar1 != 0) goto LAB_130048d6;
  }
  else {
LAB_130048b5:
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_13005710();
      goto LAB_130048c3;
    }
  }
  if (param_2 == 1) {
    __mtterm();
    FUN_13004ca0();
  }
LAB_130048d6:
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_130046f0(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_13009e68 != (code *)0x0)) {
      iVar1 = (*DAT_13009e68)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}



/* ==== __amsg_exit @ 13004910 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 13004910-13004943
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 13004944-13004947
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_13008334 == 1) || ((DAT_13008334 == 0 && (DAT_13008338 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_13005760(param_1);
  (*(code *)PTR___exit_13008330)(0xff);
  return;
}



/* ==== __cinit @ 13004950 ==== 
 * signature: int __cdecl __cinit(int param_1)
 * body: 13004950-1300497f
 * note: Library Function - Single Match  __cinit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 1998 Release */

int __cdecl __cinit(int param_1)

{
  int iVar1;
  
  if (DAT_13009e60 != (code *)0x0) {
    (*DAT_13009e60)();
  }
  __initterm((undefined4 *)&DAT_13008008,(undefined4 *)&DAT_13008010);
  iVar1 = __initterm((undefined4 *)&DAT_13008000,(undefined4 *)&DAT_13008004);
  return iVar1;
}



/* ==== __exit @ 13004980 ==== 
 * signature: noreturn void __cdecl __exit(int _Code)
 * body: 13004980-13004991
 * note: Library Function - Single Match  __exit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __exit(int _Code)

{
  FUN_130049b0(_Code,1,0);
  return;
}



/* ==== FUN_130049a0 @ 130049a0 ==== 
 * signature: undefined __stdcall FUN_130049a0(void)
 * body: 130049a0-130049ae
 */

void FUN_130049a0(void)

{
  FUN_130049b0(0,0,1);
  return;
}



/* ==== FUN_130049b0 @ 130049b0 ==== 
 * signature: undefined __cdecl FUN_130049b0(UINT param_1, int param_2, int param_3)
 * body: 130049b0-13004a5c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 13004a5d-13004a60
 */

void __cdecl FUN_130049b0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_13004a70();
  if (DAT_1300837c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_13008378 = 1;
  DAT_13008374 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_13009e5c != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_13009e58 + -4), DAT_13009e5c <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_13009e5c <= puVar1);
    }
    __initterm((undefined4 *)&DAT_13008014,(undefined4 *)&DAT_1300801c);
  }
  __initterm((undefined4 *)&DAT_13008020,(undefined4 *)&DAT_13008024);
  if (param_3 != 0) {
    FUN_13004a80();
    return;
  }
  DAT_1300837c = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ==== FUN_13004a70 @ 13004a70 ==== 
 * signature: undefined __stdcall FUN_13004a70(void)
 * body: 13004a70-13004a7a
 */

void FUN_13004a70(void)

{
  __lock(0xd);
  return;
}



/* ==== FUN_13004a80 @ 13004a80 ==== 
 * signature: undefined __stdcall FUN_13004a80(void)
 * body: 13004a80-13004a8a
 */

void FUN_13004a80(void)

{
  FUN_13005a60(0xd);
  return;
}



/* ==== __initterm @ 13004a90 ==== 
 * signature: undefined __cdecl __initterm(undefined4 * param_1, undefined4 * param_2)
 * body: 13004a90-13004aaf
 * note: Library Function - Single Match  __initterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __initterm(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ==== __mtinit @ 13004ab0 ==== 
 * signature: int __cdecl __mtinit(void)
 * body: 13004ab0-13004b0f
 * note: Library Function - Single Match  __mtinit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinit(void)

{
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_ESI;
  
  __mtinitlocks();
  DAT_13008380 = TlsAlloc();
  if (DAT_13008380 == 0xffffffff) {
    return 0;
  }
  _Ptd = FUN_13005b60(1,0x74);
  if (_Ptd != (_ptiddata)0x0) {
    BVar1 = TlsSetValue(DAT_13008380,_Ptd);
    if (BVar1 != 0) {
      __initptd(_Ptd,unaff_ESI);
      DVar2 = GetCurrentThreadId();
      _Ptd->_tid = DVar2;
      _Ptd->_thandle = 0xffffffff;
      return 1;
    }
  }
  return 0;
}



/* ==== __mtterm @ 13004b10 ==== 
 * signature: void __cdecl __mtterm(void)
 * body: 13004b10-13004b30
 * note: Library Function - Single Match  __mtterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtterm(void)

{
  __mtdeletelocks();
  if (DAT_13008380 != 0xffffffff) {
    TlsFree(DAT_13008380);
    DAT_13008380 = 0xffffffff;
  }
  return;
}



/* ==== __initptd @ 13004b40 ==== 
 * signature: void __cdecl __initptd(_ptiddata _Ptd, pthreadlocinfo _Locale)
 * body: 13004b40-13004b52
 * note: Library Function - Single Match  __initptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 1998 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  *(undefined **)(_Ptd->_con_ch_buf + 4) = &DAT_13008720;
  _Ptd->_holdrand = 1;
  return;
}



/* ==== __getptd @ 13004b60 ==== 
 * signature: _ptiddata __cdecl __getptd(void)
 * body: 13004b60-13004bce
 * note: Library Function - Single Match  __getptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 1998 Release */

_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_EDI;
  
  dwErrCode = GetLastError();
  _Ptd = TlsGetValue(DAT_13008380);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = FUN_13005b60(1,0x74);
    if (_Ptd != (_ptiddata)0x0) {
      BVar1 = TlsSetValue(DAT_13008380,_Ptd);
      if (BVar1 != 0) {
        __initptd(_Ptd,unaff_EDI);
        DVar2 = GetCurrentThreadId();
        _Ptd->_tid = DVar2;
        _Ptd->_thandle = 0xffffffff;
        goto LAB_13004bc3;
      }
    }
    __amsg_exit(0x10);
  }
LAB_13004bc3:
  SetLastError(dwErrCode);
  return _Ptd;
}



/* ==== __freeptd @ 13004bd0 ==== 
 * signature: void __cdecl __freeptd(_ptiddata _Ptd)
 * body: 13004bd0-13004c70
 * note: Library Function - Single Match  __freeptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 1998 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  if (DAT_13008380 != 0xffffffff) {
    if ((_Ptd != (_ptiddata)0x0) || (_Ptd = TlsGetValue(DAT_13008380), _Ptd != (_ptiddata)0x0)) {
      if (_Ptd->_errmsg != (char *)0x0) {
        FUN_13005bc0(_Ptd->_errmsg);
      }
      if (_Ptd->_werrmsg != (wchar_t *)0x0) {
        FUN_13005bc0(_Ptd->_werrmsg);
      }
      if (_Ptd->_wnamebuf0 != (wchar_t *)0x0) {
        FUN_13005bc0(_Ptd->_wnamebuf0);
      }
      if (_Ptd->_wnamebuf1 != (wchar_t *)0x0) {
        FUN_13005bc0(_Ptd->_wnamebuf1);
      }
      if (_Ptd->_wasctimebuf != (wchar_t *)0x0) {
        FUN_13005bc0(_Ptd->_wasctimebuf);
      }
      if (_Ptd->_gmtimebuf != (LPVOID)0x0) {
        FUN_13005bc0(_Ptd->_gmtimebuf);
      }
      FUN_13005bc0(_Ptd);
    }
    TlsSetValue(DAT_13008380,(LPVOID)0x0);
    return;
  }
  return;
}



/* ==== FUN_13004c80 @ 13004c80 ==== 
 * signature: undefined __stdcall FUN_13004c80(void)
 * body: 13004c80-13004c94
 */

void FUN_13004c80(void)

{
  DAT_13009e54 = HeapCreate(0,0x1000,0);
  return;
}



/* ==== FUN_13004ca0 @ 13004ca0 ==== 
 * signature: undefined __stdcall FUN_13004ca0(void)
 * body: 13004ca0-13004cac
 */

void FUN_13004ca0(void)

{
  HeapDestroy(DAT_13009e54);
  return;
}



/* ==== FUN_13004cb0 @ 13004cb0 ==== 
 * signature: undefined __stdcall FUN_13004cb0(void)
 * body: 13004cb0-13004e89
 */

void FUN_13004cb0(void)

{
  undefined4 *puVar1;
  DWORD DVar2;
  HANDLE hFile;
  byte *pbVar3;
  UINT UVar4;
  UINT UVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  UINT *pUVar10;
  int iVar11;
  _STARTUPINFOA local_44;
  
  puVar1 = (undefined4 *)FUN_13005be0(0x480);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_13009e50 = 0x20;
  DAT_13009d50 = puVar1;
  if (puVar1 < puVar1 + 0x120) {
    do {
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar6 = puVar1 + 9;
      *puVar1 = 0xffffffff;
      *(undefined1 *)((int)puVar1 + 5) = 10;
      puVar1[2] = 0;
      puVar1 = puVar6;
    } while (puVar6 < DAT_13009d50 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UVar4 = *(UINT *)local_44.lpReserved2;
    pUVar10 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar3 = (byte *)((int)pUVar10 + UVar4);
    if (0x7ff < (int)UVar4) {
      UVar4 = 0x800;
    }
    UVar5 = UVar4;
    if ((int)DAT_13009e50 < (int)UVar4) {
      piVar7 = &DAT_13009d54;
      do {
        puVar1 = (undefined4 *)FUN_13005be0(0x480);
        UVar5 = DAT_13009e50;
        if (puVar1 == (undefined4 *)0x0) break;
        *piVar7 = (int)puVar1;
        DAT_13009e50 = DAT_13009e50 + 0x20;
        if (puVar1 < puVar1 + 0x120) {
          do {
            *(undefined1 *)(puVar1 + 1) = 0;
            puVar6 = puVar1 + 9;
            *puVar1 = 0xffffffff;
            *(undefined1 *)((int)puVar1 + 5) = 10;
            puVar1[2] = 0;
            puVar1 = puVar6;
          } while (puVar6 < (undefined4 *)(*piVar7 + 0x480));
        }
        piVar7 = piVar7 + 1;
        UVar5 = UVar4;
      } while ((int)DAT_13009e50 < (int)UVar4);
    }
    uVar8 = 0;
    if (0 < (int)UVar5) {
      do {
        if (((*(HANDLE *)pbVar3 != (HANDLE)0xffffffff) && ((*pUVar10 & 1) != 0)) &&
           (DVar2 = GetFileType(*(HANDLE *)pbVar3), DVar2 != 0)) {
          puVar1 = (undefined4 *)
                   ((uVar8 & 0x1f) * 0x24 +
                   *(int *)((int)&DAT_13009d50 + ((int)(uVar8 & 0xffffffe7) >> 3)));
          *puVar1 = *(undefined4 *)pbVar3;
          *(byte *)(puVar1 + 1) = (byte)*pUVar10;
        }
        uVar8 = uVar8 + 1;
        pUVar10 = (UINT *)((int)pUVar10 + 1);
        pbVar3 = pbVar3 + 4;
      } while ((int)uVar8 < (int)UVar5);
    }
  }
  iVar9 = 0;
  iVar11 = 0;
  do {
    piVar7 = (int *)((int)DAT_13009d50 + iVar9);
    if (*piVar7 == -1) {
      DVar2 = 0xfffffff6;
      *(undefined1 *)(piVar7 + 1) = 0x81;
      if (iVar9 != 0) {
        DVar2 = (iVar11 == 1) - 0xc;
      }
      hFile = GetStdHandle(DVar2);
      if ((hFile == (HANDLE)0xffffffff) || (DVar2 = GetFileType(hFile), DVar2 == 0)) {
        *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x40;
      }
      else {
        *piVar7 = (int)hFile;
        if ((DVar2 & 0xff) == 2) {
          *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x40;
        }
        else if ((DVar2 & 0xff) == 3) {
          *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 8;
        }
      }
    }
    else {
      *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x80;
    }
    iVar9 = iVar9 + 0x24;
    iVar11 = iVar11 + 1;
  } while (iVar9 < 0x6c);
  SetHandleCount(DAT_13009e50);
  return;
}



/* ==== __ioterm @ 13004e90 ==== 
 * signature: void __cdecl __ioterm(void)
 * body: 13004e90-13004ee4
 * note: Library Function - Single Match  __ioterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = &DAT_13009d50;
  do {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if (uVar1 < uVar1 + 0x480) {
        do {
          if (*(int *)(uVar1 + 8) != 0) {
            DeleteCriticalSection((LPCRITICAL_SECTION)(uVar1 + 0xc));
          }
          uVar1 = uVar1 + 0x24;
        } while (uVar1 < *puVar2 + 0x480);
      }
      FUN_13005bc0((LPVOID)*puVar2);
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_13009e50);
  return;
}



/* ==== FUN_13004ef0 @ 13004ef0 ==== 
 * signature: undefined __stdcall FUN_13004ef0(void)
 * body: 13004ef0-13004fcb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_13004ef0(void)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar6 = 0;
  cVar1 = *DAT_13008328;
  pcVar7 = DAT_13008328;
  while (cVar1 != '\0') {
    if (*pcVar7 != '=') {
      iVar6 = iVar6 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + ~uVar3;
    cVar1 = *pcVar7;
  }
  piVar2 = (int *)FUN_13005be0(iVar6 * 4 + 4);
  _DAT_1300835c = piVar2;
  if (piVar2 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_13008328;
  pcVar7 = DAT_13008328;
  do {
    if (cVar1 == '\0') {
      FUN_13005bc0(DAT_13008328);
      *piVar2 = 0;
      return;
    }
    uVar3 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (*pcVar7 != '=') {
      iVar6 = FUN_13005be0(~uVar3);
      *piVar2 = iVar6;
      if (iVar6 == 0) {
        __amsg_exit(9);
      }
      uVar4 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        pcVar8 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = (char *)*piVar2;
      piVar2 = piVar2 + 1;
      pcVar8 = pcVar8 + -uVar4;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    pcVar7 = pcVar7 + ~uVar3;
    cVar1 = *pcVar7;
  } while( true );
}



/* ==== __setargv @ 13004fd0 ==== 
 * signature: int __cdecl __setargv(void)
 * body: 13004fd0-1300506a
 * note: Library Function - Single Match  __setargv  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 1998 Release */

int __cdecl __setargv(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_13008bc0,0x104);
  _DAT_1300836c = &DAT_13008bc0;
  pbVar2 = &DAT_13008bc0;
  if (*DAT_13009e64 != 0) {
    pbVar2 = DAT_13009e64;
  }
  FUN_13005070(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_13005be0(local_8 * 4 + local_4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_13005070(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_13008354 = puVar1;
  _DAT_13008350 = local_8 + -1;
  return local_8 + -1;
}



/* ==== FUN_13005070 @ 13005070 ==== 
 * signature: undefined __cdecl FUN_13005070(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
 * body: 13005070-1300523f
 */

void __cdecl FUN_13005070(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    pbVar4 = param_1 + 1;
    bVar1 = *pbVar4;
    while ((bVar1 != 0x22 && (*pbVar4 != 0))) {
      if (((*(byte *)((int)&DAT_130083b0 + *pbVar4 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        *param_3 = bVar1;
        param_3 = param_3 + 1;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = pbVar4 + 1;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_130083b0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_130050e0;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_130050e0:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar3 = false;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar2 = true;
      uVar5 = 0;
      bVar1 = *pbVar4;
      while (bVar1 == 0x5c) {
        pbVar4 = pbVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar1 = *pbVar4;
      }
      if (*pbVar4 == 0x22) {
        pbVar6 = pbVar4;
        if ((uVar5 & 1) == 0) {
          if ((!bVar3) || (pbVar6 = pbVar4 + 1, *pbVar6 != 0x22)) {
            bVar2 = false;
            pbVar6 = pbVar4;
          }
          bVar3 = !bVar3;
        }
        uVar5 = uVar5 >> 1;
        pbVar4 = pbVar6;
      }
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar3 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar2) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_130083b0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_5 = *param_5 + 1;
          goto LAB_1300520f;
        }
        pbVar6 = param_3;
        if ((*(byte *)((int)&DAT_130083b0 + bVar1 + 1) & 4) != 0) {
          *param_3 = bVar1;
          pbVar4 = pbVar4 + 1;
          pbVar6 = param_3 + 1;
          *param_5 = *param_5 + 1;
        }
        bVar1 = *pbVar4;
        param_3 = pbVar6 + 1;
        pbVar4 = pbVar4 + 1;
        *pbVar6 = bVar1;
        *param_5 = *param_5 + 1;
      }
      else {
LAB_1300520f:
        pbVar4 = pbVar4 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* ==== __setmbcp @ 13005240 ==== 
 * signature: int __cdecl __setmbcp(int _CodePage)
 * body: 13005240-13005462
 * note: Library Function - Single Match  __setmbcp  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 1998 Release */

int __cdecl __setmbcp(int _CodePage)

{
  byte *pbVar1;
  byte bVar2;
  UINT CodePage;
  UINT *pUVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  BYTE *pBVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int local_18;
  _cpinfo local_14;
  
  __lock(0x19);
  CodePage = getSystemCP(_CodePage);
  if (DAT_130084b4 == CodePage) {
    FUN_13005a60(0x19);
    return 0;
  }
  if (CodePage == 0) {
    setSBCS();
    FUN_13005a60(0x19);
    return 0;
  }
  local_18 = 0;
  pUVar3 = &DAT_130084d8;
  do {
    if (*pUVar3 == CodePage) {
      uVar5 = 0;
      puVar10 = &DAT_130083b0;
      for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined1 *)puVar10 = 0;
      do {
        pbVar9 = &DAT_130084e8 + (local_18 * 6 + uVar5) * 8;
        bVar2 = *pbVar9;
        while ((bVar2 != 0 && (pbVar9[1] != 0))) {
          uVar7 = (uint)*pbVar9;
          if (uVar7 <= pbVar9[1]) {
            bVar2 = (&DAT_130084d0)[uVar5];
            do {
              pbVar1 = (byte *)((int)&DAT_130083b0 + uVar7 + 1);
              *pbVar1 = *pbVar1 | bVar2;
              uVar7 = uVar7 + 1;
            } while (uVar7 <= pbVar9[1]);
          }
          pbVar9 = pbVar9 + 2;
          bVar2 = *pbVar9;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
      DAT_130084b4 = CodePage;
      _DAT_130084b8 = _CPtoLCID(CodePage);
      DAT_130084c4 = *(undefined4 *)(&DAT_130084e0 + local_18 * 0x30);
      DAT_130084c0 = *(undefined4 *)(&DAT_130084dc + local_18 * 0x30);
      DAT_130084c8 = *(undefined4 *)(local_18 * 0x30 + 0x130084e4);
      FUN_13005a60(0x19);
      return 0;
    }
    pUVar3 = pUVar3 + 0xc;
    local_18 = local_18 + 1;
  } while (pUVar3 < &DAT_130085c8);
  BVar4 = GetCPInfo(CodePage,&local_14);
  if (BVar4 == 1) {
    puVar10 = &DAT_130083b0;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined1 *)puVar10 = 0;
    if (local_14.MaxCharSize < 2) {
      _DAT_130084b8 = 0;
      DAT_130084b4 = 0;
    }
    else {
      pBVar8 = local_14.LeadByte;
      while ((local_14.LeadByte[0] != 0 && (pBVar8[1] != 0))) {
        uVar5 = (uint)*pBVar8;
        if (uVar5 <= pBVar8[1]) {
          do {
            pbVar9 = (byte *)((int)&DAT_130083b0 + uVar5 + 1);
            *pbVar9 = *pbVar9 | 4;
            uVar5 = uVar5 + 1;
          } while (uVar5 <= pBVar8[1]);
        }
        pBVar8 = pBVar8 + 2;
        local_14.LeadByte[0] = *pBVar8;
      }
      uVar5 = 1;
      do {
        pbVar9 = (byte *)((int)&DAT_130083b0 + uVar5 + 1);
        *pbVar9 = *pbVar9 | 8;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0xff);
      DAT_130084b4 = CodePage;
      _DAT_130084b8 = _CPtoLCID(CodePage);
    }
    DAT_130084c0 = 0;
    DAT_130084c4 = 0;
    DAT_130084c8 = 0;
    FUN_13005a60(0x19);
    return 0;
  }
  if (DAT_130084cc == 0) {
    FUN_13005a60(0x19);
    return -1;
  }
  setSBCS();
  FUN_13005a60(0x19);
  return 0;
}



/* ==== getSystemCP @ 13005470 ==== 
 * signature: int __cdecl getSystemCP(int param_1)
 * body: 13005470-130054bc
 * note: Library Function - Single Match  _getSystemCP  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 1998 Release */

int __cdecl getSystemCP(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_130084cc = 1;
                    /* WARNING: Could not recover jumptable at 0x1300548d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_130084cc = 1;
                    /* WARNING: Could not recover jumptable at 0x130054a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_130087c0;
  }
  DAT_130084cc = (uint)bVar2;
  return param_1;
}



/* ==== _CPtoLCID @ 130054c0 ==== 
 * signature: undefined4 __cdecl _CPtoLCID(undefined4 param_1)
 * body: 130054c0-130054f7
 * note: Library Function - Single Match  _CPtoLCID  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _CPtoLCID
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl _CPtoLCID(undefined4 param_1)

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



/* ==== setSBCS @ 13005520 ==== 
 * signature: undefined __cdecl setSBCS(void)
 * body: 13005520-1300554b
 * note: Library Function - Single Match  _setSBCS  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 1998 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_130083b0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_130084c0 = 0;
  DAT_130084b4 = 0;
  _DAT_130084b8 = 0;
  DAT_130084c4 = 0;
  DAT_130084c8 = 0;
  return;
}



/* ==== ___initmbctable @ 13005550 ==== 
 * signature: undefined __stdcall ___initmbctable(void)
 * body: 13005550-1300555a
 * note: Library Function - Single Match  ___initmbctable  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 1998 Release */

void ___initmbctable(void)

{
  __setmbcp(-3);
  return;
}



/* ==== FUN_13005560 @ 13005560 ==== 
 * signature: LPSTR __stdcall FUN_13005560(void)
 * body: 13005560-130056f4
 */

LPSTR FUN_13005560(void)

{
  char cVar1;
  WCHAR WVar2;
  LPWCH pWVar3;
  SIZE_T cbMultiByte;
  LPSTR pCVar4;
  uint uVar5;
  LPWCH pWVar6;
  char *pcVar7;
  WCHAR *pWVar8;
  int iVar10;
  LPSTR pCVar11;
  LPWCH local_4;
  WCHAR *pWVar9;
  
  pWVar3 = local_4;
  if (DAT_130085cc == 0) {
    pWVar3 = GetEnvironmentStringsW();
    if (pWVar3 == (LPWCH)0x0) {
      local_4 = (LPWCH)GetEnvironmentStrings();
      if (local_4 == (LPWCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_130085cc = 2;
    }
    else {
      DAT_130085cc = 1;
    }
  }
  if (DAT_130085cc != 1) {
    if (DAT_130085cc != 2) {
      return (LPSTR)0x0;
    }
    if ((local_4 == (LPWCH)0x0) && (local_4 = (LPWCH)GetEnvironmentStrings(), local_4 == (LPWCH)0x0)
       ) {
      return (LPSTR)0x0;
    }
    cVar1 = (char)*local_4;
    pWVar3 = local_4;
    while (cVar1 != '\0') {
      do {
        pWVar6 = pWVar3;
        pWVar3 = (LPWCH)((int)pWVar6 + 1);
      } while (*(char *)pWVar3 != '\0');
      pWVar3 = pWVar6 + 1;
      cVar1 = (char)*pWVar3;
    }
    pcVar7 = (char *)((int)pWVar3 + (1 - (int)local_4));
    pCVar4 = (LPSTR)FUN_13005be0((SIZE_T)pcVar7);
    if (pCVar4 == (LPSTR)0x0) {
      FreeEnvironmentStringsA((LPCH)local_4);
      return (LPSTR)0x0;
    }
    pWVar3 = local_4;
    pCVar11 = pCVar4;
    for (uVar5 = (uint)pcVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pCVar11 = *(undefined4 *)pWVar3;
      pWVar3 = pWVar3 + 2;
      pCVar11 = pCVar11 + 4;
    }
    for (uVar5 = (uint)pcVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pCVar11 = (CHAR)*pWVar3;
      pWVar3 = (LPWCH)((int)pWVar3 + 1);
      pCVar11 = pCVar11 + 1;
    }
    FreeEnvironmentStringsA((LPCH)local_4);
    return pCVar4;
  }
  if ((pWVar3 == (LPWCH)0x0) && (pWVar3 = GetEnvironmentStringsW(), pWVar3 == (LPWCH)0x0)) {
    return (LPSTR)0x0;
  }
  WVar2 = *pWVar3;
  pWVar8 = pWVar3;
  while (WVar2 != L'\0') {
    do {
      pWVar9 = pWVar8;
      pWVar8 = pWVar9 + 1;
    } while (*pWVar8 != L'\0');
    pWVar8 = pWVar9 + 2;
    WVar2 = *pWVar8;
  }
  iVar10 = ((int)pWVar8 - (int)pWVar3 >> 1) + 1;
  cbMultiByte = WideCharToMultiByte(0,0,pWVar3,iVar10,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  if ((cbMultiByte != 0) && (pCVar4 = (LPSTR)FUN_13005be0(cbMultiByte), pCVar4 != (LPSTR)0x0)) {
    iVar10 = WideCharToMultiByte(0,0,pWVar3,iVar10,pCVar4,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar10 == 0) {
      FUN_13005bc0(pCVar4);
      pCVar4 = (LPSTR)0x0;
    }
    FreeEnvironmentStringsW(pWVar3);
    return pCVar4;
  }
  FreeEnvironmentStringsW(pWVar3);
  return (LPSTR)0x0;
}



/* ==== FUN_13005700 @ 13005700 ==== 
 * signature: undefined __cdecl FUN_13005700(undefined4 param_1)
 * body: 13005700-13005709
 */

void __cdecl FUN_13005700(undefined4 param_1)

{
  DAT_13008338 = param_1;
  return;
}



/* ==== FUN_13005710 @ 13005710 ==== 
 * signature: undefined4 __stdcall FUN_13005710(void)
 * body: 13005710-13005717
 */

undefined4 FUN_13005710(void)

{
  return 1;
}



/* ==== __FF_MSGBANNER @ 13005720 ==== 
 * signature: void __cdecl __FF_MSGBANNER(void)
 * body: 13005720-1300575c
 * note: Library Function - Single Match  __FF_MSGBANNER  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 1998 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_13008334 == 1) || ((DAT_13008334 == 0 && (DAT_13008338 == 1)))) {
    FUN_13005760(0xfc);
    if (DAT_13008658 != (code *)0x0) {
      (*DAT_13008658)();
    }
    FUN_13005760(0xff);
  }
  return;
}



/* ==== FUN_13005760 @ 13005760 ==== 
 * signature: undefined __cdecl FUN_13005760(int param_1)
 * body: 13005760-1300594c
 */

void __cdecl FUN_13005760(int param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR *pCVar10;
  char *pcVar11;
  DWORD local_1a8;
  char local_1a4 [100];
  char acStack_140 [60];
  CHAR local_104 [260];
  
  iVar4 = 0;
  piVar2 = &DAT_130085d0;
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 2;
    iVar4 = iVar4 + 1;
  } while (piVar2 < &DAT_13008658);
  if ((&DAT_130085d0)[iVar4 * 2] == param_1) {
    if ((DAT_13008334 == 1) || ((DAT_13008334 == 0 && (DAT_13008338 == 1)))) {
      hFile = *(HANDLE *)(DAT_13009d50 + 0x48);
      if (hFile == (HANDLE)0xffffffff) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar8 = *(char **)(iVar4 * 8 + 0x130085d4);
      uVar6 = 0xffffffff;
      pcVar9 = pcVar8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,pcVar8,~uVar6 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
      if (DVar3 == 0) {
        pcVar8 = "<program name unknown>";
        pCVar10 = local_104;
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pCVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pCVar10 = pCVar10 + 4;
        }
        *(undefined2 *)pCVar10 = *(undefined2 *)pcVar8;
        pCVar10[2] = pcVar8[2];
      }
      pcVar8 = local_104;
      uVar6 = 0xffffffff;
      pcVar9 = local_104;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0x3c < ~uVar6) {
        uVar6 = 0xffffffff;
        pcVar8 = local_104;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar8 = acStack_140 + ~uVar6;
        _strncpy(pcVar8,"...",3);
      }
      pcVar9 = "Runtime Error!\n\nProgram: ";
      pcVar11 = local_1a4;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      *(undefined2 *)pcVar11 = *(undefined2 *)pcVar9;
      uVar6 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar8 = "\n\n";
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar8 = *(char **)(iVar4 * 8 + 0x130085d4);
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar4 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      ___crtMessageBoxA(local_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



/* ==== __mtinitlocks @ 13005950 ==== 
 * signature: int __cdecl __mtinitlocks(void)
 * body: 13005950-13005979
 * note: Library Function - Single Match  __mtinitlocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_130086a4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008694);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008684);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008664);
  return extraout_EAX;
}



/* ==== __mtdeletelocks @ 13005980 ==== 
 * signature: void __cdecl __mtdeletelocks(void)
 * body: 13005980-130059e3
 * note: Library Function - Single Match  __mtdeletelocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtdeletelocks
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_13008660)[iVar1];
    if ((((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar1 != 0x11)) && (iVar1 != 0xd)) &&
       ((iVar1 != 9 && (iVar1 != 1)))) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_13005bc0((LPVOID)(&DAT_13008660)[iVar1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008684);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008694);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_130086a4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008664);
  return;
}



/* ==== __lock @ 130059f0 ==== 
 * signature: void __cdecl __lock(int _File)
 * body: 130059f0-13005a57
 * note: Library Function - Single Match  __lock  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 1998 Release */

void __cdecl __lock(int _File)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_13008660 + _File;
  if (*piVar1 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_13005be0(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    __lock(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_13005bc0(lpCriticalSection);
    }
    FUN_13005a60(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



/* ==== FUN_13005a60 @ 13005a60 ==== 
 * signature: undefined __cdecl FUN_13005a60(int param_1)
 * body: 13005a60-13005a76
 */

void __cdecl FUN_13005a60(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_13008660)[param_1]);
  return;
}



/* ==== FID_conflict:__lock_file @ 13005a80 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 13005a80-13005ab5
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)((int)&DAT_130087cc + 3U) < _File) && (_File < (FILE *)0x13008a31)) {
    __lock(((int)&_File[-0x98043f]._file >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



/* ==== FID_conflict:__lock_file2 @ 13005ac0 ==== 
 * signature: void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
 * body: 13005ac0-13005ae7
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file2  __unlock_file2  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file2
    __unlock_file2
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* ==== FID_conflict:__lock_file @ 13005af0 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 13005af0-13005b25
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)((int)&DAT_130087cc + 3U) < _File) && (_File < (FILE *)0x13008a31)) {
    FUN_13005a60(((int)&_File[-0x98043f]._file >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



/* ==== FID_conflict:__lock_file2 @ 13005b30 ==== 
 * signature: void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
 * body: 13005b30-13005b57
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file2  __unlock_file2  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file2
    __unlock_file2
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    FUN_13005a60(_Index + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* ==== FUN_13005b60 @ 13005b60 ==== 
 * signature: LPVOID __cdecl FUN_13005b60(int param_1, int param_2)
 * body: 13005b60-13005bb1
 */

LPVOID __cdecl FUN_13005b60(int param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  uint dwBytes;
  
  dwBytes = param_2 * param_1;
  if (dwBytes == 0) {
    dwBytes = 1;
  }
  do {
    if (dwBytes < 0xffffffe1) {
      pvVar1 = HeapAlloc(DAT_13009e54,8,dwBytes);
    }
    else {
      pvVar1 = (LPVOID)0x0;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_13008a54 == 0) {
      return (LPVOID)0x0;
    }
    iVar2 = __callnewh(dwBytes);
  } while (iVar2 != 0);
  return (LPVOID)0x0;
}



/* ==== FUN_13005bc0 @ 13005bc0 ==== 
 * signature: undefined __cdecl FUN_13005bc0(LPVOID param_1)
 * body: 13005bc0-13005bd7
 */

void __cdecl FUN_13005bc0(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(DAT_13009e54,0,param_1);
  }
  return;
}



/* ==== FUN_13005be0 @ 13005be0 ==== 
 * signature: undefined __cdecl FUN_13005be0(SIZE_T param_1)
 * body: 13005be0-13005bf3
 */

void __cdecl FUN_13005be0(SIZE_T param_1)

{
  FUN_13005c00(param_1,DAT_13008a54);
  return;
}



/* ==== FUN_13005c00 @ 13005c00 ==== 
 * signature: int __cdecl FUN_13005c00(SIZE_T param_1, int param_2)
 * body: 13005c00-13005c3f
 */

int __cdecl FUN_13005c00(SIZE_T param_1,int param_2)

{
  int iVar1;
  
  if (0xffffffe0 < param_1) {
    return 0;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    iVar1 = FUN_13005c40(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_2 == 0) break;
    iVar1 = __callnewh(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* ==== FUN_13005c40 @ 13005c40 ==== 
 * signature: undefined __cdecl FUN_13005c40(SIZE_T param_1)
 * body: 13005c40-13005c54
 */

void __cdecl FUN_13005c40(SIZE_T param_1)

{
  HeapAlloc(DAT_13009e54,0,param_1);
  return;
}



/* ==== ___crtMessageBoxA @ 13005c60 ==== 
 * signature: int __cdecl ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
 * body: 13005c60-13005cf1
 * note: Library Function - Single Match  ___crtMessageBoxA  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 1998 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_130087c4 != (FARPROC)0x0) {
LAB_13005caf:
    if (DAT_130087c8 != (FARPROC)0x0) {
      iVar1 = (*DAT_130087c8)();
    }
    if ((iVar1 != 0) && (DAT_130087cc != (FARPROC)0x0)) {
      iVar1 = (*DAT_130087cc)(iVar1);
    }
    iVar1 = (*DAT_130087c4)(iVar1,_LpText,_LpCaption,_UType);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_130087c4 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_130087c4 != (FARPROC)0x0) {
      DAT_130087c8 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_130087cc = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_13005caf;
    }
  }
  return 0;
}



/* ==== _strncpy @ 13005d00 ==== 
 * signature: char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
 * body: 13005d00-13005dfd
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
        goto joined_r0x13005d3e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_13005d7b;
        goto LAB_13005de9;
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
joined_r0x13005de5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_13005de9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_13005d7b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x13005de5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x13005de5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x13005de5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x13005d3e:
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
LAB_13005d7b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* ==== FUN_13005e00 @ 13005e00 ==== 
 * signature: undefined __stdcall FUN_13005e00(void)
 * body: 13005e00-13005ec6
 */

void FUN_13005e00(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (DAT_13009d40 == 0) {
    DAT_13009d40 = 0x200;
  }
  else if (DAT_13009d40 < 0x14) {
    DAT_13009d40 = 0x14;
  }
  DAT_13008d38 = FUN_13005b60(DAT_13009d40,4);
  if (DAT_13008d38 == (LPVOID)0x0) {
    DAT_13009d40 = 0x14;
    DAT_13008d38 = FUN_13005b60(0x14,4);
    if (DAT_13008d38 == (LPVOID)0x0) {
      __amsg_exit(0x1a);
    }
  }
  ppuVar3 = &PTR_DAT_130087d0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(undefined ***)((int)DAT_13008d38 + iVar1) = ppuVar3;
    ppuVar3 = ppuVar3 + 8;
    iVar1 = iVar2;
  } while (iVar2 < 0x50);
  uVar5 = 0;
  puVar4 = &DAT_130087e0;
  do {
    iVar1 = *(int *)(*(int *)((int)&DAT_13009d50 + ((int)(uVar5 & 0xffffffe7) >> 3)) +
                    (uVar5 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar5 = uVar5 + 1;
  } while (puVar4 < &DAT_13008840);
  return;
}



/* ==== FUN_13005ec7 @ 13005ec7 ==== 
 * signature: undefined FUN_13005ec7(void)
 * body: 13005ec7-13005ec7
 */

void FUN_13005ec7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ec8 @ 13005ec8 ==== 
 * signature: undefined FUN_13005ec8(void)
 * body: 13005ec8-13005ec8
 */

void FUN_13005ec8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ec9 @ 13005ec9 ==== 
 * signature: undefined FUN_13005ec9(void)
 * body: 13005ec9-13005ec9
 */

void FUN_13005ec9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005eca @ 13005eca ==== 
 * signature: undefined FUN_13005eca(void)
 * body: 13005eca-13005eca
 */

void FUN_13005eca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ecb @ 13005ecb ==== 
 * signature: undefined FUN_13005ecb(void)
 * body: 13005ecb-13005ecb
 */

void FUN_13005ecb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ecc @ 13005ecc ==== 
 * signature: undefined FUN_13005ecc(void)
 * body: 13005ecc-13005ecc
 */

void FUN_13005ecc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ecd @ 13005ecd ==== 
 * signature: undefined FUN_13005ecd(void)
 * body: 13005ecd-13005ecd
 */

void FUN_13005ecd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ece @ 13005ece ==== 
 * signature: undefined FUN_13005ece(void)
 * body: 13005ece-13005ece
 */

void FUN_13005ece(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ecf @ 13005ecf ==== 
 * signature: undefined FUN_13005ecf(void)
 * body: 13005ecf-13005ecf
 */

void FUN_13005ecf(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ed0 @ 13005ed0 ==== 
 * signature: undefined FUN_13005ed0(void)
 * body: 13005ed0-13005ee3
 */

void FUN_13005ed0(void)

{
  FUN_13006080();
  if (DAT_13008374 != '\0') {
    FUN_13005f30();
    return;
  }
  return;
}



/* ==== FUN_13005ee4 @ 13005ee4 ==== 
 * signature: undefined FUN_13005ee4(void)
 * body: 13005ee4-13005ee4
 */

void FUN_13005ee4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ee5 @ 13005ee5 ==== 
 * signature: undefined FUN_13005ee5(void)
 * body: 13005ee5-13005ee5
 */

void FUN_13005ee5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ee6 @ 13005ee6 ==== 
 * signature: undefined FUN_13005ee6(void)
 * body: 13005ee6-13005ee6
 */

void FUN_13005ee6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ee7 @ 13005ee7 ==== 
 * signature: undefined FUN_13005ee7(void)
 * body: 13005ee7-13005ee7
 */

void FUN_13005ee7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ee8 @ 13005ee8 ==== 
 * signature: undefined FUN_13005ee8(void)
 * body: 13005ee8-13005ee8
 */

void FUN_13005ee8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005ee9 @ 13005ee9 ==== 
 * signature: undefined FUN_13005ee9(void)
 * body: 13005ee9-13005ee9
 */

void FUN_13005ee9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005eea @ 13005eea ==== 
 * signature: undefined FUN_13005eea(void)
 * body: 13005eea-13005eea
 */

void FUN_13005eea(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005eeb @ 13005eeb ==== 
 * signature: undefined FUN_13005eeb(void)
 * body: 13005eeb-13005eeb
 */

void FUN_13005eeb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005eec @ 13005eec ==== 
 * signature: undefined FUN_13005eec(void)
 * body: 13005eec-13005eec
 */

void FUN_13005eec(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005eed @ 13005eed ==== 
 * signature: undefined FUN_13005eed(void)
 * body: 13005eed-13005eed
 */

void FUN_13005eed(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005eee @ 13005eee ==== 
 * signature: undefined FUN_13005eee(void)
 * body: 13005eee-13005eee
 */

void FUN_13005eee(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_13005eef @ 13005eef ==== 
 * signature: undefined FUN_13005eef(void)
 * body: 13005eef-13005eef
 */

void FUN_13005eef(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __callnewh @ 13005ef0 ==== 
 * signature: int __cdecl __callnewh(size_t _Size)
 * body: 13005ef0-13005f2d
 * note: Library Function - Single Match  __callnewh  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 1998 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  __lock(9);
  if (DAT_13008d28 != (code *)0x0) {
    iVar1 = (*DAT_13008d28)(_Size);
    if (iVar1 != 0) {
      FUN_13005a60(9);
      return 1;
    }
  }
  FUN_13005a60(9);
  return 0;
}



/* ==== FUN_13005f30 @ 13005f30 ==== 
 * signature: int __stdcall FUN_13005f30(void)
 * body: 13005f30-13005fc7
 */

int FUN_13005f30(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 3;
  __lock(2);
  if (3 < DAT_13009d40) {
    iVar4 = 0xc;
    do {
      _File = *(FILE **)(DAT_13008d38 + iVar4);
      if (_File != (FILE *)0x0) {
        if ((_File->_flag & 0x83) != 0) {
          iVar1 = _fclose(_File);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        if (0x4f < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_13008d38 + iVar4) + 0x20));
          FUN_13005bc0(*(LPVOID *)(DAT_13008d38 + iVar4));
          *(undefined4 *)(DAT_13008d38 + iVar4) = 0;
        }
      }
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_13009d40);
  }
  FUN_13005a60(2);
  return iVar2;
}



/* ==== __fflush_lk @ 13005fd0 ==== 
 * signature: int __cdecl __fflush_lk(FILE * param_1)
 * body: 13005fd0-1300600b
 * note: Library Function - Single Match  __fflush_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __fflush_lk
   
   Library: Visual Studio 1998 Release */

int __cdecl __fflush_lk(FILE *param_1)

{
  int iVar1;
  
  iVar1 = __flush(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1->_flag & 0x4000) != 0) {
    iVar1 = __commit(param_1->_file);
    return (iVar1 == 0) - 1;
  }
  return 0;
}



/* ==== __flush @ 13006010 ==== 
 * signature: int __cdecl __flush(FILE * _File)
 * body: 13006010-13006073
 * note: Library Function - Single Match  __flush  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 1998 Release */

int __cdecl __flush(FILE *_File)

{
  uint uVar1;
  uint _MaxCharCount;
  int iVar2;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _MaxCharCount = (int)_File->_ptr - (int)_File->_base;
    if (0 < (int)_MaxCharCount) {
      uVar1 = __write(_File->_file,_File->_base,_MaxCharCount);
      if (uVar1 == _MaxCharCount) {
        if ((_File->_flag & 0x80U) != 0) {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return iVar2;
}



/* ==== FUN_13006080 @ 13006080 ==== 
 * signature: undefined __stdcall FUN_13006080(void)
 * body: 13006080-13006080
 */

void FUN_13006080(void)

{
  flsall(1);
  return;
}



/* ==== FUN_13006082 @ 13006082 ==== 
 * signature: undefined FUN_13006082(void)
 * body: 13006082-1300608a
 */

void FUN_13006082(void)

{
  int unaff_retaddr;
  
  flsall(unaff_retaddr);
  return;
}



/* ==== FUN_1300608b @ 1300608b ==== 
 * signature: undefined FUN_1300608b(void)
 * body: 1300608b-1300608b
 */

void FUN_1300608b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1300608c @ 1300608c ==== 
 * signature: undefined FUN_1300608c(void)
 * body: 1300608c-1300608c
 */

void FUN_1300608c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1300608d @ 1300608d ==== 
 * signature: undefined FUN_1300608d(void)
 * body: 1300608d-1300608d
 */

void FUN_1300608d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1300608e @ 1300608e ==== 
 * signature: undefined FUN_1300608e(void)
 * body: 1300608e-1300608e
 */

void FUN_1300608e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1300608f @ 1300608f ==== 
 * signature: undefined FUN_1300608f(void)
 * body: 1300608f-1300608f
 */

void FUN_1300608f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== flsall @ 13006090 ==== 
 * signature: int __cdecl flsall(int param_1)
 * body: 13006090-1300615a
 * note: Library Function - Single Match  _flsall  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 1998 Release */

int __cdecl flsall(int param_1)

{
  void *_File;
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int _Index;
  int local_4;
  
  iVar3 = 0;
  _Index = 0;
  local_4 = 0;
  __lock(2);
  if (0 < DAT_13009d40) {
    iVar4 = 0;
    do {
      _File = *(void **)(DAT_13008d38 + iVar4);
      if ((_File != (void *)0x0) && ((*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
        FID_conflict___lock_file2(_Index,_File);
        pFVar1 = *(FILE **)(DAT_13008d38 + iVar4);
        if ((pFVar1->_flag & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = __fflush_lk(pFVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if (((param_1 == 0) && ((pFVar1->_flag & 2U) != 0)) &&
                  (iVar2 = __fflush_lk(pFVar1), iVar2 == -1)) {
            local_4 = -1;
          }
        }
        FID_conflict___lock_file2(_Index,*(void **)(DAT_13008d38 + iVar4));
      }
      iVar4 = iVar4 + 4;
      _Index = _Index + 1;
    } while (_Index < DAT_13009d40);
  }
  FUN_13005a60(2);
  if (param_1 != 1) {
    iVar3 = local_4;
  }
  return iVar3;
}



/* ==== _fclose @ 13006160 ==== 
 * signature: int __cdecl _fclose(FILE * _File)
 * body: 13006160-1300619e
 * note: Library Function - Single Match  _fclose  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 1998 Release */

int __cdecl _fclose(FILE *_File)

{
  int iVar1;
  
  if ((_File->_flag & 0x40) != 0) {
    _File->_flag = 0;
    return -1;
  }
  FID_conflict___lock_file(_File);
  iVar1 = __fclose_lk(_File);
  FID_conflict___lock_file(_File);
  return iVar1;
}



/* ==== __fclose_lk @ 130061a0 ==== 
 * signature: int __cdecl __fclose_lk(FILE * param_1)
 * body: 130061a0-130061fe
 * note: Library Function - Single Match  __fclose_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 1998 Release */

int __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((param_1->_flag & 0x83) != 0) {
    iVar2 = __flush(param_1);
    __freebuf(param_1);
    iVar1 = __close(param_1->_file);
    if (iVar1 < 0) {
      iVar2 = -1;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_13005bc0(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return iVar2;
}



/* ==== __commit @ 13006200 ==== 
 * signature: int __cdecl __commit(int _FileHandle)
 * body: 13006200-130062a1
 * note: Library Function - Single Match  __commit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 1998 Release */

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  ulong *puVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_13009e50 <= (uint)_FileHandle) {
LAB_1300628e:
    piVar3 = FUN_130066f0();
    *piVar3 = 9;
    return -1;
  }
  piVar3 = (int *)((int)&DAT_13009d50 + ((int)(_FileHandle & 0xffffffe7U) >> 3));
  iVar5 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) == 0) goto LAB_1300628e;
  __lock_fhandle(_FileHandle);
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) != 0) {
    DVar4 = 0;
    hFile = (HANDLE)FUN_130067b0(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar4 = GetLastError();
    }
    iVar5 = 0;
    if (DVar4 == 0) goto LAB_1300627f;
    puVar2 = FUN_13006700();
    *puVar2 = DVar4;
  }
  iVar5 = -1;
  piVar3 = FUN_130066f0();
  *piVar3 = 9;
LAB_1300627f:
  __unlock_fhandle(_FileHandle);
  return iVar5;
}



/* ==== __write @ 130062b0 ==== 
 * signature: int __cdecl __write(int _FileHandle, void * _Buf, uint _MaxCharCount)
 * body: 130062b0-13006327
 * note: Library Function - Single Match  __write  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __write
   
   Library: Visual Studio 1998 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_13009e50) &&
     ((*(byte *)(*(int *)((int)&DAT_13009d50 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = FUN_13006330(_FileHandle,_Buf,_MaxCharCount);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  piVar2 = FUN_130066f0();
  *piVar2 = 9;
  puVar3 = FUN_13006700();
  *puVar3 = 0;
  return -1;
}



/* ==== FUN_13006330 @ 13006330 ==== 
 * signature: int __cdecl FUN_13006330(uint param_1, char * param_2, uint param_3)
 * body: 13006330-1300652a
 */

int __cdecl FUN_13006330(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  int *piVar3;
  ulong *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  ulong local_418;
  DWORD local_414;
  int *local_410;
  int local_40c;
  DWORD local_408;
  char local_404 [1028];
  
  iVar5 = 0;
  local_408 = 0;
  if (param_3 == 0) {
    return 0;
  }
  local_410 = (int *)((int)&DAT_13009d50 + ((int)(param_1 & 0xffffffe7) >> 3));
  local_40c = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(*local_410 + 4 + local_40c) & 0x20) != 0) {
    __lseek_lk(param_1,0,2);
  }
  if ((*(byte *)((undefined4 *)(local_40c + *local_410) + 1) & 0x80) == 0) {
    BVar2 = WriteFile(*(HANDLE *)(local_40c + *local_410),param_2,param_3,&local_414,
                      (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
LAB_13006464:
      local_418 = GetLastError();
    }
    else {
      local_418 = 0;
      local_408 = local_414;
    }
  }
  else {
    local_418 = 0;
    pcVar7 = param_2;
    do {
      if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
      pcVar6 = local_404;
      do {
        if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        if (cVar1 == '\n') {
          *pcVar6 = '\r';
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 1;
        }
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while ((int)pcVar6 - (int)local_404 < 0x400);
      BVar2 = WriteFile(*(HANDLE *)(*local_410 + local_40c),local_404,(int)pcVar6 - (int)local_404,
                        &local_414,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) goto LAB_13006464;
      local_408 = local_408 + local_414;
    } while ((int)pcVar6 - (int)local_404 <= (int)local_414);
  }
  if (local_408 != 0) {
    return local_408 - iVar5;
  }
  if (local_418 == 0) {
    if (((*(byte *)(*local_410 + 4 + local_40c) & 0x40) != 0) && (*param_2 == '\x1a')) {
      return 0;
    }
    piVar3 = FUN_130066f0();
    *piVar3 = 0x1c;
    puVar4 = FUN_13006700();
    *puVar4 = 0;
    return -1;
  }
  if (local_418 != 5) {
    __dosmaperr(local_418);
    return -1;
  }
  piVar3 = FUN_130066f0();
  *piVar3 = 9;
  puVar4 = FUN_13006700();
  *puVar4 = 5;
  return -1;
}



/* ==== __close @ 13006530 ==== 
 * signature: int __cdecl __close(int _FileHandle)
 * body: 13006530-1300659d
 * note: Library Function - Single Match  __close  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __close
   
   Library: Visual Studio 1998 Release */

int __cdecl __close(int _FileHandle)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_13009e50) &&
     ((*(byte *)(*(int *)((int)&DAT_13009d50 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = __close_lk(_FileHandle);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  piVar2 = FUN_130066f0();
  *piVar2 = 9;
  puVar3 = FUN_13006700();
  *puVar3 = 0;
  return -1;
}



/* ==== __close_lk @ 130065a0 ==== 
 * signature: undefined4 __cdecl __close_lk(uint param_1)
 * body: 130065a0-13006628
 * note: Library Function - Single Match  __close_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  if ((param_1 == 1) || (param_1 == 2)) {
    iVar1 = FUN_130067b0(2);
    iVar2 = FUN_130067b0(1);
    if (iVar1 != iVar2) goto LAB_130065ca;
  }
  else {
LAB_130065ca:
    hObject = (HANDLE)FUN_130067b0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_130065ea;
    }
  }
  DVar4 = 0;
LAB_130065ea:
  FUN_13006710(param_1);
  if (DVar4 != 0) {
    __dosmaperr(DVar4);
    return 0xffffffff;
  }
  *(undefined1 *)
   (*(int *)((int)&DAT_13009d50 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 + (param_1 & 0x1f) * 0x24)
       = 0;
  return 0;
}



/* ==== __freebuf @ 13006630 ==== 
 * signature: void __cdecl __freebuf(FILE * _File)
 * body: 13006630-13006668
 * note: Library Function - Single Match  __freebuf  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 1998 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_13005bc0(_File->_base);
    _File->_ptr = (char *)0x0;
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



/* ==== __dosmaperr @ 13006670 ==== 
 * signature: void __cdecl __dosmaperr(ulong param_1)
 * body: 13006670-130066e2
 * note: Library Function - Single Match  __dosmaperr  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 1998 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = FUN_13006700();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_13008a58;
  do {
    if (*puVar1 == param_1) {
      piVar2 = FUN_130066f0();
      *piVar2 = *(int *)(iVar3 * 8 + 0x13008a5c);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar1 < &DAT_13008bc0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    piVar2 = FUN_130066f0();
    *piVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    piVar2 = FUN_130066f0();
    *piVar2 = 8;
    return;
  }
  piVar2 = FUN_130066f0();
  *piVar2 = 0x16;
  return;
}



/* ==== FUN_130066f0 @ 130066f0 ==== 
 * signature: int * __stdcall FUN_130066f0(void)
 * body: 130066f0-130066f8
 */

int * FUN_130066f0(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}



/* ==== FUN_13006700 @ 13006700 ==== 
 * signature: ulong * __stdcall FUN_13006700(void)
 * body: 13006700-13006708
 */

ulong * FUN_13006700(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}



/* ==== FUN_13006710 @ 13006710 ==== 
 * signature: undefined4 __cdecl FUN_13006710(uint param_1)
 * body: 13006710-130067a0
 */

undefined4 __cdecl FUN_13006710(uint param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong *puVar4;
  DWORD nStdHandle;
  
  if (param_1 < DAT_13009e50) {
    piVar3 = (int *)((int)&DAT_13009d50 + ((int)(param_1 & 0xffffffe7) >> 3));
    iVar1 = (param_1 & 0x1f) * 0x24;
    piVar2 = (int *)(*piVar3 + iVar1);
    if (((*(byte *)(piVar2 + 1) & 1) != 0) && (*piVar2 != -1)) {
      if (DAT_13008338 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_13006775;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_13006775:
      *(undefined4 *)(*piVar3 + iVar1) = 0xffffffff;
      return 0;
    }
  }
  piVar3 = FUN_130066f0();
  *piVar3 = 9;
  puVar4 = FUN_13006700();
  *puVar4 = 0;
  return 0xffffffff;
}



/* ==== FUN_130067b0 @ 130067b0 ==== 
 * signature: undefined4 __cdecl FUN_130067b0(uint param_1)
 * body: 130067b0-130067f9
 */

undefined4 __cdecl FUN_130067b0(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_13009e50) &&
     (puVar1 = (undefined4 *)
               (*(int *)((int)&DAT_13009d50 + ((int)(param_1 & 0xffffffe7) >> 3)) +
               (param_1 & 0x1f) * 0x24), (*(byte *)(puVar1 + 1) & 1) != 0)) {
    return *puVar1;
  }
  piVar2 = FUN_130066f0();
  *piVar2 = 9;
  puVar3 = FUN_13006700();
  *puVar3 = 0;
  return 0xffffffff;
}



/* ==== __lock_fhandle @ 13006800 ==== 
 * signature: int __cdecl __lock_fhandle(int _Filehandle)
 * body: 13006800-13006860
 * note: Library Function - Single Match  __lock_fhandle  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lock_fhandle
   
   Library: Visual Studio 1998 Release */

int __cdecl __lock_fhandle(int _Filehandle)

{
  int *piVar1;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  
  piVar1 = (int *)((int)&DAT_13009d50 + ((int)(_Filehandle & 0xffffffe7U) >> 3));
  iVar2 = (_Filehandle & 0x1fU) * 0x24;
  iVar3 = *piVar1 + iVar2;
  if (*(int *)(iVar3 + 8) == 0) {
    __lock(0x11);
    if (*(int *)(iVar3 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xc));
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    FUN_13005a60(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(*piVar1 + iVar2 + 0xc));
  return extraout_EAX;
}



/* ==== __unlock_fhandle @ 13006870 ==== 
 * signature: void __cdecl __unlock_fhandle(int _Filehandle)
 * body: 13006870-13006897
 * note: Library Function - Single Match  __unlock_fhandle  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 1998 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             (*(int *)((int)&DAT_13009d50 + ((int)(_Filehandle & 0xffffffe7U) >> 3)) +
              (_Filehandle & 0x1fU) * 0x24 + 0xc));
  return;
}



/* ==== __lseek_lk @ 130068a0 ==== 
 * signature: DWORD __cdecl __lseek_lk(uint param_1, LONG param_2, DWORD param_3)
 * body: 130068a0-13006921
 * note: Library Function - Single Match  __lseek_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lseek_lk
   
   Library: Visual Studio 1998 Release */

DWORD __cdecl __lseek_lk(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)FUN_130067b0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = FUN_130066f0();
    *piVar2 = 9;
    return 0xffffffff;
  }
  DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  uVar4 = 0;
  if (DVar3 == 0xffffffff) {
    uVar4 = GetLastError();
  }
  if (uVar4 != 0) {
    __dosmaperr(uVar4);
    return 0xffffffff;
  }
  pbVar1 = (byte *)(*(int *)((int)&DAT_13009d50 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                   (param_1 & 0x1f) * 0x24);
  *pbVar1 = *pbVar1 & 0xfd;
  return DVar3;
}


