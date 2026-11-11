
/* ==== f28 @ 1000f896 ==== 
 * signature: undefined4 __stdcall f28(void)
 * body: 1000f896-1000f8ba
 */

undefined4 f28(void)

{
                    /* 0xf896  32  f28 */
  if (DAT_10023e9c != '\x01') {
    _lclose(*(HFILE *)(DAT_1002392c + 0x18));
    *(undefined4 *)(DAT_1002392c + 0x18) = 0xffffffff;
  }
  return 0;
}


