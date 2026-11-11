
/* ==== __break @ 004799fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004799fd-004799fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


