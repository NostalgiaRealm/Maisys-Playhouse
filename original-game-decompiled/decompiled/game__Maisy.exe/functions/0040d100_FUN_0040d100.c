
/* ==== FUN_0040d100 @ 0040d100 ==== 
 * signature: undefined __cdecl FUN_0040d100(undefined4 param_1)
 * body: 0040d100-0040d207
 */

void __cdecl FUN_0040d100(undefined4 param_1)

{
  (**(code **)(*DAT_004da38c + 0xfc))(param_1,s_filepath_004d9958,0x66,5);
  (**(code **)(*DAT_004da38c + 0xfc))(param_1,&DAT_004d97ec,0,5);
  (**(code **)(*DAT_004da38c + 0xfc))(param_1,&DAT_004d9944,0x66,4);
  (**(code **)(*DAT_004da38c + 0xfc))(param_1,s_streamindex_004d9930,1,5);
  (**(code **)(*DAT_004da38c + 0xfc))(param_1,s_streamposition_004d991c,1,5);
  (**(code **)(*DAT_004da38c + 0xfc))(param_1,s_purgesize_004d9908,1,5);
  (**(code **)(*DAT_004da38c + 0xfc))(param_1,&DAT_004d98f4,1,5);
  (**(code **)(*DAT_004da38c + 0xfc))(param_1,s_preload_004d98e0,0x14,2);
  (**(code **)(*DAT_004da38c + 0xfc))(param_1,s_flush_004d98cc,0,2);
  (**(code **)(*DAT_004da38c + 0xfc))(param_1,s_unload_004d98b8,0,3);
  FUN_00413000(param_1);
  return;
}


