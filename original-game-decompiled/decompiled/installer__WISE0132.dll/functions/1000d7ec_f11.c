
/* ==== f11 @ 1000d7ec ==== 
 * signature: undefined4 __stdcall f11(int param_1)
 * body: 1000d7ec-1000d82f
 */

undefined4 f11(int param_1)

{
  CHAR local_124 [256];
  char local_24 [32];
  
                    /* 0xd7ec  18  f11 */
  FUN_10010950(local_24,*(char **)(param_1 + 0x20));
  GetSystemDirectoryA(local_124,0x100);
  FUN_100105d2(local_24,local_124);
  return 0;
}


