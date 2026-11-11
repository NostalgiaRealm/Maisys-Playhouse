
/* ==== FUN_004351f0 @ 004351f0 ==== 
 * signature: int __stdcall FUN_004351f0(void)
 * body: 004351f0-00435239
 */

int FUN_004351f0(void)

{
  int local_10;
  uint local_c;
  
  if (DAT_004dae40 == 0) {
    __ftime(&DAT_004dae40);
  }
  __ftime(&local_10);
  return (local_c & 0xffff) + (local_10 - DAT_004dae40) * 1000;
}


