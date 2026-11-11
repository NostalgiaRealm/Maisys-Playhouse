
/* ==== __break @ 00479b88 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479b88-00479b88
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


