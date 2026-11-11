
/* ==== __break @ 00479bc7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bc7-00479bc7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


