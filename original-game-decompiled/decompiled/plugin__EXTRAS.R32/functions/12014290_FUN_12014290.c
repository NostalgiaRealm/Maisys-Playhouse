
/* ==== FUN_12014290 @ 12014290 ==== 
 * signature: uint __cdecl FUN_12014290(int param_1, uint * param_2, undefined4 param_3, undefined4 param_4)
 * body: 12014290-12014493
 */

uint __cdecl FUN_12014290(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x10000;
  uVar1 = FUN_120271d0(param_2,(uint *)s_chunkdelimiters_12037844);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_120271d0(param_2,(uint *)s_maccreator_1203781c);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_120271d0(param_2,(uint *)s_openmode_12037740);
      if ((char)uVar1 == '\0') {
        uVar1 = FUN_120271d0(param_2,(uint *)s_mactype_120377e0);
        if ((char)uVar1 == '\0') {
          uVar1 = FUN_120271d0(param_2,(uint *)s_length_120377b8);
          if ((char)uVar1 == '\0') {
            uVar1 = FUN_120271d0(param_2,(uint *)s_append_120377a4);
            if ((char)uVar1 == '\0') {
              uVar1 = FUN_120271d0(param_2,(uint *)s_index0_12037768);
              if ((char)uVar1 == '\0') {
                uVar1 = FUN_120271d0(param_2,(uint *)s_close_120372b0);
                if ((char)uVar1 == '\0') {
                  uVar1 = FUN_120271d0(param_2,(uint *)s_write_12037790);
                  if ((char)uVar1 == '\0') {
                    uVar1 = FUN_120271d0(param_2,(uint *)s_index_12037754);
                    if ((char)uVar1 == '\0') {
                      uVar1 = FUN_120271d0(param_2,(uint *)s_filepath_120371c4);
                      if ((char)uVar1 != '\0') {
                        uVar2 = FUN_120155c0(param_1,param_4);
                      }
                    }
                    else {
                      uVar2 = FUN_120153f0(param_1,param_4);
                    }
                  }
                  else {
                    uVar2 = FUN_12015490(param_1,param_4);
                  }
                }
                else {
                  uVar2 = FUN_12015320(param_1);
                }
              }
              else {
                uVar2 = FUN_12015340(param_1,param_4);
              }
            }
            else {
              uVar2 = FUN_120152f0(param_1,param_4);
            }
          }
          else {
            uVar2 = FUN_12015260(param_1,param_4);
          }
        }
        else {
          uVar2 = FUN_12015210(param_1,param_4);
        }
      }
      else {
        uVar2 = FUN_12015760(param_1,param_4);
      }
    }
    else {
      uVar2 = FUN_120151c0(param_1,param_4);
    }
  }
  else {
    uVar2 = FUN_12015010(param_1,param_4);
  }
  *(undefined4 *)(param_1 + 100) = 0;
  if ((uVar2 & 0xffff0000) != 0xa0000) {
    return uVar2;
  }
  *(uint *)(param_1 + 100) = uVar2 - 0x9ffff;
  return 0;
}


