
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


