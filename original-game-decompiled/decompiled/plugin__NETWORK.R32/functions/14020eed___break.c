
/* ==== __break @ 14020eed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020eed-14020eed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


