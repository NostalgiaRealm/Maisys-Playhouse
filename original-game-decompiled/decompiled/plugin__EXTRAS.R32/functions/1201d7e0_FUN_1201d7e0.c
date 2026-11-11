
/* ==== FUN_1201d7e0 @ 1201d7e0 ==== 
 * signature: int __cdecl FUN_1201d7e0(int param_1, int param_2)
 * body: 1201d7e0-1201db9b
 */

int __cdecl FUN_1201d7e0(int param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iStack_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined4 uStack_5e;
  undefined1 auStack_58 [6];
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined4 uStack_4e;
  undefined4 uStack_4a;
  undefined4 uStack_46;
  short local_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined4 uStack_3a;
  undefined4 uStack_36;
  int iStack_32;
  uint auStack_14 [5];
  
  iVar3 = *(int *)(param_2 + 0xc);
  if ((*(int *)(param_1 + 2) == iVar3) && (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    pcVar2 = (code *)FUN_12027370(param_1,0,0x20,(int *)&local_64);
    iVar3 = (*pcVar2)(CONCAT22(uStack_62,local_64),&local_68);
    DAT_12039a9c = iVar3;
    if (iVar3 == 0) {
      iVar3 = FUN_1201dba0(param_1,param_2);
      if (iVar3 != 0) {
        return 0x10000;
      }
      local_40 = 0x6a;
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,(int *)&local_64);
      DAT_12039a9c = (*pcVar2)(CONCAT22(uStack_62,local_64),local_68,s_classname_12037a28,0,
                               &local_40);
      if (((local_40 == 0x66) && (DAT_12039a9c == 0)) && (iStack_32 != 0)) {
        bVar1 = *(byte *)(param_1 + 0xba);
        *(undefined4 *)(param_1 + 0xae) = 0;
        *(undefined4 *)(param_1 + 0xb6) = 0xffffffff;
        *(byte *)(param_1 + 0xba) = bVar1 & 0xfd;
        *(byte *)(param_1 + 0xba) = bVar1 & 0xfc;
        *(byte *)(param_1 + 0xba) = bVar1 & 0xec;
        FUN_12027170((int)auStack_14,iStack_32);
        if (iStack_32 != 0) {
          pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_6c);
          DAT_12039a9c = (*pcVar2)(iStack_6c,iStack_32);
          iStack_32 = 0;
          uStack_3a = 0;
          uStack_36 = 0;
        }
        uVar4 = FUN_120271d0(auStack_14,(uint *)&DAT_12037a8c);
        if ((char)uVar4 == '\0') {
          FUN_120271d0(auStack_14,(uint *)s_mtoon_12037a78);
        }
        else {
          local_40 = 1;
          uStack_3e = 0;
          uStack_3c = 0;
          pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_6c);
          DAT_12039a9c = (*pcVar2)(iStack_6c,local_68,s_movie_12037290,0,&local_40);
          if ((DAT_12039a9c == 0) && (CONCAT22(uStack_3c,uStack_3e) != 0)) {
            *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) | 2;
          }
          else {
            *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) & 0xfd;
          }
        }
        local_64 = 0xf;
        uStack_62 = 0;
        uStack_60 = 0;
        uStack_5e = 0;
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_6c);
        DAT_12039a9c = (*pcVar2)(iStack_6c,local_68,&DAT_12037a64,0,&local_64);
        iVar3 = 2;
        if ((double)CONCAT44(uStack_5e,CONCAT22(uStack_60,uStack_62)) < 0.0) {
          iVar3 = 3;
        }
        *(int *)(param_1 + 0xae) = iVar3;
        if ((iVar3 != 0) && ((*(byte *)(param_1 + 0xba) & 8) == 0)) {
          auStack_58._0_2_ = 5;
          uStack_52 = 1;
          uStack_50 = 1;
          uStack_4a = 0;
          uStack_4e = 0;
          uStack_46 = 0;
          auStack_58._2_4_ = param_1;
          pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,7,&iStack_6c);
          DAT_12039a9c = (*pcVar2)(iStack_6c,local_68,auStack_58,0);
          *(undefined4 *)(param_1 + 0xb2) = uStack_4e;
          return 0;
        }
      }
      else {
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,(int *)&local_64);
        DAT_12039a9c = (*pcVar2)(CONCAT22(uStack_62,local_64),param_1,&local_40);
      }
      return 0;
    }
  }
  else {
    if (((*(int *)(param_1 + 0xc) != iVar3) ||
        (*(int *)(param_2 + 0x10) != *(int *)(param_1 + 0x10))) && (iVar3 != 0x7d2)) {
      return 0x10000;
    }
    pcVar2 = (code *)FUN_12027370(param_1,0,0x20,(int *)&local_40);
    DAT_12039a9c = (*pcVar2)(CONCAT22(uStack_3e,local_40),&local_68);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x24,(int *)auStack_58);
    DAT_12039a9c = (*pcVar2)(CONCAT22(auStack_58._2_2_,auStack_58._0_2_),local_68,
                             *(undefined4 *)(param_1 + 0xb2));
    *(undefined4 *)(param_1 + 0xb2) = 0;
    *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) & 0xf7;
    iVar3 = 0;
  }
  return iVar3;
}


