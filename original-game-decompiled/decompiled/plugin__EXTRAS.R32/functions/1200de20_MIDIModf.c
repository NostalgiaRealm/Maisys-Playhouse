
/* ==== MIDIModf @ 1200de20 ==== 
 * signature: void __cdecl MIDIModf(MInitInfo * param_1)
 * body: 1200de20-1200e053
 * note: void __cdecl MIDIModf(struct MInitInfo *)
 */

/* void __cdecl MIDIModf(struct MInitInfo *) */

void __cdecl MIDIModf(MInitInfo *param_1)

{
                    /* 0xde20  1  ?MIDIModf@@YAXPAUMInitInfo@@@Z */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x6e;
    *(undefined2 *)(param_1 + 0xa6) = 3;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_12027170((int)param_1,0x1203757c);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0((int)param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700((int)param_1,1,0,7,FUN_1200c600);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,8,FUN_1200c8b0);
      goto LAB_1200dec3;
    }
LAB_1200dee1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,9,FUN_1200c760);
      goto LAB_1200deff;
    }
LAB_1200df1d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,10,FUN_1200ca20);
      goto LAB_1200df3b;
    }
LAB_1200df59:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,0xe,FUN_1200ca90);
      goto LAB_1200df77;
    }
LAB_1200df95:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,0x12,FUN_1200d750);
      goto LAB_1200dfb3;
    }
LAB_1200dfd1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,0x17,FUN_1200ce20);
      goto LAB_1200dfef;
    }
LAB_1200e00d:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1200e049;
    FUN_12027700((int)param_1,1,0,0x28,FUN_1200dd90);
  }
  else {
LAB_1200dec3:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,0x22,FUN_1200c890);
      goto LAB_1200dee1;
    }
LAB_1200deff:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,0x19,FUN_1200cb60);
      goto LAB_1200df1d;
    }
LAB_1200df3b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,0xd,FUN_1200ca50);
      goto LAB_1200df59;
    }
LAB_1200df77:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,0x25,FUN_1200cc90);
      goto LAB_1200df95;
    }
LAB_1200dfb3:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,0x16,FUN_1200cd10);
      goto LAB_1200dfd1;
    }
LAB_1200dfef:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700((int)param_1,1,0,0x23,FUN_1200dc40);
      goto LAB_1200e00d;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700((int)param_1,1,0,0x2e,FUN_1200e060);
  }
LAB_1200e049:
  FUN_12027730((int)param_1);
  return;
}


